/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class NSString;

@interface _UIVibrancyEffectCoreMaterialImpl : _UIVibrancyEffectImpl {

	long long _blurStyle;
	long long _vibrancyStyle;
	NSString* _lightMaterial;
	NSString* _darkMaterial;

}
-(void)appendDescriptionTo:(id)arg1 ;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)invertAutomaticStyle;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)vibrancyStyle;
-(id)initWithStyle:(long long)arg1 vibrancyStyle:(long long)arg2 ;
-(unsigned long long)hash;
-(id)initWithLightMaterial:(id)arg1 darkMaterial:(id)arg2 vibrancyStyle:(long long)arg3 ;
-(long long)style;
-(BOOL)isEqual:(id)arg1 ;
@end

