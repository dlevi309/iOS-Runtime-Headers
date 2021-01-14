/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class NSPredicate, NSCalendar, HKUnitPreferenceController;

@interface HKActivityStatisticsDataSource : HKHealthQueryChartCacheDataSource {

	NSPredicate* _sourcesPredicate;
	NSCalendar* _gregorianCalendar;
	NSCalendar* _gregorianNonUTCCalendar;
	HKUnitPreferenceController* _unitController;

}
-(id)queryDescription;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_dateComponentsForDate:(id)arg1 ;
-(id)_calorieValueFromStatsCollection:(id)arg1 range:(id)arg2 ;
-(id)_cachePredicateForStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_workoutsPredicateForStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_handleStatistics:(id)arg1 activityCaches:(id)arg2 workouts:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithUnitController:(id)arg1 healthStore:(id)arg2 sourcesPredicate:(id)arg3 ;
@end

