/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@interface PIPhotoEditHelper : NSObject
+(void)initialize;
+(id)pipelineFiltersForShowingOriginalWithGeometry;
+(id)pipelineFiltersForRAWShowingOriginalWithGeometry;
+(void)preheatEditDependencies;
+(BOOL)isAVAssetEditable:(id)arg1 ;
+(id)imageSourceWithURL:(id)arg1 type:(id)arg2 useEmbeddedPreview:(BOOL)arg3 ;
+(id)imageSourceWithCIImage:(id)arg1 orientation:(long long)arg2 ;
+(id)videoSourceWithURL:(id)arg1 ;
+(id)imageSourceWithURL:(id)arg1 type:(id)arg2 proxyImage:(id)arg3 orientation:(long long)arg4 useEmbeddedPreview:(BOOL)arg5 ;
+(id)livePhotoSourceWithPhotoSource:(id)arg1 videoSource:(id)arg2 ;
+(id)imagePropertiesRequestWithComposition:(id)arg1 ;
+(id)photosSchema;
+(BOOL)is3DEffect:(id)arg1 ;
+(id)effectNameForFilterName:(id)arg1 ;
+(id)pipelineFiltersForOriginalGeometry;
+(id)geometryRequestWithComposition:(id)arg1 ;
+(id)newComposition;
+(id)newCompositionControllerWithComposition:(id)arg1 ;
+(id)validatedCompositionCopyForComposition:(id)arg1 mediaType:(long long)arg2 ;
+(BOOL)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 ;
+(id)updateCropAdjustmentController:(id)arg1 after:(id)arg2 error:(out id*)arg3 ;
+(id)adjustmentConstants;
+(id)videoRenderRequestWithComposition:(id)arg1 fitInSize:(CGSize)arg2 ;
+(CGImageRef)newCGImageFromBufferImage:(id)arg1 ;
+(id)pipelineFiltersForCropping;
+(id)imageRenderRequestWithComposition:(id)arg1 fitInSize:(CGSize)arg2 wideGamut:(BOOL)arg3 ;
+(id)imageRenderRequestWithComposition:(id)arg1 fillInSize:(CGSize)arg2 wideGamut:(BOOL)arg3 ;
+(id)newImageRenderClientWithName:(id)arg1 ;
+(id)videoPropertiesRequestWithComposition:(id)arg1 ;
+(id)assetIdentifierForURL:(id)arg1 type:(id)arg2 useEmbeddedPreview:(BOOL)arg3 ;
+(id)compositionByRemovingVideoAndLivePhotoAdjustments:(id)arg1 ;
+(id)newAdjustmentWithName:(id)arg1 ;
+(id)newAdjustmentWithIdentifier:(id)arg1 ;
+(id)_imageRenderRequestWithComposition:(id)arg1 wideGamut:(BOOL)arg2 ;
+(id)priorityWithLevel:(long long)arg1 ;
+(BOOL)isPortraitEffect:(id)arg1 ;
+(BOOL)isPortraitStageEffect:(id)arg1 ;
+(id)filterNameForEffectName:(id)arg1 ;
+(id)pipelineFiltersForShowingOriginal;
+(void)handlePIGlobalSettings:(id)arg1 ;
+(id)knownFormatsVersionsMap;
@end

