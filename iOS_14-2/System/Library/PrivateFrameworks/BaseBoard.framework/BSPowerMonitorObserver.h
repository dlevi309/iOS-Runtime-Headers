/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol BSPowerMonitorObserver <NSObject>
@optional
-(BOOL)powerMonitorSystemSleepRequested:(id)arg1;
-(void)powerMonitorSystemWillSleep:(id)arg1;
-(void)powerMonitorSystemDidWakeFromSleep:(id)arg1;
-(void)powerMonitorSystemSleepRequestAborted:(id)arg1;
-(void)powerMonitorSystemWillWakeFromSleep:(id)arg1;

@end

