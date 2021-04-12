/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <AssetsLibraryServices/PLThumbnailManagerCore.h>

@class NSMutableSet, NSMutableArray, NSLock, PLThumbnailCascadingDownscaleContext, PLThrottleTimer, PLPhotoLibrary, NSArray;

@interface PLThumbnailManager : PLThumbnailManagerCore {

	NSMutableSet* _previouslyRequestedThumbnailFixOIDs;
	NSMutableSet* _requestedThumbnailFixAssets;
	NSMutableArray* _alreadyFailedAssetObjectIDsForRebuild;
	NSLock* _fixLock;
	PLThumbnailCascadingDownscaleContext* _downscaleContext;
	PLThrottleTimer* _timer;
	PLPhotoLibrary* _throttleTimerCameraPreviewWellLibrary;
	BOOL _shouldRebuildThumbnails;
	BOOL _hasExceededThumbnailRebuildRequestLimit;
	BOOL _isRebuildingThumbnails;
	id _observerToken;
	NSArray* _slowPersistenceManagers;

}

@property (nonatomic,retain) id observerToken;                               //@synthesize observerToken=_observerToken - In the implementation block
@property (nonatomic,retain) NSArray * slowPersistenceManagers;              //@synthesize slowPersistenceManagers=_slowPersistenceManagers - In the implementation block
+(id)supportedThumbnailFormats;
+(id)cameraPreviewWellImageQueue;
+(id)_allowedForCameraPreviewWellPredicate;
+(void)saveCameraPreviewWellImageForAsset:(id)arg1 library:(id)arg2 ;
+(id)cameraPreviewWellAssetFetchRequest;
+(id)cameraPreviewWellAssetUUIDFromPersistedFile;
+(BOOL)cameraPreviewWellSupportedOnCurrentDevice;
+(BOOL)assetIsAllowedForCameraPreviewWell:(id)arg1 ;
+(BOOL)assetIsCameraPreviewWellAsset:(id)arg1 ;
-(void)dealloc;
-(id)thumbnailJPEGPathForPhoto:(id)arg1 ;
-(BOOL)hasRebuildThumbnailsRequest;
-(long long)_diskFootprintOfTableThumbnailTables;
-(void)removeObsoleteMetadata;
-(BOOL)hasThumbnailVersionMismatch;
-(BOOL)isMissingThumbnailTables;
-(id)dataForPhoto:(id)arg1 format:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 width:(int*)arg4 height:(int*)arg5 bytesPerRow:(int*)arg6 dataWidth:(int*)arg7 dataHeight:(int*)arg8 imageDataOffset:(int*)arg9 ;
-(void)deleteThumbnailsWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3 ;
-(id)_throttleTimerCameraPreviewWellLibrary;
-(id)initWithPhotoLibraryPathManager:(id)arg1 modelMigrator:(id)arg2 ;
-(id)imageTableForFormat:(unsigned short)arg1 ;
-(id)thumbnailRebuildIndicatorPath;
-(BOOL)_thumbnailChangeContainsOnlyTableDeprecationsFromVersion:(int)arg1 toVersion:(int)arg2 fromFormat:(int)arg3 toFormat:(int)arg4 ;
-(int)_configurationThumbnailVersion;
-(unsigned short)_configurationThumbnailFormat;
-(BOOL)hasDeprecationsOnly;
-(void)removeThumbnailTablesUnsupportedOnly:(BOOL)arg1 ;
-(void)_removeMasterThumbDirectories;
-(BOOL)resetThumbnailsWithModelMigrator:(id)arg1 ;
-(void)addRebuildThumbnailsRequest;
-(void)removeRebuildThumbnailsRequest:(const char*)arg1 ;
-(void)_recordRebuildThumbnailsAttempt;
-(void)_discardAlreadyFailedAssetObjectIDsForRebuild;
-(id)_missingThumbnailPredicate;
-(long long)_rebuildAssetThumbnailsWithLimit:(int)arg1 library:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasMissingThumbnailsInLibrary:(id)arg1 ;
-(id)_rebuildThumbnailsQueue;
-(void)rebuildAllMissingThumbnailsInLibrary:(id)arg1 ;
-(BOOL)isRebuildingThumbnails;
-(BOOL)hasExceededRebuildThumbnailRequestLimit;
-(void)handleRebuildThumbnailRequestPersistentFailureInPhotoLibrary:(id)arg1 ;
-(id)_allPossibleThumbnailFormatIDs;
-(CGImageRef)newImageForAsset:(id)arg1 format:(id)arg2 ;
-(id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 ;
-(void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2 ;
-(NSArray *)slowPersistenceManagers;
-(void)discardCachedThumbnailDownscalerContexts;
-(BOOL)_performDownscaleIntoDatas:(id)arg1 image:(id)arg2 assetUUID:(id)arg3 ;
-(BOOL)_downscaleAndWriteTableAndFileBackedThumbnailsWithIdentifier:(id)arg1 thumbnailIndex:(unsigned long long)arg2 image:(id)arg3 assetUUID:(id)arg4 ;
-(void)setThumbnailsForAsset:(id)arg1 withImage:(id)arg2 ;
-(void)preheatThumbnailDataWithFormat:(unsigned short)arg1 thumbnailIndexes:(id)arg2 ;
-(id)placeholderDataForFormat:(unsigned short)arg1 photoImageSize:(CGSize)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 ;
-(id)_tableDescriptions;
-(id)_cameraPreviewWellMetadataQueue;
-(BOOL)_cameraPreviewWellMetadataLoadAndUpdateIfNeeded:(id*)arg1 libraryURL:(id)arg2 ;
-(void)_updateCameraPreviewWellMetadataFromAsset:(id)arg1 ;
-(id)_fetchCameraPreviewWellMetadataInLibrary:(id)arg1 ;
-(BOOL)_compareAsset:(id)arg1 toMetadata:(id)arg2 ;
-(void)_refetchAndSaveCameraPreviewWellImage;
-(void)refetchAndSaveCameraPreviewWellImageIfNecessaryForAssetDidSave:(id)arg1 ;
-(void)_saveCameraPreviewWellImage:(CGImageRef)arg1 assetUUID:(id)arg2 ;
-(id)_dataForAsset:(id)arg1 format:(unsigned short)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 imageDataFormat:(unsigned short*)arg9 ;
-(unsigned short)_supportedThumbnailFormatIDFromGeneralFormatID:(unsigned short)arg1 ;
-(id)thumbManagerForFormatID:(unsigned short)arg1 ;
-(id)observerToken;
-(void)setObserverToken:(id)arg1 ;
-(void)setSlowPersistenceManagers:(NSArray *)arg1 ;
@end

