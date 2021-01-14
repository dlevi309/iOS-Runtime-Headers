/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIBlurEffectImpl.h>

@class UIColor, UIBlurEffect;

@interface _UIBlurEffectLegacyImpl : _UIBlurEffectImpl {

	long long _style;
	UIColor* _tintColor;
	BOOL _invertAutomaticStyle;
	UIBlurEffect* _effect;

}

@property (assign,nonatomic) UIBlurEffect * effect;              //@synthesize effect=_effect - In the implementation block
-(void)appendDescriptionTo:(id)arg1 ;
-(void)setEffect:(UIBlurEffect *)arg1 ;
-(id)implementationForUserInterfaceStyle:(long long)arg1 ;
-(UIBlurEffect *)effect;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)canProvideVibrancyEffect;
-(BOOL)invertAutomaticStyle;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 tintColor:(id)arg2 invertAutomaticStyle:(BOOL)arg3 ;
-(unsigned long long)hash;
-(id)tintColor;
-(long long)style;
-(BOOL)isEqual:(id)arg1 ;
@end

