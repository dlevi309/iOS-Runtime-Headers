/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol BSPowerMonitorObserver <NSObject>
@optional
-(BOOL)powerMonitorSystemSleepRequested:(id)arg1;
-(void)powerMonitorSystemSleepRequestAborted:(id)arg1;
-(void)powerMonitorSystemWillSleep:(id)arg1;
-(void)powerMonitorSystemWillWakeFromSleep:(id)arg1;
-(void)powerMonitorSystemDidWakeFromSleep:(id)arg1;

@end

