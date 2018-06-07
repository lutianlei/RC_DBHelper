//
//  SignalCollector.m
//  SignalCollector
//
//  Created by lutianlei on 2018/5/3.
//  Copyright © 2018年 Ray. All rights reserved.
//

#import "SignalCollector.h"
#import <ifaddrs.h>
#import <arpa/inet.h>
#import <UIKit/UIKit.h>
#import "RequestHelper.h"
#import "RC_DBHelper.h"

#define UnUploadData @"UnUploadData" //未上传缓存
#define ToUploadData @"ToUploadData" //待上传缓存
#define Flag @"/&/"


static NSString *const kAppUploadCollectedInfomation = @"kAppUploadCollectedInfomation";

static SignalCollector *collector;
static RequestHelper *request;


static NSString *dataToJsonString(id object){
    
    NSString *jsonString = nil;
    NSError *error;
    
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:object
                                                       options:NSJSONWritingPrettyPrinted
                                                         error:&error];
    if (!jsonData) {
        NSLog(@"Got an error: %@", error);
    } else {
        jsonString = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
    }
    
    return jsonString;
    
}

// 获取设备IP地址
NSString *getIPAddress(){
    NSString *address = @"error";
    struct ifaddrs *interfaces = NULL;
    struct ifaddrs *temp_addr = NULL;
    int success = 0;
    // 检索当前接口,在成功时,返回0
    success = getifaddrs(&interfaces);
    if (success == 0) {
        // 循环链表的接口
        temp_addr = interfaces;
        while(temp_addr != NULL) {
            if(temp_addr->ifa_addr->sa_family == AF_INET) {
                // 检查接口是否en0 wifi连接在iPhone上
                if([[NSString stringWithUTF8String:temp_addr->ifa_name] isEqualToString:@"en0"]) {
                    // 得到NSString从C字符串
                    address = [NSString stringWithUTF8String:inet_ntoa(((struct sockaddr_in *)temp_addr->ifa_addr)->sin_addr)];
                }
            }
            temp_addr = temp_addr->ifa_next;
        }
    }
    // 释放内存
    freeifaddrs(interfaces);
    return address;
}


//获取当前时间戳有两种方法(以秒为单位)
NSString *getNowTimeTimestamp(){
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init] ;
    
    [formatter setDateStyle:NSDateFormatterMediumStyle];
    
    [formatter setTimeStyle:NSDateFormatterShortStyle];
    
    [formatter setDateFormat:@"YYYY-MM-dd HH:mm:ss"]; // ----------设置你想要的格式,hh与HH的区别:分别表示12小时制,24小时制
    
    //设置时区,这个对于时间的处理有时很重要
    
    NSTimeZone* timeZone = [NSTimeZone timeZoneWithName:@"Asia/Shanghai"];
    
    [formatter setTimeZone:timeZone];
    
    NSDate *datenow = [NSDate date];
    NSString *timeSp = [NSString stringWithFormat:@"%ld", (long)[datenow timeIntervalSince1970]];
    
    return timeSp;
}

/**
 获取未上传数据
 */
static NSMutableArray *getUnUploadCacheData(){
    return [[NSUserDefaults standardUserDefaults] objectForKey:UnUploadData];
}
/**
 获取等待上传数据
 */
static NSMutableArray *getToUploadCacheData(){
    return [[NSUserDefaults standardUserDefaults] objectForKey:ToUploadData];
}

// 清除上传缓存
static void cleanToUploadCacheData(){
    [[NSUserDefaults standardUserDefaults] removeObjectForKey:ToUploadData];
    
}
// 清除未上传缓存
static void cleanUnUploadCacheData(){
    [[NSUserDefaults standardUserDefaults] removeObjectForKey:UnUploadData];
}

// 存储
static void storageDataToCacheWithKey(NSMutableArray *data, NSString *key){
    if (data.count == 0) return;
    [[NSUserDefaults standardUserDefaults] setObject:data forKey:key];
    [[NSUserDefaults standardUserDefaults] synchronize];
}
// copy 统计缓存数据到待上传缓存
static void copyCacheDataToUploadCache(){
    NSMutableArray *cacheData = getUnUploadCacheData();
    NSMutableArray *toUploadCache = [NSMutableArray arrayWithArray:[cacheData mutableCopy]];
    storageDataToCacheWithKey(toUploadCache, ToUploadData);
}

@interface SignalCollector ()
{
    NSString *_sessionId;
    
}
@property (copy, nonatomic) NSString *sessionId;

@end


@implementation SignalCollector

/**
 event_code   string   事件标识码
 uid          string   用户id
 imei         string   设备code
 tfd_code     string   code备注
 click_time   string   点击时间
 IP           string   所属IP
 
 */

- (instancetype)init{
    self = [super init];
    if (self) {

    }
    return self;
}

