/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSObject, NSTimeZone, NSDateInterval, HKActivityCache, HKHeartRateSummary, HDSourceEntity, HDActivityCacheDataSource, HKQuantityType, NSSet, NSMutableDictionary, _HKDelayedOperation, NSHashTable, CMPedometer, CMPedometerData, NSDate, NSCalendar, NSString;

@interface HDActivityCacheManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, HDDatabaseProtectedDataObserver> {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	long long _todayActivityCacheIndex;
	long long _yesterdayActivityCacheIndex;
	long long _tomorrowActivityCacheIndex;
	BOOL _cacheIndicesAreSet;
	NSTimeZone* _currentTimeZone;
	NSDateInterval* _todayDateInterval;
	NSDateInterval* _yesterdayDateInterval;
	BOOL _existingActivityCachesAreSet;
	HKActivityCache* _existingYesterdayActivityCache;
	HKActivityCache* _existingTodayActivityCache;
	HKHeartRateSummary* _todayHeartRateSummary;
	HKHeartRateSummary* _yesterdayHeartRateSummary;
	HDSourceEntity* _localDeviceSourceEntity;
	HDActivityCacheDataSource* _dataSource;
	HKQuantityType* _calorieGoalType;
	HKQuantityType* _exerciseGoalType;
	HKQuantityType* _standGoalType;
	NSSet* _allQuantityTypes;
	NSMutableDictionary* _goalsByIndex;
	_HKDelayedOperation* _updateCachesOperation;
	_HKDelayedOperation* _rebuildCachesOperation;
	NSHashTable* _observers;
	BOOL _hasSubscribedToSignificantTimeChangeNotifications;
	long long _wheelchairUse;
	CMPedometer* _pedometer;
	CMPedometerData* _lastPedometerData;
	int _rebuildCacheNotificationToken;
	NSDate* _dateOverride;
	NSTimeZone* _timeZoneOverride;

}

@property (nonatomic,retain) NSDate * dateOverride;                                   //@synthesize dateOverride=_dateOverride - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZoneOverride;                           //@synthesize timeZoneOverride=_timeZoneOverride - In the implementation block
@property (readonly) NSCalendar * calendar; 
@property (nonatomic,readonly) HKActivityCache * currentActivityCache; 
@property (nonatomic,readonly) HKActivityCache * yesterdayActivityCache; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSCalendar *)calendar;
-(id)initWithProfile:(id)arg1 ;
-(NSDate *)dateOverride;
-(void)setDateOverride:(NSDate *)arg1 ;
-(HKActivityCache *)currentActivityCache;
-(void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)daemonReady:(id)arg1 ;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)addActivityCacheObserver:(id)arg1 ;
-(void)removeActivityCacheObserver:(id)arg1 ;
-(id)_queue_gregorianCalendar;
-(void)_queue_updateCaches;
-(void)_queue_rebuildActivityCaches;
-(BOOL)_queue_readyToSaveCaches;
-(id)_queue_saveCacheWithDateInterval:(id)arg1 calorieGoal:(id)arg2 exerciseGoal:(id)arg3 standGoal:(id)arg4 cacheIndex:(long long)arg5 previousCache:(id)arg6 statisticsBuilder:(id)arg7 wheelchairUse:(long long)arg8 generateStats:(BOOL)arg9 ;
-(void)_queue_alertObserversTodayActivityCacheChanged:(id)arg1 ;
-(void)_queue_alertObserversYesterdayActivityCacheChanged:(id)arg1 ;
-(BOOL)_queue_saveTodayCache;
-(BOOL)_queue_saveYesterdayCache;
-(void)_queue_alertObservers:(id)arg1 heartRateSummaryChanged:(id)arg2 ;
-(BOOL)_queue_readyToPrimeDataSource;
-(BOOL)_queue_calorieGoalSet;
-(BOOL)_queue_exerciseGoalSet;
-(BOOL)_queue_standGoalSet;
-(BOOL)_queue_allGoalsLoaded;
-(void)_queue_primeDailyGoalWithType:(id)arg1 ;
-(id)_mostRecentSampleWithType:(id)arg1 beforeDate:(id)arg2 error:(id*)arg3 ;
-(void)_queue_resetDailyGoalWithType:(id)arg1 ;
-(BOOL)_queue_updateGoalWithSample:(id)arg1 ;
-(void)_queue_primeCacheIndices;
-(void)_queue_primeLocalSource;
-(void)_queue_primeExistingActivityCaches;
-(void)_queue_primeDailyGoals;
-(void)_queue_primeDataSource;
-(void)_queue_saveCaches;
-(void)_queue_updateHeartRateSummaries;
-(id)_queue_currentDate;
-(void)_calculateCacheIndicesWithTodayIndex:(long long*)arg1 yesterdayIndex:(long long*)arg2 tomorrowIndex:(long long*)arg3 todayStart:(id)arg4 yesterdayStart:(id)arg5 tomorrowStart:(id)arg6 calendar:(id)arg7 ;
-(void)_queue_deleteActivityCaches:(id)arg1 ;
-(void)_queue_resetExistingActivityCaches;
-(void)_queue_updateDateIntervalsWithExistingActivityCaches;
-(void)_queue_resetCacheIndices;
-(void)_queue_resetDataSource;
-(id)_queue_currentTimeZone;
-(void)_queue_resetEverything;
-(BOOL)_queue_updateDailyGoalsWithSamples:(id)arg1 ;
-(void)_didReceiveSignificantTimeChangeNotification;
-(void)_queue_rebuildCachesIfNeededForTimeChange;
-(void)_userCharacteristicsDidChangeNotification:(id)arg1 ;
-(void)_queue_streamSamplesAdded;
-(void)_queue_registerForSignificantTimeChangeNotification;
-(HKActivityCache *)yesterdayActivityCache;
-(void)accessStatisticsBuilderWithCacheIndex:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(NSTimeZone *)timeZoneOverride;
-(void)setTimeZoneOverride:(NSTimeZone *)arg1 ;
@end

