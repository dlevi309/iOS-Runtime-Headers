/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIViewInProcessAnimationManagerDriver.h>

@protocol _UIViewInProcessAnimationManagerDriver, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;
@class NSMutableArray, NSObject, _UIAppCACommitFuture, CADisplayLink, NSHashTable, NSThread, NSRunLoop, NSString;

@interface UIViewInProcessAnimationManager : NSObject <_UIViewInProcessAnimationManagerDriver> {

	NSMutableArray* _preCommitBlocks;
	NSMutableArray* _entries;
	NSMutableArray* _newlyAddedEntries;
	NSMutableArray* _postTickBlocks;
	NSMutableArray* _preExitBlocks;
	NSMutableArray* _presentationModifierGroupRequestBlocks;
	id<_UIViewInProcessAnimationManagerDriver> _animatorAdvancer;
	double _time;
	double _deltaTime;
	double _refreshInterval;
	NSObject*<OS_dispatch_queue> _tickPrepQueue;
	NSObject*<OS_dispatch_queue> _tickQueue;
	NSObject*<OS_dispatch_queue> _entryLockingQueue;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSObject*<OS_dispatch_queue> _displayLinkAccessQueue;
	NSObject*<OS_dispatch_queue> _backlightQueue;
	NSObject*<OS_dispatch_source> _timerSource;
	NSObject*<OS_dispatch_semaphore> _postTicksDelaySemaphore;
	BOOL _processingPreCommits;
	BOOL _waitingForAnimatorAdvancerToStart;
	_UIAppCACommitFuture* _caCommitFuture;
	CADisplayLink* _displayLink;
	int _screenDimmingNotificationToken;
	BOOL _animationsSuspended;
	BOOL _animationsShouldCompleteImmediately;
	BOOL _skipNextFrame;
	BOOL _displayLinkInvalidated;
	BOOL _screenIsOff;
	unsigned long long _presentationModifierRequestCount;
	NSHashTable* _presentationGroups;
	BOOL _appSuspended;
	NSMutableArray* _observedWindowScenes;
	BOOL _usesMainThreadExecution;
	BOOL _advancingOnCommitDisabled;
	unsigned long long _executionMode;
	NSThread* _currentTickThread;
	NSThread* _animationThread;
	NSRunLoop* _animationThreadRunLoop;
	NSObject*<OS_dispatch_semaphore> _animationThreadKeepAliveSemaphore;

}

@property (assign,nonatomic) BOOL usesMainThreadExecution;                                          //@synthesize usesMainThreadExecution=_usesMainThreadExecution - In the implementation block
@property (assign,nonatomic) unsigned long long executionMode;                                      //@synthesize executionMode=_executionMode - In the implementation block
@property (assign,nonatomic) BOOL advancingOnCommitDisabled;                                        //@synthesize advancingOnCommitDisabled=_advancingOnCommitDisabled - In the implementation block
@property (__weak) NSThread * currentTickThread;                                                    //@synthesize currentTickThread=_currentTickThread - In the implementation block
@property (__weak) NSThread * animationThread;                                                      //@synthesize animationThread=_animationThread - In the implementation block
@property (__weak) NSRunLoop * animationThreadRunLoop;                                              //@synthesize animationThreadRunLoop=_animationThreadRunLoop - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> animationThreadKeepAliveSemaphore;              //@synthesize animationThreadKeepAliveSemaphore=_animationThreadKeepAliveSemaphore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(void)_dispatchAsyncOntoMainBeforeExit:(/*^block*/id)arg1 ;
+(id)_requestPresentationModifierGroup:(/*^block*/id)arg1 ;
+(void)_cancelPresentationModifierGroupRequest:(id)arg1 ;
+(void)_setExternalAnimationDriver:(id)arg1 ;
-(BOOL)_isInvalidated;
-(void)_applicationDidEnterBackground;
-(void)_applicationBecameActive;
-(BOOL)advancingOnCommitDisabled;
-(id)init;
-(void)_processPostTicks;
-(NSObject*<OS_dispatch_semaphore>)animationThreadKeepAliveSemaphore;
-(void)_commitSynchronously;
-(void)_processPostTicksDelayIfNecessary:(double)arg1 ;
-(void)_processPreCommitBlocks;
-(void)_setAnimationExecutionParameters;
-(void)_setAnimationsSuspended:(BOOL)arg1 ;
-(void)_displayLinkFire:(id)arg1 ;
-(void)setAdvancingOnCommitDisabled:(BOOL)arg1 ;
-(void)scheduleAnimatorAdvancerToStart;
-(void)_updateAnimationSuspensionForAppStateChange;
-(BOOL)_shouldKeepAnimationThreadAlive;
-(BOOL)usesMainThreadExecution;
-(void)addEntry:(/*^block*/id)arg1 ;
-(unsigned long long)_runPreCommitBlocks;
-(id)_requestPresentationModifierGroup:(/*^block*/id)arg1 ;
-(void)_screenBasedSceneDidDisconnect:(id)arg1 ;
-(void)_processTickExitRemovingEntries:(id)arg1 ;
-(NSRunLoop *)animationThreadRunLoop;
-(void)performAfterTick:(/*^block*/id)arg1 ;
-(void)_registerBacklightChangedNotification;
-(void)setExecutionMode:(unsigned long long)arg1 ;
-(NSThread *)currentTickThread;
-(void)_processPresentationModifierRequestsAndFlush;
-(void)finishAdvancingAnimationManager;
-(void)setCurrentTickThread:(NSThread *)arg1 ;
-(void)setAnimationThread:(NSThread *)arg1 ;
-(void)_advanceWithTime:(double)arg1 ;
-(void)performBeforeExiting:(/*^block*/id)arg1 ;
-(void)_cancelPresentationModifierGroupRequest:(id)arg1 ;
-(unsigned long long)executionMode;
-(void)setAnimationThreadRunLoop:(NSRunLoop *)arg1 ;
-(void)setAnimationThreadKeepAliveSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)_performWhenInProcessAnimationsTransactionCommits:(/*^block*/id)arg1 ;
-(void)startAnimationAdvancerIfNeeded;
-(void)_setCurrentMediaTime:(double)arg1 ;
-(void)_performTick:(double)arg1 cancel:(BOOL)arg2 force:(BOOL)arg3 eventName:(id)arg4 entry:(/*^block*/id)arg5 exit:(/*^block*/id)arg6 ;
-(double)refreshInterval;
-(void)startAdvancingAnimationManager:(id)arg1 ;
-(void)setUsesMainThreadExecution:(BOOL)arg1 ;
-(void)_prepareForTick;
-(void)_cancelAllAnimationsImmediately;
-(void)_applicationResignedActive;
-(void)_screenBasedSceneWillAttachWindow:(id)arg1 ;
-(void)dealloc;
-(NSThread *)animationThread;
-(void)_processEntriesCollectingEntriesToRemove:(id)arg1 cancel:(BOOL)arg2 ;
@end

