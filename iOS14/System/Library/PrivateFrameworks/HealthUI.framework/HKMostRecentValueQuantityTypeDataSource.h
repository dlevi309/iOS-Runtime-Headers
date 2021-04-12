/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKQuantityTypeDataSource.h>

@interface HKMostRecentValueQuantityTypeDataSource : HKQuantityTypeDataSource
-(id)queryDescription;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3 ;
-(id)_dataSourceValueFromMostRecentQuantity:(id)arg1 quantityDateInterval:(id)arg2 statisticsInterval:(id)arg3 ;
-(id)_middleDateFromInterval:(id)arg1 endDate:(id)arg2 ;
-(BOOL)_interval:(id)arg1 isEqualToIntervalFromCalendarUnit:(unsigned long long)arg2 ;
-(id)_dataSourceValueFromStatisticsCollection:(id)arg1 statisticsInterval:(id)arg2 ;
@end

