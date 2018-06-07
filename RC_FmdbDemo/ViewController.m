//
//  ViewController.m
//  RC_FmdbDemo
//
//  Created by lutianlei on 2018/5/31.
//  Copyright © 2018年 Ray. All rights reserved.
//

#import "ViewController.h"
#import "SignalCollector.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    [UIApplication sharedApplication];
    
}

- (IBAction)insert:(id)sender{
//    [[RC_DBHelper dbHelper] rc_insert];
    [SignalCollector collect_eventId:@"insert_code" withValue:@"insert_event"];
    
}

- (IBAction)delete:(id)sender{
    
    [SignalCollector commitCache];

}

- (IBAction)query:(id)sender{

}

- (IBAction)commit:(id)sender{
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
