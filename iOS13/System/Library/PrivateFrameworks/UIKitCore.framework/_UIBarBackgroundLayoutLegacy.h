/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIBarBackgroundLayout.h>

@class UIImage, UIColor, NSArray, UIVibrancyEffect;

@interface _UIBarBackgroundLayoutLegacy : _UIBarBackgroundLayout {

	long long _translucence;
	UIImage* _backgroundImage;
	UIColor* _backgroundTintColor;
	NSArray* _backgroundEffects;
	UIImage* _shadowImage;
	UIColor* _shadowColor;
	UIVibrancyEffect* _shadowEffect;
	BOOL _hasShadow;
	double _topInset;

}

@property (nonatomic,readonly) UIImage * shadowImage; 
@property (assign,nonatomic) BOOL disableTinting; 
@property (assign,nonatomic) double topInset;                         //@synthesize topInset=_topInset - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundEffect; 
-(UIImage *)shadowImage;
-(void)describeInto:(id)arg1 ;
-(void)configureWithoutShadow;
-(BOOL)shouldUseExplicitGeometry;
-(double)bgInset;
-(BOOL)bg1HasShadow;
-(id)bg1ShadowImage;
-(id)bg1Effects;
-(id)bg1Image;
-(id)bg1Color;
-(double)bg1Alpha;
-(double)bg1ImageAlpha;
-(id)bg1ShadowEffect;
-(id)bg1ShadowColor;
-(double)bg1ShadowAlpha;
-(void)configureWithEffects:(id)arg1 ;
-(void)configureAsTransparent;
-(void)configureImage:(id)arg1 forceOpaque:(BOOL)arg2 barStyle:(long long)arg3 ;
-(void)configureEffectForStyle:(long long)arg1 backgroundTintColor:(id)arg2 forceOpaque:(BOOL)arg3 ;
-(void)configureShadowForBarStyle:(long long)arg1 ;
-(double)topInset;
-(void)configureImage:(id)arg1 forceTranslucent:(BOOL)arg2 ;
-(void)configureImage:(id)arg1 forceOpaque:(BOOL)arg2 backgroundTintColor:(id)arg3 ;
-(void)configureShadowImage:(id)arg1 ;
-(void)setTopInset:(double)arg1 ;
-(BOOL)hasBackgroundEffect;
-(id)initWithLayout:(id)arg1 ;
-(void)setUseExplicitGeometry:(BOOL)arg1 ;
-(id)_colorForStyle:(long long)arg1 ;
-(id)_blurWithStyle:(long long)arg1 tint:(id)arg2 ;
-(void)configureBackgroundColor:(id)arg1 barStyle:(long long)arg2 translucent:(BOOL)arg3 ;
@end

