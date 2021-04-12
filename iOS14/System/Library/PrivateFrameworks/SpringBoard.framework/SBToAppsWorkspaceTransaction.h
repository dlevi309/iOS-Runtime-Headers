/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>
#import <libobjc.A.dylib/SBSceneLayoutWorkspaceTransactionDelegate.h>
#import <libobjc.A.dylib/FBSynchronizedTransactionDelegate.h>
#import <libobjc.A.dylib/SBUIAnimationControllerObserver.h>

@class UIApplicationSceneDeactivationAssertion, SBAppRepairTransaction, SBUIAnimationController, NSCountedSet, SBSceneLayoutWorkspaceTransaction, SBFloatingDockBehaviorAssertion, NSSet, NSString;

@interface SBToAppsWorkspaceTransaction : SBMainWorkspaceTransaction <SBSceneLayoutWorkspaceTransactionDelegate, FBSynchronizedTransactionDelegate, SBUIAnimationControllerObserver> {

	/*^block*/id _transitionCompletion;
	UIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	/*^block*/id _layoutTransitionContinuation;
	SBAppRepairTransaction* _appRepairTransaction;
	SBUIAnimationController* _animationController;
	NSCountedSet* _completionDelayRequesters;
	BOOL _underLockScreenInForeground;
	BOOL _gestureInitiated;
	unsigned long long _preactivationForegroundRunningApplicationCount;
	BOOL _toAndFromApplicationsDiffer;
	BOOL _retriedAfterVoluntaryExit;
	BOOL _applicationStateNeedsCapture;
	BOOL _dismissedOverlays;
	BOOL _shouldSerialDismissOverlays;
	BOOL _touchCancellationDisabled;
	SBSceneLayoutWorkspaceTransaction* _layoutTransaction;
	SBFloatingDockBehaviorAssertion* _floatingDockBehaviorAssertion;

}

@property (nonatomic,retain) SBFloatingDockBehaviorAssertion * floatingDockBehaviorAssertion;              //@synthesize floatingDockBehaviorAssertion=_floatingDockBehaviorAssertion - In the implementation block
@property (nonatomic,readonly) NSSet * toApplicationSceneEntities; 
@property (nonatomic,readonly) NSSet * fromApplicationSceneEntities; 
@property (nonatomic,readonly) SBSceneLayoutWorkspaceTransaction * layoutTransaction;                      //@synthesize layoutTransaction=_layoutTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canInterruptTransaction:(id)arg1 forTransitionRequest:(id)arg2 ;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2 ;
-(id)_transitionContext;
-(void)_willInterruptWithReason:(id)arg1 ;
-(BOOL)_shouldResignActiveForAnimation;
-(void)synchronizedTransactionReadyToCommit:(id)arg1 ;
-(BOOL)_shouldFailForChildTransaction:(id)arg1 ;
-(void)_willFailWithReason:(id)arg1 ;
-(BOOL)_canBeInterrupted;
-(void)_captureApplicationState;
-(id)animationController;
-(BOOL)shouldWatchdog:(id*)arg1 ;
-(BOOL)isGoingToCoverSheet;
-(void)performToAppStateCleanup;
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(NSSet *)fromApplicationSceneEntities;
-(void)_willBegin;
-(void)_configureAnimation;
-(void)_performPostAnimationTasksWithCompletion:(/*^block*/id)arg1 ;
-(void)_delayTransitionCompletionForRequester:(id)arg1 ;
-(void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(id)_setupAnimation;
-(BOOL)_hasPreAnimationTasks;
-(void)_didComplete;
-(SBFloatingDockBehaviorAssertion *)floatingDockBehaviorAssertion;
-(void)_acquireResignActiveAssertion;
-(BOOL)toAndFromAppsDiffer;
-(void)animationControllerDidRevealApplication:(id)arg1 ;
-(unsigned long long)_concurrentOverlayDismissalOptions;
-(void)_clearAnimation;
-(BOOL)_beginAnimation;
-(BOOL)isGoingToLauncher;
-(id)_customizedDescriptionProperties;
-(void)_handleApplicationDidNotChange:(id)arg1 ;
-(void)_beginAnimationIfNecessary;
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2 ;
-(id)_scenesToBackground;
-(id)createSceneEntityForHandle:(id)arg1 ;
-(void)_animationDidRevealApplication;
-(BOOL)_hasPostAnimationTasks;
-(void)transaction:(id)arg1 performTransitionWithCompletion:(/*^block*/id)arg2 ;
-(void)_endTransition;
-(BOOL)isFromMainSwitcher;
-(unsigned long long)_serialOverlayPreDismissalOptions;
-(void)_beginTransition;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)_stopDelayingTransitionCompletionForRequester:(id)arg1 ;
-(BOOL)_shouldSerialDismissOverlays;
-(void)setFloatingDockBehaviorAssertion:(SBFloatingDockBehaviorAssertion *)arg1 ;
-(void)_logForInterruptAttemptReason:(id)arg1 ;
-(void)_animationWillBegin:(BOOL)arg1 ;
-(void)_fireAndClearResultBlockIfNecessaryForFailure:(BOOL)arg1 ;
-(void)_setShouldSerialDismissOverlays:(BOOL)arg1 ;
-(void)_performPreAnimationTasksWithCompletion:(/*^block*/id)arg1 ;
-(void)_animationDidFinish;
-(SBSceneLayoutWorkspaceTransaction *)layoutTransaction;
-(void)_checkForAnimationCompletion;
-(double)watchdogTimeout;
-(BOOL)isGoingToMainSwitcher;
-(void)_didInterruptWithReason:(id)arg1 ;
-(void)_noteAnimationFinished;
-(void)activateApplications;
-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
-(void)_synchronizeWithSceneUpdates;
-(void)_completeCurrentTransition;
-(void)transactionWillBeginLayoutTransition:(id)arg1 ;
-(BOOL)_transitionWasCancelled;
-(void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(/*^block*/id)arg2 ;
-(BOOL)shouldRestoreSpringBoardContentOnCleanup;
-(BOOL)shouldAnimateOrientationChangeOnCompletion;
-(void)_relinquishResignActiveAssertion;
-(void)dealloc;
-(NSSet *)toApplicationSceneEntities;
@end

