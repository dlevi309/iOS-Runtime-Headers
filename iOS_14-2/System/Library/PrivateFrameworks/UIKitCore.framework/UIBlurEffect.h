/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIVisualEffect.h>

@class _UIBlurEffectImpl, UIColor;

@interface UIBlurEffect : UIVisualEffect {

	_UIBlurEffectImpl* _impl;

}

@property (nonatomic,readonly) BOOL _canProvideVibrancyEffect; 
@property (nonatomic,readonly) BOOL _canProvideCoreMaterialVibrancyEffect; 
@property (nonatomic,readonly) long long _style; 
@property (nonatomic,readonly) UIColor * _tintColor; 
@property (nonatomic,readonly) BOOL _invertAutomaticStyle; 
+(BOOL)supportsSecureCoding;
+(id)_effectWithStyle:(long long)arg1 tintColor:(id)arg2 invertAutomaticStyle:(BOOL)arg3 ;
+(id)_effectForLightMaterial:(id)arg1 darkMaterial:(id)arg2 bundle:(id)arg3 ;
+(id)_effectWithStyle:(long long)arg1 invertAutomaticStyle:(BOOL)arg2 ;
+(id)effectWithStyle:(long long)arg1 ;
+(id)_effectWithInfiniteRadiusScale:(double)arg1 ;
+(id)effectWithBlurRadius:(double)arg1 ;
+(id)_effectWithBlurRadius:(double)arg1 scale:(double)arg2 ;
+(id)_effectWithInfiniteRadius;
+(id)_effectWithTintColor:(id)arg1 ;
-(long long)_style;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)effectForUserInterfaceStyle:(long long)arg1 ;
-(id)init;
-(id)_initWithImplementation:(id)arg1 ;
-(UIColor *)_tintColor;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isATVStyle;
-(id)description;
-(long long)_expectedUsage;
-(BOOL)_canProvideCoreMaterialVibrancyEffect;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)effectSettings;
-(BOOL)_isAutomaticStyle;
-(BOOL)_canProvideVibrancyEffect;
-(BOOL)_invertAutomaticStyle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

