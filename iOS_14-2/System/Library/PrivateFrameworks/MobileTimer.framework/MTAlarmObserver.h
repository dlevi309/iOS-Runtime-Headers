/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol MTAlarmObserver <NSObject>
@required
-(void)source:(id)arg1 didUpdateAlarms:(id)arg2;
-(void)source:(id)arg1 didRemoveAlarms:(id)arg2;
-(void)source:(id)arg1 didAddAlarms:(id)arg2;
-(void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
-(void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
-(void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;
-(void)source:(id)arg1 didChangeNextAlarm:(id)arg2;

@end

