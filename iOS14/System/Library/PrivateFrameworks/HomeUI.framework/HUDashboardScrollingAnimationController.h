/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUDashboardScrollingAnimationControllerDelegate;
@class UIView, UIViewPropertyAnimator;

@interface HUDashboardScrollingAnimationController : NSObject {

	id<HUDashboardScrollingAnimationControllerDelegate> _delegate;
	UIView* _animatingView;
	double _minimumMargin;
	UIViewPropertyAnimator* _animator;
	unsigned long long _visibilityState;

}

@property (nonatomic,retain) UIViewPropertyAnimator * animator;                                                //@synthesize animator=_animator - In the implementation block
@property (assign,nonatomic) unsigned long long visibilityState;                                               //@synthesize visibilityState=_visibilityState - In the implementation block
@property (assign,nonatomic,__weak) id<HUDashboardScrollingAnimationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * animatingView;                                                           //@synthesize animatingView=_animatingView - In the implementation block
@property (assign,nonatomic) double minimumMargin;                                                             //@synthesize minimumMargin=_minimumMargin - In the implementation block
-(UIViewPropertyAnimator *)animator;
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(id<HUDashboardScrollingAnimationControllerDelegate>)delegate;
-(UIView *)animatingView;
-(void)setVisibilityState:(unsigned long long)arg1 ;
-(void)updateWithCurrentMargin:(double)arg1 animated:(BOOL)arg2 ;
-(void)setDelegate:(id<HUDashboardScrollingAnimationControllerDelegate>)arg1 ;
-(unsigned long long)visibilityState;
-(id)initWithDelegate:(id)arg1 ;
-(void)setMinimumMargin:(double)arg1 ;
-(void)setAnimatingView:(UIView *)arg1 ;
-(double)minimumMargin;
@end

