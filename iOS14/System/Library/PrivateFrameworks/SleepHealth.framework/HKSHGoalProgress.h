/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealth.framework/SleepHealth
*/


#import <SleepHealth/SleepHealth-Structs.h>
@class HKQuantity, NSDateComponents, NSNumber;

@interface HKSHGoalProgress : NSObject {

	long long _sleepAnalysisAsleepCount;
	long long _sleepAnalysisInBedCount;
	long long _sleepAnalysisCount;
	HKQuantity* _averageSleepDuration;
	HKQuantity* _averageInBedDuration;
	long long _bedtimeAchievedCount;
	long long _sleepDurationGoalAchievedCount;
	long long _sleepDurationGoalStreakCount;
	HKQuantity* _averageBedtimeMiss;
	HKQuantity* _averageSleepDurationGoalMiss;
	NSDateComponents* _averageBedtime;
	NSDateComponents* _averageWakeTime;
	NSDateComponents* _averageSleepStartTime;
	NSDateComponents* _averageSleepEndTime;
	NSNumber* _standardDeviationActualTimeAsleep;
	NSNumber* _standardDeviationScheduledTimeAsleep;
	NSNumber* _standardDeviationActualVsScheduledTimeAsleep;
	SCD_Struct_HK0 _morningIndexRange;

}

@property (nonatomic,copy,readonly) NSNumber * standardDeviationActualTimeAsleep;                         //@synthesize standardDeviationActualTimeAsleep=_standardDeviationActualTimeAsleep - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * standardDeviationScheduledTimeAsleep;                      //@synthesize standardDeviationScheduledTimeAsleep=_standardDeviationScheduledTimeAsleep - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * standardDeviationActualVsScheduledTimeAsleep;              //@synthesize standardDeviationActualVsScheduledTimeAsleep=_standardDeviationActualVsScheduledTimeAsleep - In the implementation block
@property (nonatomic,readonly) SCD_Struct_HK0 morningIndexRange;                                          //@synthesize morningIndexRange=_morningIndexRange - In the implementation block
@property (nonatomic,readonly) long long sleepAnalysisAsleepCount;                                        //@synthesize sleepAnalysisAsleepCount=_sleepAnalysisAsleepCount - In the implementation block
@property (nonatomic,readonly) long long sleepAnalysisInBedCount;                                         //@synthesize sleepAnalysisInBedCount=_sleepAnalysisInBedCount - In the implementation block
@property (nonatomic,readonly) long long sleepAnalysisCount;                                              //@synthesize sleepAnalysisCount=_sleepAnalysisCount - In the implementation block
@property (nonatomic,copy,readonly) HKQuantity * averageSleepDuration;                                    //@synthesize averageSleepDuration=_averageSleepDuration - In the implementation block
@property (nonatomic,copy,readonly) HKQuantity * averageInBedDuration;                                    //@synthesize averageInBedDuration=_averageInBedDuration - In the implementation block
@property (nonatomic,readonly) long long bedtimeAchievedCount;                                            //@synthesize bedtimeAchievedCount=_bedtimeAchievedCount - In the implementation block
@property (nonatomic,readonly) long long sleepDurationGoalAchievedCount;                                  //@synthesize sleepDurationGoalAchievedCount=_sleepDurationGoalAchievedCount - In the implementation block
@property (nonatomic,readonly) long long sleepDurationGoalStreakCount;                                    //@synthesize sleepDurationGoalStreakCount=_sleepDurationGoalStreakCount - In the implementation block
@property (nonatomic,copy,readonly) HKQuantity * averageBedtimeMiss;                                      //@synthesize averageBedtimeMiss=_averageBedtimeMiss - In the implementation block
@property (nonatomic,copy,readonly) HKQuantity * averageSleepDurationGoalMiss;                            //@synthesize averageSleepDurationGoalMiss=_averageSleepDurationGoalMiss - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * averageBedtime;                                    //@synthesize averageBedtime=_averageBedtime - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * averageWakeTime;                                   //@synthesize averageWakeTime=_averageWakeTime - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * averageSleepStartTime;                             //@synthesize averageSleepStartTime=_averageSleepStartTime - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * averageSleepEndTime;                               //@synthesize averageSleepEndTime=_averageSleepEndTime - In the implementation block
+(id)goalProgressWithMorningIndexRange:(SCD_Struct_HK0)arg1 sleepAnalysisAsleepCount:(long long)arg2 sleepAnalysisInBedCount:(long long)arg3 sleepAnalysisCount:(long long)arg4 averageSleepDuration:(id)arg5 averageInBedDuration:(id)arg6 bedtimeAchievedCount:(long long)arg7 sleepDurationGoalAchievedCount:(long long)arg8 sleepDurationGoalStreakCount:(long long)arg9 averageBedtimeMiss:(id)arg10 averageSleepDurationGoalMiss:(id)arg11 averageBedtime:(id)arg12 averageWakeTime:(id)arg13 averageSleepStartTime:(id)arg14 averageSleepEndTime:(id)arg15 standardDeviationActualTimeAsleep:(id)arg16 standardDeviationScheduledTimeAsleep:(id)arg17 standardDeviationActualVsScheduledTimeAsleep:(id)arg18 ;
-(SCD_Struct_HK0)morningIndexRange;
-(long long)sleepAnalysisAsleepCount;
-(long long)sleepAnalysisInBedCount;
-(long long)sleepAnalysisCount;
-(HKQuantity *)averageSleepDuration;
-(HKQuantity *)averageInBedDuration;
-(long long)bedtimeAchievedCount;
-(long long)sleepDurationGoalAchievedCount;
-(long long)sleepDurationGoalStreakCount;
-(HKQuantity *)averageBedtimeMiss;
-(HKQuantity *)averageSleepDurationGoalMiss;
-(NSDateComponents *)averageBedtime;
-(NSDateComponents *)averageWakeTime;
-(NSDateComponents *)averageSleepStartTime;
-(NSDateComponents *)averageSleepEndTime;
-(NSNumber *)standardDeviationActualTimeAsleep;
-(NSNumber *)standardDeviationScheduledTimeAsleep;
-(NSNumber *)standardDeviationActualVsScheduledTimeAsleep;
@end

