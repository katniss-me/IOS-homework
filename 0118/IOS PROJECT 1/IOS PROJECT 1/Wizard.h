//
//  Wizard.h
//  IOS1
//
//  Created by katniss on 2017. 1. 17..
//  Copyright © 2017년 katniss. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Warrior.h"
@class Wizard;


@interface Wizard : NSObject

        @property NSInteger health;
        @property NSInteger mana;
        @property NSInteger physicalPower;
        @property NSInteger magicalPower;
        @property NSInteger weapon;
        @property NSString *name;


- (id)magicalAttackTo:(Warrior* )goodguy;


//(lenden)magicalAttackTo:(warrior* )goodguy;





@end
