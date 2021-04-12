/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIColor;

@interface HACCChevronView : UIView {

	UIView* _leftGrabberView;
	UIView* _rightGrabberView;
	double _animationDuration;
	long long _state;
	UIColor* _color;
	double _alphaComponent;
	UIView* _tintView;
	UIView* _backgroundView;
	BOOL _unified;
	UIView* _alphaContainerView;

}

@property (assign,nonatomic) double animationDuration; 
@property (assign,nonatomic) long long state;                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIColor * color;                       //@synthesize color=_color - In the implementation block
-(id)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(BOOL)_setState:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(double)animationDuration;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)_setUnified:(BOOL)arg1 ;
-(void)_layoutGrabberView:(id)arg1 forState:(long long)arg2 ;
-(CGRect)_frameForGrabberView:(id)arg1 forState:(long long)arg2 unified:(BOOL)arg3 ;
-(CGAffineTransform)_transformForGrabberView:(id)arg1 forState:(long long)arg2 ;
-(void)configureForLightStyle;
@end

