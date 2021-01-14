/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDAssertionObserver.h>
#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>

@protocol OS_dispatch_queue;
@class NSDate, NSMutableDictionary, HDPeriodicActivity, HDDatabaseCoalescedWritePool, NSMutableArray, NSSet, HDSeriesQuantityEventObserver, HDProfile, HDBTLEHeartRateDataCollector, NSObject, HDDemoManager, NSString;

@interface HDDataCollectionManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDAssertionObserver, HDPeriodicActivityDelegate> {

	NSDate* _lastLaunchUpdate;
	NSMutableDictionary* _dataAggregatorsByType;
	HDPeriodicActivity* _periodicUpdateActivity;
	HDDatabaseCoalescedWritePool* _pendingSavePool;
	double unitTest_pendingSaveCoalescingInterval;
	BOOL unitTest_hasSetPendingSaveCoalescingInterval;
	int _privacyPreferencesNotificationToken;
	os_unfair_lock_s _collectorLock;
	NSMutableArray* _collectorLock_builtinCollectors;
	NSMutableDictionary* _collectorLock_dataCollectorsByType;
	NSMutableDictionary* _lastFlushDateByType;
	os_unfair_lock_s _fakingLock;
	/*^block*/id _unitTest_aggregatorConfigurationChangedHandler;
	NSSet* _collectibleTypes;
	HDSeriesQuantityEventObserver* _seriesQuantityEventObserver;
	HDProfile* _profile;
	NSMutableDictionary* _observersByType;
	HDBTLEHeartRateDataCollector* _blteHeartRateDataCollector;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _assertionQueue;
	HDDemoManager* _demoManager;
	NSObject*<OS_dispatch_queue> _dataCollectionQueue;

}

@property (nonatomic,retain) NSMutableDictionary * observersByType;                                  //@synthesize observersByType=_observersByType - In the implementation block
@property (nonatomic,retain) HDBTLEHeartRateDataCollector * blteHeartRateDataCollector;              //@synthesize blteHeartRateDataCollector=_blteHeartRateDataCollector - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> assertionQueue;                            //@synthesize assertionQueue=_assertionQueue - In the implementation block
@property (nonatomic,retain) HDDemoManager * demoManager;                                            //@synthesize demoManager=_demoManager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dataCollectionQueue;                     //@synthesize dataCollectionQueue=_dataCollectionQueue - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                           //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessToFitnessData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)takeCollectionAssertionWithOwnerIdentifier:(id)arg1 sampleTypes:(id)arg2 observer:(id)arg3 observerState:(id)arg4 collectionInterval:(double)arg5 ;
-(id)takeCollectionAssertionWithOwnerIdentifier:(id)arg1 collectionIntervalsByType:(id)arg2 observerState:(id)arg3 ;
-(id)collectibleTypes;
-(id)_newAggregatorForObjectType:(id)arg1 ;
-(id)_queue_observerMapForType:(id)arg1 ;
-(id)init;
-(HDDemoManager *)demoManager;
-(void)stopDataCollectionForType:(id)arg1 observer:(id)arg2 ;
-(void)_queue_adjustDataCollectionForType:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)performSaveWithMaximumLatency:(double)arg1 block:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithProfile:(id)arg1 ;
-(void)addDataCollectionObserver:(id)arg1 type:(id)arg2 collectionInterval:(double)arg3 state:(id)arg4 ;
-(void)startFakingWithHKWorkoutActivityType:(unsigned long long)arg1 ;
-(BOOL)_dataReceived:(id)arg1 provenance:(id)arg2 isDemoData:(BOOL)arg3 error:(id*)arg4 ;
-(HDBTLEHeartRateDataCollector *)blteHeartRateDataCollector;
-(void)_demoObjectsReceived:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_queue_aggregatorForType:(id)arg1 ;
-(void)periodicUpdate;
-(id)takeCollectionAssertionWithOwnerIdentifier:(id)arg1 sampleTypes:(id)arg2 observerState:(id)arg3 collectionInterval:(double)arg4 ;
-(void)_requestAggregationThroughDate:(id)arg1 types:(id)arg2 mode:(long long)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)stopFakingData;
-(void)removeDataCollectionObserver:(id)arg1 type:(id)arg2 ;
-(BOOL)sensorDataArrayReceived:(id)arg1 deviceEntity:(id)arg2 error:(id*)arg3 ;
-(void)_queue_alertCollectorsOfTypesWithObservers;
-(double)defaultCollectionIntervalForType:(id)arg1 ;
-(void)startDataCollectionForType:(id)arg1 observer:(id)arg2 collectionInterval:(double)arg3 ;
-(void)_queue_updateLegacyDataCollector:(id)arg1 forChangeFromState:(SCD_Struct_HD88)arg2 toState:(SCD_Struct_HD88)arg3 type:(id)arg4 ;
-(void)unitTest_setAggregator:(id)arg1 forType:(id)arg2 ;
-(void)setBlteHeartRateDataCollector:(HDBTLEHeartRateDataCollector *)arg1 ;
-(void)setObserversByType:(NSMutableDictionary *)arg1 ;
-(void)unitTest_setAggregatorConfigurationChangeHandler:(/*^block*/id)arg1 ;
-(id)diagnosticDescription;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(SCD_Struct_HD88)_queue_collectionStateForType:(id)arg1 ;
-(id)_dataAggregatorConfigurationForCollectorState:(SCD_Struct_HD88)arg1 ;
-(void)_registerCollectors:(id)arg1 ;
-(HDProfile *)profile;
-(void)_queue_addDataCollector:(id)arg1 ;
-(void)_updateDataCollectorsWithPrivacySettings;
-(void)addDataCollector:(id)arg1 ;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)assertionQueue;
-(id)btleHeartRateDataCollector;
-(void)_queue_setupUnprotectedDataDependantState;
-(BOOL)hasAccessToFitnessData;
-(void)unitTest_addCollectibleType:(id)arg1 ;
-(id)_observersDescription;
-(id)unitTest_dataAggregatorConfigurationForType:(id)arg1 ;
-(id)_dataAggregatorsDiagnosticDescription;
-(void)unitTest_setPendingSaveCoalescingInterval:(double)arg1 ;
-(id)_dataCollectorBlacklist;
-(void)setAssertionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dataCollectionQueue;
-(id)_collectorForType:(id)arg1 ;
-(id)pluginDataCollectors;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_fakingLock_demoManagerCreatingIfNecessary;
-(void)startFakingDataWithActivityType:(long long)arg1 speed:(id)arg2 ;
-(SCD_Struct_HD88)_queue_defaultCollectionStateForType:(id)arg1 ;
-(BOOL)_typeIsCollectible:(id)arg1 ;
-(id)_dataCollectorsDiagnosticDescription;
-(void)removeDataCollectionObserver:(id)arg1 ;
-(void)_queue_createBuiltinCollectors;
-(void)setDemoManager:(HDDemoManager *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)observersByType;
-(void)dataCollectionObserver:(id)arg1 didChangeState:(id)arg2 ;
-(void)_requestAggregationThroughDate:(id)arg1 type:(id)arg2 mode:(long long)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)requestAggregationThroughDate:(id)arg1 types:(id)arg2 mode:(long long)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)dealloc;
-(id)aggregatorForType:(id)arg1 ;
@end

