/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLCloudChangeTrackerDelegate.h>
#import <libobjc.A.dylib/PLCloudPersistentHistoryMigratorContext.h>
#import <libobjc.A.dylib/PLBackgroundJobWorkerCoordinatorDelegate.h>
#import <libobjc.A.dylib/CPLResourceProgressDelegate.h>
#import <libobjc.A.dylib/CPLLibraryManagerDelegate.h>
#import <libobjc.A.dylib/PLForegroundMonitorDelegate.h>
#import <libobjc.A.dylib/PLCloudUserSessionHandling.h>
#import <libobjc.A.dylib/CPLStatusDelegate.h>

@protocol PLCloudChangeTracker, OS_dispatch_queue, OS_dispatch_source;
@class PLCloudBatchUploader, PLCloudBatchDownloader, NSObject, PLForegroundMonitor, CPLLibraryManager, CPLStatus, PLCloudTaskManager, PLLazyObject, PFCoalescer, PLCloudInMemoryTaskManager, PLCloudPhotoLibraryUploadTracker, NSMutableDictionary, PLCloudPhotoLibraryUserSwitchHandler, NSMutableArray, PLBackgroundJobWorkerCoordinator, PLLibraryServicesManager, NSNumber, PLPhotoLibrary, PLPhotoLibraryPathManager, NSString;

@interface PLCloudPhotoLibraryManager : NSObject <PLCloudChangeTrackerDelegate, PLCloudPersistentHistoryMigratorContext, PLBackgroundJobWorkerCoordinatorDelegate, CPLResourceProgressDelegate, CPLLibraryManagerDelegate, PLForegroundMonitorDelegate, PLCloudUserSessionHandling, CPLStatusDelegate> {

	PLCloudBatchUploader* _uploader;
	PLCloudBatchDownloader* _downloader;
	id<PLCloudChangeTracker> _changeTracker;
	BOOL _wasRebuild;
	BOOL _hasAttemptedMigration;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	PLForegroundMonitor* _foregroundMonitor;
	unsigned long long _mode;
	BOOL _checkEnableStateOnIdle;
	BOOL _icplEnabled;
	BOOL _pushOnIdle;
	BOOL _pullOnIdle;
	BOOL _modeChangePending;
	BOOL _hasSettledInitialBatch;
	CPLLibraryManager* _unsafe_cplLibrary;
	CPLStatus* _unsafe_cplStatus;
	int _pauseRequest;
	short _pauseReason;
	PLCloudTaskManager* _taskManager;
	PLLazyObject* _lazyResourceManager;
	PLLazyObject* _lazyRecoveryManager;
	NSObject*<OS_dispatch_source> _unpauseDispatchTimer;
	NSObject*<OS_dispatch_source> _userUnpauseDispatchTimer;
	long long _pendingResetSyncType;
	BOOL _initializedMaster;
	PFCoalescer* _coalescer;
	NSObject*<OS_dispatch_queue> _uploadDownloadCountQueue;
	unsigned long long _boundForUploadingPhotos;
	unsigned long long _boundForUploadingVideos;
	unsigned long long _boundForUploadingOtherItems;
	NSObject*<OS_dispatch_source> _workInProgressTimer;
	BOOL _significantWork;
	PLCloudInMemoryTaskManager* _inMemoryTaskManager;
	PLCloudPhotoLibraryUploadTracker* _uploadTracker;
	NSMutableDictionary* _placeholderAssetAvailabilityHandlers;
	os_unfair_lock_s _placeholderAssetAvailabilityHandlersLock;
	NSObject*<OS_dispatch_queue> _serialQueue;
	PLCloudPhotoLibraryUserSwitchHandler* _switchHandler;
	PLLazyObject* _lazyCacheDeleteSupport;
	NSMutableArray* _pushAllChangesCompletionHandlers;
	PLBackgroundJobWorkerCoordinator* _backgroundJobWorkerCoordinator;
	BOOL _pushingAllChanges;
	BOOL _didCallBlocksWaitingForLibraryOpen;
	NSMutableArray* _blocksWaitingForLibraryOpen;
	os_unfair_lock_s _waitForLibraryOpenLock;
	os_unfair_lock_s _cplLibraryLock;
	BOOL _willBecomeNonSPL;
	BOOL _isHandlingStatusChangesNotification;
	unsigned long long _statusChangesNotificationGeneration;
	PLLibraryServicesManager* _libraryServicesManager;
	NSNumber* __numberOfPhotosToPush;
	NSNumber* __numberOfVideosToPush;
	NSNumber* __numberOfOtherItemsToPush;
	NSNumber* __numberOfPhotosDownloaded;
	NSNumber* __numberOfVideosDownloaded;
	NSNumber* __numberOfOtherItemsDownloaded;
	/*^block*/id __idleStateTransitionOneTimeAction;

}

