/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKDateCacheObserver.h>

@class NSHashTable, NSCache, NSCalendar, HKFetchOperation, HKQuery, HKHealthStore, HKDateCache, HKDisplayTypeController, HKUnitPreferenceController, HKActivitySummary, NSString;

@interface HKActivitySummaryDataProvider : NSObject <HKDateCacheObserver> {

	NSHashTable* _observers;
	NSCache* _activitySummaryForTimeScopeCache;
	NSCalendar* _cachedCalendar;
	HKFetchOperation* _outstandingFetchOperation;
	HKQuery* _observerQuery;
	NSCache* _hourlyActivitySummaryCache;
	HKHealthStore* _healthStore;
	HKDateCache* _dateCache;
	HKDisplayTypeController* _displayTypeController;
	HKUnitPreferenceController* _unitController;
	long long _activityMoveMode;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;                                  //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKDateCache * dateCache;                                      //@synthesize dateCache=_dateCache - In the implementation block
@property (nonatomic,readonly) HKDisplayTypeController * displayTypeController;              //@synthesize displayTypeController=_displayTypeController - In the implementation block
@property (nonatomic,readonly) HKUnitPreferenceController * unitController;                  //@synthesize unitController=_unitController - In the implementation block
@property (nonatomic,readonly) HKActivitySummary * latestActivitySummary; 
@property (nonatomic,readonly) long long activityMoveMode;                                   //@synthesize activityMoveMode=_activityMoveMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKHealthStore *)healthStore;
-(void)addObserver:(id)arg1 ;
-(HKUnitPreferenceController *)unitController;
-(void)_clearCaches;
-(long long)activityMoveMode;
-(HKDateCache *)dateCache;
-(void)removeObserver:(id)arg1 ;
-(HKDisplayTypeController *)displayTypeController;
-(void)dealloc;
-(id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 ;
-(void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2 ;
-(void)_alertObserversDidUpdateValues;
-(void)_fetchValueWithRetryCount:(long long)arg1 ;
-(void)_unitPreferencesDidUpdate:(id)arg1 ;
-(void)_setupActivitySummaryChangeObserver;
-(void)_stopActivitySummaryChangeObserver;
-(id)activitySummariesForTimeScope:(long long)arg1 ;
-(BOOL)activitySummariesAreLoading;
-(id)_monthActivitySummariesForDateRange:(id)arg1 ;
-(id)_dayActivitySummariesForDateRange:(id)arg1 ;
-(id)_hourActivitySummariesForDateRange:(id)arg1 ;
-(id)cachedCalendar;
-(void)_transitionToFetchFailureForTimeScope:(long long)arg1 ;
-(void)_partitionAndProcessActivitySummariesForAllTimeScopes:(id)arg1 ;
-(id)_fetchOperationForTimeScope:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_queriesForTimeScope:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_predicateForStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 activityMoveMode:(long long)arg4 ;
-(void)_monthActivitySummariesForCachedData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_buildActivitySummaryFromAverages:(WDActivitySummaryAverages)arg1 startDate:(id)arg2 calendar:(id)arg3 energyUnit:(id)arg4 standHourUnit:(id)arg5 ;
-(void)_submitHourlyQueryForPageNumber:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)_hourActivitySummariesForDateRange:(id)arg1 pageHandler:(/*^block*/id)arg2 ;
-(void)_hourlyPageInProgress:(id)arg1 ;
-(void)_hourlyActivityPageDataArrived:(id)arg1 pageNumber:(id)arg2 error:(id)arg3 ;
-(void)_hourlyActivityDataForStartDate:(id)arg1 endDate:(id)arg2 healthStore:(id)arg3 calendar:(id)arg4 handler:(/*^block*/id)arg5 ;
-(BOOL)_sampleDate:(id)arg1 withinHourBeforeDate:(id)arg2 ;
-(id)_buildHourlyActivitySummaryFromDate:(id)arg1 calendar:(id)arg2 moveQuantity:(id)arg3 exerciseQuantity:(id)arg4 standQuantity:(id)arg5 moveGoal:(id)arg6 exerciseGoal:(id)arg7 standGoal:(id)arg8 ;
-(id)_hourlySummariesFromStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 activeEnergyData:(id)arg4 appleMoveTimeData:(id)arg5 exerciseData:(id)arg6 standData:(id)arg7 dayGoalData:(id)arg8 ;
-(id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 activityMoveMode:(long long)arg5 ;
-(HKActivitySummary *)latestActivitySummary;
-(id)activitySummariesForDateRange:(id)arg1 timeScope:(long long)arg2 ;
-(id)_predicateForStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 ;
@end

