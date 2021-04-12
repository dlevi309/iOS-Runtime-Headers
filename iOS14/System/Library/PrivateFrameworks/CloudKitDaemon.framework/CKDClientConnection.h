/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <libobjc.A.dylib/CKXPCDaemon.h>

@class CKDClientProxy, NSString;

@interface CKDClientConnection : NSObject <CKXPCDaemon> {

	CKDClientProxy* _proxy;

}

@property (nonatomic,retain) CKDClientProxy * proxy;                //@synthesize proxy=_proxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requestApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)statusGroupsForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performFetchNotificationChangesOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)representativeDataclassEnabledWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchAllLongLivedOperationIDsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getNewWebSharingIdentityDataWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addClouddThrottle:(id)arg1 ;
-(void)performFetchShareMetadataOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)accountsWillDeleteAccount:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importantUserIDsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)decryptPersonalInfoOnShare:(id)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setApplicationPermission:(unsigned long long)arg1 enabled:(BOOL)arg2 setupInfo:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)wipeAllCachesAndDie;
-(void)performFetchWebAuthTokenOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)setProxy:(CKDClientProxy *)arg1 ;
-(void)countAssetCacheItemsWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)serverPreferredPushEnvironmentWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)accountInfoWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2 ;
-(void)clearPILSCacheForLookupInfos:(id)arg1 ;
-(void)performCodeFunctionInvokeOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)cancelOperationWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performDiscoverAllUserIdentitiesOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)triggerAutoBugCaptureSnapshot;
-(void)resetAllApplicationPermissionsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performFetchRecordChangesOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)dumpAllClientsStatusReportToFileHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)serverEnvironmentWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performFetchShareParticipantKeyOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performFetchRecordZonesOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performAggregateZonePCSOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)tossConfigWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performDiscoverUserIdentitiesOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)clearAllClouddThrottles;
-(void)submitClientEventMetric:(id)arg1 withSetupInfo:(id)arg2 completeWhenQueued:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)displayInfoOnAccountWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchXPCCriteriaWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2 ;
-(void)performFetchWhitelistedBundleIDsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performFetchRecordZoneChangesOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)clearCachesForZoneWithSetupInfo:(id)arg1 zoneID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)clearPCSCachesForKnownContextsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performMarkAssetBrokenOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)getPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performFetchSubscriptionsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)showAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 ;
-(void)performModifyWebSharingOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performFetchRecordVersionsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performModifyRecordsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performAcceptSharesOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 setupInfo:(id)arg3 ;
-(void)dumpDaemonStatusReportToFileHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updatePushTokens;
-(void)performFetchArchivedRecordsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performModifyRecordAccessOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)frameworkCachesDirectoryWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)flushOperationMetricsToPowerLog;
-(void)clearContextFromMetadataCache;
-(void)performFetchUserQuotaOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)fetchLongLivedOperationsWithIDs:(id)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)clearCachesWithSetupInfo:(id)arg1 options:(unsigned long long)arg2 databaseScope:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)performRepairZonePCSOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)deviceCountWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performPublishAssetsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)clearRecordCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 ;
-(void)performArchiveRecordsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performQueryOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)currentUserBoundaryKeyWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performFetchShareParticipantsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)statusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performFetchRecordsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)currentDeviceIDWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performInitiateParticipantVettingOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)getOutstandingOperationCountWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performCodeOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)accountWithID:(id)arg1 changedWithChangeType:(long long)arg2 ;
-(void)clearAuthTokensWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3 ;
-(void)performModifySubscriptionsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)getRecordPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)wipeAllCachedLongLivedProxiesWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearCachesForRecordWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)performModifyRecordZonesOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performModifyBadgeOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performMarkNotificationsReadOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performFetchDatabaseChangesOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)initWithConnection:(id)arg1 ;
-(CKDClientProxy *)proxy;
-(void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 withLifetime:(int)arg4 setupInfo:(id)arg5 ;
-(void)fetchPCSFromCacheForZoneWithSetupInfo:(id)arg1 zoneID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handlePerformDaemonCallWithOperationInfo:(id)arg1 clientOperationCallbackProxy:(id)arg2 initialMessageReplyBlock:(/*^block*/id)arg3 forwardingBlock:(/*^block*/id)arg4 ;
-(void)performCompleteParticipantVettingOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_addLongLivedCallbackRelayOperationWithInfo:(id)arg1 clientOperationCallbackProxy:(id)arg2 initialMessageReplyBlock:(/*^block*/id)arg3 longlivedProxyPreparationBlock:(/*^block*/id)arg4 ;
-(void)performRepairAssetsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
@end

