/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/


#import <SleepDaemon/SleepDaemon-Structs.h>
@class NSArray;

@interface HDSPWakeUpResultsNotificationBuilder : NSObject {

	NSArray* _daySummaries;
	SCD_Struct_HD2 _morningIndexRange;

}
-(id)buildNotification;
-(id)initWithDaySummaries:(id)arg1 morningIndexRange:(SCD_Struct_HD2)arg2 ;
-(BOOL)_didMeetSleepDurationGoalLastNight;
-(id)_sleepDurationGoalAchievedTwoWeekNotification;
-(id)_sleepDurationGoalAchievedShortWeekNotification;
-(id)_sleepDurationGoalAchievedLastNightNotification;
-(id)_randomVariantForMaximum:(unsigned long long)arg1 ;
@end

