/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTBatteryMonitor : VTEventMonitor {

	int _notifyToken;
	unsigned char _batteryState;

}
+(id)sharedInstance;
-(id)init;
-(unsigned char)batteryState;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(unsigned char)_checkBatteryState;
-(void)_didReceiveBatteryStatusChanged:(unsigned char)arg1 ;
-(void)_notifyObserver:(id)arg1 withBatteryState:(unsigned char)arg2 ;
-(void)_didReceiveBatteryStatusChangedInQueue:(unsigned char)arg1 ;
@end

