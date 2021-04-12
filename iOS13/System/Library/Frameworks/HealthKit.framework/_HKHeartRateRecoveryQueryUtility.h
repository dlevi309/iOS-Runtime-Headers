/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class HKHealthStore, HKWorkout, HKQuantitySeriesSampleQuery, _HKSampleQueryUtility, NSArray;

@interface _HKHeartRateRecoveryQueryUtility : NSObject {

	HKHealthStore* _healthStore;
	HKWorkout* _workout;
	HKQuantitySeriesSampleQuery* _heartRateQuery;
	_HKSampleQueryUtility* _workoutQueryUtility;
	/*^block*/id _handler;
	NSArray* _heartRateReadings;

}
+(id)predicateForWorkoutRecoveryTimeWithWorkout:(id)arg1 ;
+(id)workoutRecoveryDateIntervalForWorkout:(id)arg1 overlappingWorkouts:(id)arg2 ;
+(id)workoutRecoveryHeartRatesForWorkout:(id)arg1 recoveryDateInterval:(id)arg2 readings:(id)arg3 ;
+(id)recoveryDateIntervalWithWorkout:(id)arg1 ;
+(id)_recoveryEndDateWithStartDate:(id)arg1 ;
+(id)perMinuteWorkoutRecoveryHeartRateFromReadings:(id)arg1 workoutEndDate:(id)arg2 ;
-(void)dealloc;
-(void)stop;
-(void)execute;
-(void)_setupQueries;
-(void)_heartRatesPostWorkout:(id)arg1 workoutRecoveryTimePredicate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithHealthStore:(id)arg1 workout:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

