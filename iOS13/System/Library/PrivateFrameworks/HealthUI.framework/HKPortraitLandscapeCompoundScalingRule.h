/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKInteractiveChartsAxisScalingRule.h>

@protocol HKInteractiveChartsAxisScalingRule;
@class NSString;

@interface HKPortraitLandscapeCompoundScalingRule : NSObject <HKInteractiveChartsAxisScalingRule> {

	id<HKInteractiveChartsAxisScalingRule> _portraitScalingRule;
	id<HKInteractiveChartsAxisScalingRule> _landscapeScalingRule;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleWithPortraitRule:(id)arg1 landscapeRule:(id)arg2 ;
-(id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 ;
-(id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3 ;
@end

