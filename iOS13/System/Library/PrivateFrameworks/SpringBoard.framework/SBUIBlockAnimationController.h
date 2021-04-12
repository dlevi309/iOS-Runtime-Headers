/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBUIWorkspaceAnimationController.h>

@class BSAnimationSettings;

@interface SBUIBlockAnimationController : SBUIWorkspaceAnimationController {

	BSAnimationSettings* _animationSettings;
	/*^block*/id _animationBlock;

}
-(void)_didComplete;
-(id)animationSettings;
-(void)_startAnimation;
-(id)initWithWorkspaceTransitionRequest:(id)arg1 animationSettings:(id)arg2 animationBlock:(/*^block*/id)arg3 ;
-(id)initWithWorkspaceTransitionRequest:(id)arg1 ;
@end

