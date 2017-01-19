//
//  main.m
//  IOS PROJECT 1
//
//  Created by katniss on 2017. 1. 18..
//  Copyright © 2017년 katniss. All rights reserved.
//



#import <Foundation/Foundation.h>
#import "Warrior.h"
#import "Wizard.h"
#import "Mac.h"





int main(int argc, const char * argv[]) {
    

        Mac *katniss = [[Mac alloc] init];
        katniss.gender = @"woman";
        katniss.age = @"32";
        katniss.phoneNumber = @"010-9511-3682";
        katniss.name = @"katniss";

        [katniss run];
        [katniss talk];


        Warrior *michel = [[Warrior alloc] init];
        michel.health = @"100";
        michel.mana = @"50";
        michel.physicalPower = @"80";
        michel.name = @"michel";
    


        Wizard *lenden = [[Wizard alloc] init];
        lenden.magicalPower = @"90";
        lenden.health = @"40";
        lenden.name = @"lenden";
    
    
    
    
            NSLog(@"michel 물리 공격력은 %@입니다.",michel.physicalPower);
            NSLog(@"lenden 마법 공격력은 %@입니다.",lenden.magicalPower);
            NSLog(@"katniss 나이는 %@입니다.",katniss.age);
            NSLog(@"michel 마나는 %@입니다.",michel.mana);
            NSLog(@"lenden 건강은 %@입니다.",lenden.health);
    
    
    //pvp
    //워리어가 위자드 공격
    [michel physicalPower:lenden];
    
    //위자드가 워리어 공격
    [wizard magicalAttackTo:warrior];
    
    
    return 0;
}

