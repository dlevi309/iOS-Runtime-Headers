/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDWorkoutSessionObserver <NSObject>
@optional
-(void)workoutSession:(id)arg1 didUpdateDataAccumulator:(id)arg2;
-(void)workoutSession:(id)arg1 didUpdateControllerStateForRecoveryIdentifier:(id)arg2;

@required
-(void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
-(void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;
-(void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;

@end

