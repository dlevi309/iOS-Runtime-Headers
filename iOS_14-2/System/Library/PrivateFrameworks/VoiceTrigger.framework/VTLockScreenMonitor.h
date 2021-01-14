/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTLockScreenMonitor : VTEventMonitor {

	int _notifyToken;
	unsigned char _lockScreenState;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(unsigned char)_checkLockScreenState;
-(void)_didReceiveLockScreenStateChanged:(unsigned char)arg1 ;
-(void)_notifyObserver:(id)arg1 withLockScreenState:(unsigned char)arg2 ;
-(unsigned char)lockScreenState;
-(void)_didReceiveLockScreenStateChangedInQueue:(unsigned char)arg1 ;
-(id)lockScreenStateDescription:(unsigned char)arg1 ;
@end

