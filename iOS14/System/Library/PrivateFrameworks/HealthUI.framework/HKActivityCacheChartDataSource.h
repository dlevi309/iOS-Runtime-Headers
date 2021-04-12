/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class NSCalendar, HKUnitPreferenceController;

@interface HKActivityCacheChartDataSource : HKHealthQueryChartCacheDataSource {

	NSCalendar* _gregorianCalendar;
	NSCalendar* _gregorianNonUTCCalendar;
	HKUnitPreferenceController* _unitController;

}
-(id)queryDescription;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_dateComponentsForDate:(id)arg1 ;
-(id)_cachePredicateForStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_workoutsPredicateForStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_handleActivityCaches:(id)arg1 workouts:(id)arg2 blockStart:(id)arg3 blockEnd:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_unitForDisplayType;
-(id)initWithUnitController:(id)arg1 healthStore:(id)arg2 ;
@end

