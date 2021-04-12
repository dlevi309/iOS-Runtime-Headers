/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDCurrentWorkoutObserver <NSObject>
@optional
-(void)workoutManager:(id)arg1 currentWorkout:(id)arg2 didChangeToState:(long long)arg3;
-(void)workoutManager:(id)arg1 currentWorkout:(id)arg2 didUpdateDataAccumulator:(id)arg3;

@required
-(void)workoutManager:(id)arg1 didUpdateCurrentWorkout:(id)arg2;

@end

