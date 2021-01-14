/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BSAnimationSettings *)animationSettings;
-(void)setAnimationSettings:(BSAnimationSettings *)arg1 ;
-(id<SBPasscodeKeyboardAnimatorDelegate>)delegate;
-(void)runAnimationWithState:(id)arg1 ;
-(void)performAnimation:(/*^block*/id)arg1 afterStarted:(/*^block*/id)arg2 onCompletion:(/*^block*/id)arg3 ;
-(void)prepareForAnimationWithState:(id)arg1 ;
-(void)completeAnimationWithState:(id)arg1 ;
-(void)setDelegate:(id<SBPasscodeKeyboardAnimatorDelegate>)arg1 ;
@end

