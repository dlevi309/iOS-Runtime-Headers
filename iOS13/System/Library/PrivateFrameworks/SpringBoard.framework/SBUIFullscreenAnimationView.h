/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIView.h>

@protocol SBUIFullscreenAnimationViewDelegate;
@interface SBUIFullscreenAnimationView : UIView {

	id<SBUIFullscreenAnimationViewDelegate> _delegate;
	BOOL _animating;

}

@property (assign,nonatomic,__weak) id<SBUIFullscreenAnimationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL animating;                                                     //@synthesize animating=_animating - In the implementation block
-(id<SBUIFullscreenAnimationViewDelegate>)delegate;
-(void)setDelegate:(id<SBUIFullscreenAnimationViewDelegate>)arg1 ;
-(void)beginTransition;
-(void)endTransition;
-(void)setToView:(id)arg1 ;
-(void)setFromView:(id)arg1 ;
-(void)_animationEnded;
-(BOOL)animating;
-(void)_animationBegan;
-(void)_notifyDelegateAnimationBeganWithDuration:(double)arg1 delay:(double)arg2 ;
-(void)_notifyDelegateThatAnimationIsDone;
@end

