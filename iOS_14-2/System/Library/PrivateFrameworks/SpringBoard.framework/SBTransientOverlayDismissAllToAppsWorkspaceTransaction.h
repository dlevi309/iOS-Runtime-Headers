/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBToAppsWorkspaceTransaction.h>

@protocol BSInvalidatable;
@class NSArray, SBAutoPiPWorkspaceTransaction;

@interface SBTransientOverlayDismissAllToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction {

	NSArray* _switcherTransitioningTransientOverlayViewControllers;
	SBAutoPiPWorkspaceTransaction* _autoPiPTransaction;
	id<BSInvalidatable> _pipWindowLevelOverrideAssertionInvalidatable;
	BOOL _isUsingSwitcherAnimation;
	BOOL _beganDismissingTransientOverlays;

}
-(BOOL)_shouldResignActiveForAnimation;
-(BOOL)_canBeInterrupted;
-(BOOL)_shouldUseSwitcherDismissalAnimationForTransientOverlayViewController:(id)arg1 ;
-(void)_begin;
-(id)_setupAnimation;
-(void)_didComplete;
-(unsigned long long)_concurrentOverlayDismissalOptions;
-(void)_performDismissal;
-(BOOL)canInterruptForTransitionRequest:(id)arg1 ;
-(void)_handleDismissOverlaysCompletion;
-(unsigned long long)_serialOverlayPreDismissalOptions;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)_logForInterruptAttemptReason:(id)arg1 ;
-(BOOL)_shouldAnimateTransition;
-(void)dealloc;
@end

