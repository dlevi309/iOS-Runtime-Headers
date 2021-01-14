/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <PhotosUICore/PXUIMediaProvider.h>

@class PUMediaProvider;

@interface AEWrappedMediaProvider : PXUIMediaProvider {

	PUMediaProvider* __internalMediaProvider;

}

@property (nonatomic,readonly) PUMediaProvider * _internalMediaProvider;              //@synthesize _internalMediaProvider=__internalMediaProvider - In the implementation block
-(long long)requestLivePhotoForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(long long)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(id)initWithMediaProvider:(id)arg1 ;
-(void)cancelImageRequest:(long long)arg1 ;
-(PUMediaProvider *)_internalMediaProvider;
@end

