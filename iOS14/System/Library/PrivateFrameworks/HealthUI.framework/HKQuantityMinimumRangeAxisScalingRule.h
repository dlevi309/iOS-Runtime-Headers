/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKAbstractMinimumRangeScalingRule.h>

@class HKQuantity, NSDictionary, HKUnit;

@interface HKQuantityMinimumRangeAxisScalingRule : HKAbstractMinimumRangeScalingRule {

	HKQuantity* _defaultYAxisRangeQuantity;
	HKQuantity* _minimumQuantity;
	HKQuantity* _maximumQuantity;
	NSDictionary* _axisRangeQuantityOverrides;
	HKUnit* _unit;

}

@property (nonatomic,retain) HKUnit * unit;              //@synthesize unit=_unit - In the implementation block
+(id)ruleWithDefaultYAxisRange:(id)arg1 minimumValue:(id)arg2 maximumValue:(id)arg3 axisRangeOverrides:(id)arg4 ;
+(id)ruleWithDefaultYAxisRange:(id)arg1 axisRangeOverrides:(id)arg2 ;
-(HKUnit *)unit;
-(void)setUnit:(HKUnit *)arg1 ;
-(BOOL)isCompatibleWithQuantityType:(id)arg1 ;
-(void)_convertQuantities;
@end

