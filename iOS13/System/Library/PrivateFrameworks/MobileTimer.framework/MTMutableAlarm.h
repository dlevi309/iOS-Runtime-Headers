/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <MobileTimer/MTAlarm.h>

@class NSNumber, NSString, MTSound;

@interface MTMutableAlarm : MTAlarm

@property (assign,nonatomic) unsigned long long hour; 
@property (assign,nonatomic) unsigned long long minute; 
@property (assign,nonatomic) unsigned long long bedtimeHour; 
@property (assign,nonatomic) unsigned long long bedtimeMinute; 
@property (assign,nonatomic) unsigned long long bedtimeReminderMinutes; 
@property (nonatomic,copy) NSNumber * bedtimeReminder; 
@property (assign,nonatomic) BOOL bedtimeDoNotDisturb; 
@property (assign,nonatomic) unsigned long long bedtimeDoNotDisturbOptions; 
@property (assign,nonatomic) BOOL timeInBedTracking; 
@property (assign,nonatomic) BOOL sleepSchedule; 
@property (assign,nonatomic) unsigned long long repeatSchedule; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) unsigned long long playOptions; 
@property (assign,nonatomic) BOOL allowsSnooze; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) MTSound * sound; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)applyChangesFromChangeSet:(id)arg1 ;
@end

