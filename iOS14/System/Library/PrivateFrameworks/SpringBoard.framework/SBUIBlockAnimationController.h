/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBUIWorkspaceAnimationController.h>

@class BSAnimationSettings;

@interface SBUIBlockAnimationController : SBUIWorkspaceAnimationController {

	BSAnimationSettings* _animationSettings;
	/*^block*/id _animationBlock;

}
-(id)animationSettings;
-(void)_startAnimation;
-(void)_didComplete;
-(id)initWithWorkspaceTransitionRequest:(id)arg1 animationSettings:(id)arg2 animationBlock:(/*^block*/id)arg3 ;
-(id)initWithWorkspaceTransitionRequest:(id)arg1 ;
@end

