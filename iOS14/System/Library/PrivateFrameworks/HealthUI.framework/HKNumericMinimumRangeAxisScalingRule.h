/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKAbstractMinimumRangeScalingRule.h>

@class NSNumber;

@interface HKNumericMinimumRangeAxisScalingRule : HKAbstractMinimumRangeScalingRule {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;

}
+(id)ruleWithDefaultYAxisRange:(double)arg1 minimumValue:(id)arg2 maximumValue:(id)arg3 axisRangeOverrides:(id)arg4 ;
+(id)ruleWithDefaultYAxisRange:(double)arg1 axisRangeOverrides:(id)arg2 ;
@end

