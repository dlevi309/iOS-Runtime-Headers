/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSDateInterval, HKQuantity, HKHeartRateSummaryStatistics, NSMutableArray, NSMutableDictionary, NSDateComponents, HKHeartRateSummary;

@interface HDActivityCacheHeartRateStatisticsBuilder : NSObject {

	NSDateInterval* _dateInterval;
	long long _activityCacheIndex;
	vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> >* _heartRateSamples;
	vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> >* _workouts;
	HKQuantity* _restingHeartRate;
	HKQuantity* _walkingAverageHeartRate;
	HKHeartRateSummaryStatistics* _allDayStatistics;
	NSMutableArray* _workoutStatistics;
	NSMutableArray* _workoutRecoveryStatistics;
	NSMutableArray* _breatheStatistics;
	NSMutableDictionary* _averageCalculatorsByWorkoutUUID;
	NSMutableDictionary* _recoveryReadingsByWorkoutUUID;
	NSMutableDictionary* _breatheSessionReadingsBySessionUUID;
	NSMutableDictionary* _breatheSessionDateIntervalBySessionUUID;
	NSDateComponents* _dateOfBirthComponents;

}

@property (nonatomic,readonly) HKHeartRateSummary * heartRateSummary; 
-(void)addWorkouts:(const vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> >*)arg1 ;
-(id)heartRateDateInterval;
-(id)restingHeartRate;
-(id)walkingAverageHeartRate;
-(HKHeartRateSummary *)heartRateSummary;
-(id)initWithDateInterval:(id)arg1 activityCacheIndex:(long long)arg2 ;
-(void)setDateOfBirthComponents:(id)arg1 ;
-(void)addBreatheSessions:(const vector<HDActivityCacheStatisticsBuilderBreatheSample, std::__1::allocator<HDActivityCacheStatisticsBuilderBreatheSample> >*)arg1 ;
-(void)addHeartRateSamples:(const vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> >*)arg1 ;
-(void)_addHeartRateSamplesToAllStatistics:(const vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> >*)arg1 ;
-(void)_addHeartRateSamples:(const vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> >*)arg1 toStatistics:(id)arg2 ;
-(void)_addBeatsPerSecond:(double)arg1 time:(double)arg2 toSessionStatistics:(id)arg3 ;
-(void)_updateMetricsForSessionStatistics:(id)arg1 ;
-(id)_averageCalculatorForWorkoutStatistics:(id)arg1 ;
-(id)_recoveryReadingsForWorkoutStatistics:(id)arg1 ;
-(id)_sessionReadingsForBreatheStatistics:(id)arg1 ;
-(void)_updateMetricsForWorkoutStatistics:(id)arg1 ;
-(void)_updateMetricsForWorkoutRecoveryStatistics:(id)arg1 ;
-(void)_updateMetricsForBreatheStatistics:(id)arg1 ;
-(void)_addHeartRateStatisticsForNewWorkouts:(const vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> >*)arg1 ;
-(id)_filteredRecoveryReadings:(id)arg1 ;
@end

