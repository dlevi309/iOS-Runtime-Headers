/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface PLAssetsSaver : NSObject {

	NSMutableDictionary* _inProgressAvalancheFds;
	NSMutableArray* __pendingSaveAssetJobs;

}

@property (nonatomic,retain) NSMutableArray * _pendingSaveAssetJobs;              //@synthesize _pendingSaveAssetJobs=__pendingSaveAssetJobs - In the implementation block
+(id)publicAssetsLibraryErrorFromPrivateError:(id)arg1 ;
+(id)publicAssetsLibraryErrorFromPrivateDomain:(id)arg1 withPrivateCode:(long long)arg2 ;
+(id)sharedAssetsSaver;
-(void)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 requestEnqueuedBlock:(/*^block*/id)arg4 ;
-(id)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 diagnostics:(id)arg4 previouslyPendingAsset:(id)arg5 requestEnqueuedBlock:(/*^block*/id)arg6 ;
-(NSMutableArray *)_pendingSaveAssetJobs;
-(void)saveCameraVideoAtPath:(id)arg1 withMetadata:(id)arg2 thumbnailImage:(id)arg3 createPreviewWellImage:(BOOL)arg4 progressStack:(id)arg5 isSlalom:(BOOL)arg6 assetAdjustments:(id)arg7 videoHandler:(/*^block*/id)arg8 requestEnqueuedBlock:(/*^block*/id)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)regenerateVideoThumbnailsForVideo:(id)arg1 withCreationDate:(id)arg2 progressStack:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)saveCameraAvalancheWithUUID:(id)arg1 allAssetUUIDs:(id)arg2 allAssets:(id)arg3 stackAsset:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(/*^block*/id)_createWriteImageCompletionBlockWithImage:(id)arg1 target:(id)arg2 selector:(SEL)arg3 contextInfo:(void*)arg4 ;
-(/*^block*/id)_createWriteVideoCompletionBlockWithVideoPath:(id)arg1 target:(id)arg2 selector:(SEL)arg3 contextInfo:(void*)arg4 ;
-(void)_saveVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)init;
-(void)saveImageRef:(CGImageRef)arg1 orientation:(long long)arg2 imageData:(id)arg3 properties:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)saveImage:(id)arg1 properties:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)saveImageData:(id)arg1 properties:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)saveVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)saveImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionTarget:(id)arg4 completionSelector:(SEL)arg5 contextInfo:(void*)arg6 ;
-(void)saveVideoAtPath:(id)arg1 properties:(id)arg2 completionTarget:(id)arg3 completionSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(void)saveSyncedAssets:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)savePhotoStreamImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)deletePhotoStreamAssetsWithUUIDs:(id)arg1 streamID:(id)arg2 ;
-(void)reenqueueAssetUUIDsForPhotoStreamPublication:(id)arg1 ;
-(id)validateAvalanches:(id)arg1 inLibraryWithURL:(id)arg2 ;
-(id)_photoLibrary;
-(void)deletePhotoStreamDataForStreamID:(id)arg1 ;
-(void)dealloc;
-(void)_setIsTakingPhoto:(BOOL)arg1 ;
-(id)requestSynchronousImageForAssetOID:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(BOOL)arg3 wantURLOnly:(BOOL)arg4 networkAccessAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 outImageDataInfo:(id*)arg7 outCPLDownloadContext:(id*)arg8 ;
-(id)_saveIsolationQueue;
-(void)requestAsynchronousImageForAssetOID:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(BOOL)arg3 wantURLOnly:(BOOL)arg4 networkAccessAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)queuePhotoStreamJobDictionary:(id)arg1 ;
-(void)_queueJobDictionary:(id)arg1 asset:(id)arg2 requestEnqueuedBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 imageSurface:(IOSurfaceRef)arg5 previewImageSurface:(IOSurfaceRef)arg6 ;
-(id)_assetsdClientForJobDictionary:(id)arg1 ;
-(void)_queueJobDictionary:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)set_pendingSaveAssetJobs:(NSMutableArray *)arg1 ;
-(id)_addCameraAssetToLibraryWithPath:(id)arg1 thumbnailImage:(id)arg2 assetUUID:(id)arg3 metadata:(id)arg4 assetType:(short)arg5 kind:(short)arg6 kindSubtype:(short)arg7 avalancheUUID:(id)arg8 completionHandler:(/*^block*/id)arg9 ;
-(void)_saveImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end