+ (instancetype)sharedCollector{
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        collector = [[SignalCollector alloc] init];
        collector.sessionId = @"com.haodai.xdq.sessionid.ios";
        [[NSNotificationCenter defaultCenter] addObserver:collector selector:@selector(commitCache) name:kAppUploadCollectedInfomation object:nil];
    });
    
    return collector;
}

+ (void)registerCollector:(NSString *)sessionId{
    if (sessionId && [sessionId isEqualToString:@""]) {
        
        [SignalCollector sharedCollector].sessionId = sessionId;
    }
}


+ (NSString *)valuesToValue:(NSArray *)values{
   __block NSString *value = @"";
    if (values && values.count != 0) {
        [values enumerateObjectsUsingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
            value = [NSString stringWithFormat:@"%@%@",value,obj];
            if (values.count > 1 && values.count -1 != idx) {
                value = [NSString stringWithFormat:@"%@%@",value,Flag];
            }
        }];
    }
    
    return [value copy];
}


+ (void)collect_eventId:(NSString *)eventId{
    [SignalCollector collect_eventId:eventId withValue:nil];
}


+ (void)collect_eventId:(NSString *)eventId withValue:(id)value{
    
    // 获取时间
    NSString *timeStamp = getNowTimeTimestamp();
    NSMutableDictionary *data = [NSMutableDictionary new];
    if (value) {
        [data setObject:value forKey:@"value"];
    }
    if (eventId == nil || eventId.length == 0) {
        return;
    }
    [data setObject:timeStamp forKey:@"click_time"];
    [data setObject:eventId forKey:@"event_code"];
    
    //取
    NSMutableArray *dataArr = getUnUploadCacheData();
    
    NSMutableArray *muDataArr = [NSMutableArray new];
    if (dataArr.count != 0) {
        // 有缓存
        [muDataArr addObjectsFromArray:[dataArr mutableCopy]];
    }
    [muDataArr addObject:data];
    
    [[RC_DBHelper dbHelper] rc_queue_insert_signal:data];

    
    // 存
    storageDataToCacheWithKey(muDataArr, UnUploadData);
    
}





+ (void)commitCache{
    
    NSDictionary *uploadData = [SignalCollector integrationParameter];
    if (!uploadData) {
        return;
    }
    NSLog(@"采集最终信息%@",uploadData);
    
    // 提交网络
    request = [[RequestHelper alloc] init];
    request.successBlock = ^{
        // 清除上传缓存
        cleanToUploadCacheData();
        [[RC_DBHelper dbHelper] rc_queue_clear_signal];
    };
    request.failureBlock = ^{
        // 上传缓存重新加入缓存
        NSMutableArray *uploadFailedData = getToUploadCacheData();
        NSMutableArray *unUploadCacheData = getUnUploadCacheData();
        NSMutableArray *cacheData = [NSMutableArray new];
        if (uploadFailedData.count != 0) {
            [cacheData addObjectsFromArray:[uploadFailedData mutableCopy]];
        }
        if (unUploadCacheData.count != 0) {
            [cacheData addObjectsFromArray:[unUploadCacheData mutableCopy]];
        }
        
        storageDataToCacheWithKey(cacheData, UnUploadData);
        cleanToUploadCacheData();
        
    };
    request.block(uploadData);
    request.block = nil;

}



// 整合参数
+ (NSDictionary *)integrationParameter{
    
    // 取缓存
    copyCacheDataToUploadCache();
    cleanUnUploadCacheData();
    
//    NSMutableArray *dataArr = getToUploadCacheData();
    __block NSArray *dataArr;
    [[RC_DBHelper dbHelper] rc_queue_query_signal:^(NSArray *rs) {
        dataArr = rs;
    }];
    if (dataArr.count == 0) {
        return nil;
    }

    // 用户id 、 设备id、 IP地址

    NSString *ip = getIPAddress() != nil ? getIPAddress() : @"";
    
    NSMutableArray *new_dataArr = [NSMutableArray new];
    
    [dataArr enumerateObjectsUsingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        if ([obj isKindOfClass:[NSDictionary class]] || [obj isKindOfClass:[NSMutableDictionary class]]) {
            
            NSMutableDictionary *data = [NSMutableDictionary dictionaryWithDictionary:obj];
            [data setObject:@"100100" forKey:@"uid"];
            [data setObject:@"iphone_device_id" forKey:@"imei"];
            [data setObject:ip forKey:@"ip"];
            [data setObject:[SignalCollector sharedCollector].sessionId forKey:@"tfd_code"];
            [new_dataArr addObject:[data mutableCopy]];
        }
    }];
    
    NSString *dataJson = dataToJsonString(new_dataArr);
    
    return @{@"data" : dataJson};
    
}






@end


