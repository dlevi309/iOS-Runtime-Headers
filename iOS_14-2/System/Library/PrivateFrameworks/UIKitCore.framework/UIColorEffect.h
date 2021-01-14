/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIVisualEffect.h>

@class NSString, NSDictionary;

@interface UIColorEffect : UIVisualEffect {

	NSString* _filterType;
	NSDictionary* _configurationValues;
	NSDictionary* _identityValues;
	NSDictionary* _requestedValues;
	BOOL _disableInPlaceFiltering;

}
+(id)colorEffectLuminanceMap:(id)arg1 blendingAmount:(double)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)colorEffectLuminanceCurveMap:(id)arg1 blendingAmount:(double)arg2 ;
+(id)colorEffectBrightness:(double)arg1 ;
+(id)colorEffectSaturate:(double)arg1 ;
+(id)_colorEffectSourceOver:(UIEdgeInsets)arg1 ;
+(id)colorEffectAverageColor;
+(id)colorEffectCurvesRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4 ;
+(id)colorEffectContrast:(double)arg1 ;
+(id)colorEffectAdd:(id)arg1 ;
+(id)colorEffectSubtract:(id)arg1 ;
+(id)colorEffectInvert;
+(id)colorEffectMultiply:(id)arg1 ;
+(id)colorEffectColor:(id)arg1 ;
+(id)colorEffectMonochromeTint:(id)arg1 blendingAmount:(double)arg2 brightnessAdjustment:(double)arg3 ;
+(id)_colorEffectCAMatrix:(CAColorMatrix)arg1 ;
+(id)colorEffectMatrix:(SCD_Struct_UI23)arg1 ;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)_expectedUsage;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_filterEntry;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

