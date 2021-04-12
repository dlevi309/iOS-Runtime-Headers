/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDCKSyncStateDelegate.h>

@class IMDCKSyncState, IMLockdownManager, IDSServerBag, FTDeviceSupport, IMDefaults, NSString;

@interface IMDCKUtilities : NSObject <IMDCKSyncStateDelegate> {

	BOOL _didKeyRollPendingCheck;
	BOOL _useDeprecatedApi;
	IMDCKSyncState* _syncState;
	IMLockdownManager* _lockdownManager;
	IDSServerBag* _serverBag;
	FTDeviceSupport* _deviceSupport;
	IMDefaults* _imDefaults;

}

@property (assign,nonatomic) BOOL didKeyRollPendingCheck;                                //@synthesize didKeyRollPendingCheck=_didKeyRollPendingCheck - In the implementation block
@property (nonatomic,retain) IMLockdownManager * lockdownManager;                        //@synthesize lockdownManager=_lockdownManager - In the implementation block
@property (nonatomic,retain) IDSServerBag * serverBag;                                   //@synthesize serverBag=_serverBag - In the implementation block
@property (nonatomic,retain) FTDeviceSupport * deviceSupport;                            //@synthesize deviceSupport=_deviceSupport - In the implementation block
@property (nonatomic,retain) IMDefaults * imDefaults;                                    //@synthesize imDefaults=_imDefaults - In the implementation block
@property (nonatomic,readonly) BOOL isInCloudKitDemoMode; 
@property (assign,nonatomic) BOOL useDeprecatedApi;                                      //@synthesize useDeprecatedApi=_useDeprecatedApi - In the implementation block
@property (nonatomic,readonly) IMDCKSyncState * syncState;                               //@synthesize syncState=_syncState - In the implementation block
@property (nonatomic,readonly) BOOL isSyncingPaused; 
@property (getter=isKeyRollPending,nonatomic,readonly) BOOL keyRollPending; 
@property (getter=isDeviceCharging,nonatomic,readonly) BOOL deviceCharging; 
@property (getter=isDeviceOnWifi,nonatomic,readonly) BOOL deviceOnWifi; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)logHandle;
+(id)_idsAccountController;
+(id)calculateAliasesForDefaults;
+(id)restoreFailuresDirectory;
+(id)im_AKSecurityLevelKey;
+(id)readAliasesFromDefaults;
+(void)calculateAndSaveAliasesToDefaults;
-(id)init;
-(id)dsid;
-(id)_accountStore;
-(id)internalQueue;
-(IDSServerBag *)serverBag;
-(BOOL)isDeviceOnWifi;
-(BOOL)isDeviceCharging;
-(id)logHandle;
-(id)_accountManager;
-(id)_authenticationController;
-(IMDCKSyncState *)syncState;
-(unsigned long long)messageDatabaseSize;
-(void)broadcastCloudKitState;
-(void)broadcastCloudKitStateAfterFetchingAccountStatus;
-(void)broadcastCloudKitStateAfterClearingErrors;
-(void)fetchAccountStatusAndUpdateMiCSwitchEligibility;
-(BOOL)isSyncingPaused;
-(id)_primaryiCloudAccount;
-(id)initWithServerBag:(id)arg1 lockDownmanager:(id)arg2 deviceSupport:(id)arg3 imDefaults:(id)arg4 ;
-(BOOL)cloudKitSyncingEnabled;
-(id)backupController;
-(BOOL)didKeyRollPendingCheck;
-(void)setDidKeyRollPendingCheck:(BOOL)arg1 ;
-(BOOL)isKeyRollPending;
-(void)syncStateWillUpdate:(id)arg1 ;
-(void)fetchCloudKitAccountStatusAndUpdateEligibilityAndNeedsRepairStatusWithCompletion:(/*^block*/id)arg1 ;
-(IMLockdownManager *)lockdownManager;
-(id)_truthDatabase;
-(long long)_mininimumServerBagClientValue;
-(BOOL)iCloudAccountMatchesiMessageAccount;
-(BOOL)_serverAllowsSync;
-(BOOL)_mocFeatureEnabled;
-(BOOL)_isInExitState;
-(void)_resetKeepMessagesSettingandBroadcastToAllDevices;
-(void)evalToggleiCloudSettingsSwitch;
-(id)_getKeepMessagesValue;
-(BOOL)_shouldDisplayPopUpForResettingKeepMessages;
-(BOOL)_allowDestructiveMOCFeaturesBasedOnDSID;
-(BOOL)_serverAllowsCacheDelete;
-(BOOL)_serverAllowsRemovalFromBackUp;
-(void)fetchCloudKitAccountStatusWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)cacheDeleteEnabled;
-(id)_truthContainer;
-(id)_createAccountError:(id)arg1 ;
-(BOOL)_checkEligibilityWithAccountInfo:(id)arg1 ;
-(BOOL)_accountNeedsRepairOverride;
-(unsigned long long)_primaryiCloudAccountSecurityLevel;
-(void)_setEligibleToToggleMiCSwitch:(BOOL)arg1 ;
-(BOOL)shouldRepairAccountWithAccountStatus:(long long)arg1 securityLevel:(unsigned long long)arg2 ;
-(BOOL)_checkIfEnabledByServerBagOrDefault:(id)arg1 ;
-(BOOL)_isLogDumpAllowed;
-(id)logCollectorAddress;
-(void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3 sendToHandle:(id)arg4 ;
-(void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3 sendToHandle:(id)arg4 reasonString:(id)arg5 ;
-(BOOL)shouldLogDumpOnCloudKitError;
-(void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 isInitialSync:(BOOL)arg4 requirePreviousPrompt:(BOOL)arg5 willSendBlock:(/*^block*/id)arg6 ;
-(BOOL)shouldPresentTTROnCloudKitError;
-(void)_askToTapToRadarWithString:(id)arg1 internalOnly:(BOOL)arg2 ;
-(BOOL)_isCKErrorPartialFailure:(id)arg1 ;
-(id)_errorsFromPartialError:(id)arg1 ;
-(BOOL)CKPartialError:(id)arg1 onlyHasErrorCodes:(id)arg2 ;
-(BOOL)errorIndicatesQuotaExceeded:(id)arg1 ;
-(BOOL)errorIndicatesDeviceConditionsDontAllowSync:(id)arg1 ;
-(void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3 ;
-(BOOL)_shouldiCloudSwitchBeEnabled;
-(void)_setiCloudSettingsSwitchEnabled:(BOOL)arg1 ;
-(id)_personIdFromAccount:(id)arg1 ;
-(void)_fetchPrimaryAccountWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_isSyncingPausedOverride;
-(BOOL)_deviceActive;
-(void)postSyncStateToCloudKit:(id)arg1 useManatee:(BOOL)arg2 legacyOnly:(BOOL)arg3 ;
-(id)exitManager;
-(BOOL)serverAllowsAnalyticDetailsSubmission;
-(BOOL)serverAllowsMetricSubmission;
-(id)syncFailureMetricString:(id)arg1 isRecoverable:(BOOL)arg2 error:(id)arg3 ;
-(BOOL)serverAllowsAnalyticSubmission;
-(BOOL)isCKPartialError:(id)arg1 ;
-(id)deviceActiveString;
-(void)logToPowerLogForLogDumpGUID:(id)arg1 logDumpCompleted:(BOOL)arg2 logDumpSucceeded:(BOOL)arg3 logDumpSendingCompleted:(BOOL)arg4 logDumpSendingSucceeded:(BOOL)arg5 reason:(id)arg6 ;
-(void)_showCKLogNotificationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)deviceConditionsAllowPeriodicSync;
-(BOOL)_isRunningInAutomation;
-(BOOL)logDumpIsExpected;
-(id)ckStatisticCalculations;
-(void)_metricForPCSReportManateeStatusWithReason:(id)arg1 linkedFunction:(/*function pointer*/void*)arg2 timeoutInSec:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)metricForPCSReportManateeStatusWithReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_primaryiCloudAccountAltDSID;
-(void)setCloudKitSyncingEnabled:(BOOL)arg1 ;
-(FTDeviceSupport *)deviceSupport;
-(IMDefaults *)imDefaults;
-(void)keyRollPendingStateDidChange;
-(BOOL)shouldUseDevContainer;
-(BOOL)shouldUseDevNickNameContainer;
-(BOOL)shouldForceArchivedMessagesSync;
-(BOOL)shouldSyncToSRContainer;
-(long long)overrideNumberOfChatsToFetch;
-(long long)overrideNumberOfChatsToWrite;
-(void)isFirstSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)checkiCloudQuota:(/*^block*/id)arg1 ;
-(BOOL)cloudKitSyncDownloadAssetsOnly;
-(BOOL)enableAttachmentMetricCollection;
-(BOOL)removeFromBackUpAllowed;
-(BOOL)accountIsVerifiedForMOCAndSafeForCacheDelete;
-(void)fetchAccountStatusAndUpdateMiCSwitchEligibilityIfNeededOnImagentLaunch;
-(BOOL)shouldCollectDailyLogDump;
-(BOOL)shouldCollectDailyLogDumpForRestoreFailures;
-(void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 ;
-(id)recordNameForMessageWithGUID:(id)arg1 usingSalt:(id)arg2 ;
-(id)extractServerRecordFromCKServerErrorRecordChanged:(id)arg1 ;
-(BOOL)CKPartialError:(id)arg1 hasErrorCode:(id)arg2 ;
-(BOOL)CKPartialErrorOnlyHasQuotaExceededError:(id)arg1 ;
-(BOOL)isRecoverableCloudKitError:(id)arg1 withRetryInterval:(id*)arg2 ;
-(BOOL)acceptableErrorCodeWhileDeleting:(id)arg1 ;
-(id)extractRecordIDsDeletedFromCKPartialError:(id)arg1 ;
-(BOOL)errorIndicatesZoneNotCreated:(id)arg1 ;
-(BOOL)errorIndicatesUserDeletedZone:(id)arg1 ;
-(void)resetLastSyncDate;
-(BOOL)errorIndicatesChatZoneCreationFailed:(id)arg1 ;
-(void)checkCloudkitEnabledStatusAndToggleiCloudSwitchIfNeeded;
-(void)fetchiCloudAccountPersonID:(/*^block*/id)arg1 ;
-(void)primaryAccountHasiCloudBackupEnabledWithCompletion:(/*^block*/id)arg1 ;
-(id)deviceConditions;
-(id)newfilteredArrayRemovingCKRecordDupes:(id)arg1 ;
-(id)newfilteredArrayRemovingCKRecordIDDupes:(id)arg1 ;
-(id)lastDeviceBackUpDate;
-(BOOL)errorIndicatesIdentityWasLost:(id)arg1 ;
-(BOOL)errorIndicateDeviceDoesNotHaveKeysToSync:(id)arg1 ;
-(BOOL)shouldKickOffWriteForSyncType:(long long)arg1 ;
-(BOOL)isLocalCachedSaltPresent;
-(void)postSyncStateToCloudKit:(id)arg1 ;
-(void)postSyncStateToCloudKit:(id)arg1 useManatee:(BOOL)arg2 ;
-(void)postSyncStateToCloudKit:(id)arg1 legacyOnly:(BOOL)arg2 ;
-(void)reportZoneCreation:(id)arg1 ;
-(void)reportErrorForSyncType:(long long)arg1 syncStep:(id)arg2 isRecoverable:(BOOL)arg3 error:(id)arg4 ;
-(void)reportCompletionForSyncType:(long long)arg1 isCoreDuetSync:(BOOL)arg2 onAttempt:(unsigned long long)arg3 wasSuccessful:(BOOL)arg4 ;
-(id)findRootCause:(id)arg1 ;
-(void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 ;
-(void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 requirePreviousPrompt:(BOOL)arg4 willSendBlock:(/*^block*/id)arg5 ;
-(void)logCloudKitSyncToPowerLogForSyncType:(long long)arg1 isCoreDuetSync:(BOOL)arg2 didStartSync:(BOOL)arg3 didFinishSync:(BOOL)arg4 didSucceedSyncing:(BOOL)arg5 ;
-(void)logCloudKitSyncToPowerLogForSyncType:(long long)arg1 isCoreDuetSync:(BOOL)arg2 didCompleteChatSync:(BOOL)arg3 didSucceedSyncingChats:(BOOL)arg4 didCompleteMessageSync:(BOOL)arg5 didSucceedSyncingMessages:(BOOL)arg6 didCompleteAttachmentSync:(BOOL)arg7 didSucceedSyncingAttachments:(BOOL)arg8 syncAttemptCount:(unsigned long long)arg9 ;
-(BOOL)logDumpIsNecessaryAfterSync;
-(void)submitPCSReportManateeStatuMetricWithPrefix:(id)arg1 andReason:(id)arg2 ;
-(BOOL)signedIntoiCloudAndiMessageAndiCloudAccountMatchesiMessageAccount;
-(void)enableMOCIfNeeded;
-(void)downgradingFromHSA2AndDisablingMOC;
-(void)eligibleForTruthZoneWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isInCloudKitDemoMode;
-(void)disableAllDevicesWithCompletion:(/*^block*/id)arg1 ;
-(void)setLockdownManager:(IMLockdownManager *)arg1 ;
-(void)setServerBag:(IDSServerBag *)arg1 ;
-(void)setDeviceSupport:(FTDeviceSupport *)arg1 ;
-(void)setImDefaults:(IMDefaults *)arg1 ;
-(BOOL)useDeprecatedApi;
-(void)setUseDeprecatedApi:(BOOL)arg1 ;
@end

