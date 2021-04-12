/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/


@protocol HDSPSleepModeStateMachineEventHandler <HKSPStateMachineEventHandler>
@required
-(void)userEngagedBedtimeMode;
-(void)sleepScheduleStateChangedToDisabledFromState:(unsigned long long)arg1;
-(void)sleepScheduleStateChangedToWakeUp:(unsigned long long)arg1;
-(void)userDisengagedCurrentMode;
-(void)sleepScheduleStateChangedToBedtimeFromState:(unsigned long long)arg1;
-(void)sleepScheduleStateChangedToWindDownFromState:(unsigned long long)arg1;

@end

