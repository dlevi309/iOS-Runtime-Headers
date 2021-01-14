/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTLowPowerModeMonitor : VTEventMonitor {

	unsigned char _powerMode;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_didReceiveLowPowerModeChanged;
-(unsigned char)_checkPowerMode;
-(void)_didReceiveLowPowerModeChangedInQueue:(unsigned char)arg1 ;
-(void)_notifyObserver:(id)arg1 withPowerMode:(unsigned char)arg2 ;
-(unsigned char)powerMode;
-(BOOL)isLowPowerMode;
@end

