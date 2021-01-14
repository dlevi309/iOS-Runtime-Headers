/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBActivateAppUnderLockScreenWorkspaceTransaction.h>

@class SBApplicationSceneEntity;

@interface SBReturnToLockscreenWorkspaceTransaction : SBActivateAppUnderLockScreenWorkspaceTransaction {

	SBApplicationSceneEntity* _fromAppSceneEntity;
	BOOL _workspaceAlreadyResumed;
	BOOL _animatedAppDeactivation;

}
-(id)_setupAnimation;
-(void)_didComplete;
-(id)debugDescription;
-(unsigned long long)_serialOverlayPreDismissalOptions;
-(void)_animationWillBegin:(BOOL)arg1 ;
-(void)_animationDidFinish;
-(id)initWithTransitionRequest:(id)arg1 toLockScreenEnvironment:(id)arg2 ;
@end

