/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

@class NSDate;


@protocol REActiveWorkoutPredictorProperties <REExportedInterface>
@property (nonatomic,readonly) BOOL currentlyHasActiveWorkout; 
@property (nonatomic,readonly) float dailyAverageWorkouts; 
@property (nonatomic,readonly) unsigned long long numberOfWorkoutsPerformedToday; 
@property (nonatomic,readonly) NSDate * lastWorkoutDate; 
@required
-(BOOL)currentlyHasActiveWorkout;
-(float)dailyAverageWorkouts;
-(unsigned long long)numberOfWorkoutsPerformedToday;
-(NSDate *)lastWorkoutDate;

@end

