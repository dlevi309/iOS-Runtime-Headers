/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDUnitPreferencesManagerObserver.h>
#import <libobjc.A.dylib/HDDeepBreathingSessionServerDelegate.h>
#import <libobjc.A.dylib/HDSampleSaving.h>
#import <libobjc.A.dylib/HDConceptIndexManagerObserver.h>
#import <libobjc.A.dylib/HDTaskServerDelegate.h>
#import <libobjc.A.dylib/HDHealthStoreServerInterface.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary, NSString, HDDaemon, HDProfile, HKHealthStoreConfiguration, HDHealthStoreClient, HDAuthorizationServer, NSMutableSet, HDCloudSyncServer, HDHealthServicesServer, HDMedicalIDServer, HDNanoSyncServer, HDNotificationServer, HDProfileServer, HDQueryControlServer, HDStaticSyncServer, HDUtilityServer, HDWorkoutServer;

@interface HDHealthStoreServer : NSObject <HDDiagnosticObject, HDUnitPreferencesManagerObserver, HDDeepBreathingSessionServerDelegate, HDSampleSaving, HDConceptIndexManagerObserver, HDTaskServerDelegate, HDHealthStoreServerInterface> {

	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSMutableDictionary* _deepBreathingSessionServersByUUID;
	NSObject*<OS_dispatch_source> _clientTransactionTimer;
	NSString* _clientSourceVersion;
	NSMutableDictionary* _taskServerEndpointsByUUID;
	NSMutableDictionary* _taskServerObserversByUUID;
	HDDaemon* _daemon;
	HDProfile* _profile;
	HKHealthStoreConfiguration* _configuration;
	HDHealthStoreClient* _client;
	NSObject*<OS_dispatch_queue> _queue;
	HDAuthorizationServer* _authorizationServer;
	NSMutableSet* _subservers;
	HDCloudSyncServer* _cloudSyncServer;
	HDHealthServicesServer* _healthServicesServer;
	HDMedicalIDServer* _medicalIDServer;
	HDNanoSyncServer* _nanoSyncServer;
	HDNotificationServer* _notificationServer;
	HDProfileServer* _profileServer;
	HDQueryControlServer* _queryControlServer;
	HDStaticSyncServer* _staticSyncServer;
	HDUtilityServer* _utilityServer;
	HDWorkoutServer* _workoutServer;

}

