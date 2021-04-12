/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class UIColor;

@interface _UIVibrancyEffectVibrantColorMatrixImpl : _UIVibrancyEffectImpl {

	long long _systemName;
	CAColorMatrix _lightVibrantColorMatrix;
	CAColorMatrix _darkVibrantColorMatrix;
	UIColor* _reducedTransperancyColor;
	double _alpha;
	BOOL _hasDarkVariant;

}
-(void)appendDescriptionTo:(id)arg1 ;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)initWithCAColorMatrix:(CAColorMatrix)arg1 alpha:(double)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSystemName:(long long)arg1 ;
-(id)implementationReplacingTintColor:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithLightCAColorMatrix:(CAColorMatrix)arg1 darkCAColorMatrix:(CAColorMatrix)arg2 alpha:(double)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

