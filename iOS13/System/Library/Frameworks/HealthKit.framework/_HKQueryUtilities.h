/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface _HKQueryUtilities : NSObject
+(double)totalDurationFromCoalescedDateIntervals:(id)arg1 ;
+(id)coalesceTimePeriodsFromSamples:(id)arg1 strictStartDate:(id)arg2 strictEndDate:(id)arg3 ;
+(id)arrayByCoalescingObjects:(id)arg1 startDate:(id)arg2 intervalComponents:(id)arg3 calendar:(id)arg4 combiningBlock:(/*^block*/id)arg5 ;
+(id)sleepQueryWithStartDate:(id)arg1 endDate:(id)arg2 intervalComponents:(id)arg3 calendar:(id)arg4 predicate:(id)arg5 healthStore:(id)arg6 completion:(/*^block*/id)arg7 ;
+(id)_processSleepQueryResults:(id)arg1 startDate:(id)arg2 intervalComponents:(id)arg3 sourceOrder:(id)arg4 calendar:(id)arg5 ;
+(id)sleepDateIntervalForThePastWeekWithCalendar:(id)arg1 ;
+(id)sleepQueryWithStartDate:(id)arg1 endDate:(id)arg2 intervalComponents:(id)arg3 calendar:(id)arg4 healthStore:(id)arg5 completion:(/*^block*/id)arg6 ;
+(id)coalesceTimePeriods:(id)arg1 strictStartDate:(id)arg2 strictEndDate:(id)arg3 ;
+(void)_organizeSampleByStartDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4 callback:(/*^block*/id)arg5 ;
+(id)calculateCountStatisticsWithSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4 ;
+(id)calculateTotalDurationsWithTimePeriods:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4 startOfDayTransform:(/*^block*/id)arg5 ;
+(id)calculateIncludedValuesWithSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4 ;
+(id)countStatisticsQueryWithSampleType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4 predicate:(id)arg5 completion:(/*^block*/id)arg6 ;
+(id)averageSumFromStatistics:(id)arg1 unit:(id)arg2 ;
+(id)averageSumFromQuantities:(id)arg1 unit:(id)arg2 ;
+(id)minimumFromQuantities:(id)arg1 unit:(id)arg2 ;
+(id)maximumFromQuantities:(id)arg1 unit:(id)arg2 ;
+(BOOL)shouldUseDailyAverageWithDateComponents:(id)arg1 sampleType:(id)arg2 ;
+(id)coalesceTotalDurations:(id)arg1 startDate:(id)arg2 intervalComponents:(id)arg3 intervalRecordCountsOut:(id*)arg4 ;
@end

