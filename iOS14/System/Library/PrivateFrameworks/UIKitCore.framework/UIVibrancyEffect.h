/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_darkVibrantEffectWithLightenColor:(id)arg1 dodgeColor:(id)arg2 compositingColor:(id)arg3 ;
+(id)darkVibrantEffectWithDodgeColor:(id)arg1 lightenColor:(id)arg2 compositingColor:(id)arg3 ;
+(id)_lightVibrantEffectWithDarkenColor:(id)arg1 burnColor:(id)arg2 compositingColor:(id)arg3 ;
+(id)lightVibrantEffectWithBurnColor:(id)arg1 darkenColor:(id)arg2 compositingColor:(id)arg3 ;
+(id)_vibrancyEntryWithType:(id)arg1 inputColor1:(id)arg2 inputColor2:(id)arg3 inputReversed:(BOOL)arg4 ;
+(id)_vibrantEffectForLightMaterial:(id)arg1 darkMaterial:(id)arg2 vibrancyStyle:(long long)arg3 ;
+(id)vibrantEffectWithCompositingMode:(long long)arg1 compositingColor:(id)arg2 ;
+(id)_effectForBlurEffect:(id)arg1 vibrancyStyle:(long long)arg2 ;
+(id)_vibrantEffectWithCAColorMatrix:(CAColorMatrix)arg1 alpha:(double)arg2 ;
+(id)_effectWithStyle:(long long)arg1 ignoreSimpleVibrancy:(BOOL)arg2 ;
+(id)effectForBlurEffect:(id)arg1 style:(long long)arg2 ;
+(id)vibrantMediumShadowEffect;
+(id)vibrantChromeShadowEffect;
+(id)vibrantHeavyShadowEffect;
+(id)effectForBlurEffect:(id)arg1 ;
+(id)_vibrantShadowEffect;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)effectForUserInterfaceStyle:(long long)arg1 ;
-(id)init;
-(id)_initWithImplementation:(id)arg1 ;
-(long long)_vibrancyStyle;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isATVStyle;
-(id)description;
-(long long)_expectedUsage;
-(long long)_blurStyle;
-(unsigned long long)hash;
-(id)_reduceTransparencyEffectConfig;
-(id)effectConfig;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isAutomaticStyle;
-(id)effectConfigForReducedTransperancy:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_effectReplacingTintColor:(id)arg1 ;
-(id)effectConfigForQuality:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

