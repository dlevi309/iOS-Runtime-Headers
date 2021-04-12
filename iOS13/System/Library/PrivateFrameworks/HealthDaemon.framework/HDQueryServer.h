/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HKQueryServerInterface.h>
#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/HDTaskServer.h>

@protocol OS_dispatch_queue, HDQueryServerDelegate;
@class NSDictionary, HKQueryServerConfiguration, NSArray, HDDataCollectionAssertion, HDDaemonTransaction, HDQueryServerClientState, NSObject, HDDatabaseTransactionContextStatistics, NSUUID, HDHealthStoreClient, HDProfile, _HKFilter, HKObjectType, NSSet, HKSampleType, HKQuantityType, NSString;

@interface HDQueryServer : NSObject <HDDatabaseProtectedDataObserver, HKQueryServerInterface, HDDataObserver, HDTaskServer> {

	NSDictionary* _baseDataEntityEncodingOptions;
	HKQueryServerConfiguration* _configuration;
	/*^block*/id _queryDidFinishHandler;
	NSArray* _dataObservationAssertions;
	HDDataCollectionAssertion* _dataCollectionAssertion;
	HDDaemonTransaction* _activationTransaction;
	HDQueryServerClientState* _clientState;
	Ai _queryState;
	BOOL _shouldTakeObservationAssertions;
	BOOL _observingData;
	BOOL _isCollectingData;
	AB _shouldFinish;
	AB _shouldPause;
	NSObject*<OS_dispatch_queue> _unitTestQueryQueue;
	HDDatabaseTransactionContextStatistics* _transactionStatistics;
	id<HDQueryServerDelegate> _delegate;
	NSUUID* _queryUUID;
	HDHealthStoreClient* _client;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queryQueue;
	double _collectionInterval;
	_HKFilter* _filter;
	HKObjectType* _objectType;
	long long _dataCount;
	/*^block*/id _unitTest_queryServerSetShouldPauseHandler;
	/*^block*/id _unitTest_queryServerWillChangeStateHandler;

}

