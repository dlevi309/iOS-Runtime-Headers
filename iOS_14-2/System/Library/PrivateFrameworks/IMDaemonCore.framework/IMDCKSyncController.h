/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDCKAbstractSyncController.h>
#import <IMDaemonCore/IMDXPCEventStreamHandlerDelegate.h>
#import <IMDaemonCore/IMSystemMonitorListener.h>
#import <IMDaemonCore/IMDCKAbstractSyncControllerDelegate.h>

@class NSDate, NSTimer, IMTimer, NSString;

@interface IMDCKSyncController : IMDCKAbstractSyncController <IMDXPCEventStreamHandlerDelegate, IMSystemMonitorListener, IMDCKAbstractSyncControllerDelegate> {

	BOOL _shouldReloadConversations;
	NSDate* _syncStartDate;
	NSTimer* _longRunningSyncTimer;
	IMTimer* _nightlySyncTimer;
	long long _initialSyncAttempts;
	NSDate* _lastLogDumpDate;
	NSDate* _lastRestoreFailureLogDumpDate;
	NSTimer* _reloadTimer;

}

@property (nonatomic,retain) NSDate * syncStartDate;                              //@synthesize syncStartDate=_syncStartDate - In the implementation block
@property (nonatomic,retain) NSTimer * longRunningSyncTimer;                      //@synthesize longRunningSyncTimer=_longRunningSyncTimer - In the implementation block
@property (nonatomic,retain) IMTimer * nightlySyncTimer;                          //@synthesize nightlySyncTimer=_nightlySyncTimer - In the implementation block
@property (assign,nonatomic) long long initialSyncAttempts;                       //@synthesize initialSyncAttempts=_initialSyncAttempts - In the implementation block
@property (nonatomic,retain) NSDate * lastLogDumpDate;                            //@synthesize lastLogDumpDate=_lastLogDumpDate - In the implementation block
@property (nonatomic,retain) NSDate * lastRestoreFailureLogDumpDate;              //@synthesize lastRestoreFailureLogDumpDate=_lastRestoreFailureLogDumpDate - In the implementation block
@property (assign) BOOL shouldReloadConversations;                                //@synthesize shouldReloadConversations=_shouldReloadConversations - In the implementation block
@property (retain) NSTimer * reloadTimer;                                         //@synthesize reloadTimer=_reloadTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSDate *)syncStartDate;
-(id)statsCollector;
-(void)_postMetricsToCloudKitOnAutomaticHistoryDeletionAgentLaunch;
-(id)_dateForNext24LogDumpAtHour:(long long)arg1 timeNow:(id)arg2 dumpNow:(BOOL*)arg3 ;
-(void)recordMetricIsCloudKitEnabled;
-(void)updateSecurityLevelDowngradedIfNeeded:(/*^block*/id)arg1 ;
-(void)_deleteRestoreFailuresDirectory;
-(void)_callSyncWithCompletion:(/*^block*/id)arg1 activity:(id)arg2 ;
-(BOOL)_errorIndicatesDeviceNotGoodForSync:(id)arg1 ;
-(void)setReloadTimer:(NSTimer *)arg1 ;
-(void)_nightlySyncTimerFired;
-(void)beginFullSyncPeriodic:(BOOL)arg1 deviceConditionsToCheck:(unsigned long long)arg2 activity:(id)arg3 ;
-(BOOL)_serverDoesNotAllowComingBackOnlineChatSync;
-(id)attachmentSyncController;
-(id)rampManager;
-(id)init;
-(void)collectLogsIfNeeded;
-(void)beginInitialSyncAttemptCount:(unsigned long long)arg1 ;
-(double)_minimumChatComingOnlineSyncInterval;
-(void)systemDidUnlock;
-(void)_autoBugCaptureWithSubType:(id)arg1 debugDescription:(id)arg2 ;
-(id)chatSyncController;
-(void)_dealWithEncryptionKeyLostErrorIfApplicable:(id)arg1 ;
-(void)_beginPeriodicSyncWithActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 attemptCount:(unsigned long long)arg3 ;
-(id)backupController;
-(id)messageSyncController;
-(void)_accountDidChange:(id)arg1 ;
-(NSDate *)lastLogDumpDate;
-(id)_dailySyncStateDictionary;
-(void)handleAKUserInfoChangedNotification:(id)arg1 ;
-(void)_dispatchNotification:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)_withinAnHourOfLogDumpHour;
-(id)syncStateDebuggingInfo:(id)arg1 ;
-(id)_recordManager;
-(void)_performLastSyncDateMetricForSuccessfulSync;
-(void)setShouldReloadConversations:(BOOL)arg1 ;
-(BOOL)enforceAccountsMatchForMocAndShowDialogIfNeeded;
-(BOOL)shouldReloadConversations;
-(void)_noteMeticsForSyncEndedWithSuccces:(BOOL)arg1 ;
-(void)syncAttachmentMetadataFirstSyncWithActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)exitManager;
-(id)_periodicSyncStateDictionary;
-(void)_reloadChatRegistryOnMainThread;
-(BOOL)_serverAllowsUIRefreshTimerWhileSyncing;
-(IMTimer *)nightlySyncTimer;
-(void)_noteDownSyncStartedWithIsPeriodicSync:(BOOL)arg1 ;
-(void)_refreshUIWhileSyncing;
-(void)_beginExitStateCleanupIfNeededWithActivity:(id)arg1 useNonHSA2ManateeDatabase:(BOOL)arg2 ;
-(void)setInitialSyncAttempts:(long long)arg1 ;
-(BOOL)shouldMarkAllIncompatibleMessagesForDeletion;
-(BOOL)_hasDumpedLogsInPastHour;
-(long long)syncControllerRecordType;
-(double)_IMAHDAgentFallbackIntervalInSeconds;
-(void)_noteMetricsForSyncStartFrom:(id)arg1 fullSync:(BOOL)arg2 ;
-(void)beginInitialSync;
-(BOOL)_serverDoesNotSingleDeviceLimitation;
-(BOOL)_serverDeniesDailySyncStateAnalytics;
-(void)refreshUIIfApplicableWithBatchCount:(unsigned long long)arg1 ;
-(void)clearCKRelatedDefaults;
-(BOOL)isSyncing;
-(void)syncController:(id)arg1 syncBatchCompleted:(unsigned long long)arg2 ;
-(id)initialMessageSyncController;
-(BOOL)_serverDeniesPeriodicSyncAnalytics;
-(void)setSyncStartDate:(NSDate *)arg1 ;
-(void)_syncChatsWithActivity:(id)arg1 ;
-(void)sendRestoreFailuresLogDumps;
-(void)kickOffCloudKitSyncIfNeededOnImagentLaunch;
-(void)_logIMAutomaticHistorySyncDidNotOccurMetricsUnderFirstUnlock:(BOOL)arg1 isSyncing:(BOOL)arg2 deviceConditionsAllowSync:(BOOL)arg3 syncNotCompletedRecently:(BOOL)arg4 ;
-(void)beginComingBackOnlineSync;
-(void)_writeDownSyncDateUseManatee:(BOOL)arg1 ;
-(unsigned long long)_maxTimeToDeferInSeconds;
-(id)initialAttachmentSyncController;
-(void)eventStreamHandler:(id)arg1 didReceiveEventWithName:(id)arg2 userInfo:(id)arg3 ;
-(id)_retryError;
-(void)clearLocalCloudKitSyncState;
-(void)setLastLogDumpDate:(NSDate *)arg1 ;
-(void)syncDeletesToCloudKitWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)logCloudKitAnalytics;
-(void)_addDatesDefaultsIfNeededToDictionary:(id)arg1 keys:(id)arg2 ;
-(void)setNightlySyncTimer:(IMTimer *)arg1 ;
-(void)clearAnalyticDefaultsAndLocalSyncState;
-(void)_ifCloudKitAbleToSyncIsFullSync:(BOOL)arg1 activity:(id)arg2 callBlock:(/*^block*/id)arg3 ;
-(long long)initialSyncAttempts;
-(void)setLongRunningSyncTimer:(NSTimer *)arg1 ;
-(void)performInitialSyncOnFirstConnectionOfImagentIfNeeded;
-(void)_performLastCompleteSyncedDBDateMetricForSuccessfulSync;
-(NSDate *)lastRestoreFailureLogDumpDate;
-(void)sendRestoreFailuresLogDumpsIfNeeded;
-(void)beginChatSyncPeriodic:(BOOL)arg1 activity:(id)arg2 ;
-(void)setLastRestoreFailureLogDumpDate:(NSDate *)arg1 ;
-(void)_noteSyncEnded;
-(unsigned long long)_currentHour;
-(BOOL)_completedPeriodicSyncSinceFirstFullSyncForLastSyncDate:(id)arg1 firstFullSyncCompletedDate:(id)arg2 ;
-(NSTimer *)reloadTimer;
-(BOOL)_hasDumpedRestoreFailureLogsInPastHour;
-(void)_syncDeletesOrClearTombstones;
-(BOOL)_syncNotCompletedRecently;
-(void)registerForAccountNotifications;
-(void)_kickOffNightlyPeriodicSyncIfApplicable;
-(BOOL)_serverAllowsUIRefreshWhileSyncing;
-(void)_addDatesDefaultsIfNeededToDictionary:(id)arg1 ;
-(BOOL)_accountHasMultipleDevices;
-(BOOL)_chatSyncedRecently;
-(void)_nukeCKData;
-(double)reloadTimeInterval;
-(long long)_manualSyncAttemptCount;
-(void)_beginPeriodicSyncWithActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 attemptCount:(unsigned long long)arg3 useStingRay:(BOOL)arg4 syncChatsCompletionBlock:(/*^block*/id)arg5 ;
-(void)kickOffEagerSyncIfApplicable;
-(void)_submitCloudKitAnalyticWithOperationGroupName:(id)arg1 analyticDictionary:(id)arg2 ;
-(long long)_periodicSyncAttemptCount;
-(void)performOneTimeAccountUpgradeCheckIfNeeded;
-(void)syncChatsWithMessageContext:(id)arg1 ;
-(id)_sharedDatabaseManager;
-(NSTimer *)longRunningSyncTimer;
-(void)dealloc;
-(void)performMetricForSuccessfulSync;
@end

