/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 timerIsFiringState:(long long)arg2 ;
-(void)_timerIsFiring:(id)arg1 ;
-(void)_timerDismissed:(id)arg1 ;
-(void)_timerStateReset:(id)arg1 ;
-(BOOL)_isSleepTimer:(id)arg1 ;
-(void)initializeTimerState;
-(long long)timerState;
@end

