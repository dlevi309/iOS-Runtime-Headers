/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/

#import <ClockKitUI/ClockKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImageView, UIColor;

@interface CLKUIChronoButton : UIControl {

	UIImageView* _ringView;
	UIImageView* _fillView;
	CGPoint _originalCenter;
	UIColor* _color;
	UIColor* _swapColor;
	UIColor* _highlightColor;
	UIColor* _ringColor;
	UIColor* _ringSwapColor;
	UIEdgeInsets _touchEdgeInsets;

}

@property (nonatomic,retain) UIColor * color;                           //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIColor * swapColor;                       //@synthesize swapColor=_swapColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                  //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) UIColor * ringColor;                       //@synthesize ringColor=_ringColor - In the implementation block
@property (nonatomic,retain) UIColor * ringSwapColor;                   //@synthesize ringSwapColor=_ringSwapColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets touchEdgeInsets;              //@synthesize touchEdgeInsets=_touchEdgeInsets - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)_updateColors;
-(void)setRingColor:(UIColor *)arg1 ;
-(UIColor *)ringColor;
-(void)_performTouchAnimationThroughColor:(id)arg1 toColor:(id)arg2 toRingColor:(id)arg3 ;
-(UIColor *)swapColor;
-(void)setSwapColor:(UIColor *)arg1 ;
-(UIColor *)ringSwapColor;
-(void)setRingSwapColor:(UIColor *)arg1 ;
-(UIEdgeInsets)touchEdgeInsets;
-(void)setTouchEdgeInsets:(UIEdgeInsets)arg1 ;
@end

