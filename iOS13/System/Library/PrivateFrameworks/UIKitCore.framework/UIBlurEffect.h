/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)effectWithStyle:(long long)arg1 ;
+(id)effectWithBlurRadius:(double)arg1 ;
+(id)_effectWithStyle:(long long)arg1 tintColor:(id)arg2 invertAutomaticStyle:(BOOL)arg3 ;
+(id)_effectWithTintColor:(id)arg1 ;
+(id)_effectWithStyle:(long long)arg1 invertAutomaticStyle:(BOOL)arg2 ;
+(id)_effectWithBlurRadius:(double)arg1 scale:(double)arg2 ;
+(id)_effectForLightMaterial:(id)arg1 darkMaterial:(id)arg2 bundle:(id)arg3 ;
+(id)_effectWithInfiniteRadius;
+(id)_effectWithInfiniteRadiusScale:(double)arg1 ;
+(void)_addBlurToEffectDescriptor:(id)arg1 blurRadius:(double)arg2 scale:(double)arg3 environment:(id)arg4 ;
+(id)_coreUIImplementationForStyle:(long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_style;
-(UIColor *)_tintColor;
-(id)_initWithImplementation:(id)arg1 ;
-(id)effectSettings;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)effectForUserInterfaceStyle:(long long)arg1 ;
-(BOOL)_invertAutomaticStyle;
-(BOOL)_canProvideVibrancyEffect;
-(BOOL)_canProvideCoreMaterialVibrancyEffect;
-(long long)_expectedUsage;
-(BOOL)_isATVStyle;
-(BOOL)_isAutomaticStyle;
@end

