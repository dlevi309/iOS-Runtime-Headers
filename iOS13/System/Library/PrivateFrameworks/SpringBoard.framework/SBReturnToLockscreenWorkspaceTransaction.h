/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBActivateAppUnderLockScreenWorkspaceTransaction.h>

@class SBApplicationSceneEntity;

@interface SBReturnToLockscreenWorkspaceTransaction : SBActivateAppUnderLockScreenWorkspaceTransaction {

	SBApplicationSceneEntity* _fromAppSceneEntity;
	BOOL _workspaceAlreadyResumed;
	BOOL _animatedAppDeactivation;

}
-(id)debugDescription;
-(void)_didComplete;
-(id)_setupAnimation;
-(id)initWithTransitionRequest:(id)arg1 toLockScreenEnvironment:(id)arg2 ;
-(unsigned long long)_serialOverlayPreDismissalOptions;
-(void)_animationWillBegin:(BOOL)arg1 ;
-(void)_animationDidFinish;
@end

