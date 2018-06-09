//
//  RC_DBHelper.h
//  RC_FmdbDemo
//
//  Created by lutianlei on 2018/5/31.
//  Copyright © 2018年 Ray. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <FMDB/FMDB.h>



@interface RC_DBHelper : NSObject

@property (class, nonatomic, readonly) RC_DBHelper *dbHelper;

@end

/**
 // 事件信息采集统计数据库存储功能分类
 // 此类功能是配合项目业务逻辑所写
 */
@interface RC_DBHelper (Signal)


/**
 初始化配置方法
 */
- (void)rc_initConfig_signal;


/**
 创建signal 表
 */
- (void)rc_createTable_signal;

/**
 插入数据（db：signal）
 @采用queue 的方式保证访问资源安全 （sync 同步 ; DISPATCH_CURRENT_QUEUE_LABEL 串行）
 @param signal_param 存储数据
 */
- (void)rc_queue_insert_signal:(NSDictionary *)signal_param;

/**
 清除signal db 数据
 方式：queue 线程安全
 */
- (void)rc_queue_clear_signal;

/**
 查询数据
 方式：queue 线程安全
 */
- (void)rc_queue_query_signal:(void(^)(NSArray *rs))callback;

@end
