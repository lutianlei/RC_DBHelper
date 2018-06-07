//
//  RequestHelper.m
//  CreditGroup
//
//  Created by lutianlei on 2018/5/4.
//  Copyright © 2018年 haodai. All rights reserved.
//

#import "RequestHelper.h"

@interface RequestHelper()

{
    id _param;
    
}

@end

@implementation RequestHelper

- (instancetype)init{
    self = [super init];
    if (self) {
        [self instance];
    }
    return self;
}

- (void)instance{
    __weak RequestHelper *weakS = self;
    self.block = ^(id param) {
        __strong RequestHelper *strongS = weakS;
        strongS.successBlock();
    };
}


- (void)upload{
    
    
}

@end
