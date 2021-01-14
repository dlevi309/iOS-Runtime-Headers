/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXUIMediaProvider.h>

@class NSOperationQueue, NSCache;

@interface PXFileBackedUIMediaProvider : PXUIMediaProvider {

	NSOperationQueue* _queue;
	NSCache* _cache;

}
-(id)init;
-(id)_resizeImageAtURL:(id)arg1 imageUTI:(id)arg2 targetSize:(CGSize)arg3 bakeInOrientation:(BOOL)arg4 error:(id*)arg5 ;
-(long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(long long)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(id)thumbnailDataForAsset:(id)arg1 targetSize:(CGSize)arg2 onlyFromCache:(BOOL)arg3 outDataSpec:(PXMediaProviderThumbnailDataSpec*)arg4 ;
-(void)cancelImageRequest:(long long)arg1 ;
-(id)_createImageForKey:(id)arg1 error:(id*)arg2 ;
-(void)_handleImageCreated:(id)arg1 imageKey:(id)arg2 ;
@end

