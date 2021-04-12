/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
*/


@class NSDateInterval, HKCalendarCache, NSMutableArray;

@interface HDSHSleepDaySummaryBuilder : NSObject {

	NSDateInterval* _dateInterval;
	unsigned long long _weekday;
	HKCalendarCache* _calendarCache;
	NSMutableArray* _sleepAnalysisSamples;
	NSMutableArray* _sleepScheduleSamples;
	NSMutableArray* _sleepDurationGoalSamples;
	long long _morningIndex;

}

@property (nonatomic,readonly) long long morningIndex;              //@synthesize morningIndex=_morningIndex - In the implementation block
-(id)_sleepPeriods;
-(id)_sleepDurationGoal;
-(id)_sleepSchedules;
-(long long)morningIndex;
-(id)createDaySummary;
-(id)initWithMorningIndex:(long long)arg1 weekday:(unsigned long long)arg2 calendarCache:(id)arg3 ;
-(void)addOrderedSample:(id)arg1 ;
@end

