/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSBatteryMonitor : CSEventMonitor {

	int _notifyToken;
	unsigned char _batteryState;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(unsigned char)batteryState;
-(unsigned char)_checkBatteryState;
-(void)_didReceiveBatteryStatusChanged:(unsigned char)arg1 ;
-(void)_notifyObserver:(id)arg1 withBatteryState:(unsigned char)arg2 ;
-(void)_didReceiveBatteryStatusChangedInQueue:(unsigned char)arg1 ;
@end

