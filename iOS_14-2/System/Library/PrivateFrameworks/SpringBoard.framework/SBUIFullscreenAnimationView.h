/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFromView:(id)arg1 ;
-(void)endTransition;
-(void)beginTransition;
-(id<SBUIFullscreenAnimationViewDelegate>)delegate;
-(BOOL)animating;
-(void)setDelegate:(id<SBUIFullscreenAnimationViewDelegate>)arg1 ;
-(void)_animationEnded;
-(void)setToView:(id)arg1 ;
-(void)_animationBegan;
-(void)_notifyDelegateAnimationBeganWithDuration:(double)arg1 delay:(double)arg2 ;
-(void)_notifyDelegateThatAnimationIsDone;
@end

