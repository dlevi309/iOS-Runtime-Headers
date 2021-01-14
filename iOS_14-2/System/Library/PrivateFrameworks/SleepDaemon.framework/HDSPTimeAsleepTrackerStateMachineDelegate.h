/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/


@protocol HDSPTimeAsleepTrackerStateMachineDelegate <HKSPStateMachineDelegate>
@required
-(void)scheduleSleepTracking;
-(void)unscheduleSleepTracking;
-(void)startSleepTrackingSessionWithReason:(unsigned long long)arg1;
-(void)endSleepTrackingSessionWithReason:(unsigned long long)arg1;
-(void)startActivityDetection;
-(void)stopActivityDetection;
-(void)startAppLaunchDetection;
-(void)stopAppLaunchDetection;
-(void)notifyForActivityDetectedOnDate:(id)arg1;

@end

