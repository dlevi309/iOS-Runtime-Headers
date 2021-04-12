/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_sharedInstanceCreateIfNeeded:(BOOL)arg1 ;
+(id)sharedInstanceIfExists;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)screenIsOn;
-(void)preventIdleSleep;
-(void)_undimFromSource:(long long)arg1 ;
-(void)setCurrentHIDUILockAssertion:(SBHIDUILockAssertion *)arg1 ;
-(void)setBacklightFactor:(float)arg1 source:(long long)arg2 ;
-(void)preventIdleSleepForNumberOfSeconds:(float)arg1 ;
-(BOOL)isPendingScreenUnblankAfterCACommit;
-(BOOL)screenIsDim;
-(double)defaultLockScreenDimIntervalWhenNotificationsPresent;
-(BOOL)shouldTurnOnScreenForBacklightSource:(long long)arg1 ;
-(void)animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_startFadeOutAnimationFromLockSource:(int)arg1 ;
-(double)backlightFactor;
-(void)setBacklightFactorPending:(float)arg1 ;
-(long long)lastBacklightChangeSource;
-(void)_deferredScreenUnblankDone;
-(void)reloadDefaults;
-(void)_performDeferredBacklightRampWorkWithInfo:(id)arg1 ;
-(void)_animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(long long)arg3 silently:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_notifyObserversWillAnimateToFactor:(float)arg1 source:(long long)arg2 ;
-(void)_notifyObserversDidAnimateToFactor:(float)arg1 source:(long long)arg2 ;
-(void)_suspendProxAndMultitouch:(BOOL)arg1 source:(long long)arg2 ;
-(void)allowIdleSleep;
-(void)turnOnScreenFullyWithBacklightSource:(long long)arg1 ;
-(void)registerInformer:(id)arg1 ;
-(void)unregisterInformer:(id)arg1 ;
-(double)defaultLockScreenDimInterval;
-(SBHIDUILockAssertion *)currentHIDUILockAssertion;
@end

