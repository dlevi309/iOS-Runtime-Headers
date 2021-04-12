/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTLockScreenMonitor : VTEventMonitor {

	int _notifyToken;
	unsigned char _lockScreenState;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(unsigned char)lockScreenState;
-(unsigned char)_checkLockScreenState;
-(void)_didReceiveLockScreenStateChanged:(unsigned char)arg1 ;
-(id)lockScreenStateDescription:(unsigned char)arg1 ;
-(void)_notifyObserver:(id)arg1 withLockScreenState:(unsigned char)arg2 ;
-(void)_didReceiveLockScreenStateChangedInQueue:(unsigned char)arg1 ;
@end

