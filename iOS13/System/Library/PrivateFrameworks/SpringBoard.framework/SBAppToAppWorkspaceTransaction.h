/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBToAppsWorkspaceTransaction.h>

@protocol OS_dispatch_group;
@class SBAutoPiPWorkspaceTransaction, SBUIAnimationController, NSObject;

@interface SBAppToAppWorkspaceTransaction : SBToAppsWorkspaceTransaction {

	SBAutoPiPWorkspaceTransaction* _autoPiPTransaction;
	SBUIAnimationController* _animation;
	unsigned long long _autoPIPTransitionOrder;
	NSObject*<OS_dispatch_group> _pipDuringSwitchTransitionTasksGroup;
	BOOL _preventWhitePointAdaptationStrengthUpdateOnComplete;

}

@property (assign,nonatomic) BOOL preventWhitePointAdaptationStrengthUpdateOnComplete;              //@synthesize preventWhitePointAdaptationStrengthUpdateOnComplete=_preventWhitePointAdaptationStrengthUpdateOnComplete - In the implementation block
-(void)dealloc;
-(id)debugDescription;
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(void)_didComplete;
-(BOOL)_transitionWasCancelled;
-(void)_beginTransition;
-(id)_setupAnimation;
-(id)initWithTransitionRequest:(id)arg1 ;
-(BOOL)canInterruptForTransitionRequest:(id)arg1 ;
-(unsigned long long)_serialOverlayPreDismissalOptions;
-(void)_clearAnimation;
-(BOOL)_shouldResignActiveForAnimation;
-(void)_animationWillBegin:(BOOL)arg1 ;
-(void)_cleanUpAfterAnimation;
-(BOOL)preventWhitePointAdaptationStrengthUpdateOnComplete;
-(id)_setupAnimationFrom:(id)arg1 to:(id)arg2 ;
-(void)_handleApplicationDidNotChange:(id)arg1 ;
-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(BOOL)shouldAnimateOrientationChangeOnCompletion;
-(BOOL)_hasPreAnimationTasks;
-(void)_performPreAnimationTasksWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_hasPostAnimationTasks;
-(void)_performPostAnimationTasksWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1 ;
-(void)_animationDidRevealApplication;
-(void)setPreventWhitePointAdaptationStrengthUpdateOnComplete:(BOOL)arg1 ;
@end

