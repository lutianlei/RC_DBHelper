//
//  RequestHelper.h
//  CreditGroup
//
//  Created by lutianlei on 2018/5/4.
//  Copyright © 2018年 haodai. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^ParamBlock)(id param);
typedef void(^SuccessBlock)(void);
typedef void(^FailureBlock)(void);

@interface RequestHelper : NSObject

@property (copy, nonatomic) ParamBlock block;
@property (copy, nonatomic) SuccessBlock successBlock;
@property (copy, nonatomic) FailureBlock failureBlock;


@end
