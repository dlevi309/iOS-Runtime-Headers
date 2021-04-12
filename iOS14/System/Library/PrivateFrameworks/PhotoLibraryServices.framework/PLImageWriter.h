/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLPhotoBakedThumbnailsDelegate.h>

@protocol OS_dispatch_queue, OS_os_transaction;
@class NSObject, PLSimpleDCIMDirectory, PLIndicatorFileCoordinator, PLLibraryServicesManager;

@interface PLImageWriter : NSObject <PLPhotoBakedThumbnailsDelegate> {

	int _unfinishedJobsRequiringIndicatorCount;
	BOOL _databaseIsCorrupt;
	NSObject*<OS_dispatch_queue> _jobQueue;
	os_unfair_recursive_lock_s _jobCountLock;
	os_unfair_lock_s _transactionLock;
	unsigned long long _transactionCounter;
	NSObject*<OS_os_transaction> _transaction;
	PLSimpleDCIMDirectory* _iTunesSyncedAssetsDCIMDirectory;
	PLIndicatorFileCoordinator* _indicatorFileCoordinator;
	PLLibraryServicesManager* _libraryServicesManager;

}
+(id)_pathsByAssetUUIDFromIncomingCrashRecoveryPaths:(id)arg1 ;
+(id)_assetAdjustmentsFromCameraAdjustmentData:(id)arg1 cameraMetadata:(id)arg2 exportProperties:(id)arg3 assetType:(short)arg4 applySemanticEnhance:(BOOL)arg5 ;
+(id)assetAdjustmentsFromCameraAdjustmentData:(id)arg1 cameraMetadata:(id)arg2 exportProperties:(id)arg3 applySemanticEnhance:(BOOL)arg4 ;
+(id)cameraMetadataURLForPrimaryAssetURL:(id)arg1 photoLibrary:(id)arg2 ;
+(BOOL)_requiresAssetUUIDForJobType:(id)arg1 ;
+(BOOL)setAdjustmentsForNewPhoto:(id)arg1 mainFileMetadata:(id)arg2 cameraAdjustmentData:(id)arg3 adjustmentDataPath:(id)arg4 filteredImagePath:(id)arg5 cameraMetadata:(id)arg6 finalAssetSize:(CGSize)arg7 isSubstandardRender:(BOOL)arg8 ;
+(id)assetAdjustmentsFromCameraAdjustmentData:(id)arg1 exportProperties:(id)arg2 ;
+(void)decorateThumbnail:(id)arg1 inContext:(CGContextRef)arg2 ;
+(id)semanticEnhancePreviewDestinationURLForPrimaryAssetURL:(id)arg1 ;
+(id)_assetUUIDFromIncomingFilename:(id)arg1 ;
+(id)assetAdjustmentsFromCameraAdjustments:(id)arg1 cameraMetadata:(id)arg2 exportProperties:(id)arg3 ;
+(BOOL)_requiresIndicatorFileForJobType:(id)arg1 ;
+(id)deferredPhotoPreviewDestinationURLForPrimaryAssetURL:(id)arg1 ;
+(id)_assetAdjustmentsFromCameraAdjustments:(id)arg1 cameraMetadata:(id)arg2 exportProperties:(id)arg3 assetType:(short)arg4 applySemanticEnhance:(BOOL)arg5 ;
+(id)assetAdjustmentsFromCameraAdjustments:(id)arg1 cameraMetadata:(id)arg2 exportProperties:(id)arg3 applySemanticEnhance:(BOOL)arg4 ;
+(id)finalizedAssetURLForDeferredPhotoPreviewURL:(id)arg1 extension:(id)arg2 ;
+(void)setAdjustmentsForNewVideo:(id)arg1 mainFileMetadata:(id)arg2 withAdjustmentsDictionary:(id)arg3 cameraAdjustments:(id)arg4 renderedContentPath:(id)arg5 renderedPosterFramePreviewPath:(id)arg6 finalAssetSize:(CGSize)arg7 ;
+(BOOL)isDeferredPhotoPreviewURL:(id)arg1 ;
+(void)decorateThumbnailInRect:(CGRect)arg1 size:(CGSize)arg2 duration:(id)arg3 inContext:(CGContextRef)arg4 format:(id)arg5 ;
+(BOOL)isSpatialOverCaptureURL:(id)arg1 ;
+(id)assetAdjustmentsFromCompositionController:(id)arg1 exportProperties:(id)arg2 ;
+(BOOL)_hasPrimaryAssetAndAdjustmentsFilesWithType:(short)arg1 inIncomingFilenames:(id)arg2 forAssetUUID:(id)arg3 ;
+(id)spatialOverCaptureDestinationURLForPrimaryAssetURL:(id)arg1 ;
+(id)assetAdjustmentsFromCameraFilters:(id)arg1 portraitMetadata:(id)arg2 exportProperties:(id)arg3 cameraMetadata:(id)arg4 ;
+(BOOL)semanticEnhanceSceneIsValid:(long long)arg1 ;
+(id)_assetAdjustmentsFromCameraAdjustmentsFileAtPath:(id)arg1 exportProperties:(id)arg2 cameraMetadata:(id)arg3 ;
-(id)indicatorFileCoordinator;
-(void)_processSyncClientSaveJobsJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_transferVideoFromIncomingPath:(id)arg1 toDestinationPath:(id)arg2 shouldRemoveIncoming:(BOOL*)arg3 error:(id*)arg4 ;
-(void)_removeTransientKeys:(id)arg1 ;
-(id)init;
-(void)_handlePhotoIrisCrashRecoveryForVideos:(id)arg1 ;
-(BOOL)imageWriterJob:(id)arg1 hasValidPathsWithConnection:(id)arg2 ;
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(void)_handleAvalancheCrashRecovery:(id)arg1 ;
-(void)_processSyncedVideoSaveJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeInProgressExtendedAttributesForFileAtURL:(id)arg1 ;
-(id)_processLimitedLibraryAdditionIfNeededWithAssetUUID:(id)arg1 clientBundleIdentifier:(id)arg2 clientAuthorization:(id)arg3 library:(id)arg4 ;
-(void)cleanupFilesInLibrary:(id)arg1 afteriTunesSyncBeforeDate:(id)arg2 ;
-(void)_resetSyncedAssetsDCIMDirectory;
-(void)_processDeletePhotoStreamDataJob:(id)arg1 withReason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)decorateThumbnail:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)_processAutodeleteEmptyAlbumJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)pathForOriginalMyPhotoStreamAssetWithJob:(id)arg1 ;
-(id)pathForNewAssetWithDirectoryPath:(id)arg1 fileName:(id)arg2 extension:(id)arg3 ;
-(BOOL)_isHighPriorityJob:(id)arg1 ;
-(void)_processXPCDaemonJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_fetchPhotoAssetForUUID:(id)arg1 moc:(id)arg2 ;
-(void)_processSavePhotoStreamImageToCameraRollJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enqueueAutoDeleteEmptyAlbumJobWithAlbumID:(id)arg1 ;
-(BOOL)canEnqueueJob:(id)arg1 ;
-(void)_decorateThumbnail:(id)arg1 ;
-(void)_processAvalanchesValidationJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isHeifUTI:(CFStringRef)arg1 ;
-(id)_pathForNewAssetWithPath:(id)arg1 withExtension:(id)arg2 ;
-(id)_pathForFilteredPreviewWithBaseName:(id)arg1 imageData:(id)arg2 orImage:(id)arg3 ;
-(id)iTunesSyncedAssetsDCIMDirectory;
-(BOOL)_writeOutCameraMetadata:(id)arg1 destinationURL:(id)arg2 error:(id*)arg3 ;
-(void)_processVideoJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_decrementJobCount:(id)arg1 ;
-(void)_handlePhotoIrisCrashRecoveryForPhotoIndicatorFiles:(id)arg1 ;
-(void)_photoIrisPairingDidSucceed:(BOOL)arg1 fileIndicatorPath:(id)arg2 photoAsset:(id)arg3 photoLibrary:(id)arg4 ;
-(void)_processDaemonJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processJob:(id)arg1 ;
-(id)pathForNewAssetPathAtAlbumDirectoryPath:(id)arg1 assetType:(unsigned)arg2 extension:(id)arg3 ;
-(void)_processImageJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_transferSpatialOverCaptureVideoFromIncomingPath:(id)arg1 forBaseDestinationPath:(id)arg2 shouldRemoveIncoming:(BOOL*)arg3 ;
-(void)_processAvalancheJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)cameraAssetPathForNewAssetWithExtension:(id)arg1 assetUUID:(id)arg2 ;
-(void)processSyncSaveJob:(id)arg1 library:(id)arg2 albumMap:(id)arg3 ;
-(void)_handleCameraAdjustments:(id)arg1 fullsizeRenders:(id)arg2 largeThumbnails:(id)arg3 ;
-(void)_processReenqueueAssetUUIDsToPhotoStreamJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_enablePhotoStreamJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleCameraMetadataCrashRecovery:(id)arg1 ;
-(void)_processDeletePhotoStreamAssetsWithUUIDs:(id)arg1 withReason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)enqueueJob:(id)arg1 ;
-(void)_linkDiagnosticFileWithSourcePath:(id)arg1 forPhotoDestinationURL:(id)arg2 ;
-(void)saveAssetJob:(id)arg1 imageSurface:(id)arg2 previewImageSurface:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_processCrashRecoveryJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processBatchImageJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processVideoSaveJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_incrementJobCount:(id)arg1 ;
@end

