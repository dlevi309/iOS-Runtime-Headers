/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)addEntry:(/*^block*/id)arg1 ;
-(BOOL)_isInvalidated;
-(void)performAfterTick:(/*^block*/id)arg1 ;
-(double)refreshInterval;
-(void)_applicationResignedActive;
-(void)_applicationBecameActive;
-(void)_registerBacklightChangedNotification;
-(void)setUsesMainThreadExecution:(BOOL)arg1 ;
-(void)_cancelAllAnimationsImmediately;
-(void)_processPreCommitBlocks;
-(void)_performTick:(double)arg1 cancel:(BOOL)arg2 force:(BOOL)arg3 eventName:(id)arg4 entry:(/*^block*/id)arg5 exit:(/*^block*/id)arg6 ;
-(void)finishAdvancingAnimationManager;
-(unsigned long long)_runPreCommitBlocks;
-(void)_setAnimationExecutionParameters;
-(void)_prepareForTick;
-(void)setCurrentTickThread:(NSThread *)arg1 ;
-(void)_processEntriesCollectingEntriesToRemove:(id)arg1 cancel:(BOOL)arg2 ;
-(void)_processPostTicksDelayIfNecessary:(double)arg1 ;
-(void)_processPostTicks;
-(void)_processPresentationModifierRequestsAndFlush;
-(void)_processTickExitRemovingEntries:(id)arg1 ;
-(void)scheduleAnimatorAdvancerToStart;
-(void)startAdvancingAnimationManager:(id)arg1 ;
-(BOOL)advancingOnCommitDisabled;
-(void)startAnimationAdvancerIfNeeded;
-(void)_commitSynchronously;
-(NSThread *)currentTickThread;
-(id)_requestPresentationModifierGroup:(/*^block*/id)arg1 ;
-(void)_cancelPresentationModifierGroupRequest:(id)arg1 ;
-(void)performBeforeExiting:(/*^block*/id)arg1 ;
-(void)_advanceWithTime:(double)arg1 ;
-(BOOL)_shouldKeepAnimationThreadAlive;
-(void)_displayLinkFire:(id)arg1 ;
-(void)_setCurrentMediaTime:(double)arg1 ;
-(void)_performWhenInProcessAnimationsTransactionCommits:(/*^block*/id)arg1 ;
-(BOOL)usesMainThreadExecution;
-(unsigned long long)executionMode;
-(void)setExecutionMode:(unsigned long long)arg1 ;
-(void)setAdvancingOnCommitDisabled:(BOOL)arg1 ;
-(NSThread *)animationThread;
-(void)setAnimationThread:(NSThread *)arg1 ;
-(NSRunLoop *)animationThreadRunLoop;
-(void)setAnimationThreadRunLoop:(NSRunLoop *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)animationThreadKeepAliveSemaphore;
-(void)setAnimationThreadKeepAliveSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

