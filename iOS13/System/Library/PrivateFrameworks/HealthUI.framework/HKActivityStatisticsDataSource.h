/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_dateComponentsForDate:(id)arg1 ;
-(id)_cachePredicateForStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_workoutsPredicateForStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_calorieValueFromStatsCollection:(id)arg1 range:(id)arg2 ;
-(void)_handleStatistics:(id)arg1 activityCaches:(id)arg2 workouts:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithUnitController:(id)arg1 healthStore:(id)arg2 sourcesPredicate:(id)arg3 ;
@end

