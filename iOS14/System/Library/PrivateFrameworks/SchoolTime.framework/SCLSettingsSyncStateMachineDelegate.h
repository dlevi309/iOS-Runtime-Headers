/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/


@protocol SCLSettingsSyncStateMachineDelegate <NSObject>
@required
-(void)performSyncForStateMachine:(id)arg1;
-(void)stateMachine:(id)arg1 scheduleRetryWithActivityCriteria:(id)arg2;
-(void)stateMachine:(id)arg1 scheduleCommitTimerWithInterval:(double)arg2;
-(void)stateMachine:(id)arg1 didTransitionFromState:(id)arg2 toState:(id)arg3;
-(void)cancelRetryActivityForStateMachine:(id)arg1;
-(void)cancelCommitTimerForStateMachine:(id)arg1;

@end

