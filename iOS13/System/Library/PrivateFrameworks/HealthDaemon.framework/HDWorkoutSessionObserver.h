/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDWorkoutSessionObserver <NSObject>
@optional
-(void)workoutSession:(id)arg1 didUpdateDataAccumulator:(id)arg2;

@required
-(void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
-(void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;
-(void)workoutSession:(id)arg1 didFailWithError:(id)arg2;

@end

