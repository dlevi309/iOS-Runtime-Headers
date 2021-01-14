/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/


@protocol HKSPSleepServer <HKSPServer>
@required
-(void)skipWindDownWithCompletion:(/*^block*/id)arg1;
-(void)getSleepEventRecordWithCompletion:(/*^block*/id)arg1;
-(void)sleepAlarmWasDismissedOnDate:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getSleepScheduleWithCompletion:(/*^block*/id)arg1;
-(void)setSleepMode:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)saveSleepEventRecord:(id)arg1 completion:(/*^block*/id)arg2;
-(void)confirmAwakeWithCompletion:(/*^block*/id)arg1;
-(void)sleepAlarmWasSnoozedUntilDate:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setLockScreenOverrideState:(long long)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3;
-(void)getSleepSettingsWithCompletion:(/*^block*/id)arg1;
-(void)saveSleepSettings:(id)arg1 completion:(/*^block*/id)arg2;
-(void)saveSleepSchedule:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getSleepModeWithCompletion:(/*^block*/id)arg1;
-(void)dismissGoodMorningWithCompletion:(/*^block*/id)arg1;
-(void)publishWakeUpResultsNotificationWithCompletion:(/*^block*/id)arg1;
-(void)sleepAlarmWasModifiedWithCompletion:(/*^block*/id)arg1;
-(void)publishNotificationWithIdentifier:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3;
-(void)delayBedtimeForTimeInterval:(double)arg1 completion:(/*^block*/id)arg2;
-(void)getSleepScheduleStateWithCompletion:(/*^block*/id)arg1;
-(void)skipBedtimeWithCompletion:(/*^block*/id)arg1;

@end

