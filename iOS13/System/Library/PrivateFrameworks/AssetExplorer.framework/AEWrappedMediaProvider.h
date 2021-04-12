/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <PhotosUICore/PXUIMediaProvider.h>

@class PUMediaProvider;

@interface AEWrappedMediaProvider : PXUIMediaProvider {

	PUMediaProvider* __internalMediaProvider;

}

@property (nonatomic,readonly) PUMediaProvider * _internalMediaProvider;              //@synthesize _internalMediaProvider=__internalMediaProvider - In the implementation block
-(long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)cancelImageRequest:(long long)arg1 ;
-(long long)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(long long)requestLivePhotoForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)initWithMediaProvider:(id)arg1 ;
-(PUMediaProvider *)_internalMediaProvider;
@end

