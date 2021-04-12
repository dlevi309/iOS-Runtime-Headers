/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol MTSleepObserver <NSObject>
@optional
-(void)sleepCoordinator:(id)arg1 userWentToBed:(id)arg2 sleepAlarm:(id)arg3;
-(void)sleepCoordinator:(id)arg1 userWokeUp:(id)arg2 sleepAlarm:(id)arg3;
-(void)sleepCoordinator:(id)arg1 bedtimeReminderDidFire:(id)arg2 sleepAlarm:(id)arg3;
-(void)sleepCoordinator:(id)arg1 bedtimeReminderWasConfirmed:(id)arg2 sleepAlarm:(id)arg3;
-(void)sleepCoordinator:(id)arg1 bedtimeReminderWasSnoozed:(id)arg2 sleepAlarm:(id)arg3;
-(void)sleepCoordinator:(id)arg1 bedtimeWasReached:(id)arg2 sleepAlarm:(id)arg3;
-(void)sleepCoordinator:(id)arg1 waketimeWasReached:(id)arg2 sleepAlarm:(id)arg3;
-(void)sleepCoordinator:(id)arg1 wakeUpAlarmDidFire:(id)arg2 sleepAlarm:(id)arg3;
-(void)sleepCoordinator:(id)arg1 wakeUpAlarmWasDismissed:(id)arg2 dismissAction:(unsigned long long)arg3 sleepAlarm:(id)arg4;
-(void)sleepCoordinator:(id)arg1 sleepAlarmDidChange:(id)arg2;
-(void)sleepCoordinator:(id)arg1 wakeUpAlarmWasSnoozed:(id)arg2 sleepAlarm:(id)arg3;
-(void)sleepCoordinator:(id)arg1 sleepModeManuallyExited:(id)arg2 sleepAlarm:(id)arg3;
-(void)sleepCoordinator:(id)arg1 sleepSessionEnded:(id)arg2 reason:(unsigned long long)arg3 sleepAlarm:(id)arg4;

@end

