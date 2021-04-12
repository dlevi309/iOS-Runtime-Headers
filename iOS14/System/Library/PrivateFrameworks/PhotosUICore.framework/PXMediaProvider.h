/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSArray, PXLoadingStatusManager;

@interface PXMediaProvider : NSObject {

	NSArray* _availableThumbnailSizes;
	PXLoadingStatusManager* _loadingStatusManager;

}

@property (nonatomic,readonly) NSArray * availableThumbnailSizes; 
@property (nonatomic,readonly) CGSize masterThumbnailSize; 
@property (nonatomic,retain) PXLoadingStatusManager * loadingStatusManager;              //@synthesize loadingStatusManager=_loadingStatusManager - In the implementation block
+(id)preheatQueue;
-(PXLoadingStatusManager *)loadingStatusManager;
-(void)setLoadingStatusManager:(PXLoadingStatusManager *)arg1 ;
-(void)preheatThumbnailDataForAssets:(id)arg1 origin:(long long)arg2 targetSize:(CGSize)arg3 ;
-(void)stopCachingImagesForAllAssets;
-(long long)requestLivePhotoForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)enumerateAvailableThumbnailDataFormats:(/*^block*/id)arg1 ;
-(long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(long long)requestURLForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)thumbnailDataForAsset:(id)arg1 targetSize:(CGSize)arg2 onlyFromCache:(BOOL)arg3 outDataSpec:(PXMediaProviderThumbnailDataSpec*)arg4 ;
-(void)startCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)cancelImageRequest:(long long)arg1 ;
-(NSArray *)availableThumbnailSizes;
-(CGSize)masterThumbnailSize;
-(long long)requestCGImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)stopCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
@end

