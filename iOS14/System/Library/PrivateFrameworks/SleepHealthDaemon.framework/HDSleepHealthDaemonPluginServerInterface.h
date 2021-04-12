/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
*/


@protocol HDSleepHealthDaemonPluginServerInterface <NSObject>
@required
-(void)remote_updateCurrentSleepSchedules:(id)arg1 sleepDurationGoal:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_startSleepTrackingSession;
-(void)remote_stopSleepTrackingSession;
-(void)remote_saveSleepTrackingSamples:(id)arg1 completion:(/*^block*/id)arg2;

@end

