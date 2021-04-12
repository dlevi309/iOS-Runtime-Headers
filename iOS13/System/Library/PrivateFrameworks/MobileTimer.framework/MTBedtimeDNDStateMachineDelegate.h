/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol MTBedtimeDNDStateMachineDelegate <MTStateMachineDelegate>
@required
-(BOOL)stateMachine:(id)arg1 disengageBedtimeDNDUserRequested:(BOOL)arg2;
-(void)stateMachine:(id)arg1 keepBedtimeDNDOffUntilDate:(id)arg2;
-(BOOL)stateMachine:(id)arg1 engageBedtimeDNDUntilDate:(id)arg2 userEngaged:(BOOL)arg3;
-(void)stateMachineClearKeepBedtimeDNDOff:(id)arg1;
-(void)stateMachine:(id)arg1 scheduleUpdateForSecondsFromNow:(double)arg2;

@end

