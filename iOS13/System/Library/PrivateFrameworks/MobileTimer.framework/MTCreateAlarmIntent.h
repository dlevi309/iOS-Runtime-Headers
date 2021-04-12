/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