@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager; 
@property (nonatomic,__weak,readonly) PLLibraryServicesManager * libraryServicesManager;                                     //@synthesize libraryServicesManager=_libraryServicesManager - In the implementation block
@property (setter=_setNumberOfPhotosToPush:,nonatomic,retain) NSNumber * _numberOfPhotosToPush;                              //@synthesize _numberOfPhotosToPush=__numberOfPhotosToPush - In the implementation block
@property (setter=_setNumberOfVideosToPush:,nonatomic,retain) NSNumber * _numberOfVideosToPush;                              //@synthesize _numberOfVideosToPush=__numberOfVideosToPush - In the implementation block
@property (setter=_setNumberOfOtherItemsToPush:,nonatomic,retain) NSNumber * _numberOfOtherItemsToPush;                      //@synthesize _numberOfOtherItemsToPush=__numberOfOtherItemsToPush - In the implementation block
@property (setter=_setNumberOfPhotosDownloaded:,nonatomic,retain) NSNumber * _numberOfPhotosDownloaded;                      //@synthesize _numberOfPhotosDownloaded=__numberOfPhotosDownloaded - In the implementation block
@property (setter=_setNumberOfVideosDownloaded:,nonatomic,retain) NSNumber * _numberOfVideosDownloaded;                      //@synthesize _numberOfVideosDownloaded=__numberOfVideosDownloaded - In the implementation block
@property (setter=_setNumberOfOtherItemsDownloaded:,nonatomic,retain) NSNumber * _numberOfOtherItemsDownloaded;              //@synthesize _numberOfOtherItemsDownloaded=__numberOfOtherItemsDownloaded - In the implementation block
@property (setter=_setIdleStateTransitionOneTimeAction:,nonatomic,copy) id _idleStateTransitionOneTimeAction;                //@synthesize _idleStateTransitionOneTimeAction=__idleStateTransitionOneTimeAction - In the implementation block
@property (getter=isCloudPhotoLibraryEnabled,nonatomic,readonly) BOOL cloudPhotoLibraryEnabled; 
@property (nonatomic,readonly) unsigned long long totalNumberOfUnpushedMasters; 
@property (nonatomic,readonly) unsigned long long totalNumberOfUploadedMasters; 
@property (nonatomic,readonly) unsigned long long totalSizeOfUnpushedOriginals; 
@property (nonatomic,readonly) unsigned long long totalUploadedOriginalSize; 
@property (nonatomic,readonly) long long currentResetSyncType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptionForResourceType:(unsigned long long)arg1 ;
+(BOOL)needResetSyncErrorType:(id)arg1 ;
-(void)sync;
-(PLLibraryServicesManager *)libraryServicesManager;
-(void)_clearPurgeableResourcesMatchingPredicate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)_inq_numberOfOtherItemsToUpload;
-(PLPhotoLibraryPathManager *)pathManager;
-(void)_migrateFromChangeHubToCoreDataIfNecessary;
-(void)foregroundMonitor:(id)arg1 changedStateToForeground:(BOOL)arg2 forBundleIdentifier:(id)arg3 ;
-(unsigned long long)_inq_numberOfVideosToUpload;
-(id)recoveryManager;
-(id)readMigrationMarker;
-(void)_linkFileFrom:(id)arg1 to:(id)arg2 ;
-(void)saveTokenObject:(id)arg1 ;
-(void)statusDidChange:(id)arg1 ;
-(void)_enableiCPL;
-(void)_updateTransferCounts;
-(void)uploadToCloudForEventsResult:(id)arg1 ;
-(void)getCPLState:(/*^block*/id)arg1 ;
-(void)_handleModeTransistionAfterDisableiCPL;
-(NSNumber *)_numberOfOtherItemsDownloaded;
-(PLPhotoLibrary *)photoLibrary;
-(BOOL)connectToChangeTracker;
-(void)_runAsyncOnIsolationQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_runOneTimeMigrationStepsWithoutiCPLIfNecessary;
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(id)fetchEventsFromChangeTracker;
-(short)_placeHolderKindFromCPLResourceType:(unsigned long long)arg1 ;
-(void)_repushVideoAssetsMetadata;
-(void)setLocalVersion:(id)arg1 ;
-(void)_stopUnpauseTimer;
-(void)setPause:(BOOL)arg1 reason:(short)arg2 ;
-(id)_idleStateTransitionOneTimeAction;
-(void)_checkAndMarkPurgeableResourcesIfSafe:(id)arg1 checkServerIfNecessary:(BOOL)arg2 urgency:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_resetResourceManager;
-(void)deleteResources:(id)arg1 checkServerIfNecessary:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_pause;
-(void)_updateAsset:(id)arg1 withImageFileURL:(id)arg2 ;
-(void)_setNumberOfPhotosDownloaded:(id)arg1 ;
-(void)_downloadFromCloud;
-(void)getUUIDsForCloudIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fixMasterStatusIn:(id)arg1 ;
-(unsigned long long)totalUploadedOriginalSize;
-(void)endUserSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)totalNumberOfUnpushedMasters;
-(void)reportMiscInformation:(id)arg1 ;
-(void)_handleOptimizeSettingChange;
-(void)callPlaceholderAssetAvailabilityHandlerForAssetUUID:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(BOOL)isResourceTransferTaskAliveWithTaskWithIdentifier:(id)arg1 ;
-(id)readLocalVersion;
-(BOOL)_setupTimerForUnpause;
-(void)_openCPLLibrary;
-(void)downloadResource:(id)arg1 highPriority:(BOOL)arg2 clientBundleID:(id)arg3 proposedTaskIdentifier:(id)arg4 taskDidBeginHandler:(/*^block*/id)arg5 progressBlock:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)_handleOptimizeSettingChangeWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSNumber *)_numberOfPhotosToPush;
-(id)cplStatus;
-(id)lastKnownCloudVersionFromDisk;
-(void)_unpause;
-(void)enableiCPLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_repushMasterWithMissingMediaMetadata;
-(void)updateTransferCountsWithInsertedPhotoCount:(unsigned long long)arg1 insertedVideoCount:(unsigned long long)arg2 ;
-(BOOL)isCloudPhotoLibraryEnabled;
-(void)_startWorkInProgressTimer;
-(void)libraryManagerDidStartSynchronization:(id)arg1 ;
-(void)_handleFinalizeSessionError:(id)arg1 commitError:(id)arg2 uploadBatchContainer:(id)arg3 needResetSync:(BOOL)arg4 forTransaction:(id)arg5 ;
-(NSNumber *)_numberOfVideosToPush;
-(void)_initializeMasterAndSizeCalculation;
-(void)_initCacheDeleteSupport;
-(unsigned long long)totalSizeOfUnpushedOriginals;
-(void)libraryManagerHasStatusChanges:(id)arg1 ;
-(void)libraryManagerStatusDidChange:(id)arg1 ;
-(BOOL)_isPausedForDownloadRequestHighPriority:(BOOL)arg1 ;
-(void)_resetCPLLibrary;
-(void)queryUserIdentitiesWithParticipants:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_stopWorkInProgressTimer;
-(void)changeTrackerDidReceiveChangesWithTransaction:(id)arg1 ;
-(void)_uploadFullPhotoLibraryToCloud;
-(void)invalidateResourceManager;
-(void)_initResourceManager;
-(void)_callBlocksWaitingForLibraryOpen;
-(long long)currentResetSyncType;
-(void)disableiCPLSyncWillBecomeNonSystemPhotoLibrary;
-(void)_setNumberOfPhotosToPush:(id)arg1 ;
-(void)_checkForPushedMasters;
-(void)_updatePendingResetSyncDate;
-(void)libraryManager:(id)arg1 uploadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3 ;
-(void)registerPlaceholderAssetAvailabilityHandler:(/*^block*/id)arg1 forAssetUUID:(id)arg2 ;
-(void)libraryManager:(id)arg1 inMemoryDownloadDidFinishForResourceTransferTask:(id)arg2 data:(id)arg3 withError:(id)arg4 ;
-(void)fetchAdjustmentDataForAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)acceptCPLShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startAutomaticPrefetchOrPrune;
-(void)getStreamingURLForAsset:(id)arg1 resourceType:(unsigned long long)arg2 intent:(unsigned long long)arg3 hints:(id)arg4 clientBundleID:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(CGSize)_targetSizeForInputSize:(CGSize)arg1 maxPixelSize:(unsigned long long)arg2 ;
-(void)setMigrationMarker:(id)arg1 ;
-(id)cacheDeleteSupport;
-(void)unregisterPlaceholderAssetAvailabilityHandlerForAssetUUID:(id)arg1 ;
-(id)readTokenObject;
-(void)_promptForCameraCaptureSettingChangeWithReason:(int)arg1 ;
-(void)_markResourceObjectIDsAsPurgeable:(id)arg1 urgency:(long long)arg2 ;
-(NSNumber *)_numberOfPhotosDownloaded;
-(void)_setNumberOfVideosDownloaded:(id)arg1 ;
-(void)_setNumberOfVideosToPush:(id)arg1 ;
-(void)libraryManagerHasChangesToPull:(id)arg1 ;
-(void)fetchShareFromShareURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_resetCacheDeleteSupport;
-(BOOL)_hasAvalancheIncomingWork;
-(void)_initRecoveryManager;
-(void)setCPLLibrary:(id)arg1 ;
-(void)_checkForWorkInProgress;
-(void)invalidateRecoveryManager;
-(id)_assetResourceForAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(BOOL)arg3 isPhoto:(BOOL*)arg4 ;
-(void)_callPushAllChangesCompletionHandlersIfNecessary;
-(void)resetSyncDueToMigrationMarker;
-(BOOL)isConnectedToChangeTracker;
-(void)libraryManager:(id)arg1 downloadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3 ;
-(void)_setNumberOfOtherItemsDownloaded:(id)arg1 ;
-(id)_identifierForResource:(id)arg1 ;
-(void)_markPurgeableResourcesMatchingPredicate:(id)arg1 urgency:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_doResetSync:(long long)arg1 ;
-(long long)sizeOfResourcesToUploadByCPL:(id*)arg1 ;
-(void)clearPrefetchState;
-(void)invalidateCacheDeleteSupport;
-(void)_createDeletionRecordsIfNecessary;
-(void)_constructUnpauseTimerFrom:(id)arg1 to:(id)arg2 ;
-(void)_setToDownloadCountsForImages:(unsigned long long)arg1 videos:(unsigned long long)arg2 ;
-(void)fetchResourcesForAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)invalidate;
-(id)cplLibrary;
-(void)libraryManager:(id)arg1 uploadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3 ;
-(void)_disableiCPLWillBecomeNonSystemPhotoLibrary:(BOOL)arg1 ;
-(unsigned long long)_inq_numberOfPhotosToUpload;
-(void)setMigratedLocalVersion:(id)arg1 ;
-(void)libraryManager:(id)arg1 provideLocalResource:(id)arg2 recordClass:(Class)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelResourceTransferTaskWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_reportOptimizeSettingChangeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_debugNameForMode:(unsigned long long)arg1 ;
-(void)_handleAccountFlagsChangeIfNecessary;
-(void)_processNextTransaction;
-(void)_updateWithCPLResource:(id)arg1 isHighPriority:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_updateLocalStaleResourceWithCPLResource:(id)arg1 ;
-(void)getSystemBudgetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3 ;
-(void)dumpStatusIncludingDaemon:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)forceSyncMomentSharesWithScopeIdentifiers:(id)arg1 ;
-(void)endsSignificantWork;
-(void)_getStatusChanges:(id)arg1 transaction:(id)arg2 notificationGeneration:(unsigned long long)arg3 ;
-(void)_setIdleStateTransitionOneTimeAction:(/*^block*/id)arg1 ;
-(void)libraryManager:(id)arg1 uploadDidStartForResourceTransferTask:(id)arg2 ;
-(void)downloadResourceInMemoryForAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(BOOL)arg3 proposedTaskIdentifier:(id)arg4 taskDidBeginHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(BOOL)_hasItemToDownload;
-(void)_setupPLCPLPlist;
-(id)resourceManager;
-(void)cplHasBackgroundDownloadOperationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)totalNumberOfUploadedMasters;
-(NSNumber *)_numberOfOtherItemsToPush;
-(void)_processUploadBatchWithStartupFailureCount:(unsigned long long)arg1 ;
-(void)libraryManager:(id)arg1 backgroundDownloadDidFinishForResource:(id)arg2 ;
-(void)saveLastKnownChangeTrackerTokenToDisk;
-(void)_runAsyncOnIsolationQueueWithTransaction:(id)arg1 afterDelay:(double)arg2 block:(/*^block*/id)arg3 ;
-(void)beginsSignificantWorkWithResourcesSize:(unsigned long long)arg1 ;
-(unsigned long long)_inq_numberOfPhotosToDownload;
-(void)downloadAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(BOOL)arg3 highPriority:(BOOL)arg4 clientBundleID:(id)arg5 proposedTaskIdentifier:(id)arg6 taskDidBeginHandler:(/*^block*/id)arg7 progressBlock:(/*^block*/id)arg8 completionHandler:(/*^block*/id)arg9 ;
-(void)publishCPLMomentShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_canExternallyTransitionToNewLibraryModeIgnoringPause:(BOOL)arg1 ;
-(void)sizeOfResourcesToUploadDidChangeForLibraryManager:(id)arg1 ;
-(void)libraryManager:(id)arg1 pushAllChangesWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)disableiCPLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)libraryManager:(id)arg1 backgroundDownloadDidFailForResource:(id)arg2 ;
-(void)_checkEnableState;
-(void)_fetchNewEventsFromChangeTracker;
-(unsigned long long)_inq_numberOfOtherItemsToDownload;
-(void)_runOneTimeMigrationStepsIfNecessary;
-(BOOL)overrideSystemBudgetsForSyncSession:(BOOL)arg1 forSystemBudgets:(unsigned long long)arg2 ;
-(void)_runOnLibraryOpenWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_updateThumbnailDataForAsset:(id)arg1 withImageFileURL:(id)arg2 ;
-(void)_finishUploadWithNoBatchesToUpload;
-(void)startAssetRecoveryWithTransaction:(id)arg1 ;
-(id)_calculateUnpauseTimeForPauseTime:(id)arg1 ;
-(BOOL)_isAssetsdNotReadyToAnswer;
-(void)_runSyncOnIsolationQueueWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)_inq_numberOfVideosToDownload;
-(void)_setNumberOfOtherItemsToPush:(id)arg1 ;
-(void)libraryManager:(id)arg1 downloadDidStartForResourceTransferTask:(id)arg2 ;
-(void)setCPLStatus:(id)arg1 ;
-(void)processDownloadBatchWithSession:(id)arg1 ;
-(void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:(id)arg1 ;
-(void)boostPriorityForMomentShareWithScopeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)downloadResource:(id)arg1 intent:(unsigned long long)arg2 clientBundleID:(id)arg3 proposedTaskIdentifier:(id)arg4 taskDidBeginHandler:(/*^block*/id)arg5 progressBlock:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)_processUploadBatch;
-(void)_transitionToState:(unsigned long long)arg1 ;
-(NSNumber *)_numberOfVideosDownloaded;
-(void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 finalResource:(id)arg3 withError:(id)arg4 ;
-(void)_doPause;
-(BOOL)_hasIncomingWorkFileMarker;
-(void)_doUnpause;
@end

