/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)_accountDidChange:(id)arg1 ;
-(void)registerForAccountNotifications;
-(void)systemDidUnlock;
-(BOOL)isSyncing;
-(void)clearLocalCloudKitSyncState;
-(void)sendRestoreFailuresLogDumps;
-(void)clearAnalyticDefaultsAndLocalSyncState;
-(long long)syncControllerRecordType;
-(id)backupController;
-(void)beginInitialSync;
-(id)exitManager;
-(void)beginComingBackOnlineSync;
-(void)performOneTimeAccountUpgradeCheckIfNeeded;
-(void)syncController:(id)arg1 syncBatchCompleted:(unsigned long long)arg2 ;
-(id)syncStateDebuggingInfo:(id)arg1 ;
-(void)_noteSyncEnded;
-(void)eventStreamHandler:(id)arg1 didReceiveEventWithName:(id)arg2 userInfo:(id)arg3 ;
-(double)_IMAHDAgentFallbackIntervalInSeconds;
-(unsigned long long)_maxTimeToDeferInSeconds;
-(void)_nightlySyncTimerFired;
-(void)setNightlySyncTimer:(IMTimer *)arg1 ;
-(BOOL)_syncNotCompletedRecently;
-(void)beginFullSyncPeriodic:(BOOL)arg1 deviceConditionsToCheck:(unsigned long long)arg2 activity:(id)arg3 ;
-(void)_logIMAutomaticHistorySyncDidNotOccurMetricsUnderFirstUnlock:(BOOL)arg1 isSyncing:(BOOL)arg2 deviceConditionsAllowSync:(BOOL)arg3 syncNotCompletedRecently:(BOOL)arg4 ;
-(IMTimer *)nightlySyncTimer;
-(void)_kickOffNightlyPeriodicSyncIfApplicable;
-(void)_dispatchNotification:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)kickOffEagerSyncIfApplicable;
-(NSTimer *)longRunningSyncTimer;
-(void)setLongRunningSyncTimer:(NSTimer *)arg1 ;
-(NSTimer *)reloadTimer;
-(void)setReloadTimer:(NSTimer *)arg1 ;
-(void)setInitialSyncAttempts:(long long)arg1 ;
-(id)_recordManager;
-(void)_noteMetricsForSyncStartFrom:(id)arg1 fullSync:(BOOL)arg2 ;
-(void)beginInitialSyncAttemptCount:(unsigned long long)arg1 ;
-(id)_retryError;
-(void)_ifCloudKitAbleToSyncIsFullSync:(BOOL)arg1 activity:(id)arg2 callBlock:(/*^block*/id)arg3 ;
-(BOOL)_accountHasMultipleDevices;
-(void)_syncDeletesOrClearTombstones;
-(BOOL)_chatSyncedRecently;
-(void)_syncChatsWithActivity:(id)arg1 ;
-(void)_noteDownSyncStartedWithIsPeriodicSync:(BOOL)arg1 ;
-(void)_beginPeriodicSyncWithActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 attemptCount:(unsigned long long)arg3 ;
-(BOOL)_serverDoesNotAllowComingBackOnlineChatSync;
-(double)_minimumChatComingOnlineSyncInterval;
-(BOOL)_serverDoesNotSingleDeviceLimitation;
-(void)syncDeletesToCloudKitWithCompletion:(/*^block*/id)arg1 ;
-(long long)_periodicSyncAttemptCount;
-(void)_autoBugCaptureWithSubType:(id)arg1 debugDescription:(id)arg2 ;
-(long long)_manualSyncAttemptCount;
-(void)clearCKRelatedDefaults;
-(void)refreshUIIfApplicableWithBatchCount:(unsigned long long)arg1 ;
-(BOOL)_serverAllowsUIRefreshWhileSyncing;
-(void)setShouldReloadConversations:(BOOL)arg1 ;
-(BOOL)_serverAllowsUIRefreshTimerWhileSyncing;
-(double)reloadTimeInterval;
-(void)_refreshUIWhileSyncing;
-(BOOL)shouldReloadConversations;
-(void)_performLastSyncDateMetricForSuccessfulSync;
-(void)_performLastCompleteSyncedDBDateMetricForSuccessfulSync;
-(NSDate *)lastLogDumpDate;
-(NSDate *)lastRestoreFailureLogDumpDate;
-(unsigned long long)_currentHour;
-(void)setLastRestoreFailureLogDumpDate:(NSDate *)arg1 ;
-(void)_deleteRestoreFailuresDirectory;
-(BOOL)_withinAnHourOfLogDumpHour;
-(BOOL)_hasDumpedRestoreFailureLogsInPastHour;
-(BOOL)_hasDumpedLogsInPastHour;
-(void)setLastLogDumpDate:(NSDate *)arg1 ;
-(id)chatSyncController;
-(void)_noteMeticsForSyncEndedWithSuccces:(BOOL)arg1 ;
-(id)statsCollector;
-(id)initialMessageSyncController;
-(id)initialAttachmentSyncController;
-(void)_reloadChatRegistryOnMainThread;
-(void)_nukeCKData;
-(void)performMetricForSuccessfulSync;
-(void)_beginPeriodicSyncWithActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 attemptCount:(unsigned long long)arg3 useStingRay:(BOOL)arg4 syncChatsCompletionBlock:(/*^block*/id)arg5 ;
-(void)_dealWithEncryptionKeyLostErrorIfApplicable:(id)arg1 ;
-(id)attachmentSyncController;
-(id)messageSyncController;
-(NSDate *)syncStartDate;
-(void)_writeDownSyncDateUseManatee:(BOOL)arg1 ;
-(BOOL)_errorIndicatesDeviceNotGoodForSync:(id)arg1 ;
-(void)syncAttachmentMetadataFirstSyncWithActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_beginExitStateCleanupIfNeededWithActivity:(id)arg1 useNonHSA2ManateeDatabase:(BOOL)arg2 ;
-(id)rampManager;
-(void)_callSyncWithCompletion:(/*^block*/id)arg1 activity:(id)arg2 ;
-(void)recordMetricIsCloudKitEnabled;
-(void)setSyncStartDate:(NSDate *)arg1 ;
-(void)handleAKUserInfoChangedNotification:(id)arg1 ;
-(BOOL)enforceAccountsMatchForMocAndShowDialogIfNeeded;
-(void)updateSecurityLevelDowngradedIfNeeded:(/*^block*/id)arg1 ;
-(void)_addDatesDefaultsIfNeededToDictionary:(id)arg1 keys:(id)arg2 ;
-(void)_addDatesDefaultsIfNeededToDictionary:(id)arg1 ;
-(BOOL)_completedPeriodicSyncSinceFirstFullSyncForLastSyncDate:(id)arg1 firstFullSyncCompletedDate:(id)arg2 ;
-(id)_dailySyncStateDictionary;
-(void)_submitCloudKitAnalyticWithOperationGroupName:(id)arg1 analyticDictionary:(id)arg2 ;
-(id)_periodicSyncStateDictionary;
-(void)_postMetricsToCloudKitOnAutomaticHistoryDeletionAgentLaunch;
-(id)_dateForNext24LogDumpAtHour:(long long)arg1 timeNow:(id)arg2 dumpNow:(BOOL*)arg3 ;
-(void)performInitialSyncOnFirstConnectionOfImagentIfNeeded;
-(void)beginChatSyncPeriodic:(BOOL)arg1 activity:(id)arg2 ;
-(void)kickOffCloudKitSyncIfNeededOnImagentLaunch;
-(void)sendRestoreFailuresLogDumpsIfNeeded;
-(void)collectLogsIfNeeded;
-(id)_sharedDatabaseManager;
-(void)syncChatsWithMessageContext:(id)arg1 ;
-(BOOL)_serverDeniesPeriodicSyncAnalytics;
-(BOOL)_serverDeniesDailySyncStateAnalytics;
-(BOOL)logCloudKitAnalytics;
-(long long)initialSyncAttempts;
@end

