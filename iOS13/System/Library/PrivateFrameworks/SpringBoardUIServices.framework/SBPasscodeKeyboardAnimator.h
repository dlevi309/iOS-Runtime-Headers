/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <UIKitCore/_UIKeyboardAnimator.h>

@protocol SBPasscodeKeyboardAnimatorDelegate;
@class BSAnimationSettings;

@interface SBPasscodeKeyboardAnimator : _UIKeyboardAnimator {

	BSAnimationSettings* _animationSettings;
	id<SBPasscodeKeyboardAnimatorDelegate> _delegate;

}

@property (nonatomic,retain) BSAnimationSettings * animationSettings;                             //@synthesize animationSettings=_animationSettings - In the implementation block
@property (assign,nonatomic,__weak) id<SBPasscodeKeyboardAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SBPasscodeKeyboardAnimatorDelegate>)delegate;
-(void)setDelegate:(id<SBPasscodeKeyboardAnimatorDelegate>)arg1 ;
-(BSAnimationSettings *)animationSettings;
-(void)setAnimationSettings:(BSAnimationSettings *)arg1 ;
-(void)performAnimation:(/*^block*/id)arg1 afterStarted:(/*^block*/id)arg2 onCompletion:(/*^block*/id)arg3 ;
-(void)prepareForAnimationWithState:(id)arg1 ;
-(void)runAnimationWithState:(id)arg1 ;
-(void)completeAnimationWithState:(id)arg1 ;
@end

