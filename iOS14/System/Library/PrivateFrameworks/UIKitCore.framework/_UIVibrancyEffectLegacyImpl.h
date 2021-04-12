/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class UIVibrancyEffect;

@interface _UIVibrancyEffectLegacyImpl : _UIVibrancyEffectImpl {

	long long _style;
	BOOL _invertAutomaticStyle;
	BOOL _ignoreSimpleVibrancy;
	UIVibrancyEffect* _effect;

}

@property (assign,nonatomic) UIVibrancyEffect * effect;              //@synthesize effect=_effect - In the implementation block
-(void)appendDescriptionTo:(id)arg1 ;
-(void)setEffect:(UIVibrancyEffect *)arg1 ;
-(id)implementationForUserInterfaceStyle:(long long)arg1 ;
-(UIVibrancyEffect *)effect;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)invertAutomaticStyle;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 invertAutomaticStyle:(BOOL)arg2 ignoreSimpleVibrancy:(BOOL)arg3 ;
-(unsigned long long)hash;
-(id)initWithStyle:(long long)arg1 invertAutomaticStyle:(BOOL)arg2 ;
-(long long)style;
-(BOOL)isEqual:(id)arg1 ;
@end

