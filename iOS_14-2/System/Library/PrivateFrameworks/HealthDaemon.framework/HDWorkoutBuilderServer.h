/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HDWorkoutDataAccumulator.h>
#import <libobjc.A.dylib/HKDataFlowLinkProcessor.h>
#import <libobjc.A.dylib/HKStateMachineDelegate.h>
#import <libobjc.A.dylib/HKWorkoutBuilderServerInterface.h>
#import <libobjc.A.dylib/HDWorkoutDataDestination.h>
#import <libobjc.A.dylib/HDTaskServerObserver.h>

@protocol OS_dispatch_queue;
@class HDWorkoutBuilderEntity, NSError, HKObserverSet, NSSet, NSMutableDictionary, NSMutableSet, HKDataFlowLink, HKStateMachine, NSObject, HKWorkoutBuilderConfiguration, NSArray, NSDate, NSDateInterval, NSString, NSUUID;

@interface HDWorkoutBuilderServer : HDStandardTaskServer <HDWorkoutDataAccumulator, HKDataFlowLinkProcessor, HKStateMachineDelegate, HKWorkoutBuilderServerInterface, HDWorkoutDataDestination, HDTaskServerObserver> {

	os_unfair_lock_s _lock;
	AB _invalidated;
	HDWorkoutBuilderEntity* _persistentEntity;
	NSError* _error;
	HKObserverSet* _dataAccumulatorObservers;
	HKObserverSet* _sampleObservers;
	NSSet* _quantityTypesIncludedWhilePaused;
	NSMutableDictionary* _statisticsCalculatorsByType;
	NSMutableDictionary* _sourceOrderProvidersByType;
	NSMutableDictionary* _statisticsDataSourcesByType;
	NSMutableSet* _quantityTypesRequiringCalculatorInvalidation;
	HKDataFlowLink* _workoutDataFlowLink;
	NSSet* _expectedDataSourceUUIDs;
	HKStateMachine* _stateMachine;
	long long _targetConstructionState;
	NSObject*<OS_dispatch_queue> _upstreamQueue;
	HKWorkoutBuilderConfiguration* _configuration;
	NSMutableDictionary* _metadata;
	NSArray* _workoutEvents;
	NSDate* _workoutStartDate;
	NSDate* _workoutEndDate;
	NSDateInterval* _dataInterval;

}

