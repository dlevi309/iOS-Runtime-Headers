/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(void)appendDescriptionTo:(id)arg1 ;
-(id)initWithCAColorMatrix:(CAColorMatrix)arg1 alpha:(double)arg2 ;
-(id)initWithSystemName:(long long)arg1 ;
-(id)implementationReplacingTintColor:(id)arg1 ;
-(id)initWithLightCAColorMatrix:(CAColorMatrix)arg1 darkCAColorMatrix:(CAColorMatrix)arg2 alpha:(double)arg3 ;
@end

