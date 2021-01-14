/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) unsigned long long day; 
@property (assign,nonatomic) unsigned long long month; 
@property (assign,nonatomic) unsigned long long year; 
@property (assign,nonatomic) BOOL sleepMode; 
@property (assign,nonatomic) unsigned long long sleepModeOptions; 
@property (assign,nonatomic) BOOL sleepTracking; 
@property (assign,nonatomic) BOOL timeInBedTracking; 
@property (assign,nonatomic) BOOL sleepSchedule; 
@property (assign,nonatomic) unsigned long long repeatSchedule; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) unsigned long long playOptions; 
@property (assign,nonatomic) BOOL allowsSnooze; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) MTSound * sound; 
-(void)applyChangesFromChangeSet:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

