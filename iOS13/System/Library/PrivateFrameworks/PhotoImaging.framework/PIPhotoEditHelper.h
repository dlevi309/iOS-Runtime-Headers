/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@interface PIPhotoEditHelper : NSObject
+(void)initialize;
+(id)adjustmentConstants;
+(id)photosSchema;
+(id)effectNameForFilterName:(id)arg1 ;
+(BOOL)is3DEffect:(id)arg1 ;
+(id)pipelineFiltersForOriginalGeometry;
+(id)geometryRequestWithComposition:(id)arg1 ;
+(id)newCompositionControllerWithComposition:(id)arg1 ;
+(id)newComposition;
+(id)validatedCompositionCopyForComposition:(id)arg1 mediaType:(long long)arg2 ;
+(id)videoRenderRequestWithComposition:(id)arg1 fitInSize:(CGSize)arg2 wideGamut:(BOOL)arg3 ;
+(CGImageRef)newCGImageFromBufferImage:(id)arg1 ;
+(id)pipelineFiltersForCropping;
+(id)imageRenderRequestWithComposition:(id)arg1 fillInSize:(CGSize)arg2 wideGamut:(BOOL)arg3 ;
+(id)imageRenderRequestWithComposition:(id)arg1 fitInSize:(CGSize)arg2 wideGamut:(BOOL)arg3 ;
+(id)newImageRenderClientWithName:(id)arg1 ;
+(BOOL)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 ;
+(id)imageSourceWithURL:(id)arg1 type:(id)arg2 useEmbeddedPreview:(BOOL)arg3 ;
+(id)imageSourceWithCIImage:(id)arg1 orientation:(long long)arg2 ;
+(id)imageSourceWithURL:(id)arg1 type:(id)arg2 proxyImage:(id)arg3 orientation:(long long)arg4 useEmbeddedPreview:(BOOL)arg5 ;
+(id)videoSourceWithURL:(id)arg1 ;
+(id)livePhotoSourceWithPhotoSource:(id)arg1 videoSource:(id)arg2 ;
+(id)imagePropertiesRequestWithComposition:(id)arg1 ;
+(id)updateCropAdjustmentController:(id)arg1 after:(id)arg2 error:(out id*)arg3 ;
+(id)videoPropertiesRequestWithComposition:(id)arg1 ;
+(id)pipelineFiltersForShowingOriginalWithGeometry;
+(id)pipelineFiltersForRAWShowingOriginalWithGeometry;
+(void)preheatEditDependencies;
+(id)assetIdentifierForURL:(id)arg1 type:(id)arg2 useEmbeddedPreview:(BOOL)arg3 ;
+(id)newAdjustmentWithName:(id)arg1 ;
+(id)newAdjustmentWithIdentifier:(id)arg1 ;
+(id)_imageRenderRequestWithComposition:(id)arg1 wideGamut:(BOOL)arg2 ;
+(id)priorityWithLevel:(long long)arg1 ;
+(BOOL)isPortraitEffect:(id)arg1 ;
+(BOOL)isPortraitStageEffect:(id)arg1 ;
+(id)filterNameForEffectName:(id)arg1 ;
+(id)knownFormatsVersionsMap;
@end

