/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)style;
-(id)tintColor;
-(id)initWithStyle:(long long)arg1 ;
-(id)initWithLightMaterial:(id)arg1 darkMaterial:(id)arg2 bundle:(id)arg3 ;
-(BOOL)invertAutomaticStyle;
-(BOOL)canProvideVibrancyEffect;
-(BOOL)canProvideCoreMaterialVibrancyEffect;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)implementationForUserInterfaceStyle:(long long)arg1 ;
-(void)appendDescriptionTo:(id)arg1 ;
@end

