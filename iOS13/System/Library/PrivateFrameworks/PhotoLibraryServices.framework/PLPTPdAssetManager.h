/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLManagedObjectContextPTPNotificationDelegate.h>

@protocol PhotoLibraryPTPDelegate, OS_dispatch_queue;
@class NSObject, PLPTPdFormatConversionManager, NSString, NSSet, PLPhotoLibrary, NSMutableSet, NSFileManager, PFMediaCapabilities;

@interface PLPTPdAssetManager : NSObject <PLManagedObjectContextPTPNotificationDelegate> {

	NSObject*<PhotoLibraryPTPDelegate> _delegate;
	PLPTPdFormatConversionManager* _formatConversionManager;
	NSString* _firstDCIMFolderServiced;
	NSSet* _availableAssetIDs;
	PLPhotoLibrary* _photoLibrary;
	int _libraryStatus;
	NSMutableSet* _ptpDeletedAssets;
	NSObject*<OS_dispatch_queue> availableAssetsQueue;
	NSFileManager* fileManager;

}

@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,retain) NSFileManager * fileManager; 
@property (retain) PFMediaCapabilities * peerMediaCapabilities; 
@property (assign,nonatomic,__weak) NSObject*<PhotoLibraryPTPDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSObject*<PhotoLibraryPTPDelegate>)delegate;
-(void)setDelegate:(NSObject*<PhotoLibraryPTPDelegate>)arg1 ;
-(id)managedObjectContext;
-(NSFileManager *)fileManager;
-(PLPhotoLibrary *)photoLibrary;
-(void)managedObjectContext:(id)arg1 libraryChangedWithInsertedAssetIDs:(id)arg2 deletedAssetIDs:(id)arg3 changedAssetIDs:(id)arg4 adjustedAssetIDs:(id)arg5 ;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(void)_registerForFirstUnlockNotification;
-(void)handlePhotoLibraryAvailableNotification;
-(id)albumHandles;
-(id)infoForAlbum:(id)arg1 ;
-(id)associationsInAlbum:(id)arg1 ;
-(id)assetsInAssociation:(id)arg1 ;
-(id)infoForAsset:(id)arg1 ;
-(void)deleteAsset:(id)arg1 ;
-(void)setPeerMediaCapabilities:(PFMediaCapabilities *)arg1 ;
-(PFMediaCapabilities *)peerMediaCapabilities;
-(void)ptpEnumerateAllAssetsUsingBlock:(/*^block*/id)arg1 ;
-(id)ptpThumbnailForAssetHandle:(id)arg1 size:(CGSize)arg2 compressionQuality:(float)arg3 ;
-(id)ptpAssetReaderForAssetHandle:(id)arg1 ;
-(id)adjustmentFilePathForAsset:(id)arg1 requiresTemporaryFileCleanup:(BOOL*)arg2 ;
-(id)assetReaderForFormatConvertedPTPAsset:(id)arg1 ofManagedAsset:(id)arg2 path:(id)arg3 ;
-(id)ptpImagePropertiesForAssetHandle:(id)arg1 ;
-(BOOL)ptpCanDeleteFiles;
-(BOOL)ptpDeletePhotoForAssetHandle:(id)arg1 ;
-(void)_expungeAsset:(id)arg1 withReason:(id)arg2 ;
-(void)ptpEnumerateAssetsWithPrimaryKeys:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_ptpAssetsForAssetWithID:(id)arg1 ;
-(BOOL)libraryIsAvailable;
-(id)ptpInformationForFilesInDirectory:(id)arg1 ;
-(void)enumeratePTPInformationForFilesInDirectory:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)ptpExifDataForAssetHandle:(id)arg1 ;
-(id)ptpExifDataForPhotoWithKey:(id)arg1 ;
-(id)_ptpOriginalExifDataForAssetWithID:(id)arg1 ;
-(id)ptpThumbnailForPhotoWithKey:(id)arg1 ;
-(CGSize)_validateSize:(CGSize)arg1 ;
-(id)ptpThumbnailForPhotoWithKey:(id)arg1 size:(CGSize)arg2 compressionQuality:(float)arg3 ;
-(CGSize)masterThumbSize;
-(BOOL)requestedSize:(CGSize)arg1 fitsInSourceSize:(CGSize)arg2 ;
-(id)_ptpThumbnailForOriginalWithAssetID:(id)arg1 size:(CGSize)arg2 compressionQuality:(float)arg3 ;
-(id)_ptpThumbnailForFullSizeRenderWithAssetID:(id)arg1 size:(CGSize)arg2 compressionQuality:(float)arg3 ;
-(id)_ptpThumbnailForSpatialOverCaptureImageWithAssetID:(id)arg1 size:(CGSize)arg2 compressionQuality:(float)arg3 ;
-(id)_ptpThumbnailForSpatialOverCaptureVideoWithAssetID:(id)arg1 size:(CGSize)arg2 compressionQuality:(float)arg3 ;
-(id)_ptpThumbnailForOriginalVideoWithAssetID:(id)arg1 size:(CGSize)arg2 compressionQuality:(float)arg3 ;
-(id)_ptpThumbnailForPenultimateImageWithAssetID:(id)arg1 size:(CGSize)arg2 compressionQuality:(float)arg3 ;
-(id)dataForThumbnailFileAtPath:(id)arg1 rotatedToOrientation:(long long)arg2 size:(CGSize)arg3 compressionQuality:(float)arg4 ;
-(id)_generateThumbnailForAsset:(id)arg1 fromOriginalImagePath:(id)arg2 size:(CGSize)arg3 compressionQuality:(float)arg4 ;
-(id)dataByJPEGCompressingCGImage:(CGImageRef)arg1 toLengthLimit:(long long)arg2 initialCompressionQuality:(float)arg3 size:(CGSize)arg4 orientation:(long long)arg5 ;
-(BOOL)ptpDeletePhotoWithKey:(id)arg1 andExtension:(id)arg2 ;
-(BOOL)_ptpDeletePhotoWithAssetID:(id)arg1 andExtension:(id)arg2 ;
-(void)setPtpDelegate:(id)arg1 ;
-(id)_ptpInformationForPhotoWithObjectID:(id)arg1 ;
-(id)ptpInformationForPhotosWithPrimaryKeys:(id)arg1 ;
-(id)_allAssetObjectIDs;
-(id)_ptpInformationForAllAssets;
-(id)_ptpAssetEnumeratorAllAssets;
-(void)beginSignpostForThumbnailGenerationForAsset:(id)arg1 inputResourceTypeLabel:(id)arg2 ;
-(void)endSignpostForThumbnailGenerationForAsset:(id)arg1 ;
-(void)_performBlockAndWait:(/*^block*/id)arg1 ;
-(id)_performResultBlockAndWait:(/*^block*/id)arg1 ;
-(void)_performTransactionAndWait:(/*^block*/id)arg1 ;
-(id)_performResultTransactionAndWait:(/*^block*/id)arg1 ;
-(id)fetchObjectIDsForAssetsExposedToPTPFromObjectIDs:(id)arg1 ;
@end

