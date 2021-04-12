/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIBlurEffectImpl.h>

@class NSString, NSBundle;

@interface _UIBlurEffectCoreMaterialImpl : _UIBlurEffectImpl {

	long long _style;
	NSString* _lightMaterial;
	NSString* _darkMaterial;
	NSBundle* _bundle;

}
-(void)appendDescriptionTo:(id)arg1 ;
-(id)implementationForUserInterfaceStyle:(long long)arg1 ;
-(BOOL)canProvideCoreMaterialVibrancyEffect;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)canProvideVibrancyEffect;
-(BOOL)invertAutomaticStyle;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLightMaterial:(id)arg1 darkMaterial:(id)arg2 bundle:(id)arg3 ;
-(unsigned long long)hash;
-(id)tintColor;
-(long long)style;
-(BOOL)isEqual:(id)arg1 ;
@end

