/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSScreenLockMonitor : CSEventMonitor {

	BOOL _isScreenLocked;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_stopMonitoring;
-(BOOL)isScreenLocked;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)_queryIsScreenLocked;
-(void)_notifyObserver:(id)arg1 isScreenLocked:(BOOL)arg2 ;
-(void)screenLockStateChanged;
@end

