/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class UIColor, CALayer, CAGradientLayer, _UIStatusBarCycleAnimation, UIAccessibilityHUDItem, NSString;

@interface _UIStatusBarActivityView : UIView <_UIStatusBarDisplayable> {

	BOOL _isSlow;
	UIColor* _color;
	CALayer* _mainLayer;
	CAGradientLayer* _barLayer;
	CALayer* _pointLayer;
	double _thickness;
	_UIStatusBarCycleAnimation* _cycleAnimation;

}

@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CALayer * mainLayer;                                                    //@synthesize mainLayer=_mainLayer - In the implementation block
@property (nonatomic,retain) CAGradientLayer * barLayer;                                             //@synthesize barLayer=_barLayer - In the implementation block
@property (nonatomic,retain) CALayer * pointLayer;                                                   //@synthesize pointLayer=_pointLayer - In the implementation block
@property (assign,nonatomic) double thickness;                                                       //@synthesize thickness=_thickness - In the implementation block
@property (nonatomic,retain) _UIStatusBarCycleAnimation * cycleAnimation;                            //@synthesize cycleAnimation=_cycleAnimation - In the implementation block
@property (assign,nonatomic) BOOL isSlow;                                                            //@synthesize isSlow=_isSlow - In the implementation block
@property (nonatomic,copy) UIColor * color;                                                          //@synthesize color=_color - In the implementation block
-(void)applyStyleAttributes:(id)arg1 ;
-(BOOL)isSlow;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCycleAnimation:(_UIStatusBarCycleAnimation *)arg1 ;
-(void)stopAnimatingWithCompletionHandler:(/*^block*/id)arg1 ;
-(UIColor *)color;
-(CALayer *)mainLayer;
-(CAGradientLayer *)barLayer;
-(void)setBarLayer:(CAGradientLayer *)arg1 ;
-(double)_thicknessForTraitCollection:(id)arg1 ;
-(double)thickness;
-(void)_stopAnimatingWithStoppingAnimations:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPointLayer:(CALayer *)arg1 ;
-(void)setThickness:(double)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(_UIStatusBarCycleAnimation *)cycleAnimation;
-(void)setMainLayer:(CALayer *)arg1 ;
-(void)startAnimating;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)setIsSlow:(BOOL)arg1 ;
-(CALayer *)pointLayer;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

