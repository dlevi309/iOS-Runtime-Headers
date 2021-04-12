/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol MTSleepModeStateMachineDelegate <MTStateMachineDelegate>
@required
-(BOOL)stateMachine:(id)arg1 disengageSleepModeUserRequested:(BOOL)arg2;
-(void)stateMachine:(id)arg1 keepSleepModeOffUntilDate:(id)arg2;
-(BOOL)stateMachine:(id)arg1 engageSleepModeUntilDate:(id)arg2 userEngaged:(BOOL)arg3;
-(void)stateMachineClearKeepSleepModeOff:(id)arg1;
-(void)stateMachine:(id)arg1 scheduleUpdateForSecondsFromNow:(double)arg2;

@end

