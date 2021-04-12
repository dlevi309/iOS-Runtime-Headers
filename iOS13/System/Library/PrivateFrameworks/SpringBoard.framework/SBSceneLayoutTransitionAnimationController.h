/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBUIWorkspaceAnimationController.h>

@class SBSceneLayoutViewController, SBUIBlockAnimationController;

@interface SBSceneLayoutTransitionAnimationController : SBUIWorkspaceAnimationController {

	SBSceneLayoutViewController* _layoutController;
	SBUIBlockAnimationController* _blockAnimation;

}
-(BOOL)_canBeInterrupted;
-(id)containerView;
-(id)animationSettings;
-(id)_getTransitionWindow;
-(id)initWithWorkspaceTransitionRequest:(id)arg1 ;
-(id)initWithTransitionContextProvider:(id)arg1 layoutController:(id)arg2 animationSettings:(id)arg3 animationBlock:(/*^block*/id)arg4 ;
-(unsigned long long)_serialOverlayPreDismissalOptions;
-(id)initWithTransitionContextProvider:(id)arg1 layoutController:(id)arg2 animationSettings:(id)arg3 stepped:(BOOL)arg4 animationBlock:(/*^block*/id)arg5 ;
@end

