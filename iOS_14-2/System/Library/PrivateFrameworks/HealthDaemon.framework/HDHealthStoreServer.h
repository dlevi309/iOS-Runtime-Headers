/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDUnitPreferencesManagerObserver.h>
#import <libobjc.A.dylib/HDSampleSaving.h>
#import <libobjc.A.dylib/HDTaskServerEndpointDelegate.h>
#import <libobjc.A.dylib/HDConceptIndexManagerObserver.h>
#import <libobjc.A.dylib/HDTaskServerDelegate.h>
#import <libobjc.A.dylib/HDHealthStoreServerInterface.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary, HDDaemon, HDProfile, HKHealthStoreConfiguration, HDHealthStoreClient, HDAuthorizationServer, HDQueryControlServer, NSString;

@interface HDHealthStoreServer : NSObject <HDDiagnosticObject, HDUnitPreferencesManagerObserver, HDSampleSaving, HDTaskServerEndpointDelegate, HDConceptIndexManagerObserver, HDTaskServerDelegate, HDHealthStoreServerInterface> {

	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_source> _clientTransactionTimer;
	NSMutableDictionary* _taskServerEndpointsByUUID;
	HDDaemon* _daemon;
	HDProfile* _profile;
	HKHealthStoreConfiguration* _configuration;
	HDHealthStoreClient* _client;
	NSObject*<OS_dispatch_queue> _queue;
	HDAuthorizationServer* _authorizationServer;
	HDQueryControlServer* _queryControlServer;

}

@property (nonatomic,copy,readonly) NSString * clientDebuggingIdentifier; 
@property (nonatomic,retain) HDQueryControlServer * queryControlServer;                      //@synthesize queryControlServer=_queryControlServer - In the implementation block
@property (nonatomic,__weak,readonly) HDDaemon * daemon;                                     //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,readonly) HDProfile * profile;                                          //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) HKHealthStoreConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) HDHealthStoreClient * client;                                 //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) HDAuthorizationServer * authorizationServer;                  //@synthesize authorizationServer=_authorizationServer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)conceptIndexManagerDidBecomeQuiescent:(id)arg1 samplesProcessedCount:(long long)arg2 ;
-(BOOL)_queue_isServerActive;
-(void)remote_deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(HDDaemon *)daemon;
-(void)remote_setServerURL:(id)arg1 forAssetType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(HDHealthStoreClient *)client;
-(void)remote_splitTotalCalories:(double)arg1 timeInterval:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)sampleSavingDelegate;
-(id)_clientRemoteObjectProxy;
-(void)remote_saveDataObjects:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)remote_authorizationStatusForType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_deleteDataObjectsOfType:(id)arg1 matchingFilter:(id)arg2 options:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)_remote_associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(/*^block*/id)objectAuthorizationPromptHandler;
-(void)start;
-(void)remote_fetchPluginServiceEndpointWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_deleteDataObjects:(id)arg1 options:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_queue_serverActivityChanged;
-(void)performIfAuthorizedToDeleteObjectTypes:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)remote_clientWillSuspendWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithClient:(id)arg1 profile:(id)arg2 configuration:(id)arg3 connectionQueue:(id)arg4 ;
-(/*^block*/id)_permissionBlockForRestrictedSourceEntities:(id)arg1 ;
-(void)remote_dropEntitlement:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_createQueryServerEndpointForIdentifier:(id)arg1 queryUUID:(id)arg2 configuration:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)performIfAuthorizedToSaveObjectTypes:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)remote_saveDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)_serverActivityChanged;
-(HDAuthorizationServer *)authorizationServer;
-(BOOL)_queue_insertObjects:(id)arg1 sourceEntity:(id)arg2 sourceVersionOverride:(id)arg3 shouldJournal:(BOOL)arg4 error:(id*)arg5 ;
-(void)remote_getHealthLiteValueForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_getIsFeatureSetAvailable:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_remote_saveObjects:(id)arg1 deleteObjects:(id)arg2 associations:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_holdActiveClientTransactionWithCompletion:(/*^block*/id)arg1 ;
-(id)_queue_objectsByProvenanceForInsertion:(id)arg1 sourceEntity:(id)arg2 sourceVersionOverride:(id)arg3 error:(id*)arg4 ;
-(void)_requirePrivateHealthKitEntitlementUsingBlock:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)remote_invalidateActivityAlertSuppressionForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HKHealthStoreConfiguration *)configuration;
-(id)diagnosticDescription;
-(HDQueryControlServer *)queryControlServer;
-(void)taskServerDidInvalidate:(id)arg1 ;
-(void)remote_replaceWorkout:(id)arg1 withWorkout:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_fetchCharacteristicWithDataType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(HDProfile *)profile;
-(id)_objectsByProvenance:(id)arg1 errorOut:(id*)arg2 ;
-(NSString *)clientDebuggingIdentifier;
-(void)remote_recoverActiveWorkoutSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_deleteObjectsWithUUIDs:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_saveValidatedDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)unitPreferencesManagerDidUpdateUnitPreferences:(id)arg1 ;
-(BOOL)_clientHasPrivateHealthKitEntitlementWithError:(id*)arg1 ;
-(void)remote_removePreferredUnitForType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveSamples:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_requireEntitlement:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)remote_closeTransactionWithDataType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_clientHasControlEntitlementWithError:(id*)arg1 ;
-(void)setQueryControlServer:(HDQueryControlServer *)arg1 ;
-(id)taskServerWithUUID:(id)arg1 ;
-(void)_openAppForAuthorizationForSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidate;
-(void)remote_fetchModificationDateForCharacteristicWithDataType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)remote_deleteClientSourceWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)remote_setCharacteristic:(id)arg1 forDataType:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_queue_holdActiveClientTransactionWithCompletion:(/*^block*/id)arg1 ;
-(void)_performIfAuthorizedToDeleteObjects:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)remote_setBackgroundDeliveryFrequency:(long long)arg1 forDataType:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_performIfAuthorizedToSaveObjects:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)remote_suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_objectsToInsertWithObjects:(id)arg1 error:(id*)arg2 ;
-(/*^block*/id)_authorizationPromptHandler;
-(void)remote_requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_performIfAuthorizedToReadTypes:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)remote_getRequestStatusForAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_addSamples:(id)arg1 toWorkout:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_restoreEntitlement:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_createTaskServerEndpointForIdentifier:(id)arg1 pluginURL:(id)arg2 taskUUID:(id)arg3 configuration:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)remote_startWatchAppWithWorkoutConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saveDataObjects:(id)arg1 sourceEntity:(id)arg2 sourceVersion:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)_getHealthRecordsPlugin;
-(void)remote_fetchDaemonPreferenceForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_handleAuthorizationForExtensionWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2 ;
-(void)remote_fetchUnitPreferencesForTypes:(id)arg1 version:(long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)conceptIndexManagerDidChangeExecutionState:(unsigned long long)arg1 ;
-(void)remote_setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_insertedObjects:(id)arg1 containsQuantitySampleWithType:(id)arg2 ;
-(void)taskServerDidFailToInitializeForUUID:(id)arg1 ;
-(void)remote_clientResumedWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_cancelActiveClientTransaction;
-(/*^block*/id)_completionHandlerForReplaceWithOriginalWorkout:(id)arg1 newWorkout:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cancelActiveClientTransaction;
-(void)remote_setHealthLiteValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)clientSourceWithError:(id*)arg1 ;
-(void)remote_fetchServerURLForAssetType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_setDaemonPreferenceValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)taskServerDidFinishInitialization:(id)arg1 ;
@end

