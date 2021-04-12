/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBIdleTimerDefaults, NSHashTable, SBHIDUILockAssertion;

@interface SBBacklightController : NSObject {

	SBIdleTimerDefaults* _idleTimerDefaults;
	BOOL _isPendingScreenUnblankAfterCACommit;
	NSHashTable* _observers;
	NSHashTable* _informers;
	long long _lastBacklightChangeSource;
	SBHIDUILockAssertion* _currentHIDUILockAssertion;

}

@property (nonatomic,readonly) BOOL isPendingScreenUnblankAfterCACommit;                    //@synthesize isPendingScreenUnblankAfterCACommit=_isPendingScreenUnblankAfterCACommit - In the implementation block
@property (nonatomic,readonly) BOOL screenIsOn; 
@property (nonatomic,readonly) BOOL screenIsDim; 
@property (nonatomic,readonly) long long lastBacklightChangeSource;                         //@synthesize lastBacklightChangeSource=_lastBacklightChangeSource - In the implementation block
@property (nonatomic,retain) SBHIDUILockAssertion * currentHIDUILockAssertion;              //@synthesize currentHIDUILockAssertion=_currentHIDUILockAssertion - In the implementation block
@property (nonatomic,readonly) double backlightFactor; 
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(id)_sharedInstanceCreateIfNeeded:(BOOL)arg1 ;
-(void)preventIdleSleep;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(SBHIDUILockAssertion *)currentHIDUILockAssertion;
-(void)allowIdleSleep;
-(long long)lastBacklightChangeSource;
-(void)setBacklightFactorPending:(float)arg1 ;
-(void)_startFadeOutAnimationFromLockSource:(int)arg1 ;
-(void)preventIdleSleepForNumberOfSeconds:(float)arg1 ;
-(void)setBacklightFactor:(float)arg1 source:(long long)arg2 ;
-(void)registerInformer:(id)arg1 ;
-(BOOL)screenIsDim;
-(void)setCurrentHIDUILockAssertion:(SBHIDUILockAssertion *)arg1 ;
-(void)animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_performDeferredBacklightRampWorkWithInfo:(id)arg1 ;
-(BOOL)screenIsOn;
-(void)_animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(long long)arg3 silently:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(double)defaultLockScreenDimIntervalWhenNotificationsPresent;
-(BOOL)isPendingScreenUnblankAfterCACommit;
-(void)_suspendProxAndMultitouch:(BOOL)arg1 source:(long long)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(double)defaultLockScreenDimInterval;
-(void)_undimFromSource:(long long)arg1 ;
-(void)unregisterInformer:(id)arg1 ;
-(void)_deferredScreenUnblankDone;
-(void)_notifyObserversWillAnimateToFactor:(float)arg1 source:(long long)arg2 ;
-(void)reloadDefaults;
-(void)_notifyObserversDidAnimateToFactor:(float)arg1 source:(long long)arg2 ;
-(BOOL)shouldTurnOnScreenForBacklightSource:(long long)arg1 ;
-(double)backlightFactor;
-(void)turnOnScreenFullyWithBacklightSource:(long long)arg1 ;
@end

