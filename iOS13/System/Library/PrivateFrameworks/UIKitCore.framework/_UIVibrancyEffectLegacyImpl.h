/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)style;
-(void)setEffect:(UIVibrancyEffect *)arg1 ;
-(BOOL)invertAutomaticStyle;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)implementationForUserInterfaceStyle:(long long)arg1 ;
-(void)appendDescriptionTo:(id)arg1 ;
-(UIVibrancyEffect *)effect;
-(id)initWithStyle:(long long)arg1 invertAutomaticStyle:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 invertAutomaticStyle:(BOOL)arg2 ignoreSimpleVibrancy:(BOOL)arg3 ;
@end

