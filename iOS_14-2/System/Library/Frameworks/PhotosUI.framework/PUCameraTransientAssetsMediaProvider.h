/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUMediaProvider.h>

@protocol PUTransientImageManager, OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface PUCameraTransientAssetsMediaProvider : PUMediaProvider {

	Ai _latestRequestId;
	/*^block*/id _supplementaryLivePhotoImageSource;
	id<PUTransientImageManager> __transientImageManager;
	NSMutableDictionary* __livePhotoRequestsByRequestID;
	NSObject*<OS_dispatch_queue> __livePhotoRequestQueue;

}

@property (nonatomic,readonly) id<PUTransientImageManager> _transientImageManager;               //@synthesize _transientImageManager=__transientImageManager - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _livePhotoRequestsByRequestID;              //@synthesize _livePhotoRequestsByRequestID=__livePhotoRequestsByRequestID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _livePhotoRequestQueue;              //@synthesize _livePhotoRequestQueue=__livePhotoRequestQueue - In the implementation block
@property (nonatomic,copy) id supplementaryLivePhotoImageSource;                                 //@synthesize supplementaryLivePhotoImageSource=_supplementaryLivePhotoImageSource - In the implementation block
-(id)init;
-(int)requestLivePhotoForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(int)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id<PUTransientImageManager>)_transientImageManager;
-(int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(id)initWithTransientImageManager:(id)arg1 supplementaryLivePhotoImageSource:(/*^block*/id)arg2 ;
-(int)_nextRequestId;
-(int)_requestLivePhotoForTransientAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(BOOL)_requestLivePhotoWithSupplementaryImageSourceIfPossibleWithAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)_handleDelegateImageRequestResultWithImage:(id)arg1 info:(id)arg2 requestID:(int)arg3 ;
-(void)_updateResultForLivePhotoRequestID:(int)arg1 ;
-(void)_handleLivePhotoPairedVideoRequestResultURL:(id)arg1 filterName:(id)arg2 stillDisplayTime:(SCD_Struct_PH4)arg3 error:(id)arg4 requestID:(int)arg5 ;
-(id)_livePhotoRequestWithID:(int)arg1 ;
-(void)_setLivePhotoRequest:(id)arg1 forRequestID:(int)arg2 ;
-(void)_removeLivePhotoRequestWithID:(int)arg1 ;
-(id)_playerItemForVideoURL:(id)arg1 ;
-(id)_imageForTransientAsset:(id)arg1 targetSize:(CGSize)arg2 ;
-(void)_requestAVAssetForVideoURL:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)_videoCompositionForAVAsset:(id)arg1 filterName:(id)arg2 ;
-(id)supplementaryLivePhotoImageSource;
-(void)setSupplementaryLivePhotoImageSource:(id)arg1 ;
-(NSMutableDictionary *)_livePhotoRequestsByRequestID;
-(NSObject*<OS_dispatch_queue>)_livePhotoRequestQueue;
-(void)cancelImageRequest:(int)arg1 ;
@end

