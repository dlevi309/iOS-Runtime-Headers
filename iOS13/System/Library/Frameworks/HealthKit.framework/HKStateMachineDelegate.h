/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol HKStateMachineDelegate <NSObject>
@optional
-(void)stateMachine:(id)arg1 persistTransition:(id)arg2;
-(void)stateMachine:(id)arg1 didTransition:(id)arg2 fromState:(id)arg3 toState:(id)arg4 date:(id)arg5 error:(id)arg6;
-(void)stateMachine:(id)arg1 willEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
-(void)stateMachine:(id)arg1 didEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
-(void)stateMachine:(id)arg1 willLeaveState:(id)arg2 date:(id)arg3 error:(id)arg4;
-(void)stateMachine:(id)arg1 didLeaveState:(id)arg2 date:(id)arg3 error:(id)arg4;
-(void)stateMachine:(id)arg1 didIgnoreEvent:(long long)arg2 state:(id)arg3;

@end

