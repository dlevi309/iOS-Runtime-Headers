/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@class HKTimePeriodDisplayTypeValueFormatter;

@interface HKInteractiveChartTimePeriodFormatter : HKInteractiveChartDataFormatter {

	HKTimePeriodDisplayTypeValueFormatter* _timePeriodFormatter;

}
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2 ;
-(id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2 ;
-(id)_formattedStringWithData:(id)arg1 roundToHours:(BOOL)arg2 displayUnit:(BOOL)arg3 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 items:(id)arg2 customDataType:(long long)arg3 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 items:(id)arg2 ;
@end

