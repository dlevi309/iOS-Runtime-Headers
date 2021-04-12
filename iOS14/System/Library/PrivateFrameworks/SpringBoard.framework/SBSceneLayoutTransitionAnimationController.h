/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBUIWorkspaceAnimationController.h>

@class SBSceneLayoutViewController, SBUIBlockAnimationController;

@interface SBSceneLayoutTransitionAnimationController : SBUIWorkspaceAnimationController {

	SBSceneLayoutViewController* _layoutController;
	SBUIBlockAnimationController* _blockAnimation;

}
-(BOOL)_canBeInterrupted;
-(id)animationSettings;
-(id)containerView;
-(unsigned long long)_serialOverlayPreDismissalOptions;
-(id)_getTransitionWindow;
-(id)initWithWorkspaceTransitionRequest:(id)arg1 ;
-(id)initWithTransitionContextProvider:(id)arg1 layoutController:(id)arg2 animationSettings:(id)arg3 animationBlock:(/*^block*/id)arg4 ;
-(id)initWithTransitionContextProvider:(id)arg1 layoutController:(id)arg2 animationSettings:(id)arg3 stepped:(BOOL)arg4 animationBlock:(/*^block*/id)arg5 ;
@end

