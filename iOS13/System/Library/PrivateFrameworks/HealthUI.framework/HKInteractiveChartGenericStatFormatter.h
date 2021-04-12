/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@protocol HKInteractiveChartRangeProvider;
@class NSArray;

@interface HKInteractiveChartGenericStatFormatter : HKInteractiveChartDataFormatter {

	NSArray* _overrideStatFormatterItemOptions;
	long long _context;
	id<HKInteractiveChartRangeProvider> _chartRangeProvider;
	NSArray* _configuredStatItems;

}

@property (nonatomic,retain) NSArray * configuredStatItems;                                       //@synthesize configuredStatItems=_configuredStatItems - In the implementation block
@property (nonatomic,retain) NSArray * overrideStatFormatterItemOptions;                          //@synthesize overrideStatFormatterItemOptions=_overrideStatFormatterItemOptions - In the implementation block
@property (assign,nonatomic) long long context;                                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<HKInteractiveChartRangeProvider> chartRangeProvider;              //@synthesize chartRangeProvider=_chartRangeProvider - In the implementation block
+(long long)mapSingleItemToStatisticsType:(id)arg1 ;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(void)setOverrideStatFormatterItemOptions:(NSArray *)arg1 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 ;
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
@end

