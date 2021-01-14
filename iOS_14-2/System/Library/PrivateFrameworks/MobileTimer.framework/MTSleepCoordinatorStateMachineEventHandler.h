/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

