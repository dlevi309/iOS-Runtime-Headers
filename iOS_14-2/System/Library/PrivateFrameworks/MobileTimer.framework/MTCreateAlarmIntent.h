/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <Intents/INIntent.h>

@class INObject, NSString, NSDateComponents, NSArray;

@interface MTCreateAlarmIntent : INIntent

@property (nonatomic,copy) INObject * time; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSDateComponents * dateComponents; 
@property (assign,nonatomic) long long requiresAppLaunch; 
@property (nonatomic,copy) NSArray * repeatSchedule; 
@end

