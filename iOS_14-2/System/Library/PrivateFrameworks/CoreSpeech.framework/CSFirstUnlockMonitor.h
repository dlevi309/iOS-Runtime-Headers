/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSFirstUnlockMonitor : CSEventMonitor {

	int _notifyToken;
	BOOL _firstUnlocked;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)_firstUnlockNotified;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)isFirstUnlocked;
-(void)_notifyObserver:(id)arg1 withUnlocked:(BOOL)arg2 ;
-(void)_didReceiveFirstUnlockInQueue:(BOOL)arg1 ;
-(void)_didReceiveFirstUnlock:(BOOL)arg1 ;
-(BOOL)_checkFirstUnlocked;
@end

