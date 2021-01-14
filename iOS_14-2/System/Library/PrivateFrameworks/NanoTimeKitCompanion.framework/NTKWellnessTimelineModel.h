/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/FIFitnessAppsStateObserverDelegate.h>

@protocol OS_dispatch_queue;
@class HKHealthStore, HKUnit, _HKCurrentActivitySummaryQuery, NSObject, HKActivitySummary, HKCurrentActivityCacheQuery, NSArray, NSHashTable, NSDate, FIFitnessAppsStateObserver, NSString;

@interface NTKWellnessTimelineModel : NSObject <FIFitnessAppsStateObserverDelegate> {

	HKHealthStore* _healthStore;
	HKUnit* _kcalUnit;
	HKUnit* _minuteUnit;
	HKUnit* _countUnit;
	_HKCurrentActivitySummaryQuery* _queue_currentActivitySummaryQuery;
	NSObject*<OS_dispatch_queue> _queue;
	HKActivitySummary* _queue_currentActivitySummary;
	HKCurrentActivityCacheQuery* _queue_currentActivityCacheQuery;
	NSArray* _queue_currentActiveEnergyChartData;
	NSArray* _queue_currentMoveTimeChartData;
	NSArray* _queue_currentExerciseChartData;
	NSArray* _queue_currentStandChartData;
	NSObject*<OS_dispatch_queue> _subscriber_queue;
	NSHashTable* _subscribers;
	NSDate* _currentDate;
	BOOL _queue_ignoreLoadingSummary;
	FIFitnessAppsStateObserver* _fitnessAppsStateObserver;
	BOOL _areFitnessAppsRestricted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedModel;
-(id)init;
-(void)addSubscriber:(id)arg1 ;
-(void)removeSubscriber:(id)arg1 ;
-(void)dealloc;
-(void)getCurrentWellnessEntryWithHandler:(/*^block*/id)arg1 ;
-(void)_handleTimeChange;
-(id)_queue_wellnessEntryModelFromCurrentActivitySummary;
-(void)_broadcastCurrentEntryUpdate:(id)arg1 toSubscriber:(id)arg2 ;
-(void)_queue_startQueries;
-(void)_queue_stopQueriesPreservingExistingGoals:(BOOL)arg1 ;
-(void)_queue_restartQueriesPreservingExistingGoals:(BOOL)arg1 ;
-(BOOL)_loadingStateForActivitySummary:(id)arg1 ;
-(void)_broadcastCurrentEntryUpdateToSubscribers:(id)arg1 ;
-(void)fitnessAppsStateObserver:(id)arg1 stateDidChange:(long long)arg2 ;
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

