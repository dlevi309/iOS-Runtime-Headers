/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/


#import <SleepDaemon/SleepDaemon-Structs.h>
@class HKSPObserverSet;

@interface HDSPSpringboardMonitor : NSObject {

	BOOL _isAppleWatch;
	BOOL _springboardStarted;
	int _notifyToken;
	os_unfair_lock_s _springboardStartedLock;
	HKSPObserverSet* _observers;

}

@property (nonatomic,readonly) BOOL isAppleWatch;                                    //@synthesize isAppleWatch=_isAppleWatch - In the implementation block
@property (nonatomic,readonly) int notifyToken;                                      //@synthesize notifyToken=_notifyToken - In the implementation block
@property (nonatomic,readonly) BOOL springboardStarted;                              //@synthesize springboardStarted=_springboardStarted - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s springboardStartedLock;              //@synthesize springboardStartedLock=_springboardStartedLock - In the implementation block
@property (nonatomic,readonly) HKSPObserverSet * observers;                          //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) BOOL isSpringboardStarted; 
-(void)_stopMonitoring;
-(void)addObserver:(id)arg1 ;
-(void)_checkAndNotify;
-(BOOL)isSpringboardStarted;
-(HKSPObserverSet *)observers;
-(void)_withLock:(/*^block*/id)arg1 ;
-(int)notifyToken;
-(os_unfair_lock_s)springboardStartedLock;
-(BOOL)isAppleWatch;
-(void)removeObserver:(id)arg1 ;
-(id)initWithCallbackScheduler:(id)arg1 isAppleWatch:(BOOL)arg2 ;
-(void)_startMonitoring;
-(BOOL)springboardStarted;
-(id)_processName;
-(BOOL)_checkSpringBoardStarted;
-(void)dealloc;
@end

