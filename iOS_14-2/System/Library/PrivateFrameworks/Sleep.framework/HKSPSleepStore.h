/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/HKSPXPCConnectionProviderDelegate.h>

@protocol HKSPSyncAnchor, NAScheduler, HKSPExecutor;
@class HKSPAnalyticsManager, NSString, HKSleepHealthStore, HKSPObserverSet, HKSPXPCConnectionProvider, HKSPSleepStoreCache, HKSPSleepStoreExportedObject, HKHealthStore;

@interface HKSPSleepStore : NSObject <HKSPXPCConnectionProviderDelegate> {

	os_unfair_lock_s _syncLock;
	id<HKSPSyncAnchor> _syncAnchor;
	HKSPAnalyticsManager* _analyticsManager;
	NSString* _identifier;
	HKSleepHealthStore* _sleepHealthStore;
	HKSPObserverSet* _observers;
	HKSPXPCConnectionProvider* _connectionProvider;
	HKSPSleepStoreCache* _sleepStoreCache;
	id<NAScheduler> _callbackScheduler;
	id<HKSPExecutor> _reconnectExecutor;
	/*^block*/id _currentDateProvider;
	HKSPSleepStoreExportedObject* _sleepStoreExportedObject;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) id<HKSPSyncAnchor> syncAnchor;                                   //@synthesize syncAnchor=_syncAnchor - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s syncLock;                                            //@synthesize syncLock=_syncLock - In the implementation block
