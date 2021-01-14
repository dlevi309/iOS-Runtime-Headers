/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXUIImageProvider.h>

@protocol PXUIImageProvider;
@class NSString;

@interface PXCMMPreviewUIImageProvider : NSObject <PXUIImageProvider> {

	id<PXUIImageProvider> _underlyingAssetImageProvider;

}

@property (nonatomic,readonly) id<PXUIImageProvider> underlyingAssetImageProvider;              //@synthesize underlyingAssetImageProvider=_underlyingAssetImageProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)stopCachingImagesForAllAssets;
-(id)initWithUnderlyingAssetImageProvider:(id)arg1 ;
-(id)_underlyingAssetsFromPreviewAssets:(id)arg1 ;
-(id<PXUIImageProvider>)underlyingAssetImageProvider;
-(long long)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)startCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)cancelImageRequest:(long long)arg1 ;
-(void)stopCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
@end

