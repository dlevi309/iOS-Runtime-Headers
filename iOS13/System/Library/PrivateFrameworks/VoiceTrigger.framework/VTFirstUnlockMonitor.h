/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTFirstUnlockMonitor : VTEventMonitor {

	int _notifyToken;
	BOOL _firstUnlocked;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)isFirstUnlocked;
-(BOOL)_checkFirstUnlocked;
-(void)_didReceiveFirstUnlock:(BOOL)arg1 ;
-(void)_notifyObserver:(id)arg1 withUnlocked:(BOOL)arg2 ;
-(void)_didReceiveFirstUnlockInQueue:(BOOL)arg1 ;
@end

