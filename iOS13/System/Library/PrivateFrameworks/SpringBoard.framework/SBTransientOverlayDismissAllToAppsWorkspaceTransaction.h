/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBToAppsWorkspaceTransaction.h>

@class NSArray, SBAutoPiPWorkspaceTransaction;

@interface SBTransientOverlayDismissAllToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction {

	NSArray* _switcherTransitioningTransientOverlayViewControllers;
	SBAutoPiPWorkspaceTransaction* _autoPiPTransaction;
	BOOL _isUsingSwitcherAnimation;

}
-(void)dealloc;
-(void)_begin;
-(void)_didComplete;
-(id)_setupAnimation;
-(id)initWithTransitionRequest:(id)arg1 ;
-(unsigned long long)_serialOverlayPreDismissalOptions;
-(void)_handleDismissOverlaysCompletion;
-(BOOL)_shouldResignActiveForAnimation;
-(void)_performDismissal;
-(BOOL)_shouldUseSwitcherDismissalAnimationForTransientOverlayViewController:(id)arg1 ;
-(BOOL)_shouldAnimateTransition;
@end

