/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)style;
-(BOOL)invertAutomaticStyle;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(void)appendDescriptionTo:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 vibrancyStyle:(long long)arg2 ;
-(id)initWithLightMaterial:(id)arg1 darkMaterial:(id)arg2 vibrancyStyle:(long long)arg3 ;
-(long long)vibrancyStyle;
@end

