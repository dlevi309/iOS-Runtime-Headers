/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDAssertionObserver.h>
#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>

@protocol OS_dispatch_queue;
@class NSDate, NSMutableDictionary, HDPeriodicActivity, HDDatabaseCoalescedWritePool, NSMutableArray, NSSet, HDAudioExposureEventObserver, HDProfile, HDBTLEHeartRateDataCollector, NSObject, HDDemoManager, NSString;

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
	os_unfair_lock_s _fakingLock;
	/*^block*/id _unitTest_aggregatorConfigurationChangedHandler;
	NSSet* _collectibleTypes;
	HDAudioExposureEventObserver* _audioExposureEventObserver;
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
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(HDProfile *)profile;
-(id)initWithProfile:(id)arg1 ;
-(void)setAssertionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)assertionQueue;
-(void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)diagnosticDescription;
-(void)daemonReady:(id)arg1 ;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(id)aggregatorForType:(id)arg1 ;
-(void)performSaveWithMaximumLatency:(double)arg1 block:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(double)defaultCollectionIntervalForType:(id)arg1 ;
-(id)btleHeartRateDataCollector;
-(void)stopDataCollectionForType:(id)arg1 observer:(id)arg2 ;
-(void)requestAggregationThroughDate:(id)arg1 types:(id)arg2 mode:(long long)arg3 freezeSeries:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)startDataCollectionForType:(id)arg1 observer:(id)arg2 collectionInterval:(double)arg3 ;
-(BOOL)hasAccessToFitnessData;
-(id)takeCollectionAssertionWithOwnerIdentifier:(id)arg1 sampleTypes:(id)arg2 observerState:(id)arg3 collectionInterval:(double)arg4 ;
-(NSObject*<OS_dispatch_queue>)dataCollectionQueue;
-(id)collectibleTypes;
-(void)startFakingDataWithActivityType:(long long)arg1 speed:(id)arg2 ;
-(void)stopFakingData;
-(void)addDataCollectionObserver:(id)arg1 type:(id)arg2 collectionInterval:(double)arg3 state:(id)arg4 ;
-(void)removeDataCollectionObserver:(id)arg1 type:(id)arg2 ;
-(void)removeDataCollectionObserver:(id)arg1 ;
-(BOOL)sensorDataArrayReceived:(id)arg1 deviceEntity:(id)arg2 error:(id*)arg3 ;
-(BOOL)_dataReceived:(id)arg1 provenance:(id)arg2 isDemoData:(BOOL)arg3 error:(id*)arg4 ;
-(id)_queue_aggregatorForType:(id)arg1 ;
-(BOOL)_typeIsCollectible:(id)arg1 ;
-(id)_newAggregatorForObjectType:(id)arg1 ;
-(void)_queue_adjustDataCollectionForType:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)_queue_observerMapForType:(id)arg1 ;
-(void)_requestAggregationThroughDate:(id)arg1 types:(id)arg2 mode:(long long)arg3 freezeSeries:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_requestAggregationThroughDate:(id)arg1 type:(id)arg2 mode:(long long)arg3 freezeSeries:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(SCD_Struct_HD83)_queue_defaultCollectionStateForType:(id)arg1 ;
-(SCD_Struct_HD83)_queue_collectionStateForType:(id)arg1 ;
-(void)_queue_updateLegacyDataCollector:(id)arg1 forChangeFromState:(SCD_Struct_HD83)arg2 toState:(SCD_Struct_HD83)arg3 type:(id)arg4 ;
-(id)_dataAggregatorConfigurationForCollectorState:(SCD_Struct_HD83)arg1 ;
-(void)_registerCollectors:(id)arg1 ;
-(void)_queue_createBuiltinCollectors;
-(void)_updateDataCollectorsWithPrivacySettings;
-(id)pluginDataCollectors;
-(void)_queue_addDataCollector:(id)arg1 ;
-(void)_queue_alertCollectorsOfTypesWithObservers;
-(id)_fakingLock_demoManagerCreatingIfNecessary;
-(void)_demoObjectsReceived:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unitTest_addCollectibleType:(id)arg1 ;
-(void)periodicUpdate;
-(void)_queue_setupUnprotectedDataDependantState;
-(id)_observersDescription;
-(id)_dataCollectorsDiagnosticDescription;
-(id)_dataAggregatorsDiagnosticDescription;
-(void)dataCollectionObserver:(id)arg1 didChangeState:(id)arg2 ;
-(void)requestAggregationForAllTypesThroughDate:(id)arg1 mode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)sensorDataReceived:(id)arg1 deviceEntity:(id)arg2 ;
-(void)startFakingWithHKWorkoutActivityType:(unsigned long long)arg1 ;
-(id)takeCollectionAssertionWithOwnerIdentifier:(id)arg1 sampleTypes:(id)arg2 observer:(id)arg3 observerState:(id)arg4 collectionInterval:(double)arg5 ;
-(void)addDataCollector:(id)arg1 ;
-(void)unitTest_setAggregator:(id)arg1 forType:(id)arg2 ;
-(id)unitTest_dataAggregatorConfigurationForType:(id)arg1 ;
-(void)unitTest_setAggregatorConfigurationChangeHandler:(/*^block*/id)arg1 ;
-(void)unitTest_setPendingSaveCoalescingInterval:(double)arg1 ;
-(NSMutableDictionary *)observersByType;
-(void)setObserversByType:(NSMutableDictionary *)arg1 ;
-(HDBTLEHeartRateDataCollector *)blteHeartRateDataCollector;
-(void)setBlteHeartRateDataCollector:(HDBTLEHeartRateDataCollector *)arg1 ;
-(HDDemoManager *)demoManager;
-(void)setDemoManager:(HDDemoManager *)arg1 ;
@end

