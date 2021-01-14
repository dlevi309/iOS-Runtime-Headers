/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKQuantityTypeDataSource.h>

@interface HKQuantityTypeTimescopedDateSource : HKQuantityTypeDataSource
-(id)queryDescription;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_interval:(id)arg1 isEqualToIntervalFromCalendarUnit:(unsigned long long)arg2 ;
-(unsigned long long)calendarUnitForTimeScope:(long long)arg1 displayType:(id)arg2 ;
-(id)_componentsToEnumerateFromInterval:(id)arg1 ;
-(id)_quantityValueFromStatistics:(id)arg1 statisticsInterval:(id)arg2 date:(id)arg3 ;
-(id)statisticsIntervalForTimeScope:(long long)arg1 displayType:(id)arg2 ;
@end

