/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKInteractiveChartGenericStatFormatter.h>

@interface HKInteractiveChartAudioExposureStatFormatter : HKInteractiveChartGenericStatFormatter
-(id)_formatDuration:(double)arg1 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 ;
-(id)_formattedStringWithValue:(double)arg1 unit:(id)arg2 showUnit:(BOOL)arg3 ;
-(id)_formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2 ;
-(id)_formatQuantityAudioData:(id)arg1 ;
-(id)_formattedAnnotationForChartData:(id)arg1 ;
-(id)_formattedCurrentValueForChartData:(id)arg1 ;
-(id)_attributedCurrentAudioExposureClassificationForChartData:(id)arg1 ;
-(long long)_numberOfDaysVisibleInRange:(id)arg1 ;
-(id)_formatAudioMin:(double)arg1 max:(double)arg2 ;
-(id)_majorAttributes;
-(id)_minorAttributes;
@end

