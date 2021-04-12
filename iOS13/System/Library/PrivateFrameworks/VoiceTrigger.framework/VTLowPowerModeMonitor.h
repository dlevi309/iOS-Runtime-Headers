/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTLowPowerModeMonitor : VTEventMonitor {

	unsigned char _powerMode;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_didReceiveLowPowerModeChanged;
-(unsigned char)_checkPowerMode;
-(void)_didReceiveLowPowerModeChangedInQueue:(unsigned char)arg1 ;
-(void)_notifyObserver:(id)arg1 withPowerMode:(unsigned char)arg2 ;
-(unsigned char)powerMode;
-(BOOL)isLowPowerMode;
@end

