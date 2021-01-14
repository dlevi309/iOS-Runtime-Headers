/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/


@protocol HDSPSleepScheduleStateCoordinatorStateMachineEventHandler <HKSPStateMachineEventHandler>
@required
-(void)timeZoneChange;
-(void)windDownReached;
-(void)wakeUpConfirmed;
-(void)scheduleModelChanged;
-(void)windDownSkipped;
-(void)wakeTimeReached;
-(void)significantTimeChange;
-(void)bedtimeDelayed;
-(void)bedtimeSkipped;
-(void)bedtimeReached;

@end

