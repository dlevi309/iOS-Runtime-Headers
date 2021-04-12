/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class PHImageManager, AVAssetImageGenerator, JTEffectsPreviewGenerator;

@interface JTThumbnailGenerator : NSObject {

	BOOL _cacheRenderers;
	PHImageManager* _imageManager;
	AVAssetImageGenerator* _cachedAssetImageGenerator;
	JTEffectsPreviewGenerator* _cachedEffectsPreviewGenerator;

}

@property (nonatomic,retain) PHImageManager * imageManager;                                //@synthesize imageManager=_imageManager - In the implementation block
@property (assign) BOOL cacheRenderers;                                                    //@synthesize cacheRenderers=_cacheRenderers - In the implementation block
@property (retain) AVAssetImageGenerator * cachedAssetImageGenerator;                      //@synthesize cachedAssetImageGenerator=_cachedAssetImageGenerator - In the implementation block
@property (retain) JTEffectsPreviewGenerator * cachedEffectsPreviewGenerator;              //@synthesize cachedEffectsPreviewGenerator=_cachedEffectsPreviewGenerator - In the implementation block
+(id)prepareStillForThumbnail:(id)arg1 scale:(double)arg2 targetSize:(CGSize)arg3 returnTargetImageSize:(CGSize*)arg4 ;
+(id)createEffectsPreviewGenerator;
-(id)init;
-(PHImageManager *)imageManager;
-(void)setImageManager:(PHImageManager *)arg1 ;
-(void)thumbnailsWithAsset:(id)arg1 needsDerivativeMedia:(BOOL)arg2 targetSize:(CGSize)arg3 requestedTimes:(id)arg4 timeScale:(int)arg5 effectStack:(id)arg6 transforms:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)thumbnailsWithVideoURL:(id)arg1 targetSize:(CGSize)arg2 requestedTimes:(id)arg3 timeScale:(int)arg4 effectStack:(id)arg5 transforms:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)thumbnailsWithStillURL:(id)arg1 targetSize:(CGSize)arg2 requestedTimes:(id)arg3 timeScale:(int)arg4 effectStack:(id)arg5 transforms:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)thumbnailWithAsset:(id)arg1 needsDerivativeMedia:(BOOL)arg2 targetSize:(CGSize)arg3 requestedTime:(int)arg4 timeScale:(int)arg5 effectStack:(id)arg6 transform:(id)arg7 progressHandlerBlock:(/*^block*/id)arg8 completionHandler:(/*^block*/id)arg9 ;
-(void)thumbnailWithVideoURL:(id)arg1 targetSize:(CGSize)arg2 requestedTime:(int)arg3 timeScale:(int)arg4 effectStack:(id)arg5 transform:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)thumbnailWithStillURL:(id)arg1 targetSize:(CGSize)arg2 effectStack:(id)arg3 transform:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)cacheRenderers;
-(AVAssetImageGenerator *)cachedAssetImageGenerator;
-(void)generateImagesWithAVAsset:(id)arg1 targetSizeInPixels:(CGSize)arg2 requestedTime:(id)arg3 timeScale:(int)arg4 effectStack:(id)arg5 transforms:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)deepCopyEffectStackWithEffects:(id)arg1 ;
-(void)finalizeImage:(id)arg1 effectStack:(id)arg2 transform:(id)arg3 targetImageSize:(CGSize)arg4 targetSize:(CGSize)arg5 previewGenerator:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)thumbnailWithStillImage:(id)arg1 targetSize:(CGSize)arg2 effectStack:(id)arg3 transform:(id)arg4 previewGenerator:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)thumbnailForTitleCardWithEffect:(id)arg1 targetSize:(CGSize)arg2 effectStack:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setCachedAssetImageGenerator:(AVAssetImageGenerator *)arg1 ;
-(void)thumbnailsForTitleCardWithEffect:(id)arg1 targetSize:(CGSize)arg2 requestedTimes:(id)arg3 effectStack:(id)arg4 transforms:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(PVTransformAnimationInfo)transformAnimationInfoWithTransform:(id)arg1 imageSize:(CGSize)arg2 targetImageSize:(CGSize)arg3 targetSize:(CGSize)arg4 ;
-(void)projectThumbnailWithImages:(id)arg1 targetSize:(CGSize)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCacheRenderers:(BOOL)arg1 ;
-(JTEffectsPreviewGenerator *)cachedEffectsPreviewGenerator;
-(void)setCachedEffectsPreviewGenerator:(JTEffectsPreviewGenerator *)arg1 ;
-(id)initCacheEfectsPreviewGenerator:(id)arg1 ;
@end

