/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol CKXPCDaemon <NSObject>
@required
-(void)performRepairAssetsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performMarkAssetBrokenOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performModifyRecordZonesOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performDiscoverAllIdentitiesOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)cancelOperationWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)accountStatusWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)accountInfoWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)importantUserIDsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)statusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)requestApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getSandboxExtensionsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)frameworkCachesDirectoryWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)performDiscoverUserIdentitiesOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchShareParticipantsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchRecordsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performModifyRecordsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchRecordChangesOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchRecordZoneChangesOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchRecordVersionsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchArchivedRecordsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performArchiveRecordsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performPublishAssetsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performModifyWebSharingOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)getNewWebSharingIdentityWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getNewWebSharingIdentityDataWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchXPCCriteriaWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)performModifyRecordAccessOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performQueryOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performModifySubscriptionsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchSubscriptionsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchRecordZonesOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchDatabaseChangesOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performModifyBadgeOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchNotificationChangesOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performMarkNotificationsReadOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performAcceptSharesOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performCompleteParticipantVettingOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchShareMetadataOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchShareParticipantKeyOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)decryptPersonalInfoOnShare:(id)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)performInitiateParticipantVettingOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchUserQuotaOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchWebAuthTokenOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performFetchWhitelistedBundleIDsOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)performCodeFunctionInvokeOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)fetchLongLivedOperationsWithIDs:(id)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fetchAllLongLivedOperationIDsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)serverPreferredPushEnvironmentWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)serverEnvironmentWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)currentDeviceIDWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)displayInfoOnAccountWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)currentUserBoundaryKeyWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)performAggregateZonePCSOperation:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)dumpAllClientsStatusReportToFileHandle:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)dumpDaemonStatusReportToFileHandle:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 setupInfo:(id)arg3;
-(void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 withLifetime:(int)arg4 setupInfo:(id)arg5;
-(void)countAssetCacheItemsWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)clearAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)showAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2;
-(void)clearRecordCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2;
-(void)clearAuthTokensWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3;
-(void)clearCachesWithSetupInfo:(id)arg1 options:(unsigned long long)arg2 databaseScope:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)clearCachesForRecordWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)clearCachesForZoneWithSetupInfo:(id)arg1 zoneID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)wipeAllCachedLongLivedProxiesWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getOutstandingOperationCountWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)clearPCSCachesForKnownContextsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
-(void)accountsDidRevokeAccessToBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerIdentifiers:(id)arg3;
-(void)accountsWillDeleteAccount:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)accountWithID:(id)arg1 changedWithChangeType:(long long)arg2;
-(void)setApplicationPermission:(unsigned long long)arg1 enabled:(BOOL)arg2 setupInfo:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)resetAllApplicationPermissionsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)statusGroupsForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)wipeAllCachesAndDie;
-(void)clearContextFromMetadataCache;
-(void)clearPILSCacheForLookupInfos:(id)arg1;
-(void)updatePushTokens;
-(void)dataclassEnabled:(id)arg1 withSetupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)flushOperationMetricsToPowerLog;
-(void)triggerAutoBugCaptureSnapshot;
-(void)submitClientEventMetric:(id)arg1 withSetupInfo:(id)arg2 completeWhenQueued:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)getPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getRecordPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)repairZonePCSWithOperationInfo:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)tossConfigWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)requestClientSyncWithOperationInfo:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)deviceCountWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