@property (nonatomic,retain) HKWorkoutBuilderConfiguration * configuration;                      //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metadata;                                     //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSArray * workoutEvents;                                            //@synthesize workoutEvents=_workoutEvents - In the implementation block
@property (nonatomic,copy) NSDate * workoutStartDate;                                            //@synthesize workoutStartDate=_workoutStartDate - In the implementation block
@property (nonatomic,copy) NSDate * workoutEndDate;                                              //@synthesize workoutEndDate=_workoutEndDate - In the implementation block
@property (nonatomic,copy) NSDateInterval * dataInterval;                                        //@synthesize dataInterval=_dataInterval - In the implementation block
@property (readonly) BOOL invalidated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) HKDataFlowLink * workoutDataFlowLink; 
@property (copy,readonly) NSUUID * workoutDataProcessorUUID; 
@property (readonly) unsigned long long workoutDataDestinationState; 
@property (nonatomic,readonly) id<HDWorkoutDataAccumulator> workoutDataAccumulator; 
+(BOOL)finishAllDetachedWorkoutBuildersExcludingSessions:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
+(id)taskIdentifier;
+(Class)configurationClass;
+(BOOL)finishAllWorkoutBuildersForClient:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)dataDestinationStateMachineForTaskUUID:(id)arg1 configuration:(id)arg2 ;
+(id)recoveredWorkoutBuilderConfigurationForClient:(id)arg1 sessionIdentifier:(id)arg2 builderIdentifierOut:(id*)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(id)requiredEntitlements;
+(void)finishDetachedBuilderForEntity:(id)arg1 sessionEndDate:(id)arg2 profile:(id)arg3 ;
-(void)connectionInvalidated;
-(void)connectionConfigured;
-(void)didCreateTaskServer:(id)arg1 ;
-(BOOL)invalidated;
-(id)startDate;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)setMetadata:(NSMutableDictionary *)arg1 ;
-(NSString *)description;
-(HKWorkoutBuilderConfiguration *)configuration;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)remote_updateDevice:(id)arg1 ;
-(NSArray *)workoutEvents;
-(void)remote_addSamples:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_setTargetConstructionState:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)remote_addWorkoutEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_addMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_removeMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_setStatisticsMergeStrategy:(unsigned long long)arg1 forType:(id)arg2 ;
-(void)remote_setStatisticsComputationMethod:(long long)arg1 forType:(id)arg2 ;
-(void)remote_addDataSourcesWithIdentifiers:(id)arg1 ;
-(void)remote_removeDataSourcesWithIdentifiers:(id)arg1 ;
-(void)remote_recoverWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_setShouldCollectEvents:(BOOL)arg1 ;
-(void)stateMachine:(id)arg1 didTransition:(id)arg2 fromState:(id)arg3 toState:(id)arg4 date:(id)arg5 error:(id)arg6 ;
-(void)stateMachine:(id)arg1 didEnterState:(id)arg2 date:(id)arg3 error:(id)arg4 ;
-(NSMutableDictionary *)metadata;
-(id)currentEvents;
-(void)setConfiguration:(HKWorkoutBuilderConfiguration *)arg1 ;
-(HKDataFlowLink *)workoutDataFlowLink;
-(NSUUID *)workoutDataProcessorUUID;
-(void)addSamples:(id)arg1 dataSource:(id)arg2 ;
-(void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2 ;
-(void)addMetadata:(id)arg1 dataSource:(id)arg2 ;
-(void)updateWorkoutConfiguration:(id)arg1 dataSource:(id)arg2 ;
-(unsigned long long)workoutDataDestinationState;
-(id<HDWorkoutDataAccumulator>)workoutDataAccumulator;
-(id)currentMetadata;
-(BOOL)enumerateSamplesOfType:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(void)addSampleObserver:(id)arg1 ;
-(void)didInvalidateTaskServer:(id)arg1 ;
-(void)setWorkoutEvents:(NSArray *)arg1 ;
-(void)addDataAccumulationObserver:(id)arg1 ;
-(void)removeDataAccumulationObserver:(id)arg1 ;
-(void)_loadOrCreatePersistentEntity;
-(BOOL)_lock_persistDataSourceRecoveryDataInTransaction:(id)arg1 error:(id*)arg2 ;
-(id)_lock_configurationForPersistenceWithTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)_lock_createPersistentEntityForConfiguration:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)_lock_recoverPersistedDataWithTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)_lock_loadOrCreatePersistentEntityInTransaction:(id)arg1 error:(id*)arg2 ;
-(void)_updateStatisticsPauseResumeMask;
-(void)_lock_failWithError:(id)arg1 ;
-(id)_lock_sourceOrderProviderForQuantityType:(id)arg1 ;
-(id)_lock_statisticsDataSourceForQuantityType:(id)arg1 ;
-(long long)_recoveredStateForStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_didUpdateStatistics:(id)arg1 ;
-(void)_didUpdateMetadata:(id)arg1 ;
-(void)_didUpdateEvents:(id)arg1 ;
-(void)_didChangeElapsedTimeBasis;
-(void)_lock_didUpdateStartDate;
-(void)_recoverAssociatedSeriesBuilders;
-(void)_didFinishRecovery;
-(id)_lock_associateSamples:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)_lock_updateStatisticsWithSamples:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(void)_attemptRequeryForInvalidatedStatisticsCalculators;
-(BOOL)_insertWorkoutEvents:(id)arg1 error:(id*)arg2 ;
-(BOOL)_addMetadata:(id)arg1 error:(id*)arg2 ;
-(void)_updateWorkoutConfiguration:(id)arg1 ;
-(void)_notifySourcesOfConfigurationUpdate:(id)arg1 ;
-(id)currentStatisticsByQuantityType;
-(id)_finishWorkoutWithError:(id*)arg1 ;
-(BOOL)_discardWorkoutWithError:(id*)arg1 ;
-(void)_lock_pushCurrentConstructionState;
-(void)_notifySourcesOfTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(BOOL)_validateAuthorizationToSaveWorkoutWithError:(id*)arg1 ;
-(BOOL)_canAddDataWithError:(id*)arg1 ;
-(void)_saveSamples:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)_removeMetadata:(id)arg1 error:(id*)arg2 ;
-(id)_lock_statisticsCalculatorForQuantityType:(id)arg1 mergeStrategy:(unsigned long long)arg2 computationMethod:(long long)arg3 ;
-(void)_updateCachedStateForAddedWorkoutEvents:(id)arg1 ;
-(id)_lock_statisticsCalculatorForQuantityType:(id)arg1 ;
-(id)_lock_maskedIntervalsForStatisticsOfType:(id)arg1 ;
-(void)_persistRecoveryData;
-(void)_setupDataSource:(id)arg1 identifier:(id)arg2 ;
-(void)_lock_addQuantityTypesIncludedWhilePausedFromSource:(id)arg1 transaction:(id)arg2 ;
-(void)removeSampleObserver:(id)arg1 ;
-(NSDate *)workoutStartDate;
-(void)setWorkoutStartDate:(NSDate *)arg1 ;
-(NSDate *)workoutEndDate;
-(void)setWorkoutEndDate:(NSDate *)arg1 ;
-(NSDateInterval *)dataInterval;
-(void)setDataInterval:(NSDateInterval *)arg1 ;
@end

