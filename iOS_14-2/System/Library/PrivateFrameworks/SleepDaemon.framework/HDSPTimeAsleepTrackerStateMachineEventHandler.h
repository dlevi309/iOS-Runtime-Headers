/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/


@protocol HDSPTimeAsleepTrackerStateMachineEventHandler <HKSPStateMachineEventHandler>
@required
-(void)appLaunchedOnDate:(id)arg1;
-(void)bedtimeOccurred;
-(void)wakeUpOccurredWithReason:(unsigned long long)arg1;
-(void)sleepTrackingEventDue;
-(void)userEngagedSleepMode;
-(void)sleepModeExitedWithReason:(unsigned long long)arg1;
-(void)activityDetectedOnDate:(id)arg1;
-(void)sleepSessionEndRequestedInternally;
-(void)startWakeDetectionOccurred;
-(void)sleepSessionFinished;

@end

