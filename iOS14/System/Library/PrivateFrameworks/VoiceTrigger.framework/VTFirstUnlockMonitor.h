/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTFirstUnlockMonitor : VTEventMonitor {

	int _notifyToken;
	BOOL _firstUnlocked;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)isFirstUnlocked;
-(void)_notifyObserver:(id)arg1 withUnlocked:(BOOL)arg2 ;
-(void)_didReceiveFirstUnlockInQueue:(BOOL)arg1 ;
-(void)_didReceiveFirstUnlock:(BOOL)arg1 ;
-(BOOL)_checkFirstUnlocked;
@end

