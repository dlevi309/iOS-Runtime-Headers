/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
*/

#import <LocalAuthenticationPrivateUI/LocalAuthenticationPrivateUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIView;

@interface LAUIRadialPingView : UIView {

	UIColor* _color;
	UIView* _container;
	UIView* _primary;
	array<(anonymous namespace)::blur_container, 2> _blurs;
	periodic_animation_state _pulse;
	BOOL _animating_dirty;
	unsigned char _animating_counter;
	BOOL _animating;

}

@property (assign,getter=isAnimating,nonatomic) BOOL animating;              //@synthesize animating=_animating - In the implementation block
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(BOOL)isAnimating;
-(void)dealloc;
-(void)_updateViewsWithColor;
-(void)_updateAnimatingAnimated:(BOOL)arg1 ;
-(void)_updateExpandForBlurAtIndex:(unsigned long long)arg1 withDelay:(double)arg2 ;
-(void)_startExpandWithDelay:(double)arg1 ;
-(void)_endExpand;
-(void)_attachPulseAnimationWithDelay:(double)arg1 ;
-(void)_attachExpandAnimationToContainer:(blur_container*)arg1 withDelay:(double)arg2 ;
-(void)_setPulse:(BOOL)arg1 withDelay:(double)arg2 ;
-(void)_setExpand:(BOOL)arg1 forBlurAtIndex:(unsigned long long)arg2 withDelay:(double)arg3 ;
@end

