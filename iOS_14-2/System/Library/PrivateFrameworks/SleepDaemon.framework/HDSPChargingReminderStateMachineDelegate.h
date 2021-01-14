/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/


@protocol HDSPChargingReminderStateMachineDelegate <HKSPStateMachineDelegate>
@required
-(void)postChargingReminderNotification;
-(void)scheduleBatteryMonitoring;
-(void)unscheduleBatteryMonitoring;
-(void)startBatteryMonitoring;
-(void)stopBatteryMonitoring;

@end

