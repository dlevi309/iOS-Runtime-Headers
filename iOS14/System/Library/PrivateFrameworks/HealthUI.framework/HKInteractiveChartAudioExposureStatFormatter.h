/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKInteractiveChartGenericStatFormatter.h>

@interface HKInteractiveChartAudioExposureStatFormatter : HKInteractiveChartGenericStatFormatter
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2 ;
-(id)_formattedStringWithValue:(double)arg1 unit:(id)arg2 showUnit:(BOOL)arg3 ;
-(id)_formatQuantityAudioData:(id)arg1 ;
-(id)_formattedCurrentValueForChartData:(id)arg1 ;
-(id)_attributedCurrentAudioExposureClassificationForChartData:(id)arg1 ;
-(long long)_numberOfDaysVisibleInRange:(id)arg1 ;
-(id)_majorAttributes;
-(id)_minorAttributes;
-(id)_formatDuration:(double)arg1 ;
@end

