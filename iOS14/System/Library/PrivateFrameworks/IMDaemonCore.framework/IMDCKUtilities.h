/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)im_AKSecurityLevelKey;
+(id)restoreFailuresDirectory;
+(id)logHandle;
+(id)calculateAliasesForDefaults;
+(void)calculateAndSaveAliasesToDefaults;
+(id)readAliasesFromDefaults;
+(id)_idsAccountController;
-(void)postSyncStateToCloudKit:(id)arg1 legacyOnly:(BOOL)arg2 ;
-(BOOL)serverAllowsAnalyticDetailsSubmission;
-(IMDCKSyncState *)syncState;
-(id)_createAccountError:(id)arg1 ;
-(void)setDeviceSupport:(FTDeviceSupport *)arg1 ;
-(long long)overrideNumberOfChatsToFetch;
-(void)broadcastCloudKitStateAfterFetchingAccountStatus;
-(id)dsid;
-(BOOL)shouldRepairAccountWithAccountStatus:(long long)arg1 securityLevel:(unsigned long long)arg2 ;
-(id)_truthDatabase;
-(unsigned long long)messageDatabaseSize;
-(IMDefaults *)imDefaults;
-(void)resetLastSyncDate;
-(void)reportErrorForSyncType:(long long)arg1 syncStep:(id)arg2 isRecoverable:(BOOL)arg3 error:(id)arg4 ;
-(id)extractRecordIDsDeletedFromCKPartialError:(id)arg1 ;
-(BOOL)isDeviceCharging;
-(void)fetchCloudKitAccountStatusAndUpdateEligibilityAndNeedsRepairStatusWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)CKPartialErrorOnlyHasQuotaExceededError:(id)arg1 ;
-(void)evalToggleiCloudSettingsSwitch;
-(id)_errorsFromPartialError:(id)arg1 ;
-(id)init;
-(BOOL)_deviceActive;
-(id)_accountStore;
-(void)checkiCloudQuota:(/*^block*/id)arg1 ;
-(id)newfilteredArrayRemovingCKRecordDupes:(id)arg1 ;
-(BOOL)didKeyRollPendingCheck;
-(void)disableAllDevicesWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)errorIndicatesIdentityWasLost:(id)arg1 ;
-(BOOL)errorIndicatesChatZoneCreationFailed:(id)arg1 ;
-(void)postSyncStateToCloudKit:(id)arg1 useManatee:(BOOL)arg2 legacyOnly:(BOOL)arg3 ;
-(id)backupController;
-(BOOL)_shouldiCloudSwitchBeEnabled;
-(BOOL)logDumpIsNecessaryAfterSync;
-(id)internalQueue;
-(id)lastDeviceBackUpDate;
-(BOOL)errorIndicatesQuotaExceeded:(id)arg1 ;
-(BOOL)isLocalCachedSaltPresent;
-(BOOL)shouldKickOffWriteForSyncType:(long long)arg1 ;
-(BOOL)errorIndicatesUserDeletedZone:(id)arg1 ;
-(BOOL)_isRunningInAutomation;
-(void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 isInitialSync:(BOOL)arg4 requirePreviousPrompt:(BOOL)arg5 willSendBlock:(/*^block*/id)arg6 ;
-(void)_fetchPrimaryAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)logCloudKitSyncToPowerLogForSyncType:(long long)arg1 isCoreDuetSync:(BOOL)arg2 didCompleteChatSync:(BOOL)arg3 didSucceedSyncingChats:(BOOL)arg4 didCompleteMessageSync:(BOOL)arg5 didSucceedSyncingMessages:(BOOL)arg6 didCompleteAttachmentSync:(BOOL)arg7 didSucceedSyncingAttachments:(BOOL)arg8 syncAttemptCount:(unsigned long long)arg9 ;
-(id)exitManager;
-(id)_authenticationController;
-(BOOL)_isCKErrorPartialFailure:(id)arg1 ;
-(BOOL)_mocFeatureEnabled;
-(id)_primaryiCloudAccountAltDSID;
-(void)_askToTapToRadarWithString:(id)arg1 internalOnly:(BOOL)arg2 ;
-(BOOL)isCKPartialError:(id)arg1 ;
-(void)setCloudKitSyncingEnabled:(BOOL)arg1 ;
-(BOOL)accountIsVerifiedForMOCAndSafeForCacheDelete;
-(void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 requirePreviousPrompt:(BOOL)arg4 willSendBlock:(/*^block*/id)arg5 ;
-(BOOL)errorIndicateDeviceDoesNotHaveKeysToSync:(id)arg1 ;
-(void)setLockdownManager:(IMLockdownManager *)arg1 ;
-(BOOL)shouldCollectDailyLogDumpForRestoreFailures;
-(long long)_mininimumServerBagClientValue;
-(id)deviceConditions;
-(void)submitPCSReportManateeStatuMetricWithPrefix:(id)arg1 andReason:(id)arg2 ;
-(void)logCloudKitSyncToPowerLogForSyncType:(long long)arg1 isCoreDuetSync:(BOOL)arg2 didStartSync:(BOOL)arg3 didFinishSync:(BOOL)arg4 didSucceedSyncing:(BOOL)arg5 ;
-(BOOL)_serverAllowsRemovalFromBackUp;
-(void)broadcastCloudKitStateAfterClearingErrors;
-(void)logToPowerLogForLogDumpGUID:(id)arg1 logDumpCompleted:(BOOL)arg2 logDumpSucceeded:(BOOL)arg3 logDumpSendingCompleted:(BOOL)arg4 logDumpSendingSucceeded:(BOOL)arg5 reason:(id)arg6 ;
-(void)primaryAccountHasiCloudBackupEnabledWithCompletion:(/*^block*/id)arg1 ;
-(void)syncStateWillUpdate:(id)arg1 ;
-(unsigned long long)_primaryiCloudAccountSecurityLevel;
-(BOOL)cacheDeleteEnabled;
-(BOOL)CKPartialError:(id)arg1 hasErrorCode:(id)arg2 ;
-(BOOL)iCloudAccountMatchesiMessageAccount;
-(BOOL)serverAllowsAnalyticSubmission;
-(void)postSyncStateToCloudKit:(id)arg1 useManatee:(BOOL)arg2 ;
-(id)_primaryiCloudAccount;
-(BOOL)isSyncingPaused;
-(id)ckStatisticCalculations;
-(id)extractServerRecordFromCKServerErrorRecordChanged:(id)arg1 ;
-(BOOL)_isLogDumpAllowed;
-(id)_accountManager;
-(BOOL)isInCloudKitDemoMode;
-(BOOL)_checkIfEnabledByServerBagOrDefault:(id)arg1 ;
-(BOOL)_serverAllowsSync;
-(BOOL)logDumpIsExpected;
-(void)isFirstSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)reportZoneCreation:(id)arg1 ;
-(BOOL)isRecoverableCloudKitError:(id)arg1 withRetryInterval:(id*)arg2 ;
-(BOOL)shouldCollectDailyLogDump;
-(BOOL)_shouldDisplayPopUpForResettingKeepMessages;
-(id)logHandle;
-(void)metricForPCSReportManateeStatusWithReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_resetKeepMessagesSettingandBroadcastToAllDevices;
-(BOOL)_serverAllowsCacheDelete;
-(BOOL)_allowDestructiveMOCFeaturesBasedOnDSID;
-(BOOL)errorIndicatesZoneNotCreated:(id)arg1 ;
-(id)_truthContainer;
-(void)setServerBag:(IDSServerBag *)arg1 ;
-(void)eligibleForTruthZoneWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)removeFromBackUpAllowed;
-(BOOL)signedIntoiCloudAndiMessageAndiCloudAccountMatchesiMessageAccount;
-(BOOL)useDeprecatedApi;
-(BOOL)_isInExitState;
-(void)_showCKLogNotificationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_isSyncingPausedOverride;
-(void)_setEligibleToToggleMiCSwitch:(BOOL)arg1 ;
-(void)checkCloudkitEnabledStatusAndToggleiCloudSwitchIfNeeded;
-(id)initWithServerBag:(id)arg1 lockDownmanager:(id)arg2 deviceSupport:(id)arg3 imDefaults:(id)arg4 ;
-(BOOL)cloudKitSyncDownloadAssetsOnly;
-(id)findRootCause:(id)arg1 ;
-(void)fetchCloudKitAccountStatusWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)serverAllowsMetricSubmission;
-(id)deviceActiveString;
-(void)enableMOCIfNeeded;
-(void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 ;
-(void)postSyncStateToCloudKit:(id)arg1 ;
-(BOOL)shouldUseDevNickNameContainer;
-(BOOL)cloudKitSyncingEnabled;
-(id)_personIdFromAccount:(id)arg1 ;
-(BOOL)errorIndicatesDeviceConditionsDontAllowSync:(id)arg1 ;
-(void)broadcastCloudKitState;
-(BOOL)shouldSyncToSRContainer;
-(FTDeviceSupport *)deviceSupport;
-(void)fetchAccountStatusAndUpdateMiCSwitchEligibility;
-(BOOL)isKeyRollPending;
-(void)keyRollPendingStateDidChange;
-(IDSServerBag *)serverBag;
-(id)recordNameForMessageWithGUID:(id)arg1 usingSalt:(id)arg2 ;
-(void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 ;
-(void)setUseDeprecatedApi:(BOOL)arg1 ;
-(BOOL)enableAttachmentMetricCollection;
-(BOOL)_checkEligibilityWithAccountInfo:(id)arg1 ;
-(BOOL)acceptableErrorCodeWhileDeleting:(id)arg1 ;
-(id)newfilteredArrayRemovingCKRecordIDDupes:(id)arg1 ;
-(void)_metricForPCSReportManateeStatusWithReason:(id)arg1 linkedFunction:(/*function pointer*/void*)arg2 timeoutInSec:(double)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_accountNeedsRepairOverride;
-(void)fetchiCloudAccountPersonID:(/*^block*/id)arg1 ;
-(BOOL)isDeviceOnWifi;
-(BOOL)deviceConditionsAllowPeriodicSync;
-(BOOL)shouldLogDumpOnCloudKitError;
-(BOOL)CKPartialError:(id)arg1 onlyHasErrorCodes:(id)arg2 ;
-(void)downgradingFromHSA2AndDisablingMOC;
-(void)reportCompletionForSyncType:(long long)arg1 isCoreDuetSync:(BOOL)arg2 onAttempt:(unsigned long long)arg3 wasSuccessful:(BOOL)arg4 ;
-(void)_setiCloudSettingsSwitchEnabled:(BOOL)arg1 ;
-(void)setImDefaults:(IMDefaults *)arg1 ;
-(void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3 sendToHandle:(id)arg4 ;
-(id)_getKeepMessagesValue;
-(void)fetchAccountStatusAndUpdateMiCSwitchEligibilityIfNeededOnImagentLaunch;
-(long long)overrideNumberOfChatsToWrite;
-(id)logCollectorAddress;
-(BOOL)shouldForceArchivedMessagesSync;
-(id)syncFailureMetricString:(id)arg1 isRecoverable:(BOOL)arg2 error:(id)arg3 ;
-(void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3 sendToHandle:(id)arg4 reasonString:(id)arg5 ;
-(BOOL)shouldUseDevContainer;
-(void)setDidKeyRollPendingCheck:(BOOL)arg1 ;
-(BOOL)shouldPresentTTROnCloudKitError;
-(void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3 ;
-(IMLockdownManager *)lockdownManager;
@end

