/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@protocol HKInteractiveChartRangeProvider;
@class NSArray;

@interface HKInteractiveChartGenericStatFormatter : HKInteractiveChartDataFormatter {

	NSArray* _overrideStatFormatterItemOptions;
	id<HKInteractiveChartRangeProvider> _chartRangeProvider;
	NSArray* _configuredStatItems;

}

@property (nonatomic,retain) NSArray * configuredStatItems;                                       //@synthesize configuredStatItems=_configuredStatItems - In the implementation block
@property (nonatomic,retain) NSArray * overrideStatFormatterItemOptions;                          //@synthesize overrideStatFormatterItemOptions=_overrideStatFormatterItemOptions - In the implementation block
@property (nonatomic,retain) id<HKInteractiveChartRangeProvider> chartRangeProvider;              //@synthesize chartRangeProvider=_chartRangeProvider - In the implementation block
+(long long)mapSingleItemToStatisticsType:(id)arg1 ;
-(void)setOverrideStatFormatterItemOptions:(NSArray *)arg1 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2 ;
-(id)formattedUnitStringForChartData:(id)arg1 ;
-(id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2 ;
-(id)_makeSelectedRangeDataWithMin:(double)arg1 max:(double)arg2 unit:(id)arg3 statisticsType:(long long)arg4 ;
-(void)setConfiguredStatItems:(NSArray *)arg1 ;
-(NSArray *)overrideStatFormatterItemOptions;
-(id)_formattedSelectedRangeLabelDataWithChartData:(id)arg1 items:(id)arg2 ;
-(NSArray *)configuredStatItems;
-(void)configureFormatterForDisplayType:(id)arg1 quantityType:(id)arg2 chartRangeProvider:(id)arg3 timeScope:(long long)arg4 context:(long long)arg5 ;
-(id<HKInteractiveChartRangeProvider>)chartRangeProvider;
-(void)setChartRangeProvider:(id<HKInteractiveChartRangeProvider>)arg1 ;
-(id)_formatMin:(double)arg1 max:(double)arg2 unit:(id)arg3 ;
-(id)_formattedAnnotationForDistributionChartData:(id)arg1 ;
@end

