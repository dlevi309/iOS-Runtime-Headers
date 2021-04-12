/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@interface HKSleepUtilities : NSObject
+(id)buildPrimarySleepCacheWithHealthStore:(id)arg1 sleepDisplayType:(id)arg2 sleepDataSourceProvider:(id)arg3 chartCacheController:(id)arg4 ;
+(id)sleepDisplayTypesWithHealthStore:(id)arg1 sleepDisplayType:(id)arg2 unitController:(id)arg3 displayTypeController:(id)arg4 chartCacheController:(id)arg5 sleepChartFormatter:(id)arg6 sleepSeriesType:(long long)arg7 sharedSleepCache:(id)arg8 customSleepSeries:(id)arg9 ;
+(id)yukonSleepChartDataSource:(id)arg1 representativeDisplayType:(id)arg2 ;
+(id)durationGoalForSleepDay:(id)arg1 ;
+(id)_goalLineStrokeStyle;
+(id)_goalLineMarkerStyle;
+(id)rangeDataForSleepChartInfo:(id)arg1 valueFont:(id)arg2 unitFont:(id)arg3 ;
+(long long)_axisPurposeForSleepSeriesType:(long long)arg1 ;
+(id)verticalNumericalAxis;
+(id)_sleepSeriesForType:(long long)arg1 ;
+(id)_generateDurationSleepSeries;
+(id)_generateDailyTimePeriodSeries;
+(id)_generateDurationSleepGoalSeries;
+(id)_generateDailyTimePeriodSeriesWithSchedules;
+(id)_fillStylesFromColors:(id)arg1 ;
+(id)_lessSaturatedColorWithColor:(id)arg1 ;
+(id)_scheduleMarkerStyleWithColor:(id)arg1 ;
+(id)_standardRangeDataForSleepDays:(id)arg1 valueFont:(id)arg2 unitFont:(id)arg3 ;
+(id)_durationGoalDataForSleepDays:(id)arg1 valueFont:(id)arg2 unitFont:(id)arg3 ;
@end

