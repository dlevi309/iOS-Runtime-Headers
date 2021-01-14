/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

