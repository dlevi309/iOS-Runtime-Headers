/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLManagedObjectContextPTPNotificationDelegate.h>

@protocol PhotoLibraryPTPDelegate, OS_dispatch_queue;
@class NSObject, PLPTPdFormatConversionManager, NSSet, PLPhotoLibrary, NSMutableSet, NSFileManager, PFMediaCapabilities, NSString;

@interface PLPTPdAssetManager : NSObject <PLManagedObjectContextPTPNotificationDelegate> {

	NSObject*<PhotoLibraryPTPDelegate> _delegate;
	PLPTPdFormatConversionManager* _formatConversionManager;
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
-(NSFileManager *)fileManager;
-(id)managedObjectContext;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(id)init;
-(PLPhotoLibrary *)photoLibrary;
-(NSObject*<PhotoLibraryPTPDelegate>)delegate;
-(void)managedObjectContext:(id)arg1 libraryChangedWithInsertedAssetIDs:(id)arg2 deletedAssetIDs:(id)arg3 changedAssetIDs:(id)arg4 adjustedAssetIDs:(id)arg5 ;
-(void)setDelegate:(NSObject*<PhotoLibraryPTPDelegate>)arg1 ;
-(void)_registerForFirstUnlockNotification;
-(void)handlePhotoLibraryAvailableNotification;
-(void)setPeerMediaCapabilities:(PFMediaCapabilities *)arg1 ;
-(PFMediaCapabilities *)peerMediaCapabilities;
-(CGSize)_validateSize:(CGSize)arg1 ;
-(void)ptpEnumerateAllAssetsUsingBlock:(/*^block*/id)arg1 ;
-(id)ptpThumbnailForAssetHandle:(id)arg1 size:(CGSize)arg2 compressionQuality:(float)arg3 ;
-(id)ptpAssetReaderForAssetHandle:(id)arg1 ;
-(id)adjustmentFilePathForAsset:(id)arg1 requiresTemporaryFileCleanup:(BOOL*)arg2 ;
-(BOOL)ptpCanDeleteFiles;
-(id)assetReaderForFormatConvertedPTPAsset:(id)arg1 ofManagedAsset:(id)arg2 path:(id)arg3 ;
-(id)ptpImagePropertiesForAssetHandle:(id)arg1 ;
-(BOOL)ptpDeletePhotoForAssetHandle:(id)arg1 ;
-(void)_expungeAsset:(id)arg1 withReason:(id)arg2 ;
-(id)_ptpAssetsForAssetWithID:(id)arg1 ;
-(BOOL)libraryIsAvailable;
-(void)ptpEnumerateAssetsWithPrimaryKeys:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_allAssetObjectIDs;
-(id)_ptpAssetEnumeratorAllAssets;
-(CGSize)masterThumbSize;
-(BOOL)requestedSize:(CGSize)arg1 fitsInSourceSize:(CGSize)arg2 ;
-(void)_performTransactionAndWait:(/*^block*/id)arg1 ;
-(id)_ptpThumbnailForOriginalWithAssetID:(id)arg1 size:(CGSize)arg2 compressionQuality:(float)arg3 ;
-(id)_ptpThumbnailForFullSizeRenderWithAssetID:(id)arg1 size:(CGSize)arg2 compressionQuality:(float)arg3 ;
-(id)_ptpThumbnailForOriginalVideoWithAssetID:(id)arg1 size:(CGSize)arg2 compressionQuality:(float)arg3 ;
-(id)_ptpThumbnailForSpatialOverCaptureImageWithAssetID:(id)arg1 size:(CGSize)arg2 compressionQuality:(float)arg3 ;
-(id)_ptpThumbnailForSpatialOverCaptureVideoWithAssetID:(id)arg1 size:(CGSize)arg2 compressionQuality:(float)arg3 ;
-(id)_performResultBlockAndWait:(/*^block*/id)arg1 ;
-(id)_ptpThumbnailForPenultimateImageWithAssetID:(id)arg1 size:(CGSize)arg2 compressionQuality:(float)arg3 ;
-(void)_inverseAffineTransformForExifOrientation:(long long)arg1 width:(double)arg2 height:(double)arg3 completion:(/*^block*/id)arg4 ;
-(id)_performResultTransactionAndWait:(/*^block*/id)arg1 ;
-(id)dataForThumbnailFileAtPath:(id)arg1 rotatedToOrientation:(long long)arg2 size:(CGSize)arg3 compressionQuality:(float)arg4 ;
-(id)_generateThumbnailForAsset:(id)arg1 fromOriginalImagePath:(id)arg2 size:(CGSize)arg3 compressionQuality:(float)arg4 ;
-(void)endSignpostForThumbnailGenerationForAsset:(id)arg1 ;
-(id)_dataByJPEGCompressingCGImage:(CGImageRef)arg1 orSource:(CGImageSourceRef)arg2 toLengthLimit:(long long)arg3 initialCompressionQuality:(float)arg4 size:(CGSize)arg5 orientation:(long long)arg6 ;
-(void)beginSignpostForThumbnailGenerationForAsset:(id)arg1 inputResourceTypeLabel:(id)arg2 ;
-(void)_performBlockAndWait:(/*^block*/id)arg1 ;
-(id)fetchObjectIDsForAssetsExposedToPTPFromObjectIDs:(id)arg1 ;
-(void)dealloc;
@end

