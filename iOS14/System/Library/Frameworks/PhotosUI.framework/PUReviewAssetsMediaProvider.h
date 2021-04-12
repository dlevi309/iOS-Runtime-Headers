/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUEditableMediaProvider.h>

@class PHConcurrentMapTable;

@interface PUReviewAssetsMediaProvider : PUEditableMediaProvider {

	Ai _nextRequestIdentifier;
	double __screenScale;
	PHConcurrentMapTable* __mediaRequests;

}

@property (nonatomic,readonly) double _screenScale;                                //@synthesize _screenScale=__screenScale - In the implementation block
@property (nonatomic,readonly) PHConcurrentMapTable * _mediaRequests;              //@synthesize _mediaRequests=__mediaRequests - In the implementation block
-(double)_screenScale;
-(id)init;
-(int)_incrementRequestIdentifier;
-(PHConcurrentMapTable *)_mediaRequests;
-(int)_requestAdjustmentDataForAsset:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)_resizeImageAtURL:(id)arg1 imageUTI:(id)arg2 targetSize:(CGSize)arg3 bakeInOrientation:(BOOL)arg4 error:(id*)arg5 ;
-(int)requestLivePhotoForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(int)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)cancelImageRequest:(int)arg1 ;
-(int)requestAsynchronousVideoURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
@end