@property (readonly) BOOL clientHasActiveWorkout; 
@property (nonatomic,copy) HDQueryServerClientState * clientState;                                      //@synthesize clientState=_clientState - In the implementation block
@property (assign,nonatomic) long long dataCount;                                                       //@synthesize dataCount=_dataCount - In the implementation block
@property (nonatomic,readonly) double activationTime; 
@property (nonatomic,copy) id unitTest_queryServerSetShouldPauseHandler;                                //@synthesize unitTest_queryServerSetShouldPauseHandler=_unitTest_queryServerSetShouldPauseHandler - In the implementation block
@property (nonatomic,copy) id unitTest_queryServerWillChangeStateHandler;                               //@synthesize unitTest_queryServerWillChangeStateHandler=_unitTest_queryServerWillChangeStateHandler - In the implementation block
@property (assign,nonatomic,__weak) id<HDQueryServerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * queryUUID;                                                 //@synthesize queryUUID=_queryUUID - In the implementation block
@property (nonatomic,copy,readonly) HKQueryServerConfiguration * configuration;                         //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) HDHealthStoreClient * client;                                            //@synthesize client=_client - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queryQueue;                                 //@synthesize queryQueue=_queryQueue - In the implementation block
@property (readonly) long long queryState; 
@property (assign,nonatomic) double collectionInterval;                                                 //@synthesize collectionInterval=_collectionInterval - In the implementation block
@property (nonatomic,readonly) _HKFilter * filter;                                                      //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) id<HKQueryClientInterface><NSXPCProxyCreating> clientProxy; 
@property (nonatomic,copy,readonly) HKObjectType * objectType;                                          //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,copy,readonly) NSSet * objectTypes; 
@property (nonatomic,readonly) HKSampleType * sampleType; 
@property (nonatomic,readonly) HKQuantityType * quantityType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(Class)queryClass;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
+(id)builtInQueryServerClasses;
+(BOOL)supportsAnchorBasedAuthorization;
-(void)dealloc;
-(NSString *)description;
-(id<HDQueryServerDelegate>)delegate;
-(void)setDelegate:(id<HDQueryServerDelegate>)arg1 ;
-(HDHealthStoreClient *)client;
-(id)exportedInterface;
-(HKObjectType *)objectType;
-(HKQueryServerConfiguration *)configuration;
-(HKQuantityType *)quantityType;
-(NSObject*<OS_dispatch_queue>)queryQueue;
-(_HKFilter *)filter;
-(HDProfile *)profile;
-(id)taskUUID;
-(id)_predicateString;
-(void)connectionInvalidated;
-(void)setClientState:(HDQueryServerClientState *)arg1 ;
-(HDQueryServerClientState *)clientState;
-(long long)dataCount;
-(id)remoteInterface;
-(void)setShouldPause:(BOOL)arg1 ;
-(HKSampleType *)sampleType;
-(void)remote_startQueryWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_deactivateServer;
-(double)activationTime;
-(void)setCollectionInterval:(double)arg1 ;
-(double)collectionInterval;
-(void)setDataCount:(long long)arg1 ;
-(id)diagnosticDescription;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(NSUUID *)queryUUID;
-(void)_queue_stop;
-(id<HKQueryClientInterface><NSXPCProxyCreating>)clientProxy;
-(NSSet *)objectTypes;
-(BOOL)_shouldListenForUpdates;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(BOOL)_shouldStopProcessingQuery;
-(BOOL)_shouldSuspendQuery;
-(id)readAuthorizationStatusForType:(id)arg1 error:(id*)arg2 ;
-(id)newDataEntityEnumerator;
-(/*^block*/id)sampleAuthorizationFilter;
-(void)scheduleDatabaseAccessOnQueueWithBlock:(/*^block*/id)arg1 ;
-(void)setQueryDidFinishHandler:(/*^block*/id)arg1 ;
-(BOOL)prepareToActivateServerWithError:(id*)arg1 ;
-(void)activateServerWithClientState:(id)arg1 error:(id)arg2 ;
-(id)createDatabaseTransactionContext;
-(void)clientStateWillChange:(id)arg1 ;
-(void)clientStateDidChange:(id)arg1 ;
-(double)_queue_logThresholdHardwareFactor;
-(void)onQueue:(/*^block*/id)arg1 ;
-(double)_queue_queryLogThreshold;
-(long long)queryState;
-(void)_queue_didDeactivate;
-(BOOL)_shouldObserveOnPause;
-(BOOL)_shouldObserveDatabaseProtectedDataAvailability;
-(BOOL)validateConfiguration:(id*)arg1 ;
-(void)_queue_didChangeStateFromPreviousState:(long long)arg1 state:(long long)arg2 ;
-(id)filteredSamplesForClientWithSamples:(id)arg1 ;
-(id)sanitizedSampleForQueryClient:(id)arg1 ;
-(void)schedulePause;
-(BOOL)clientHasActiveWorkout;
-(void)_queue_startDataCollection;
-(void)_queue_stopDataCollection;
-(void)deactivateServerWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isQueryingForHealthRecordsTypes;
-(void)_queue_activateServerWithClientState:(id)arg1 error:(id)arg2 ;
-(void)_queue_setQueryState:(long long)arg1 ;
-(void)_queue_transitionToPaused;
-(void)_queue_startDataCollectionIfNecessary;
-(void)_queue_notifyIfQueryingForHealthRecords;
-(void)_scheduleStartQuery;
-(void)_queue_transitionToFinished;
-(void)_queue_closeActivationTransactionIfNecessary;
-(void)_queue_startQueryIfNecessary;
-(void)_queue_transitionToRunning;
-(id)_queue_collectionObserverState;
-(void)_queue_updateSampleTypeObservationAssertions;
-(BOOL)_shouldRegisterAsProtectedDataObserver;
-(void)_queue_logQueryWithDuration:(double)arg1 statistics:(id)arg2 ;
-(void)_queue_transitionToSuspendedState:(long long)arg1 ;
-(void)_queue_endObservingDataTypes;
-(BOOL)_shouldObserveAllSampleTypes;
-(id)_queue_sampleTypesForObservation;
-(void)_queue_setSampleTypeObservationAssertions:(id)arg1 ;
-(void)_queue_beginObservingDataTypes;
-(id)_queryStateString;
-(id)_sampleTypeToObserveForUpdates;
-(id)unitTest_queryServerSetShouldPauseHandler;
-(void)setUnitTest_queryServerSetShouldPauseHandler:(id)arg1 ;
-(id)unitTest_queryServerWillChangeStateHandler;
-(void)setUnitTest_queryServerWillChangeStateHandler:(id)arg1 ;
@end

