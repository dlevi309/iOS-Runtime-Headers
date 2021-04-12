/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)bg1ShadowImage;
-(id)bg1Image;
-(double)bg1ShadowAlpha;
-(double)bg1Alpha;
-(id)bg1ShadowColor;
-(void)setUseExplicitGeometry:(BOOL)arg1 ;
-(double)bgInset;
-(id)bg1Color;
-(double)bg1ImageAlpha;
-(id)bg1ShadowEffect;
-(BOOL)bg1HasShadow;
-(id)initWithLayout:(id)arg1 ;
-(void)describeInto:(id)arg1 ;
-(void)configureShadowForBarStyle:(long long)arg1 ;
-(UIImage *)shadowImage;
-(double)topInset;
-(BOOL)shouldUseExplicitGeometry;
-(void)configureShadowImage:(id)arg1 ;
-(id)_colorForStyle:(long long)arg1 ;
-(void)configureImage:(id)arg1 forceTranslucent:(BOOL)arg2 ;
-(void)setTopInset:(double)arg1 ;
-(void)configureEffectForStyle:(long long)arg1 backgroundTintColor:(id)arg2 forceOpaque:(BOOL)arg3 ;
-(void)configureWithEffects:(id)arg1 ;
-(id)_blurWithStyle:(long long)arg1 tint:(id)arg2 ;
-(void)configureWithoutShadow;
-(void)configureAsTransparent;
-(void)configureBackgroundColor:(id)arg1 barStyle:(long long)arg2 translucent:(BOOL)arg3 ;
-(id)bg1Effects;
-(void)configureImage:(id)arg1 forceOpaque:(BOOL)arg2 backgroundTintColor:(id)arg3 ;
-(BOOL)hasBackgroundEffect;
-(void)configureImage:(id)arg1 forceOpaque:(BOOL)arg2 barStyle:(long long)arg3 ;
@end

