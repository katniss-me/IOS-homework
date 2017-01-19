//
//  Mac.h
//  IOS1
//
//  Created by katniss on 2017. 1. 17..
//  Copyright © 2017년 katniss. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Warrior;



@interface Mac : NSObject

@property NSUInteger age;
@property NSInteger skinColor;
@property NSInteger nation;
@property NSInteger phoneNumber;
@property NSInteger birthDay;
@property NSInteger gender;
@property NSUInteger mobileNumber;
@property NSString *name;


- (id)run;
- (id)walk;
- (id)talk;

- (id)attackTo:(Warrior* )human;



@end
