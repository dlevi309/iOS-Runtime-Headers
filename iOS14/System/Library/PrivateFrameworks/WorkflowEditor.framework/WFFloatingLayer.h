/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <QuartzCore/CALayer.h>

@class WFGradient, CAGradientLayer, UITraitCollection;

@interface WFFloatingLayer : CALayer {

	BOOL _pressed;
	BOOL _colorizesShadow;
	BOOL _usePillCornerRadius;
	WFGradient* _gradient;
	double _scalingFactor;
	CAGradientLayer* _gradientLayer;
	UITraitCollection* _traitCollection;

}

@property (assign,nonatomic) BOOL colorizesShadow;                                //@synthesize colorizesShadow=_colorizesShadow - In the implementation block
@property (assign,nonatomic) BOOL usePillCornerRadius;                            //@synthesize usePillCornerRadius=_usePillCornerRadius - In the implementation block
@property (assign,nonatomic) double scalingFactor;                                //@synthesize scalingFactor=_scalingFactor - In the implementation block
@property (assign,nonatomic,__weak) CAGradientLayer * gradientLayer;              //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                 //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,copy) WFGradient * gradient;                                 //@synthesize gradient=_gradient - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                       //@synthesize pressed=_pressed - In the implementation block
-(UITraitCollection *)traitCollection;
-(void)layoutSublayers;
-(CAGradientLayer *)gradientLayer;
-(void)setPressed:(BOOL)arg1 ;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(id)init;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)scalingFactor;
-(void)updateBackgroundColor;
-(BOOL)isPressed;
-(void)setScalingFactor:(double)arg1 ;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
-(void)setGradient:(WFGradient *)arg1 ;
-(WFGradient *)gradient;
-(void)applyConfiguration:(id)arg1 ;
-(void)setUsePillCornerRadius:(BOOL)arg1 ;
-(void)updateShadowColor;
-(BOOL)colorizesShadow;
-(void)setColorizesShadow:(BOOL)arg1 ;
-(BOOL)usePillCornerRadius;
@end

