/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIVisualEffect.h>

@class _UIVibrancyEffectImpl;

@interface UIVibrancyEffect : UIVisualEffect {

	_UIVibrancyEffectImpl* _impl;

}

@property (getter=_vibrancyStyle,nonatomic,readonly) long long _vibrancyStyle; 
+(BOOL)supportsSecureCoding;
+(id)effectForBlurEffect:(id)arg1 style:(long long)arg2 ;
+(id)_effectForBlurEffect:(id)arg1 vibrancyStyle:(long long)arg2 ;
+(id)effectForBlurEffect:(id)arg1 ;
+(id)_vibrantEffectWithCAColorMatrix:(CAColorMatrix)arg1 alpha:(double)arg2 ;
+(id)darkVibrantEffectWithDodgeColor:(id)arg1 lightenColor:(id)arg2 compositingColor:(id)arg3 ;
+(id)lightVibrantEffectWithBurnColor:(id)arg1 darkenColor:(id)arg2 compositingColor:(id)arg3 ;
+(id)vibrantEffectWithCompositingMode:(long long)arg1 compositingColor:(id)arg2 ;
+(id)_darkVibrantEffectWithLightenColor:(id)arg1 dodgeColor:(id)arg2 compositingColor:(id)arg3 ;
+(id)_lightVibrantEffectWithDarkenColor:(id)arg1 burnColor:(id)arg2 compositingColor:(id)arg3 ;
+(id)_vibrantShadowEffect;
+(id)vibrantMediumShadowEffect;
+(id)vibrantHeavyShadowEffect;
+(id)vibrantChromeShadowEffect;
+(id)_vibrantEffectForLightMaterial:(id)arg1 darkMaterial:(id)arg2 vibrancyStyle:(long long)arg3 ;
+(id)_effectWithStyle:(long long)arg1 ignoreSimpleVibrancy:(BOOL)arg2 ;
+(id)_vibrancyEntryWithType:(id)arg1 inputColor1:(id)arg2 inputColor2:(id)arg3 inputReversed:(BOOL)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithImplementation:(id)arg1 ;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)effectForUserInterfaceStyle:(long long)arg1 ;
-(long long)_expectedUsage;
-(BOOL)_isATVStyle;
-(BOOL)_isAutomaticStyle;
-(id)effectConfig;
-(id)effectConfigForQuality:(long long)arg1 ;
-(id)effectConfigForReducedTransperancy:(BOOL)arg1 ;
-(id)_reduceTransparencyEffectConfig;
-(id)_effectReplacingTintColor:(id)arg1 ;
-(long long)_blurStyle;
-(long long)_vibrancyStyle;
@end

