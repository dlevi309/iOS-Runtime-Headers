/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject, MTTimerManager;

@interface CSTimerMonitor : CSEventMonitor {

	long long _timerFiringState;
	NSObject*<OS_dispatch_queue> _queue;
	MTTimerManager* _timerManager;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 timerIsFiringState:(long long)arg2 ;
-(void)_timerIsFiring:(id)arg1 ;
-(void)_timerDismissed:(id)arg1 ;
-(void)_timerStateReset:(id)arg1 ;
-(BOOL)_isSleepTimer:(id)arg1 ;
-(void)initializeTimerState;
-(long long)timerState;
@end

