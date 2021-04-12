/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_shouldResignActiveForAnimation;
-(BOOL)_canBeInterrupted;
-(id)_setupAnimationFrom:(id)arg1 to:(id)arg2 ;
-(void)_begin;
-(void)_performPostAnimationTasksWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1 ;
-(id)_setupAnimation;
-(BOOL)_hasPreAnimationTasks;
-(void)_didComplete;
-(unsigned long long)_concurrentOverlayDismissalOptions;
-(void)_clearAnimation;
-(id)debugDescription;
-(void)_handleApplicationDidNotChange:(id)arg1 ;
-(void)_cleanUpAfterAnimation;
-(BOOL)canInterruptForTransitionRequest:(id)arg1 ;
-(BOOL)preventWhitePointAdaptationStrengthUpdateOnComplete;
-(void)_animationDidRevealApplication;
-(BOOL)_hasPostAnimationTasks;
-(unsigned long long)_serialOverlayPreDismissalOptions;
-(void)_beginTransition;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)_animationWillBegin:(BOOL)arg1 ;
-(void)_performPreAnimationTasksWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(BOOL)_transitionWasCancelled;
-(BOOL)shouldAnimateOrientationChangeOnCompletion;
-(void)setPreventWhitePointAdaptationStrengthUpdateOnComplete:(BOOL)arg1 ;
-(void)dealloc;
@end

