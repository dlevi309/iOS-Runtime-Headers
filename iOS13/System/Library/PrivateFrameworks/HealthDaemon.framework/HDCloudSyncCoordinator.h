/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseJournalMergeObserver.h>

@protocol OS_dispatch_queue;
@class HDDaemon, NSDate, HDAsynchronousTaskTree, NSMutableArray, ACAccountStore, NSString, NSProgress, HKObserverSet, APSConnection, HDProfile, NSObject, HDPeriodicActivity;

@interface HDCloudSyncCoordinator : NSObject <HDDiagnosticObject, HDPeriodicActivityDelegate, HDHealthDaemonReadyObserver, HDDatabaseJournalMergeObserver> {

	HDDaemon* _daemon;
	BOOL _queue_syncInProgress;
	BOOL _queue_hasUpdatedCachedLastSuccessfulSyncDates;
	NSDate* _queue_lastSuccessfulPullDate;
	NSDate* _queue_lastSuccessfulPushDate;
	HDAsynchronousTaskTree* _activeTaskGroup;
	NSMutableArray* _pendingTaskGroups;
	ACAccountStore* _accountStore;
	NSString* _latestSyncStartLog;
	NSString* _latestSyncEndLog;
	NSProgress* _activeTaskProgress;
	NSMutableArray* _pendingTasksProgress;
	NSMutableArray* _progressCompletionBlocks;
	HKObserverSet* _observers;
	BOOL _hasRestoreCompleted;
	BOOL _cloudSyncEnabled;
	BOOL _cloudSyncValueLoaded;
	APSConnection* _apsConnection;
	HDProfile* _unitTest_primaryProfileOverride;
	NSObject*<OS_dispatch_queue> _queue;
	HDPeriodicActivity* _periodicActivity;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) HDPeriodicActivity * periodicActivity;              //@synthesize periodicActivity=_periodicActivity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)removeObserver:(id)arg1 ;
-(void)accountConfigurationDidChangeWithCompletion:(/*^block*/id)arg1 ;
-(id)diagnosticDescription;
-(void)addObserver:(id)arg1 queue:(id)arg2 ;
-(void)daemonReady:(id)arg1 ;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDaemon:(id)arg1 ;
-(void)_setupCloudSyncSupportIfRequired;
-(void)_queue_setupCloudSyncSupportIfRequired;
-(void)_queue_enableCloudSyncSupport;
-(void)_queue_disableCloudSyncSupport;
-(void)_queue_setupPeriodicActivity;
-(void)_queue_checkLastSyncDate;
-(BOOL)_queue_canPerformCloudSyncWithError:(id*)arg1 ;
-(void)_queue_setStartDateForRestoreEventSyncComplete;
-(id)_queue_syncProfilesWithIdentifiers:(id)arg1 withOptions:(unsigned long long)arg2 reason:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)_queue_resetAllProfilesWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_queue_fetchCloudDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_unitTest_shouldSyncProfile:(id)arg1 ;
-(void)fetchSyncStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)_setHealthAccountDataclassEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_queue_disableAndDeleteCloudSyncDataWithCompletion:(/*^block*/id)arg1 ;
-(void)addCloudSyncProgressCompletion:(/*^block*/id)arg1 ;
-(void)_queue_triggerSyncForAccountChange;
-(BOOL)_queue_hasTooManyPendingTaskGroupsWithError:(id*)arg1 ;
-(id)readErrorRequiringUserActionOnCloudSyncError:(id*)arg1 ;
-(BOOL)persistErrorRequiringUserActionOnCloudSync:(id)arg1 ;
-(id)hasErrorRequiringUserActionOnCloudSyncTaskTree:(id)arg1 ;
-(BOOL)_queue_isDeviceInManateeUnavailableCFUState;
-(void)_updateCachedLastSyncDatesWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_finishCloudSyncTaskProgressWithResult:(long long)arg1 error:(id)arg2 ;
-(void)_queue_startNextTaskGroup;
-(id)_syncProfile:(id)arg1 options:(unsigned long long)arg2 reason:(long long)arg3 taskTree:(id)arg4 ;
-(id)_resetProfile:(id)arg1 options:(unsigned long long)arg2 reason:(long long)arg3 taskTree:(id)arg4 ;
-(id)_queue_getPersistedAccountInfo;
-(id)_fetchDescriptionForProfile:(id)arg1 options:(unsigned long long)arg2 reason:(long long)arg3 taskTree:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)disableSyncLocallyWithCompletion:(/*^block*/id)arg1 ;
-(id)syncAllProfilesWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_shouldPerformLastSyncDateCheckInternalSetting;
-(id)_lastLongTimeWithoutSuccessfulCloudSyncReportDateKeyWithError:(id*)arg1 ;
-(void)_prepareAllProfilesForSync;
-(void)_updateAggdKeysForPeriodicSyncError:(id)arg1 ;
-(void)_persistPeriodicSyncError:(id)arg1 ;
-(void)_resetPersistedPeriodicSyncErrors;
-(void)_queue_generateRestoreEventMergeComplete;
-(id)_primaryProfile;
-(HDPeriodicActivity *)periodicActivity;
-(void)databaseJournalMergeDidCompleteForProfile:(id)arg1 ;
-(id)resetAllProfilesWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)fetchCloudDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)enableSyncLocallyWithCompletion:(/*^block*/id)arg1 ;
-(id)disableAndDeleteAllSyncDataWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchCloudSyncProgressWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)canPerformCloudSyncWithError:(id*)arg1 ;
-(id)lastSuccessfulPullDate;
-(id)lastSuccessfulPushDate;
-(id)activeTaskProgress;
-(BOOL)isDeviceInManateeUnavailableCFUState;
-(BOOL)persistRestoreCompletionDate:(id)arg1 withError:(id*)arg2 ;
-(id)readRestoreCompletionDateWithError:(id*)arg1 ;
-(void)unitTest_setPrimaryProfileOverride:(id)arg1 ;
-(void)unitTest_performPeriodicSyncWithCompletion:(/*^block*/id)arg1 ;
@end

