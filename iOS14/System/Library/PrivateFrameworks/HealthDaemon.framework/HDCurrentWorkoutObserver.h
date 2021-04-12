/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDCurrentWorkoutObserver <NSObject>
@optional
-(void)workoutManager:(id)arg1 currentWorkout:(id)arg2 didChangeToState:(long long)arg3;
-(void)workoutManager:(id)arg1 currentWorkout:(id)arg2 didUpdateDataAccumulator:(id)arg3;

@required
-(void)workoutManager:(id)arg1 didUpdateCurrentWorkout:(id)arg2;

@end

