/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@class HKUnit;

@interface HKHistogramChartDataFormatter : HKInteractiveChartDataFormatter {

	HKUnit* _unit;

}

@property (nonatomic,readonly) HKUnit * unit;              //@synthesize unit=_unit - In the implementation block
-(HKUnit *)unit;
-(id)initWithUnit:(id)arg1 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 ;
-(id)formattedUnitStringForChartData:(id)arg1 ;
-(id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2 ;
-(id)_formattedStringWithValue:(double)arg1 unit:(id)arg2 showUnit:(BOOL)arg3 ;
@end

