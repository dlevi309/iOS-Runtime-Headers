/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@interface IMCloudKitHooks : NSObject
+(id)sharedInstance;
+(void)__setSingleton__im:(id)arg1 ;
+(id)__singleton__im;
+(id)logHandle;
-(void)broadcastCloudKitStateAfterFetchingAccountStatus;
-(BOOL)eligibleForTruthZone;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(id)exitDate;
-(BOOL)isDisablingDevices;
-(void)tryToDisableAllDevices;
-(void)broadcastCloudKitStateAfterClearingErrors;
-(BOOL)isSyncing;
-(BOOL)isInExitState;
-(void)sendRestoreFailuresLogDumps;
-(id)logHandle;
-(id)lastSyncDate;
-(void)deleteChatZone;
-(void)clearAnalyticDefaultsAndLocalSyncState;
-(void)broadcastCloudKitState;
-(void)fetchAccountStatusAndUpdateMiCSwitchEligibility;
-(BOOL)isEnabled;
-(void)deleteAttachmentZone;
-(void)reportMetricToCK:(id)arg1 withSuccess:(BOOL)arg2 ;
-(BOOL)mocAccountsMatch;
-(void)reportMetricToCK:(id)arg1 withDict:(id)arg2 ;
-(void)_didAttemptToSetEnabledTo:(BOOL)arg1 result:(BOOL)arg2 ;
-(void)_didPerformAdditionalStorageRequiredCheckWithSuccess:(BOOL)arg1 additionalStorageRequired:(unsigned long long)arg2 forAccountId:(id)arg3 error:(id)arg4 ;
-(void)_didAttemptToDisableAllDevicesResult:(BOOL)arg1 ;
-(void)_updateCloudKitState;
-(void)_updateCloudKitStateWithDictionary:(id)arg1 ;
-(id)syncStateDictionary;
-(void)fetchLatestRampState;
-(void)initiatePeriodicSync;
-(void)initiateSync;
-(void)performAdditionalStorageRequiredCheck;
-(void)fetchSyncStateStatistics;
-(void)fetchCloudKitSyncStateDebuggingInfo:(id)arg1 ;
-(void)createChatZone;
-(void)writeDirtyChats;
-(void)syncChats;
-(void)markAllChatsAsDirty;
-(void)clearChatZoneSyncToken;
-(void)createAttachmentZone;
-(void)writeAttachments;
-(void)syncAttachments;
-(void)downloadAttachmentAssets;
-(void)writeDirtyMessages;
-(void)deleteMessagesZone;
-(void)syncMessages;
-(void)loadDirtyMessagesWithLimit:(long long)arg1 ;
-(void)loadDeletedMessagesWithLimit:(long long)arg1 ;
-(void)writeExitRecord;
-(void)fetchExitRecord;
-(void)deleteExitRecord;
-(void)clearDataFromCloudKit;
-(void)uploadDailyAnalyticstoCloudKit;
-(void)fetchLatestSalt;
-(void)printCachedSalt;
-(void)deleteSalt;
-(void)purgeAttachments:(long long)arg1 ;
-(void)metricAttachments:(long long)arg1 ;
-(void)updateAttachmentFileSizes;
-(void)writeCloudKitSyncCounts:(id)arg1 ;
-(void)toggleiCloudBackupsIfNeeded;
-(void)setiCloudBackupsDisabled:(BOOL)arg1 ;
-(void)removePathFromiCloudBackups:(id)arg1 ;
-(void)printCachedRampState;
-(void)syncDeletesToCloudKit;
-(void)tryToAutoCollectLogsWithErrorString:(id)arg1 sendLogsTo:(id)arg2 ;
-(BOOL)isStartingSync;
-(long long)isChangingEnabledState;
-(BOOL)rampedIntoTruthZone;
-(void)setupIMCloudKitHooks;
-(void)clearLocalSyncState;
-(BOOL)shouldShowCloudKitUI;
-(BOOL)removedFromiCloudBackup;
-(BOOL)shouldOptimizeAttachmentStorage;
-(void)setShouldOptimizeAttachmentStorage:(BOOL)arg1 ;
-(void)clearTombStoneMessagesTable;
-(void)reportMetricToCK:(id)arg1 ;
@end

