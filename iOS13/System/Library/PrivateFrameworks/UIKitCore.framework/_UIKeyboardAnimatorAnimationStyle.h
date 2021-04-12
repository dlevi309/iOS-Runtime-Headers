/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIInputViewAnimationStyle.h>

@protocol UIInputViewAnimationHost;
@class _UIKeyboardAnimator;

@interface _UIKeyboardAnimatorAnimationStyle : UIInputViewAnimationStyle {

	_UIKeyboardAnimator* _animator;
	id<UIInputViewAnimationHost> _currentHost;
	BOOL _currentFromPosition;

}
+(id)animationStyleWithAnimator:(id)arg1 ;
-(void)launchAnimation:(/*^block*/id)arg1 afterStarted:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 forHost:(id)arg4 fromCurrentPosition:(BOOL)arg5 ;
-(id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2 ;
-(void)defaultLaunchAnimation:(/*^block*/id)arg1 afterStarted:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end

