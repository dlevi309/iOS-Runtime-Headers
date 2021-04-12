/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	BOOL _shouldDismissOverlays;
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
-(void)dealloc;
-(void)_willBegin;
-(BOOL)_canBeInterrupted;
-(BOOL)_shouldFailForChildTransaction:(id)arg1 ;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(id)_customizedDescriptionProperties;
-(void)_willFailWithReason:(id)arg1 ;
-(void)_didComplete;
-(void)_willInterruptWithReason:(id)arg1 ;
-(void)_didInterruptWithReason:(id)arg1 ;
-(double)watchdogTimeout;
-(BOOL)shouldWatchdog:(id*)arg1 ;
-(id)_transitionContext;
-(id)animationController;
-(BOOL)_beginAnimation;
-(void)synchronizedTransactionReadyToCommit:(id)arg1 ;
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2 ;
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2 ;
-(BOOL)_transitionWasCancelled;
-(void)_beginAnimationIfNecessary;
-(void)_beginTransition;
-(void)_endTransition;
-(id)_setupAnimation;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)_logForInterruptAttemptReason:(id)arg1 ;
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)animationControllerDidRevealApplication:(id)arg1 ;
-(NSSet *)toApplicationSceneEntities;
-(void)_setShouldDismissOverlays:(BOOL)arg1 ;
-(id)createSceneEntityForHandle:(id)arg1 ;
-(void)transactionWillBeginLayoutTransition:(id)arg1 ;
-(void)transaction:(id)arg1 performTransitionWithCompletion:(/*^block*/id)arg2 ;
-(void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(/*^block*/id)arg2 ;
-(void)activateApplications;
-(void)_relinquishResignActiveAssertion;
-(unsigned long long)_serialOverlayPreDismissalOptions;
-(void)_delayTransitionCompletionForRequester:(id)arg1 ;
-(void)_stopDelayingTransitionCompletionForRequester:(id)arg1 ;
-(void)_clearAnimation;
-(BOOL)_shouldResignActiveForAnimation;
-(BOOL)isGoingToMainSwitcher;
-(NSSet *)fromApplicationSceneEntities;
-(id)_scenesToBackground;
-(SBSceneLayoutWorkspaceTransaction *)layoutTransaction;
-(void)_animationWillBegin:(BOOL)arg1 ;
-(void)_animationDidFinish;
-(BOOL)isGoingToLauncher;
-(BOOL)toAndFromAppsDiffer;
-(void)_handleApplicationDidNotChange:(id)arg1 ;
-(void)performToAppStateCleanup;
-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(BOOL)shouldAnimateOrientationChangeOnCompletion;
-(BOOL)_hasPreAnimationTasks;
-(void)_performPreAnimationTasksWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_hasPostAnimationTasks;
-(void)_performPostAnimationTasksWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1 ;
-(void)_animationDidRevealApplication;
-(BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
-(void)_captureApplicationState;
-(void)_fireAndClearResultBlockIfNecessaryForFailure:(BOOL)arg1 ;
-(BOOL)shouldRestoreSpringBoardContentOnCleanup;
-(SBFloatingDockBehaviorAssertion *)floatingDockBehaviorAssertion;
-(void)setFloatingDockBehaviorAssertion:(SBFloatingDockBehaviorAssertion *)arg1 ;
-(BOOL)isGoingToCoverSheet;
-(void)_completeCurrentTransition;
-(void)_checkForAnimationCompletion;
-(void)_noteAnimationFinished;
-(void)_acquireResignActiveAssertion;
-(void)_synchronizeWithSceneUpdates;
-(void)_configureAnimation;
-(BOOL)isFromMainSwitcher;
-(BOOL)_shouldDismissOverlays;
@end

