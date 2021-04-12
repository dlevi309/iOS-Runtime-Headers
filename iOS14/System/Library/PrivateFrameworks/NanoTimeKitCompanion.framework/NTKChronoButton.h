/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImageView, UIColor;

@interface NTKChronoButton : UIControl {

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
-(void)_updateColors;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)ringColor;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIColor *)color;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setRingColor:(UIColor *)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(UIColor *)highlightColor;
-(void)setTouchEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setSwapColor:(UIColor *)arg1 ;
-(void)setRingSwapColor:(UIColor *)arg1 ;
-(void)_performTouchAnimationThroughColor:(id)arg1 toColor:(id)arg2 toRingColor:(id)arg3 ;
-(UIColor *)swapColor;
-(UIColor *)ringSwapColor;
-(UIEdgeInsets)touchEdgeInsets;
@end

