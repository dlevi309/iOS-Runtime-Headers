/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol _PKColorAlphaSliderDelegate;
@class UIColor, UIView, CAGradientLayer, _PKCheckerGridView, _PKSliderKnobView;

@interface _PKColorAlphaSlider : UIControl {

	id<_PKColorAlphaSliderDelegate> _delegate;
	UIColor* _color;
	long long _colorUserInterfaceStyle;
	double _minAlpha;
	double _maxAlpha;
	UIView* _colorView;
	CAGradientLayer* _colorViewMaskLayer;
	_PKCheckerGridView* _alphaGridView;
	CAGradientLayer* _alphaGridViewMaskLayer;
	_PKSliderKnobView* _sliderKnobView;

}

@property (nonatomic,retain) UIView * colorView;                                           //@synthesize colorView=_colorView - In the implementation block
@property (nonatomic,retain) CAGradientLayer * colorViewMaskLayer;                         //@synthesize colorViewMaskLayer=_colorViewMaskLayer - In the implementation block
@property (nonatomic,retain) _PKCheckerGridView * alphaGridView;                           //@synthesize alphaGridView=_alphaGridView - In the implementation block
@property (nonatomic,retain) CAGradientLayer * alphaGridViewMaskLayer;                     //@synthesize alphaGridViewMaskLayer=_alphaGridViewMaskLayer - In the implementation block
@property (nonatomic,retain) _PKSliderKnobView * sliderKnobView;                           //@synthesize sliderKnobView=_sliderKnobView - In the implementation block
@property (assign,nonatomic,__weak) id<_PKColorAlphaSliderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * color;                                              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long colorUserInterfaceStyle;                            //@synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle - In the implementation block
@property (assign,nonatomic) double minAlpha;                                              //@synthesize minAlpha=_minAlpha - In the implementation block
@property (assign,nonatomic) double maxAlpha;                                              //@synthesize maxAlpha=_maxAlpha - In the implementation block
+(id)rgbaColorFromColorIfPossible:(id)arg1 ;
+(void)_layoutGradientMaskLayer:(id)arg1 frame:(CGRect)arg2 isReversed:(BOOL)arg3 ;
-(id<_PKColorAlphaSliderDelegate>)delegate;
-(void)setDelegate:(id<_PKColorAlphaSliderDelegate>)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(double)minAlpha;
-(double)maxAlpha;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(long long)colorUserInterfaceStyle;
-(long long)_uiColorUserInterfaceStyle;
-(void)setColor:(id)arg1 animated:(BOOL)arg2 ;
-(void)setMinAlpha:(double)arg1 ;
-(void)setMaxAlpha:(double)arg1 ;
-(void)_colorViewTapGestureHandler:(id)arg1 ;
-(void)didPanSliderKnob:(id)arg1 ;
-(_PKSliderKnobView *)sliderKnobView;
-(void)_setColorNoLayout:(id)arg1 ;
-(UIView *)colorView;
-(CAGradientLayer *)colorViewMaskLayer;
-(_PKCheckerGridView *)alphaGridView;
-(CAGradientLayer *)alphaGridViewMaskLayer;
-(CGRect)_knobViewFrameForColorAlpha:(double)arg1 ;
-(double)colorAlphaForSliderKnobXPosition:(double)arg1 ;
-(double)_sliderKnobViewWidth;
-(double)sliderKnobXPositionForColorAlpha:(double)arg1 ;
-(void)setColorView:(UIView *)arg1 ;
-(void)setColorViewMaskLayer:(CAGradientLayer *)arg1 ;
-(void)setAlphaGridView:(_PKCheckerGridView *)arg1 ;
-(void)setAlphaGridViewMaskLayer:(CAGradientLayer *)arg1 ;
-(void)setSliderKnobView:(_PKSliderKnobView *)arg1 ;
@end

