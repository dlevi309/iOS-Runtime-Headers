/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureResolvedPhotoSettingsInternal;

@interface AVCaptureResolvedPhotoSettings : NSObject {

	AVCaptureResolvedPhotoSettingsInternal* _internal;

}

@property (readonly) long long uniqueID; 
@property (readonly) SCD_Struct_AV22 photoDimensions; 
@property (readonly) SCD_Struct_AV22 rawPhotoDimensions; 
@property (readonly) SCD_Struct_AV22 previewDimensions; 
@property (readonly) SCD_Struct_AV22 embeddedThumbnailDimensions; 
@property (readonly) SCD_Struct_AV22 rawEmbeddedThumbnailDimensions; 
@property (readonly) SCD_Struct_AV22 portraitEffectsMatteDimensions; 
@property (readonly) SCD_Struct_AV22 livePhotoMovieDimensions; 
@property (getter=isFlashEnabled,readonly) BOOL flashEnabled; 
@property (getter=isRedEyeReductionEnabled,readonly) BOOL redEyeReductionEnabled; 
@property (getter=isStillImageStabilizationEnabled,readonly) BOOL stillImageStabilizationEnabled; 
@property (getter=isVirtualDeviceFusionEnabled,readonly) BOOL virtualDeviceFusionEnabled; 
@property (getter=isDualCameraFusionEnabled,readonly) BOOL dualCameraFusionEnabled; 
@property (readonly) unsigned long long expectedPhotoCount; 
@property (readonly) SCD_Struct_AV23 photoProcessingTimeRange; 
@property (getter=isContentAwareDistortionCorrectionEnabled,readonly) BOOL contentAwareDistortionCorrectionEnabled; 
+(void)initialize;
+(id)resolvedSettingsWithUniqueID:(long long)arg1 photoDimensions:(SCD_Struct_AV22)arg2 rawPhotoDimensions:(SCD_Struct_AV22)arg3 previewDimensions:(SCD_Struct_AV22)arg4 embeddedThumbnailDimensions:(SCD_Struct_AV22)arg5 rawEmbeddedThumbnailDimensions:(SCD_Struct_AV22)arg6 livePhotoMovieEnabled:(BOOL)arg7 livePhotoMovieDimensions:(SCD_Struct_AV22)arg8 portraitEffectsMatteDimensions:(SCD_Struct_AV22)arg9 hairSegmentationMatteDimensions:(SCD_Struct_AV22)arg10 skinSegmentationMatteDimensions:(SCD_Struct_AV22)arg11 teethSegmentationMatteDimensions:(SCD_Struct_AV22)arg12 glassesSegmentationMatteDimensions:(SCD_Struct_AV22)arg13 spatialOverCapturePhotoDimensions:(SCD_Struct_AV22)arg14 turboModeEnabled:(BOOL)arg15 flashEnabled:(BOOL)arg16 redEyeReductionEnabled:(BOOL)arg17 HDREnabled:(BOOL)arg18 adjustedPhotoFiltersEnabled:(BOOL)arg19 EV0PhotoDeliveryEnabled:(BOOL)arg20 stillImageStabilizationEnabled:(BOOL)arg21 virtualDeviceFusionEnabled:(BOOL)arg22 squareCropEnabled:(BOOL)arg23 deferredPhotoProxyDimensions:(SCD_Struct_AV22)arg24 photoProcessingTimeRange:(SCD_Struct_AV23)arg25 contentAwareDistortionCorrectionEnabled:(BOOL)arg26 photoManifest:(id)arg27 digitalFlashUserInterfaceHints:(unsigned long long)arg28 digitalFlashUserInterfaceRGBEstimate:(id)arg29 captureBeforeResolvingSettingsEnabled:(BOOL)arg30 ;
-(long long)uniqueID;
-(BOOL)isHDREnabled;
-(SCD_Struct_AV22)previewDimensions;
-(id)debugDescription;
-(BOOL)isTurboModeEnabled;
-(BOOL)isEV0PhotoDeliveryEnabled;
-(BOOL)isSquareCropEnabled;
-(SCD_Struct_AV22)photoDimensions;
-(id)photoManifest;
-(BOOL)isContentAwareDistortionCorrectionEnabled;
-(SCD_Struct_AV22)rawPhotoDimensions;
-(BOOL)livePhotoMovieEnabled;
-(SCD_Struct_AV22)portraitEffectsMatteDimensions;
-(SCD_Struct_AV22)spatialOverCapturePhotoDimensions;
-(SCD_Struct_AV23)photoProcessingTimeRange;
-(SCD_Struct_AV22)deferredPhotoProxyDimensions;
-(unsigned long long)digitalFlashUserInterfaceHints;
-(id)digitalFlashUserInterfaceRGBEstimate;
-(SCD_Struct_AV22)dimensionsForSemanticSegmentationMatteOfType:(id)arg1 ;
-(BOOL)isFlashEnabled;
-(BOOL)isRedEyeReductionEnabled;
-(BOOL)isAdjustedPhotoFilterRenderingEnabled;
-(BOOL)isStillImageStabilizationEnabled;
-(BOOL)isVirtualDeviceFusionEnabled;
-(BOOL)isDualCameraFusionEnabled;
-(id)digitalFlashRGBEstimate;
-(id)description;
-(id)_initWithUniqueID:(long long)arg1 photoDimensions:(SCD_Struct_AV22)arg2 rawPhotoDimensions:(SCD_Struct_AV22)arg3 previewDimensions:(SCD_Struct_AV22)arg4 embeddedThumbnailDimensions:(SCD_Struct_AV22)arg5 rawEmbeddedThumbnailDimensions:(SCD_Struct_AV22)arg6 livePhotoMovieEnabled:(BOOL)arg7 livePhotoMovieDimensions:(SCD_Struct_AV22)arg8 portraitEffectsMatteDimensions:(SCD_Struct_AV22)arg9 hairSegmentationMatteDimensions:(SCD_Struct_AV22)arg10 skinSegmentationMatteDimensions:(SCD_Struct_AV22)arg11 teethSegmentationMatteDimensions:(SCD_Struct_AV22)arg12 glassesSegmentationMatteDimensions:(SCD_Struct_AV22)arg13 spatialOverCapturePhotoDimensions:(SCD_Struct_AV22)arg14 turboModeEnabled:(BOOL)arg15 flashEnabled:(BOOL)arg16 redEyeReductionEnabled:(BOOL)arg17 HDREnabled:(BOOL)arg18 adjustedPhotoFiltersEnabled:(BOOL)arg19 EV0PhotoDeliveryEnabled:(BOOL)arg20 stillImageStabilizationEnabled:(BOOL)arg21 virtualDeviceFusionEnabled:(BOOL)arg22 squareCropEnabled:(BOOL)arg23 deferredPhotoProxyDimensions:(SCD_Struct_AV22)arg24 photoProcessingTimeRange:(SCD_Struct_AV23)arg25 contentAwareDistortionCorrectionEnabled:(BOOL)arg26 photoManifest:(id)arg27 digitalFlashUserInterfaceHints:(unsigned long long)arg28 digitalFlashUserInterfaceRGBEstimate:(id)arg29 captureBeforeResolvingSettingsEnabled:(BOOL)arg30 ;
-(BOOL)isCaptureBeforeResolvingSettingsEnabled;
-(SCD_Struct_AV22)livePhotoMovieDimensions;
-(unsigned long long)expectedPhotoCount;
-(SCD_Struct_AV22)rawEmbeddedThumbnailDimensions;
-(SCD_Struct_AV22)embeddedThumbnailDimensions;
-(void)dealloc;
@end

