/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol OS_dispatch_queue;
@class HKHealthStore, HKUnit, _HKCurrentActivitySummaryQuery, NSObject, HKActivitySummary, HKCurrentActivityCacheQuery, NSArray, NSHashTable, NSDate;

@interface NTKWellnessTimelineModel : NSObject {

	HKHealthStore* _healthStore;
	HKUnit* _kcalUnit;
	HKUnit* _minuteUnit;
	HKUnit* _countUnit;
	_HKCurrentActivitySummaryQuery* _queue_currentActivitySummaryQuery;
	NSObject*<OS_dispatch_queue> _queue;
	HKActivitySummary* _queue_currentActivitySummary;
	HKCurrentActivityCacheQuery* _queue_currentActivityCacheQuery;
	NSArray* _queue_currentActiveEnergyChartData;
	NSArray* _queue_currentExerciseChartData;
	NSArray* _queue_currentStandChartData;
	NSObject*<OS_dispatch_queue> _subscriber_queue;
	NSHashTable* _subscribers;
	NSDate* _currentDate;
	BOOL _queue_ignoreLoadingSummary;

}
+(id)sharedModel;
-(id)init;
-(void)dealloc;
-(void)removeSubscriber:(id)arg1 ;
-(void)addSubscriber:(id)arg1 ;
-(void)getCurrentWellnessEntryWithHandler:(/*^block*/id)arg1 ;
-(void)_handleTimeChange;
-(id)_queue_wellnessEntryModelFromCurrentActivitySummary;
-(void)_broadcastCurrentEntryUpdate:(id)arg1 toSubscriber:(id)arg2 ;
-(void)_queue_startQueries;
-(void)_queue_stopQueriesPreservingExistingGoals:(BOOL)arg1 ;
-(void)_queue_restartQueriesPreservingExistingGoals:(BOOL)arg1 ;
-(BOOL)_loadingStateForActivitySummary:(id)arg1 ;
-(void)_broadcastCurrentEntryUpdateToSubscribers:(id)arg1 ;
-(id)timelineStartDate;
-(id)timelineEndDate;
-(id)switcherWelnessEntry;
-(void)getWellnessEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)getWellnessEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(id)_currentActivitySummaryQueryCollectionIntervalsOverride;
-(void)_queue_restartQueriesIfQueryInUse:(id)arg1 ;
-(void)_queue_updateCurrentActivitySummaryWithSummary:(id)arg1 ;
-(void)_queue_updateChartStatisticsWithStatisticsQueryResult:(id)arg1 ;
@end

