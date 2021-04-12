/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol MTSleepCoordinatorStateMachineEventHandler <MTStateMachineEventHandler>
@required
-(void)updateState;
-(void)userWentToBed;
-(void)userWokeUp;
-(void)userBedTimeReached:(id)arg1;
-(void)userWakeTimeReached:(id)arg1;
-(void)userWakeUpAlarmFired;
-(void)wakeUpAlarmTimedOut;

@end

