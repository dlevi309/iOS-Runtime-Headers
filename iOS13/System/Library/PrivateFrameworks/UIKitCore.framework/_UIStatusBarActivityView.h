/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class UIColor, CALayer, CAGradientLayer, _UIStatusBarCycleAnimation, NSString, UIAccessibilityHUDItem;

@interface _UIStatusBarActivityView : UIView <_UIStatusBarDisplayable> {

	BOOL _isSlow;
	UIColor* _color;
	CALayer* _mainLayer;
	CAGradientLayer* _barLayer;
	CALayer* _pointLayer;
	double _thickness;
	_UIStatusBarCycleAnimation* _cycleAnimation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (nonatomic,retain) CALayer * mainLayer;                                                    //@synthesize mainLayer=_mainLayer - In the implementation block
@property (nonatomic,retain) CAGradientLayer * barLayer;                                             //@synthesize barLayer=_barLayer - In the implementation block
@property (nonatomic,retain) CALayer * pointLayer;                                                   //@synthesize pointLayer=_pointLayer - In the implementation block
@property (assign,nonatomic) double thickness;                                                       //@synthesize thickness=_thickness - In the implementation block
@property (nonatomic,retain) _UIStatusBarCycleAnimation * cycleAnimation;                            //@synthesize cycleAnimation=_cycleAnimation - In the implementation block
@property (assign,nonatomic) BOOL isSlow;                                                            //@synthesize isSlow=_isSlow - In the implementation block
@property (nonatomic,copy) UIColor * color;                                                          //@synthesize color=_color - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)_commonInit;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)applyStyleAttributes:(id)arg1 ;
-(void)startAnimating;
-(void)setIsSlow:(BOOL)arg1 ;
-(void)stopAnimatingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_stopAnimatingWithStoppingAnimations:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)_thicknessForTraitCollection:(id)arg1 ;
-(BOOL)isSlow;
-(CALayer *)mainLayer;
-(void)setMainLayer:(CALayer *)arg1 ;
-(CAGradientLayer *)barLayer;
-(void)setBarLayer:(CAGradientLayer *)arg1 ;
-(CALayer *)pointLayer;
-(void)setPointLayer:(CALayer *)arg1 ;
-(double)thickness;
-(void)setThickness:(double)arg1 ;
-(_UIStatusBarCycleAnimation *)cycleAnimation;
-(void)setCycleAnimation:(_UIStatusBarCycleAnimation *)arg1 ;
@end

