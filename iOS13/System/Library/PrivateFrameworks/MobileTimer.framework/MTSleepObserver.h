/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)sleepCoordinator:(id)arg1 wakeUpAlarmWasSnoozed:(id)arg2 sleepAlarm:(id)arg3;
-(void)sleepCoordinator:(id)arg1 bedtimeDNDManuallyExited:(id)arg2 sleepAlarm:(id)arg3;
-(void)sleepCoordinator:(id)arg1 bedtimeSessionEnded:(id)arg2 reason:(unsigned long long)arg3 sleepAlarm:(id)arg4;
-(void)sleepCoordinator:(id)arg1 sleepAlarmDidChange:(id)arg2;

@end

