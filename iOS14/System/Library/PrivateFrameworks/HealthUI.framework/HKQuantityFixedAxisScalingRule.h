/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKAbstractFixedAxisScalingRule.h>

@class HKValueRange, NSDictionary, HKUnit;

@interface HKQuantityFixedAxisScalingRule : HKAbstractFixedAxisScalingRule {

	HKValueRange* _defaultQuantityBounds;
	NSDictionary* _quantityBoundsOverrides;
	HKUnit* _unit;

}

@property (nonatomic,retain) HKUnit * unit;              //@synthesize unit=_unit - In the implementation block
+(id)ruleWithDefaultAxisBounds:(id)arg1 axisBoundsOverrides:(id)arg2 ;
-(HKUnit *)unit;
-(void)setUnit:(HKUnit *)arg1 ;
-(BOOL)isCompatibleWithQuantityType:(id)arg1 ;
-(void)_convertQuantityRanges;
-(id)_numberRangeFromQuantityRangeForUnit:(id)arg1 quantityRange:(id)arg2 ;
@end