@property (nonatomic,readonly) HKSleepHealthStore * sleepHealthStore;                                //@synthesize sleepHealthStore=_sleepHealthStore - In the implementation block
@property (nonatomic,readonly) HKSPObserverSet * observers;                                          //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) HKSPXPCConnectionProvider * connectionProvider;                       //@synthesize connectionProvider=_connectionProvider - In the implementation block
@property (nonatomic,readonly) HKSPSleepStoreCache * sleepStoreCache;                                //@synthesize sleepStoreCache=_sleepStoreCache - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler;                                    //@synthesize callbackScheduler=_callbackScheduler - In the implementation block
@property (nonatomic,readonly) id<HKSPExecutor> reconnectExecutor;                                   //@synthesize reconnectExecutor=_reconnectExecutor - In the implementation block
@property (nonatomic,copy,readonly) id currentDateProvider;                                          //@synthesize currentDateProvider=_currentDateProvider - In the implementation block
@property (nonatomic,readonly) HKSPSleepStoreExportedObject * sleepStoreExportedObject;              //@synthesize sleepStoreExportedObject=_sleepStoreExportedObject - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore; 
@property (nonatomic,readonly) HKSPAnalyticsManager * analyticsManager;                              //@synthesize analyticsManager=_analyticsManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_updatedHistoricalSleepGoalForSleepSchedule:(id)arg1 options:(unsigned long long)arg2 date:(id)arg3 ;
+(id)_updatedHistoricalSleepSchedulesFromSleepSchedule:(id)arg1 options:(unsigned long long)arg2 date:(id)arg3 ;
-(void)reconnect;
-(id)nextEventDueAfterDateFuture:(id)arg1 ;
-(HKHealthStore *)healthStore;
-(void)addObserver:(id)arg1 ;
-(id)currentSleepSettingsWithError:(id*)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(id)_getSleepScheduleStateFromServerDoSync:(BOOL)arg1 notify:(BOOL)arg2 ;
-(id)_confirmAwakeOnServer;
-(id)sleepScheduleModelWithError:(id*)arg1 ;
-(HKSPObserverSet *)observers;
-(void)skipWindDownWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(id)_saveCurrentSleepSettingsOnServer:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithIdentifier:(id)arg1 healthStore:(id)arg2 ;
-(id<HKSPSyncAnchor>)syncAnchor;
-(void)saveCurrentSleepSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)upcomingScheduleOccurrenceAfterDate:(id)arg1 error:(id*)arg2 ;
-(void)sleepAlarmWasDismissedOnDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)saveCurrentSleepEventRecord:(id)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(id)currentSleepScheduleWithError:(id*)arg1 ;
-(void)setSleepWindDownShortcutsOnboardingCompletedVersion:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)_skipWindDownOnServer;
-(void)connect;
-(id)upcomingScheduleOccurrenceAfterDate:(id)arg1 alarmStatus:(long long*)arg2 error:(id*)arg3 ;
-(void)saveCurrentSleepSchedule:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_saveCurrentSleepScheduleOnServer:(id)arg1 options:(unsigned long long)arg2 ;
-(id)_skipBedtimeOnServer;
-(void)_notifyObserversForChangedSleepMode:(long long)arg1 ;
-(void)saveCurrentSleepSettings:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSleepTrackingOnboardingCompletedVersion:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)_sendScheduleChangedAnalytics;
-(id)saveCurrentSleepSettings:(id)arg1 options:(unsigned long long)arg2 ;
-(HKSPSleepStoreExportedObject *)sleepStoreExportedObject;
-(unsigned long long)currentSleepScheduleStateWithError:(id*)arg1 ;
-(void)currentSleepScheduleWithCompletion:(/*^block*/id)arg1 ;
-(void)saveCurrentSleepSchedule:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)saveCurrentSleepEventRecord:(id)arg1 options:(unsigned long long)arg2 ;
-(id)currentDateProvider;
-(id)_publishNotificationOnServerWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(id)_delayBedtimeForTimeIntervalOnServer:(double)arg1 ;
-(id)upcomingResolvedScheduleOccurrenceAfterDate:(id)arg1 alarmStatus:(long long*)arg2 error:(id*)arg3 ;
-(void)confirmAwakeWithCompletion:(/*^block*/id)arg1 ;
-(id)_setSleepModeOnServer:(long long)arg1 ;
-(void)updateSyncAnchor:(id)arg1 ;
-(void)setSleepModeOn:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)sleepAlarmWasSnoozedUntilDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<NAScheduler>)callbackScheduler;
-(id)upcomingResolvedScheduleOccurrenceAfterDate:(id)arg1 error:(id*)arg2 ;
-(HKSPSleepStoreCache *)sleepStoreCache;
-(id)currentSleepSettingsFuture;
-(HKSPAnalyticsManager *)analyticsManager;
-(id)upcomingScheduleOccurrenceAfterDateFuture:(id)arg1 ;
-(void)setUpcomingWakeUpAlarmEnabled:(BOOL)arg1 date:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)nextEventDueAfterDate:(id)arg1 error:(id*)arg2 ;
-(id)sleepScheduleModelFuture;
-(HKSleepHealthStore *)sleepHealthStore;
-(id)_sleepAlarmWasDismissedOnDateOnServer:(id)arg1 ;
-(void)setLockScreenOverrideState:(long long)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)description;
-(void)saveCurrentSleepEventRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_sleepAlarmWasSnoozedUntilDateOnServer:(id)arg1 ;
-(id)_getSleepEventRecordDoSync:(BOOL)arg1 notify:(BOOL)arg2 ;
-(void)upcomingScheduleOccurrenceAfterDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_checkInWithCurrentSyncAnchor;
-(id)_getSleepSettingsFromServerDoSync:(BOOL)arg1 notify:(BOOL)arg2 ;
-(id)currentSleepEventRecordFuture;
-(id)_setLockScreenOverrideStateOnServerWithState:(long long)arg1 userInfo:(id)arg2 ;
-(void)_notifyObserversForChangedSleepSettings:(id)arg1 ;
-(id)currentSleepScheduleFuture;
-(void)sleepScheduleModelWithCompletion:(/*^block*/id)arg1 ;
-(id)currentSleepEventRecordWithError:(id*)arg1 ;
-(void)sleepModeOnWithCompletion:(/*^block*/id)arg1 ;
-(id)_getSleepModeDoSync:(BOOL)arg1 notify:(BOOL)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)setWakeUpAlarmEnabled:(BOOL)arg1 resolvedOccurrence:(id)arg2 date:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_getSleepScheduleDoSync:(BOOL)arg1 notify:(BOOL)arg2 ;
-(id)sleepModeOnFuture;
-(void)_notifyObserversForSleepEvent:(id)arg1 ;
-(id)_getSleepScheduleStateOnDoSync:(BOOL)arg1 notify:(BOOL)arg2 ;
-(id)currentSleepScheduleStateFuture;
-(void)dismissGoodMorningWithCompletion:(/*^block*/id)arg1 ;
-(void)sleepModeWithCompletion:(/*^block*/id)arg1 ;
-(void)nextEventWithIdentifier:(id)arg1 dueAfterDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)publishWakeUpResultsNotificationWithCompletion:(/*^block*/id)arg1 ;
-(void)sleepAlarmWasModified:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)currentSleepEventRecordWithCompletion:(/*^block*/id)arg1 ;
-(void)sleepAlarmWasModifiedWithCompletion:(/*^block*/id)arg1 ;
-(void)currentSleepScheduleStateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)sleepModeOnWithError:(id*)arg1 ;
-(id)_publishWakeUpResultsNotificationOnServer;
-(id)nextEventWithIdentifierFuture:(id)arg1 dueAfterDate:(id)arg2 ;
-(NSString *)identifier;
-(id)_getSleepScheduleFromServerDoSync:(BOOL)arg1 notify:(BOOL)arg2 ;
-(id)nextEventWithIdentifier:(id)arg1 dueAfterDate:(id)arg2 error:(id*)arg3 ;
-(id)saveCurrentSleepSchedule:(id)arg1 options:(unsigned long long)arg2 ;
-(id)sleepModeFuture;
-(id)saveCurrentSleepSettings:(id)arg1 ;
-(id)_getSleepSettingsDoSync:(BOOL)arg1 notify:(BOOL)arg2 ;
-(void)publishNotificationWithIdentifier:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)delayBedtimeForTimeInterval:(double)arg1 completion:(/*^block*/id)arg2 ;
-(id)_getSleepEventRecordFromServerDoSync:(BOOL)arg1 notify:(BOOL)arg2 ;
-(id)saveCurrentSleepSchedule:(id)arg1 ;
-(HKSPXPCConnectionProvider *)connectionProvider;
-(void)_notifyObserversForChangedSleepSchedule:(id)arg1 ;
-(void)currentSleepSettingsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithConnectionProviderProvider:(/*^block*/id)arg1 identifier:(id)arg2 healthStore:(id)arg3 analyticsManager:(id)arg4 executorProvider:(/*^block*/id)arg5 callbackScheduler:(id)arg6 currentDateProvider:(/*^block*/id)arg7 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)skipBedtimeWithCompletion:(/*^block*/id)arg1 ;
-(void)saveCurrentSleepEventRecord:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_notifyObserversForChangedSleepEventRecord:(id)arg1 ;
-(void)_notifyObserversForChangedSleepScheduleState:(unsigned long long)arg1 ;
-(id<HKSPExecutor>)reconnectExecutor;
-(long long)sleepModeWithError:(id*)arg1 ;
-(void)nextEventDueAfterDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_getSleepModeFromServerDoSync:(BOOL)arg1 notify:(BOOL)arg2 ;
-(void)dealloc;
-(id)_saveCurrentSleepEventRecordOnServer:(id)arg1 options:(unsigned long long)arg2 ;
-(os_unfair_lock_s)syncLock;
-(id)_writeHistoricalSchedule:(id)arg1 options:(unsigned long long)arg2 ;
-(id)_dismissGoodMorningOnServer;
-(id)_sleepAlarmWasModifiedOnServer;
-(void)skipUpcomingWakeUpAlarmForDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSleepCoachingOnboardingCompletedVersion:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithConnectionProviderProvider:(/*^block*/id)arg1 identifier:(id)arg2 healthStore:(id)arg3 ;
@end

