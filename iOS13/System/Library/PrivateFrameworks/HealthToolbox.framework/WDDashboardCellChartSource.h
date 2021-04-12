/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

@class HKActivitySummaryDataProvider;


@protocol WDDashboardCellChartSource
@property (nonatomic,readonly) HKActivitySummaryDataProvider * activitySummaryProvider; 
@property (assign,nonatomic) BOOL localeDidChange; 
@required
-(BOOL)localeDidChange;
-(BOOL)shouldHideAverageLineForTimeScope:(long long)arg1;
-(BOOL)shouldHideMinMaxOnBackgroundForTimeScope:(long long)arg1;
-(void)invalidateChart;
-(HKActivitySummaryDataProvider *)activitySummaryProvider;
-(void)setLocaleDidChange:(BOOL)arg1;

@end

