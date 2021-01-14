/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <libobjc.A.dylib/HDCloudSyncManagerTaskQueueDelegate.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseJournalMergeObserver.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class HDDaemon, ACAccountStore, NSDate, HDCloudSyncManagerTaskQueue, NSProgress, NSMutableArray, NSString, APSConnection, NSObject, HDPeriodicActivity, HDGatedActivity, HDProfile;

@interface HDCloudSyncCoordinator : NSObject <APSConnectionDelegate, HDCloudSyncManagerTaskQueueDelegate, HDDiagnosticObject, HDPeriodicActivityDelegate, HDHealthDaemonReadyObserver, HDDatabaseJournalMergeObserver> {

	HDDaemon* _daemon;
	os_unfair_lock_s _lock;
	BOOL _lock_cloudSyncEnabled;
	BOOL _lock_hasComputedCloudSyncEnabled;
	BOOL _lock_cloudSyncSupportEnabled;
	BOOL _lock_cloudSyncSupportValueLoaded;
	ACAccountStore* _lock_accountStore;
	BOOL _lock_syncInProgress;
	BOOL _lock_hasUpdatedCachedLastSuccessfulSyncDates;
	NSDate* _lock_lastSuccessfulPullDate;
	NSDate* _lock_lastSuccessfulPushDate;
	HDCloudSyncManagerTaskQueue* _syncTaskQueue;
	NSProgress* _activeSyncProgress;
	NSMutableArray* _activeSyncCompletions;
	NSString* _latestSyncStartLog;
	NSString* _latestSyncEndLog;
	NSMutableArray* _progressCompletionBlocks;
	APSConnection* _apsConnection;
	NSObject*<OS_dispatch_source> _periodicActivityCriteriaUpdateSource;
	HDPeriodicActivity* _primaryPeriodicActivity;
	HDPeriodicActivity* _secondaryPeriodicActivity;
	HDPeriodicActivity* _userRequestedBackupActivity;
	HDGatedActivity* _subscriptionBasedSyncActivity;
	BOOL _lock_requiresTinkerUpload;
	BOOL _lock_requiresTinkerDownload;
	double _lock_lastTinkerDataDownloadTriggerTime;
	double _lock_lastTinkerDataUploadTriggerTime;
	HDProfile* _unitTest_primaryProfileOverride;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(id)syncAllProfilesWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_handleSubscriptionWithID:(id)arg1 ;
-(void)_queue_setupPeriodicActivity;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(long long)_operationTypeForPull:(BOOL)arg1 push:(BOOL)arg2 ;
-(BOOL)_computeCanPerformCloudSyncForAccount:(id)arg1 error:(id*)arg2 ;
-(void)_performPendingSubscriptionSyncsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_shouldPerformLastSyncDateCheckInternalSetting;
-(void)_queue_handleIncomingPrimaryMedicalIDDataAvailableForDownloadNotification;
-(void)accountConfigurationDidChangeWithCompletion:(/*^block*/id)arg1 ;
-(void)_resetPersistedPeriodicSyncErrors;
-(id)_reportingDescriptionForPartialFailureError:(id)arg1 ;
-(void)_queue_fetchAPSEnvironmentString:(/*^block*/id)arg1 ;
-(void)_enableCloudSyncSupport;
-(id)_queue_syncProfilesWithIdentifiers:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)enableSyncLocallyWithCompletion:(/*^block*/id)arg1 ;
-(id)addCloudSyncProgressCompletion:(/*^block*/id)arg1 ;
-(void)fetchSyncStatusWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)_syncOptionsForPull:(BOOL)arg1 push:(BOOL)arg2 ;
-(id)_primaryProfile;
-(void)disableSyncLocallyWithCompletion:(/*^block*/id)arg1 ;
-(void)resetSubscriptionSyncBackoff;
-(void)triggerSubscription:(id)arg1 ;
-(void)_queue_triggerSyncForAccountChange;
-(id)fetchCloudSyncProgressWithCompletion:(/*^block*/id)arg1 ;
-(id)_getPersistedAccountInfo;
-(void)_queue_handleIncomingDataUploadRequest;
-(id)_timestampedDescriptionForError:(id)arg1 ;
-(void)_queue_handleIncomingDataDownloadAvailableNotificationOnTinkerDevices;
-(id)initWithDaemon:(id)arg1 ;
-(id)lastSuccessfulPushDate;
-(void)_queue_handleIncomingCloudKitPushNotification:(id)arg1 ;
-(void)_queue_generateRestoreEventMergeComplete;
-(void)_queue_checkLastSyncDate;
-(id)diagnosticDescription;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)resetAllProfilesWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_configurePrimaryPeriodicActivityCriteria:(id)arg1 hasPushed:(BOOL)arg2 hasRestored:(BOOL)arg3 timeSinceLastSuccess:(double)arg4 ;
-(void)unitTest_setPeriodicActivity:(id)arg1 ;
-(void)_queue_updatePeriodicActivitiesWithSyncSuccess:(BOOL)arg1 ;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(void)_setHealthAccountDataclassEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_enableAPSPush;
-(void)_persistPeriodicSyncError:(id)arg1 ;
-(id)_syncProfile:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_disableAndDeleteAllSyncDataForProfile:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addManagerTask:(id)arg1 ;
-(id)_fetchDescriptionForProfile:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)disableAndDeleteAllSyncDataWithCompletion:(/*^block*/id)arg1 ;
-(void)databaseJournalMergeDidCompleteForProfile:(id)arg1 ;
-(void)_queue_updatePeriodicActivityCriteria;
-(void)_queue_handleIncomingDataDownloadAvailableNotificationOnGuardianDevices;
-(void)_queue_setStartDateForRestoreEventSyncComplete;
-(void)unitTest_setPrimaryProfileOverride:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_disableAPSPush;
-(id)fetchCloudDescriptionWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_disableCloudSyncSupport;
-(id)_lastLongTimeWithoutSuccessfulCloudSyncReportDateKeyWithError:(id*)arg1 ;
-(BOOL)_unitTest_shouldSyncProfile:(id)arg1 ;
-(BOOL)isDeviceInManateeUnavailableCFUState;
-(id)_queue_syncAllProfilesWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateCachedLastSyncDatesWithCompletion:(/*^block*/id)arg1 ;
-(id)unitTest_periodicActivity;
-(void)_queue_handleIncomingTinkerMedicalIDDataAvailableForDownloadNotification;
-(void)cloudSyncSupportStatusDidChange;
-(BOOL)_requireInexpensiveNetworkingWithTimeSinceLastSuccess:(double)arg1 ;
-(BOOL)canPerformCloudSyncWithError:(id*)arg1 ;
-(id)_profileIdentifiersForSubscriptionSync;
-(long long)compareTask:(id)arg1 withTask:(id)arg2 queue:(id)arg3 ;
-(void)unitTest_performPeriodicSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)_configureSecondaryPeriodicActivityCriteria:(id)arg1 hasPushed:(BOOL)arg2 hasRestored:(BOOL)arg3 timeSinceLastSuccess:(double)arg4 ;
-(id)lastSuccessfulPullDate;
-(void)_setupCloudSyncSupportIfRequired;
-(id)_resetProfile:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_reportingDescriptionForError:(id)arg1 ;
-(BOOL)_periodicActivityShouldTreatSyncErrorAsSuccess:(id)arg1 ;
-(void)_configureUserRequestedBackupPeriodicActivityCriteria:(id)arg1 ;
-(double)_timeSinceLastSyncSuccess;
-(void)_prepareAllProfilesForSync;
-(void)dealloc;
@end

