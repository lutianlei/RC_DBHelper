//
//  SignalCollector.h
//  SignalCollector
//
//  Created by lutianlei on 2018/5/3.
//  Copyright © 2018年 Ray. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 event_code   string   时间标识码
 uid          string   用户id
 imei         string   设备code
 tfd_code     string   code备注
 click_time   string   点击时间
 IP           string   所属IP
 
 */

@interface SignalCollector : NSObject


/**
 注册

 @param sessionId 生成设备指纹的唯一id
 */
+ (void)registerCollector:(NSString *)sessionId;


/**
 统计事件
*/
+ (void)collect_eventId:(NSString *)eventId;


/**
 统计事件
 
 @param value 数据
 */
+ (void)collect_eventId:(NSString *)eventId withValue:(id)value;


// unit test
+ (void)commitCache;


/**
 返回value

 @param values 信息组
 @return value
 */
+ (NSString *)valuesToValue:(NSArray *)values;




@end