@property (nonatomic,copy,readonly) NSString * clientDebuggingIdentifier; 
@property (nonatomic,retain) NSMutableSet * subservers;                                      //@synthesize subservers=_subservers - In the implementation block
@property (nonatomic,retain) HDCloudSyncServer * cloudSyncServer;                            //@synthesize cloudSyncServer=_cloudSyncServer - In the implementation block
@property (nonatomic,retain) HDHealthServicesServer * healthServicesServer;                  //@synthesize healthServicesServer=_healthServicesServer - In the implementation block
@property (nonatomic,retain) HDMedicalIDServer * medicalIDServer;                            //@synthesize medicalIDServer=_medicalIDServer - In the implementation block
@property (nonatomic,retain) HDNanoSyncServer * nanoSyncServer;                              //@synthesize nanoSyncServer=_nanoSyncServer - In the implementation block
@property (nonatomic,retain) HDNotificationServer * notificationServer;                      //@synthesize notificationServer=_notificationServer - In the implementation block
@property (nonatomic,retain) HDProfileServer * profileServer;                                //@synthesize profileServer=_profileServer - In the implementation block
@property (nonatomic,retain) HDQueryControlServer * queryControlServer;                      //@synthesize queryControlServer=_queryControlServer - In the implementation block
@property (nonatomic,retain) HDStaticSyncServer * staticSyncServer;                          //@synthesize staticSyncServer=_staticSyncServer - In the implementation block
@property (nonatomic,retain) HDUtilityServer * utilityServer;                                //@synthesize utilityServer=_utilityServer - In the implementation block
@property (nonatomic,retain) HDWorkoutServer * workoutServer;                                //@synthesize workoutServer=_workoutServer - In the implementation block
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
-(void)dealloc;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)start;
-(HDHealthStoreClient *)client;
-(HKHealthStoreConfiguration *)configuration;
-(HDProfile *)profile;
-(HDDaemon *)daemon;
-(void)remote_proxyForHealthServicesServerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_proxyForMedicalIDServerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_proxyForNanoSyncServerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_proxyForNotificationServerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_proxyForCloudSyncServerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_proxyForStaticSyncServerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_proxyForQueryControlServerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_proxyForUtilityServerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_proxyForWorkoutServerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_proxyForProfileServerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchPluginServiceEndpointWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_createTaskServerEndpointForIdentifier:(id)arg1 pluginURL:(id)arg2 taskUUID:(id)arg3 configuration:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)remote_hasSampleWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_hasSourceWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_addSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_allSourcesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_orderedSourcesForObjectType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_updateOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_fetchDevicesMatchingProperty:(id)arg1 values:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)remote_deleteSourceWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_deleteObjectsWithUUIDs:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_deleteClientSourceWithCompletion:(/*^block*/id)arg1 ;
-(void)_remote_associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_authorizationStatusForType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_getRequestStatusForAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)remote_handleAuthorizationForExtensionWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_allAuthorizationRecordsForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_retrieveAllAuthorizationRecordsForDocumentType:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_allAuthorizationRecordsForType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_allSourcesRequestingAuthorizationForTypes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_allObjectAuthorizationRecordsForSampleWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_setAuthorizationStatuses:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)remote_setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 prompt:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)remote_resetAuthorizationStatusForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)remote_endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2 ;
-(void)remote_setObjectAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_resetObjectAuthorizationStatusForObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_resetObjectAuthorizationStatusForBundleIdentifier:(id)arg1 objectType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_saveDataObjects:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)remote_saveDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_deleteDataObjects:(id)arg1 options:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)remote_deleteDataObjectsOfType:(id)arg1 matchingFilter:(id)arg2 options:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_fetchCharacteristicWithDataType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)remote_setCharacteristic:(id)arg1 forDataType:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)remote_getIsFeatureSetAvailable:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_setBackgroundDeliveryFrequency:(long long)arg1 forDataType:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)remote_closeTransactionWithDataType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)remote_fetchUnitPreferencesForTypes:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)remote_setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_splitTotalCalories:(double)arg1 timeInterval:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)remote_clientWillSuspendWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_clientResumedWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_setHealthLiteValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_getHealthLiteValueForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_fetchServerURLForAssetType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_setServerURL:(id)arg1 forAssetType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_getHealthDirectorySizeInBytesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_obliterateHealthDataWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_performMigrationWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_badgeHealthAppForEmergencyContactsConsolidationWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)remote_invalidateActivityAlertSuppressionForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_containerAppExtensionEntitlementsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchDisplayNameWithCompletion:(/*^block*/id)arg1 ;
-(void)_remote_attachDeepBreathingSessionServerWithClient:(id)arg1 sessionConfiguration:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)remote_fetchDaemonPreferenceForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_setDaemonPreferenceValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)diagnosticDescription;
-(HDNotificationServer *)notificationServer;
-(id)sampleSavingDelegate;
-(void)_saveDataObjects:(id)arg1 sourceEntity:(id)arg2 sourceVersion:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)addObserver:(id)arg1 forTaskServerUUID:(id)arg2 ;
-(void)conceptIndexManagerDidBecomeQuiescent:(id)arg1 samplesProcessedCount:(long long)arg2 ;
-(void)conceptIndexManagerDidChangeExecutionState:(unsigned long long)arg1 ;
-(void)unitPreferencesManagerDidUpdateUnitPreferences:(id)arg1 ;
-(void)performIfAuthorizedToDeleteObjectTypes:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)performIfAuthorizedToSaveObjectTypes:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)saveSamples:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithClient:(id)arg1 profile:(id)arg2 configuration:(id)arg3 connectionQueue:(id)arg4 ;
-(void)removeObserver:(id)arg1 forTaskServerUUID:(id)arg2 ;
-(void)removeTaskServerObserver:(id)arg1 ;
-(HDAuthorizationServer *)authorizationServer;
-(/*^block*/id)objectAuthorizationPromptHandler;
-(void)_serverActivityChanged;
-(void)taskServerDidFinishInitialization:(id)arg1 ;
-(void)taskServerDidFailToInitializeForUUID:(id)arg1 ;
-(void)taskServerDidInvalidate:(id)arg1 ;
-(id)taskServerWithUUID:(id)arg1 ;
-(void)_queue_deactivateDeepBreathingSessionServerWithUUID:(id)arg1 ;
-(void)_requireEntitlement:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_fetchSubserverWithRequiredEntitlement:(id)arg1 subserverHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_clientHasPrivateHealthKitEntitlementWithError:(id*)arg1 ;
-(BOOL)_clientHasUtilityEntitlementWithError:(id*)arg1 ;
-(id)clientSourceWithError:(id*)arg1 ;
-(void)_openAppForAuthorizationForSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(/*^block*/id)_authorizationPromptHandler;
-(id)_clientRemoteObjectProxy;
-(BOOL)_queue_insertObjects:(id)arg1 sourceEntity:(id)arg2 sourceVersionOverride:(id)arg3 shouldJournal:(BOOL)arg4 error:(id*)arg5 ;
-(id)_objectsToInsertWithObjects:(id)arg1 error:(id*)arg2 ;
-(void)_saveValidatedDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)_performIfAuthorizedToSaveObjects:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(BOOL)_insertedObjects:(id)arg1 containsQuantitySampleWithType:(id)arg2 ;
-(id)_queue_objectsByProvenanceForInsertion:(id)arg1 sourceEntity:(id)arg2 sourceVersionOverride:(id)arg3 error:(id*)arg4 ;
-(id)_clientSourceVersion;
-(/*^block*/id)_permissionBlockForRestrictedSourceEntities:(id)arg1 ;
-(void)_performIfAuthorizedToDeleteObjects:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_requirePrivateHealthKitEntitlementUsingBlock:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_performIfAuthorizedToReadTypes:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(NSString *)clientDebuggingIdentifier;
-(void)_cancelActiveClientTransaction;
-(void)_holdActiveClientTransactionWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_serverActivityChanged;
-(BOOL)_queue_isServerActive;
-(void)_queue_cancelActiveClientTransaction;
-(void)_queue_holdActiveClientTransactionWithCompletion:(/*^block*/id)arg1 ;
-(id)_getHealthRecordsPlugin;
-(void)deepBreathingServerDidDeactivate:(id)arg1 ;
-(NSMutableSet *)subservers;
-(void)setSubservers:(NSMutableSet *)arg1 ;
-(HDCloudSyncServer *)cloudSyncServer;
-(void)setCloudSyncServer:(HDCloudSyncServer *)arg1 ;
-(HDHealthServicesServer *)healthServicesServer;
-(void)setHealthServicesServer:(HDHealthServicesServer *)arg1 ;
-(HDMedicalIDServer *)medicalIDServer;
-(void)setMedicalIDServer:(HDMedicalIDServer *)arg1 ;
-(HDNanoSyncServer *)nanoSyncServer;
-(void)setNanoSyncServer:(HDNanoSyncServer *)arg1 ;
-(void)setNotificationServer:(HDNotificationServer *)arg1 ;
-(HDProfileServer *)profileServer;
-(void)setProfileServer:(HDProfileServer *)arg1 ;
-(HDQueryControlServer *)queryControlServer;
-(void)setQueryControlServer:(HDQueryControlServer *)arg1 ;
-(HDStaticSyncServer *)staticSyncServer;
-(void)setStaticSyncServer:(HDStaticSyncServer *)arg1 ;
-(HDUtilityServer *)utilityServer;
-(void)setUtilityServer:(HDUtilityServer *)arg1 ;
-(HDWorkoutServer *)workoutServer;
-(void)setWorkoutServer:(HDWorkoutServer *)arg1 ;
@end

