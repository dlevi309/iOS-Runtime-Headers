/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLPhotoBakedThumbnailsDelegate.h>

@protocol OS_dispatch_queue, OS_os_transaction;
@class NSObject, PAImageConversionServiceClient, PAVideoConversionServiceClient, PLDeferredPhotoFinalizer, PLSimpleDCIMDirectory, PLIndicatorFileCoordinator, PLLibraryServicesManager;

@interface PLImageWriter : NSObject <PLPhotoBakedThumbnailsDelegate> {

	int _unfinishedJobsRequiringIndicatorCount;
	BOOL _databaseIsCorrupt;
	NSObject*<OS_dispatch_queue> _jobQueue;
	NSObject*<OS_dispatch_queue> _postIngestWorkQueue;
	PAImageConversionServiceClient* _imageConversionServiceClient;
	PAVideoConversionServiceClient* _videoConversionServiceClient;
	PLDeferredPhotoFinalizer* _deferredPhotoFinalizerDelegate;
	os_unfair_recursive_lock_s _jobCountLock;
	os_unfair_lock_s _transactionLock;
	unsigned long long _transactionCounter;
	NSObject*<OS_os_transaction> _transaction;
	PLSimpleDCIMDirectory* _iTunesSyncedAssetsDCIMDirectory;
	PLIndicatorFileCoordinator* _indicatorFileCoordinator;
	PLLibraryServicesManager* _libraryServicesManager;

}
+(void)decorateThumbnail:(id)arg1 inContext:(CGContextRef)arg2 ;
+(BOOL)_requiresAssetUUIDForJobType:(id)arg1 ;
+(void)setAdjustmentsForNewVideo:(id)arg1 withAdjustmentsDictionary:(id)arg2 cameraAdjustments:(id)arg3 renderedContentPath:(id)arg4 renderedPosterFramePreviewPath:(id)arg5 finalAssetSize:(CGSize)arg6 ;
+(id)spatialOverCaptureDestinationURLForPrimaryAssetURL:(id)arg1 ;
+(id)deferredPhotoPreviewDestinationURLForPrimaryAssetURL:(id)arg1 ;
+(BOOL)_hasPrimaryAssetAndAdjustmentsFilesWithType:(short)arg1 inIncomingFilenames:(id)arg2 forAssetUUID:(id)arg3 ;
+(id)_assetUUIDFromIncomingFilename:(id)arg1 ;
+(BOOL)setAdjustmentsForNewPhoto:(id)arg1 withEffectFilterName:(id)arg2 cameraAdjustmentData:(id)arg3 adjustmentDataPath:(id)arg4 filteredImagePath:(id)arg5 finalAssetSize:(CGSize)arg6 isSubstandardRender:(BOOL)arg7 ;
+(id)_pathsByAssetUUIDFromIncomingCrashRecoveryPaths:(id)arg1 ;
+(BOOL)_requiresIndicatorFileForJobType:(id)arg1 ;
+(BOOL)isSpatialOverCaptureURL:(id)arg1 ;
+(BOOL)isDeferredPhotoPreviewURL:(id)arg1 ;
+(id)finalizedAssetURLForDeferredPhotoPreviewURL:(id)arg1 extension:(id)arg2 ;
+(id)_assetAdjustmentsWithEffectFilterName:(id)arg1 exportProperties:(id)arg2 ;
+(id)_assetAdjustmentsFromCompositionController:(id)arg1 exportProperties:(id)arg2 ;
+(id)assetAdjustmentsFromCameraFilters:(id)arg1 portraitMetadata:(id)arg2 exportProperties:(id)arg3 ;
+(id)_assetAdjustmentsFromCameraAdjustmentsFileAtPath:(id)arg1 exportProperties:(id)arg2 ;
+(id)assetAdjustmentsFromCameraAdjustments:(id)arg1 exportProperties:(id)arg2 ;
+(id)_assetAdjustmentsFromCameraAdjustments:(id)arg1 exportProperties:(id)arg2 assetType:(short)arg3 ;
+(id)assetAdjustmentsFromCameraAdjustmentData:(id)arg1 exportProperties:(id)arg2 ;
+(id)_assetAdjustmentsFromCameraAdjustmentData:(id)arg1 exportProperties:(id)arg2 assetType:(short)arg3 ;
+(void)decorateThumbnailInRect:(CGRect)arg1 size:(CGSize)arg2 duration:(id)arg3 inContext:(CGContextRef)arg4 format:(id)arg5 ;
-(id)init;
-(void)dealloc;
-(void)decorateThumbnail:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)indicatorFileCoordinator;
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(BOOL)_isHighPriorityJob:(id)arg1 ;
-(BOOL)canEnqueueJob:(id)arg1 ;
-(void)_incrementJobCount:(id)arg1 ;
-(void)_decrementJobCount:(id)arg1 ;
-(BOOL)enqueueJob:(id)arg1 ;
-(id)cameraAssetPathForNewAssetWithExtension:(id)arg1 assetUUID:(id)arg2 ;
-(id)pathForNewAssetWithDirectoryPath:(id)arg1 fileName:(id)arg2 extension:(id)arg3 ;
-(id)_pathForNewAssetWithPath:(id)arg1 withExtension:(id)arg2 ;
-(id)pathForNewAssetPathAtAlbumDirectoryPath:(id)arg1 assetType:(unsigned)arg2 extension:(id)arg3 ;
-(id)pathForOriginalMyPhotoStreamAssetWithJob:(id)arg1 ;
-(void)_removeTransientKeys:(id)arg1 ;
-(id)_pathForFilteredPreviewWithBaseName:(id)arg1 imageData:(id)arg2 orImage:(id)arg3 ;
-(void)_linkDiagnosticFileWithSourcePath:(id)arg1 forPhotoDestinationURL:(id)arg2 ;
-(void)_processImageJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeInProgressExtendedAttributesForFileAtURL:(id)arg1 ;
-(void)_processBatchImageJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processAvalancheJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processAvalanchesValidationJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processImportImageJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processAutodeleteEmptyAlbumJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processDeletePhotoStreamDataJob:(id)arg1 withReason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_processDeletePhotoStreamAssetsWithUUIDs:(id)arg1 withReason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_enablePhotoStreamJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processReenqueueAssetUUIDsToPhotoStreamJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processSavePhotoStreamImageToCameraRollJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isHeifUTI:(CFStringRef)arg1 ;
-(id)iTunesSyncedAssetsDCIMDirectory;
-(void)_resetSyncedAssetsDCIMDirectory;
-(void)processSyncSaveJob:(id)arg1 library:(id)arg2 albumMap:(id)arg3 ;
-(void)cleanupFilesInLibrary:(id)arg1 afteriTunesSyncBeforeDate:(id)arg2 ;
-(void)_processSyncClientSaveJobsJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleAvalancheCrashRecovery:(id)arg1 ;
-(void)_handleCameraMetadataCrashRecovery:(id)arg1 ;
-(id)_fetchPhotoAssetForUUID:(id)arg1 moc:(id)arg2 ;
-(void)_handlePhotoIrisCrashRecoveryForVideos:(id)arg1 ;
-(void)_handleCameraAdjustments:(id)arg1 fullsizeRenders:(id)arg2 ;
-(void)_handlePhotoIrisCrashRecoveryForPhotoIndicatorFiles:(id)arg1 ;
-(void)_photoIrisPairingDidSucceed:(BOOL)arg1 fileIndicatorPath:(id)arg2 photoAsset:(id)arg3 photoLibrary:(id)arg4 ;
-(void)_processCrashRecoveryJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processDaemonJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processXPCDaemonJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_decorateThumbnail:(id)arg1 ;
-(BOOL)_transferSpatialOverCaptureVideoFromIncomingPath:(id)arg1 forBaseDestinationPath:(id)arg2 shouldRemoveIncoming:(BOOL*)arg3 ;
-(BOOL)_transferVideoFromIncomingPath:(id)arg1 toDestinationPath:(id)arg2 shouldRemoveIncoming:(BOOL*)arg3 error:(id*)arg4 ;
-(void)_processVideoJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processVideoSaveJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processSyncedVideoSaveJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processJob:(id)arg1 ;
-(BOOL)imageWriterJob:(id)arg1 hasValidPathsWithConnection:(id)arg2 ;
-(void)saveAssetJob:(id)arg1 imageSurface:(id)arg2 previewImageSurface:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)enqueueAutoDeleteEmptyAlbumJobWithAlbumID:(id)arg1 ;
@end

