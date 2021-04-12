/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLCloudChangeTrackerDelegate.h>
#import <libobjc.A.dylib/PLCloudPersistentHistoryMigratorContext.h>
#import <libobjc.A.dylib/CPLResourceProgressDelegate.h>
#import <libobjc.A.dylib/CPLLibraryManagerDelegate.h>
#import <libobjc.A.dylib/PLForegroundMonitorDelegate.h>
#import <libobjc.A.dylib/PLCloudUserSessionHandling.h>
#import <libobjc.A.dylib/CPLStatusDelegate.h>

@protocol PLCloudChangeTracker, OS_dispatch_queue, OS_dispatch_source;
@class PLCloudBatchUploader, PLCloudBatchDownloader, NSObject, PLForegroundMonitor, CPLLibraryManager, PLCloudTaskManager, PLCloudResourceManager, PFCoalescer, PLCloudInMemoryTaskManager, PLCloudPhotoLibraryUploadTracker, NSMutableDictionary, PLCloudPhotoLibraryUserSwitchHandler, PLCacheDeleteSupport, PLLibraryServicesManager, NSNumber, PLPhotoLibrary, PLPhotoLibraryPathManager, NSString;

@interface PLCloudPhotoLibraryManager : NSObject <PLCloudChangeTrackerDelegate, PLCloudPersistentHistoryMigratorContext, CPLResourceProgressDelegate, CPLLibraryManagerDelegate, PLForegroundMonitorDelegate, PLCloudUserSessionHandling, CPLStatusDelegate> {

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
	CPLLibraryManager* _cplLibrary;
	int _pauseRequest;
	short _pauseReason;
	PLCloudTaskManager* _taskManager;
	PLCloudResourceManager* _resourceManager;
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
	PLCacheDeleteSupport* _cacheDeleteSupport;
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
@property (nonatomic,readonly) unsigned long long totalNumberOfUnpushedMasters; 
@property (nonatomic,readonly) unsigned long long totalNumberOfUploadedMasters; 
@property (nonatomic,readonly) unsigned long long totalSizeOfUnpushedOriginals; 
@property (nonatomic,readonly) unsigned long long totalUploadedOriginalSize; 
@property (nonatomic,readonly) long long currentResetSyncType; 
@property (getter=isCloudPhotoLibraryEnabled,nonatomic,readonly) BOOL cloudPhotoLibraryEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)needResetSyncErrorType:(id)arg1 ;
+(id)descriptionForResourceType:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)sync;
-(void)_transitionToState:(unsigned long long)arg1 ;
-(void)_pause;
-(PLPhotoLibrary *)photoLibrary;
-(PLPhotoLibraryPathManager *)pathManager;
-(void)callPlaceholderAssetAvailabilityHandlerForAssetUUID:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(PLLibraryServicesManager *)libraryServicesManager;
-(void)dumpStatusIncludingDaemon:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelResourceTransferTaskWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)downloadAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(BOOL)arg3 highPriority:(BOOL)arg4 clientBundleID:(id)arg5 proposedTaskIdentifier:(id)arg6 taskDidBeginHandler:(/*^block*/id)arg7 progressBlock:(/*^block*/id)arg8 completionHandler:(/*^block*/id)arg9 ;
-(void)getStreamingURLForAsset:(id)arg1 resourceType:(unsigned long long)arg2 intent:(unsigned long long)arg3 hints:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)isCloudPhotoLibraryEnabled;
-(void)downloadResource:(id)arg1 highPriority:(BOOL)arg2 clientBundleID:(id)arg3 proposedTaskIdentifier:(id)arg4 taskDidBeginHandler:(/*^block*/id)arg5 progressBlock:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)downloadResourceInMemoryForAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(BOOL)arg3 proposedTaskIdentifier:(id)arg4 taskDidBeginHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(void)foregroundMonitor:(id)arg1 changedStateToForeground:(BOOL)arg2 forBundleIdentifier:(id)arg3 ;
-(void)statusDidChange:(id)arg1 ;
-(void)endUserSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)libraryManagerHasStatusChanges:(id)arg1 ;
-(void)libraryManager:(id)arg1 provideLocalResource:(id)arg2 recordClass:(Class)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)libraryManagerStatusDidChange:(id)arg1 ;
-(void)libraryManagerDidStartSynchronization:(id)arg1 ;
-(void)libraryManagerHasChangesToPull:(id)arg1 ;
-(void)libraryManager:(id)arg1 backgroundDownloadDidFailForResource:(id)arg2 ;
-(void)libraryManager:(id)arg1 downloadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3 ;
-(void)libraryManager:(id)arg1 uploadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3 ;
-(void)sizeOfResourcesToUploadDidChangeForLibraryManager:(id)arg1 ;
-(void)libraryManager:(id)arg1 downloadDidStartForResourceTransferTask:(id)arg2 ;
-(void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3 ;
-(void)libraryManager:(id)arg1 inMemoryDownloadDidFinishForResourceTransferTask:(id)arg2 data:(id)arg3 withError:(id)arg4 ;
-(void)libraryManager:(id)arg1 backgroundDownloadDidFinishForResource:(id)arg2 ;
-(void)libraryManager:(id)arg1 uploadDidStartForResourceTransferTask:(id)arg2 ;
-(void)libraryManager:(id)arg1 uploadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3 ;
-(id)readMigrationMarker;
-(void)setMigrationMarker:(id)arg1 ;
-(void)setMigratedLocalVersion:(id)arg1 ;
-(void)setLocalVersion:(id)arg1 ;
-(id)readLocalVersion;
-(void)resetSyncDueToMigrationMarker;
-(void)saveTokenObject:(id)arg1 ;
-(void)updateTransferCountsWithInsertedPhotoCount:(unsigned long long)arg1 insertedVideoCount:(unsigned long long)arg2 ;
-(void)changeTrackerDidReceiveChanges;
-(id)readTokenObject;
-(id)_debugNameForMode:(unsigned long long)arg1 ;
-(long long)sizeOfResourcesToUploadByCPL:(id*)arg1 ;
-(void)enableiCPLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_resetCacheDeleteSupport;
-(BOOL)_hasItemToDownload;
-(void)_enableiCPL;
-(void)_openCPLLibrary;
-(void)_handleAccountFlagsChangeIfNecessary;
-(void)_promptForCameraCaptureSettingChangeWithReason:(int)arg1 ;
-(void)_initializeMasterAndSizeCalculation;
-(void)_runOneTimeMigrationStepsWithoutiCPLIfNecessary;
-(void)_runOneTimeMigrationStepsIfNecessary;
-(void)_createDeletionRecordsIfNecessary;
-(void)_migrateFromChangeHubToCoreDataIfNecessary;
-(void)beginsSignificantWorkWithResourcesSize:(unsigned long long)arg1 ;
-(void)endsSignificantWork;
-(void)cplHasBackgroundDownloadOperationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_resetCPLLibrary;
-(void)_doUnpause;
-(void)setPause:(BOOL)arg1 reason:(short)arg2 ;
-(void)_unpause;
-(void)_doPause;
-(void)disableiCPLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)disableiCPLSyncWithReason:(id)arg1 ;
-(void)_disableiCPLWithReason:(id)arg1 ;
-(void)_handleModeTransistionAfterDisableiCPL;
-(void)_runSyncOnIsolationQueueWithBlock:(/*^block*/id)arg1 ;
-(void)_runAsyncOnIsolationQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_runAsyncOnIsolationQueueWithTransaction:(id)arg1 afterDelay:(double)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)_canExternallyTransitionToNewLibraryModeIgnoringPause:(BOOL)arg1 ;
-(void)_stopUnpauseTimer;
-(id)_calculateUnpauseTimeForPauseTime:(id)arg1 ;
-(void)_constructUnpauseTimerFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)_setupTimerForUnpause;
-(void)_updatePendingResetSyncDate;
-(void)reportMiscInformation:(id)arg1 ;
-(void)_reportOptimizeSettingChangeWithCompltionhandler:(/*^block*/id)arg1 ;
-(void)_handleOptimizeSettingChange;
-(void)_handleOptimizeSettingChangeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_repushVideoAssetsMetadata;
-(void)_repushMasterWithMissingMediaMetadata;
-(void)_clearPurgeableResourcesMatchingPredicate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_markPurgeableResourcesMatchingPredicate:(id)arg1 urgency:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_checkAndMarkPurgeableResourcesIfSafe:(id)arg1 checkServerIfNecessary:(BOOL)arg2 urgency:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_processNextTransaction;
-(void)_checkEnableState;
-(void)_setupPLCPLPlist;
-(void)saveLastKnownChangeTrackerTokenToDisk;
-(BOOL)connectToChangeTracker;
-(void)registerPlaceholderAssetAvailabilityHandler:(/*^block*/id)arg1 forAssetUUID:(id)arg2 ;
-(void)unregisterPlaceholderAssetAvailabilityHandlerForAssetUUID:(id)arg1 ;
-(BOOL)isResourceTransferTaskAliveWithTaskWithIdentifier:(id)arg1 ;
-(void)fetchAdjustmentDataForAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_identifierForResource:(id)arg1 ;
-(id)_assetResourceForAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(BOOL)arg3 isPhoto:(BOOL*)arg4 ;
-(void)deleteResources:(id)arg1 checkServerIfNecessary:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_doResetSync:(long long)arg1 ;
-(void)_fetchNewEventsFromChangeTracker;
-(id)fetchEventsFromChangeTracker;
-(BOOL)isConnectedToChangeTracker;
-(void)_fixMasterStatusIn:(id)arg1 ;
-(void)_checkForPushedMasters;
-(void)_uploadFullPhotoLibraryToCloud;
-(void)uploadToCloudForEventsResult:(id)arg1 ;
-(void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_processUploadBatch;
-(void)_handleFinalizeSessionError:(id)arg1 commitError:(id)arg2 uploadBatchContainer:(id)arg3 needResetSync:(BOOL)arg4 forTransaction:(id)arg5 ;
-(void)_finishUploadWithNoBatchesToUpload;
-(void)_processUploadBatchWithStartupFailureCount:(unsigned long long)arg1 ;
-(id)lastKnownCloudVersionFromDisk;
-(void)startAutomaticPrefetchOrPrune;
-(void)getSystemBudgetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)overrideSystemBudgetsForSyncSession:(BOOL)arg1 forSystemBudgets:(unsigned long long)arg2 ;
-(void)_downloadFromCloud;
-(void)processDownloadBatchWithSession:(id)arg1 ;
-(void)_markResourceObjectIDsAsPurgeable:(id)arg1 urgency:(long long)arg2 ;
-(BOOL)_isAssetsdNotReadyToAnswer;
-(void)_linkFileFrom:(id)arg1 to:(id)arg2 ;
-(CGSize)_targetSizeForInputSize:(CGSize)arg1 maxPixelSize:(unsigned long long)arg2 ;
-(void)_updateLocalStaleResourceWithCPLResource:(id)arg1 ;
-(void)_updateWithCPLResource:(id)arg1 isHighPriority:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(short)_placeHolderKindFromCPLResourceType:(unsigned long long)arg1 ;
-(void)_updateThumbnailDataForAsset:(id)arg1 withImageFileURL:(id)arg2 ;
-(void)_updateAsset:(id)arg1 withImageFileURL:(id)arg2 ;
-(BOOL)_isPausedForDownloadRequestHighPriority:(BOOL)arg1 ;
-(id)getCPLState;
-(id)cplStatus;
-(void)_updateTransferCounts;
-(unsigned long long)_inq_numberOfOtherItemsToUpload;
-(unsigned long long)_inq_numberOfPhotosToUpload;
-(unsigned long long)_inq_numberOfVideosToUpload;
-(unsigned long long)_inq_numberOfPhotosToDownload;
-(unsigned long long)_inq_numberOfVideosToDownload;
-(unsigned long long)_inq_numberOfOtherItemsToDownload;
-(unsigned long long)totalNumberOfUnpushedMasters;
-(unsigned long long)totalNumberOfUploadedMasters;
-(unsigned long long)totalSizeOfUnpushedOriginals;
-(unsigned long long)totalUploadedOriginalSize;
-(long long)currentResetSyncType;
-(void)_startWorkInProgressTimer;
-(void)_stopWorkInProgressTimer;
-(void)_checkForWorkInProgress;
-(BOOL)_hasAvalancheIncomingWork;
-(BOOL)_hasIncomingWorkFileMarker;
-(void)_setToDownloadCountsForImages:(unsigned long long)arg1 videos:(unsigned long long)arg2 ;
-(void)publishCPLMomentShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchMomentShareFromShareURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)acceptCPLMomentShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)boostPriorityForMomentShareWithScopeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)forceSyncMomentShareWithScopeIdentifier:(id)arg1 ;
-(void)queryUserIdentitiesWithParticipants:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSNumber *)_numberOfPhotosToPush;
-(void)_setNumberOfPhotosToPush:(id)arg1 ;
-(NSNumber *)_numberOfVideosToPush;
-(void)_setNumberOfVideosToPush:(id)arg1 ;
-(NSNumber *)_numberOfOtherItemsToPush;
-(void)_setNumberOfOtherItemsToPush:(id)arg1 ;
-(NSNumber *)_numberOfPhotosDownloaded;
-(void)_setNumberOfPhotosDownloaded:(id)arg1 ;
-(NSNumber *)_numberOfVideosDownloaded;
-(void)_setNumberOfVideosDownloaded:(id)arg1 ;
-(NSNumber *)_numberOfOtherItemsDownloaded;
-(void)_setNumberOfOtherItemsDownloaded:(id)arg1 ;
-(id)_idleStateTransitionOneTimeAction;
-(void)_setIdleStateTransitionOneTimeAction:(/*^block*/id)arg1 ;
@end

