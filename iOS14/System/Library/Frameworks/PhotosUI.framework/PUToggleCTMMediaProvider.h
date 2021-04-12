/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUEditableMediaProvider.h>

@class PUBrowsingViewModel, PUMediaProvider;

@interface PUToggleCTMMediaProvider : PUEditableMediaProvider {

	PUBrowsingViewModel* _viewModel;
	PUMediaProvider* _mediaProvider;

}

@property (nonatomic,readonly) PUBrowsingViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) PUMediaProvider * mediaProvider;              //@synthesize mediaProvider=_mediaProvider - In the implementation block
-(PUMediaProvider *)mediaProvider;
-(int)requestLivePhotoForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(PUBrowsingViewModel *)viewModel;
-(int)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)_requestOptions;
-(id)initWithViewModel:(id)arg1 mediaProvider:(id)arg2 ;
-(int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(BOOL)_shouldToggleCTMForAsset:(id)arg1 ;
-(id)_imageWithSize:(CGSize)arg1 string:(id)arg2 ;
-(id)_resourceOfType:(long long)arg1 forAsset:(id)arg2 ;
-(id)_ctmImageResourceForAsset:(id)arg1 ;
-(id)_ctmVideoResourceForAsset:(id)arg1 ;
-(id)_ctmPairedVideoResourceForAsset:(id)arg1 ;
-(int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)cancelImageRequest:(int)arg1 ;
-(int)requestAsynchronousVideoURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
@end

