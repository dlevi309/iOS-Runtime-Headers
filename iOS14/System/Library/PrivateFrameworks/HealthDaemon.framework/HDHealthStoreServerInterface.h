/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDHealthStoreServerInterface <NSObject>
@required
-(void)remote_deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4;
-(void)remote_setServerURL:(id)arg1 forAssetType:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_splitTotalCalories:(double)arg1 timeInterval:(double)arg2 withCompletion:(/*^block*/id)arg3;
-(void)remote_saveDataObjects:(id)arg1 handler:(/*^block*/id)arg2;
-(void)remote_authorizationStatusForType:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_deleteDataObjectsOfType:(id)arg1 matchingFilter:(id)arg2 options:(unsigned long long)arg3 handler:(/*^block*/id)arg4;
-(void)_remote_associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_fetchPluginServiceEndpointWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_deleteDataObjects:(id)arg1 options:(unsigned long long)arg2 handler:(/*^block*/id)arg3;
-(void)remote_clientWillSuspendWithCompletion:(/*^block*/id)arg1;
-(void)remote_dropEntitlement:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_createQueryServerEndpointForIdentifier:(id)arg1 queryUUID:(id)arg2 configuration:(id)arg3 completion:(/*^block*/id)arg4;
-(void)remote_saveDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(BOOL)arg3 handler:(/*^block*/id)arg4;
-(void)remote_getHealthLiteValueForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_getIsFeatureSetAvailable:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)_remote_saveObjects:(id)arg1 deleteObjects:(id)arg2 associations:(id)arg3 completion:(/*^block*/id)arg4;
-(void)remote_invalidateActivityAlertSuppressionForIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_replaceWorkout:(id)arg1 withWorkout:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_fetchCharacteristicWithDataType:(id)arg1 handler:(/*^block*/id)arg2;
-(void)remote_recoverActiveWorkoutSessionWithCompletion:(/*^block*/id)arg1;
-(void)remote_deleteObjectsWithUUIDs:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)remote_removePreferredUnitForType:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_closeTransactionWithDataType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 completion:(/*^block*/id)arg4;
-(void)remote_fetchModificationDateForCharacteristicWithDataType:(id)arg1 handler:(/*^block*/id)arg2;
-(void)remote_deleteClientSourceWithCompletion:(/*^block*/id)arg1;
-(void)remote_beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 handler:(/*^block*/id)arg2;
-(void)remote_setCharacteristic:(id)arg1 forDataType:(id)arg2 handler:(/*^block*/id)arg3;
-(void)remote_setBackgroundDeliveryFrequency:(long long)arg1 forDataType:(id)arg2 handler:(/*^block*/id)arg3;
-(void)remote_suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3 completion:(/*^block*/id)arg4;
-(void)remote_requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)remote_getRequestStatusForAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_addSamples:(id)arg1 toWorkout:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_restoreEntitlement:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_createTaskServerEndpointForIdentifier:(id)arg1 pluginURL:(id)arg2 taskUUID:(id)arg3 configuration:(id)arg4 completion:(/*^block*/id)arg5;
-(void)remote_startWatchAppWithWorkoutConfiguration:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_fetchDaemonPreferenceForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_handleAuthorizationForExtensionWithCompletion:(/*^block*/id)arg1;
-(void)remote_endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
-(void)remote_fetchUnitPreferencesForTypes:(id)arg1 version:(long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)remote_setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_clientResumedWithCompletion:(/*^block*/id)arg1;
-(void)remote_setHealthLiteValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_fetchServerURLForAssetType:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_setDaemonPreferenceValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3;

@end

