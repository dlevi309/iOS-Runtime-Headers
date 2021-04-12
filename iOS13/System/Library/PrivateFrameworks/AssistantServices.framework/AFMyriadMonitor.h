/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFNotifyObserverDelegate.h>

@protocol OS_dispatch_queue;
@class AFWatchdogTimer, NSObject, AFQueue, AFNotifyObserver, NSString;

@interface AFMyriadMonitor : NSObject <AFNotifyObserverDelegate> {

	long long _state;
	AFWatchdogTimer* _timer;
	NSObject*<OS_dispatch_queue> _myriadMonitorQueue;
	AFQueue* _completions;
	AFNotifyObserver* _beginObserver;
	AFNotifyObserver* _wonObserver;
	AFNotifyObserver* _lostObserver;
	AFNotifyObserver* _repostedWonObserver;
	double _myriadEventMonitorTimeout;
	BOOL _isRegisteredForMyriadEventNotification;
	BOOL _ignoreMyriadEvents;
	BOOL _didRequestCurrentDecisionResult;
	BOOL _ignoreRepostMyriadNotification;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMonitor;
-(id)init;
-(void)dealloc;
-(void)stopMonitoring;
-(void)_clear;
-(void)waitForMyriadDecisionWithCompletion:(/*^block*/id)arg1 ;
-(void)startMonitoringWithTimeoutInterval:(double)arg1 ;
-(void)ignoreMyriadEvents:(BOOL)arg1 ;
-(void)dequeueBlocksWaitingForMyriadDecision;
-(id)_myriadStateToString:(long long)arg1 ;
-(void)_registerForMyriadEvents;
-(void)_setDecisionIsPending;
-(void)_fetchCurrentMyraidDecision;
-(void)_deregisterFromRepostedDecisionResultsObservers;
-(void)_dequeueBlocksWithSignal:(long long)arg1 ;
-(void)_deregisterFromMyriadEventNotifications;
-(void)_resultSeenWithValue:(BOOL)arg1 ;
-(void)_flushCompletions:(BOOL)arg1 ;
-(void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2 ;
-(BOOL)didWin;
-(void)_ignoreRepostMyriadNotification:(BOOL)arg1 ;
@end

