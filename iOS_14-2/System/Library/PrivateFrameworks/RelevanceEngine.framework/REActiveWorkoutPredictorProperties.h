/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

