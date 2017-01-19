//
//  Warrior.h
//  IOS1
//
//  Created by katniss on 2017. 1. 17..
//  Copyright © 2017년 katniss. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Wizard;

@interface Warrior : NSObject

    @property NSInteger health;
    @property NSInteger mana;
    @property NSInteger physicalPower;
    @property NSInteger magicalPower;
    @property NSInteger weapon;

    @property NSString *name;
    @property BOOL isDead;




@end
