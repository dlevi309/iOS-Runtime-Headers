/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSScreenLockMonitor : CSEventMonitor {

	BOOL _isScreenLocked;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(BOOL)isScreenLocked;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)screenLockStateChanged;
-(BOOL)_queryIsScreenLocked;
-(void)_notifyObserver:(id)arg1 isScreenLocked:(BOOL)arg2 ;
-(void)dealloc;
@end

