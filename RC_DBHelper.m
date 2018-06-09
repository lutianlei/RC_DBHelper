//
//  RC_DBHelper.m
//  RC_FmdbDemo
//
//  Created by lutianlei on 2018/5/31.
//  Copyright © 2018年 Ray. All rights reserved.
//

#import "RC_DBHelper.h"

@interface RC_DBHelper ()
@end

@implementation RC_DBHelper

+ (instancetype)shareDBHelper{
    
    static RC_DBHelper *dbHelper = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        dbHelper = [[RC_DBHelper alloc] init];
        [dbHelper rc_initConfig_signal];
        [dbHelper rc_createTable_signal];
    });
    
    return dbHelper;
}

+ (RC_DBHelper *)dbHelper{
    return [RC_DBHelper shareDBHelper];
}

@end



static NSString *signal_create_sql = @"create table signal (event_code text, click_time text, value text)";
static NSString *signal_insert_sql = @"insert into signal (event_code , click_time, value) values (?, ?, ?)";
static NSString *signal_clear_sql = @"delete from signal";
static NSString *signal_query_sql = @"select * from signal";

static NSArray *signal_orderly_keys; // 数据库字段


static NSString *signal_dbPath(){
    NSString *docsdir = [NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES) lastObject];
    NSString *dbPath = [docsdir stringByAppendingPathComponent:@"xdq_db.sqlite"];
    return dbPath;
};

@implementation RC_DBHelper (Signal)

- (void)rc_initConfig_signal{
    signal_orderly_keys = @[@"event_code",@"click_time",@"value"];
}

- (void)rc_createTable_signal{
    
    NSFileManager *fileMamager = [NSFileManager defaultManager];
    if (![fileMamager fileExistsAtPath:signal_dbPath()]) {
        FMDatabase *db = [FMDatabase databaseWithPath:signal_dbPath()];
        if (![db open]) {
            NSLog(@"Could not open db.");
            return;
        }
        [db executeUpdate:signal_create_sql];
    }
    

}

- (void)rc_queue_insert_signal:(NSDictionary *)signal_param{
    FMDatabaseQueue *dbq = [FMDatabaseQueue databaseQueueWithPath:signal_dbPath()];
    
    [dbq inDatabase:^(FMDatabase * _Nonnull db) {
        NSArray *orderly_keys = @[@"event_code",@"click_time",@"value"];
        NSMutableArray *orderly_values = [NSMutableArray array];
        
        if (signal_param && [signal_param isKindOfClass:[NSDictionary class]] && signal_param.count > 0) {
            [orderly_keys enumerateObjectsUsingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
                [orderly_values addObject:signal_param[obj]];
            }];
        }
        
        [db executeUpdate:signal_insert_sql withArgumentsInArray:[orderly_values mutableCopy]];
    }];
}


- (void)rc_queue_clear_signal{
    
    FMDatabaseQueue *dbq = [FMDatabaseQueue databaseQueueWithPath:signal_dbPath()];
    [dbq inDatabase:^(FMDatabase * _Nonnull db) {
        
        BOOL res = [db executeUpdate:signal_clear_sql];
        if (res == NO) {
            NSLog(@"delete failed");
        }else{
            NSLog(@"delete successed");
        }
    }];
    
}

- (void)rc_queue_query_signal:(void (^)(NSArray *))callback{
    
    FMDatabaseQueue *dbq = [FMDatabaseQueue databaseQueueWithPath:signal_dbPath()];
    NSMutableArray *data_set = [NSMutableArray array];
    [dbq inDatabase:^(FMDatabase * _Nonnull db) {
        FMResultSet *rs = [db executeQuery:signal_query_sql];
        
        while ([rs next]) {
            NSMutableDictionary *dic_mate = [NSMutableDictionary dictionary];
            [signal_orderly_keys enumerateObjectsUsingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
                [dic_mate setObject:[rs stringForColumn:obj] forKey:obj];
            }];
            [data_set addObject:dic_mate];
        }
    }];
    
    NSArray *last_rs = [data_set mutableCopy];
    callback(last_rs);

}

@end
