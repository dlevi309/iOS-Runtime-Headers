/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/_PXPhotoKitAdjustedUIMediaRequest.h>

@class _PXPhotoKitAdjustedUIImageRequest, _PXPhotoKitAdjustedVideoRequest, UIImage, AVPlayerItem, PHLivePhotoRequestOptions;

@interface _PXPhotoKitAdjustedPHLivePhotoRequest : _PXPhotoKitAdjustedUIMediaRequest {

	_PXPhotoKitAdjustedUIImageRequest* _imageRequest;
	_PXPhotoKitAdjustedVideoRequest* _videoRequest;
	UIImage* _image;
	AVPlayerItem* _playerItem;
	long long _contentMode;
	PHLivePhotoRequestOptions* _options;
	/*^block*/id _resultHandler;
	CGSize _targetSize;

}

@property (nonatomic,readonly) CGSize targetSize;                                //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) long long contentMode;                            //@synthesize contentMode=_contentMode - In the implementation block
@property (nonatomic,readonly) PHLivePhotoRequestOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;                            //@synthesize resultHandler=_resultHandler - In the implementation block
-(id)resultHandler;
-(CGSize)targetSize;
-(long long)contentMode;
-(void)start;
-(PHLivePhotoRequestOptions *)options;
-(void)cancel;
-(id)initWithRenderQueue:(id)arg1 asset:(id)arg2 targetSize:(CGSize)arg3 contentMode:(long long)arg4 imageManager:(id)arg5 options:(id)arg6 resultHandler:(/*^block*/id)arg7 ;
-(void)_handleImageRequestResult:(id)arg1 info:(id)arg2 ;
-(void)_handleVideoRequestResult:(id)arg1 info:(id)arg2 ;
-(void)_prepareLivePhotoIfPossible;
@end

