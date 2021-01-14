/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/HDSPWakeUpResultsNotificationStateMachineState.h>

@interface HDSPWakeUpResultsNotificationQueryingState : HDSPWakeUpResultsNotificationStateMachineState {

	BOOL _shouldRetryImmediatelyOnFailure;

}
-(void)protectedHealthDataDidBecomeAvailable;
-(void)queryDidComplete;
-(void)queryDidFailWithError:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stateName;
-(void)didExitWithNextState:(id)arg1 context:(id)arg2 ;
-(void)willEnterWithPreviousState:(id)arg1 context:(id)arg2 ;
-(void)didEnterWithPreviousState:(id)arg1 context:(id)arg2 ;
-(void)_executeQuery;
-(void)_retryQueryIfNeededOrTransitionToNeedsProtectedDataState;
-(void)_transitionToRetryState;
-(void)_transitionToWaitingForWakeUpState;
-(void)_transitionToNotifiedState;
@end

