/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaCharts.framework/TeaCharts
*/

#import <TeaCharts/TeaCharts-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@interface TeaCharts.LineSeriesAccessibilityElement : UIAccessibilityElement {

	 series;
	??? chartModel;
	 interactor;
	 dataElements;

}

@property (assign,nonatomic) CGRect accessibilityFrame; 
-(id)init;
-(CGRect)accessibilityFrame;
-(void)setAccessibilityFrame:(CGRect)arg1 ;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(id)tc_accessibilityDataSeriesName;
-(id)tc_accessibilityDataSeriesValuesForAxis:(long long)arg1 ;
-(long long)tc_accessibilityDataSeriesType;
-(id)tc_accessibilityDataSeriesTitleForAxis:(long long)arg1 ;
-(id)tc_accessibilityDataSeriesMinimumValueForAxis:(long long)arg1 ;
-(id)tc_accessibilityDataSeriesMaximumValueForAxis:(long long)arg1 ;
-(id)tc_accessibilityDataSeriesGridlinePositionsForAxis:(long long)arg1 ;
-(BOOL)tc_accessibilityDataSeriesSupportsSummarization;
-(BOOL)tc_accessibilityDataSeriesSupportsSonification;
-(BOOL)tc_accessibilityDataSeriesIncludesTrendlineInSonification;
-(double)tc_accessibilityDataSeriesSonificationDuration;
-(id)tc_accessibilityDataSeriesValueDescriptionForPosition:(double)arg1 axis:(long long)arg2 ;
@end

