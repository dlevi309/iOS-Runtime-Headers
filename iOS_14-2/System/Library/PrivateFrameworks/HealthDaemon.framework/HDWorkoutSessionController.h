/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDWorkoutSessionController
@required
+(id)recoveryIdentifier;
+(void)willFinishSessionWithRecoveryData:(id)arg1 profile:(id)arg2;
-(void)unitTest_setCMWorkoutManager:(id)arg1;
-(id)initWithProfile:(id)arg1 sessionConfiguration:(id)arg2 sessionStateController:(id)arg3 recoveryState:(id)arg4;
-(void)workoutSessionServer:(id)arg1 didChangeConfiguration:(id)arg2;
-(void)workoutSessionServer:(id)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3 date:(id)arg4;
-(void)workoutSessionServer:(id)arg1 accumulatorDidChange:(id)arg2;
-(void)hktest_setStateTransitionCompletionHandler:(/*^block*/id)arg1;

@end

