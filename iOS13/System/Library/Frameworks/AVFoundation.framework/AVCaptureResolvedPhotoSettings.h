/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureResolvedPhotoSettingsInternal;

@interface AVCaptureResolvedPhotoSettings : NSObject {

	AVCaptureResolvedPhotoSettingsInternal* _internal;

}

@property (readonly) long long uniqueID; 
@property (readonly) SCD_Struct_AV41 photoDimensions; 
@property (readonly) SCD_Struct_AV41 rawPhotoDimensions; 
@property (readonly) SCD_Struct_AV41 previewDimensions; 
@property (readonly) SCD_Struct_AV41 embeddedThumbnailDimensions; 
@property (readonly) SCD_Struct_AV41 rawEmbeddedThumbnailDimensions; 
@property (readonly) SCD_Struct_AV41 portraitEffectsMatteDimensions; 
@property (readonly) SCD_Struct_AV41 livePhotoMovieDimensions; 
@property (getter=isFlashEnabled,readonly) BOOL flashEnabled; 
@property (getter=isRedEyeReductionEnabled,readonly) BOOL redEyeReductionEnabled; 
@property (getter=isStillImageStabilizationEnabled,readonly) BOOL stillImageStabilizationEnabled; 
@property (getter=isVirtualDeviceFusionEnabled,readonly) BOOL virtualDeviceFusionEnabled; 
@property (getter=isDualCameraFusionEnabled,readonly) BOOL dualCameraFusionEnabled; 
@property (readonly) unsigned long long expectedPhotoCount; 
@property (readonly) SCD_Struct_AV8 photoProcessingTimeRange; 
+(id)resolvedSettingsWithUniqueID:(long long)arg1 photoDimensions:(SCD_Struct_AV41)arg2 rawPhotoDimensions:(SCD_Struct_AV41)arg3 previewDimensions:(SCD_Struct_AV41)arg4 embeddedThumbnailDimensions:(SCD_Struct_AV41)arg5 rawEmbeddedThumbnailDimensions:(SCD_Struct_AV41)arg6 livePhotoMovieEnabled:(BOOL)arg7 livePhotoMovieDimensions:(SCD_Struct_AV41)arg8 portraitEffectsMatteDimensions:(SCD_Struct_AV41)arg9 hairSegmentationMatteDimensions:(SCD_Struct_AV41)arg10 skinSegmentationMatteDimensions:(SCD_Struct_AV41)arg11 teethSegmentationMatteDimensions:(SCD_Struct_AV41)arg12 spatialOverCapturePhotoDimensions:(SCD_Struct_AV41)arg13 turboModeEnabled:(BOOL)arg14 flashEnabled:(BOOL)arg15 redEyeReductionEnabled:(BOOL)arg16 HDREnabled:(BOOL)arg17 adjustedPhotoFiltersEnabled:(BOOL)arg18 EV0PhotoDeliveryEnabled:(BOOL)arg19 stillImageStabilizationEnabled:(BOOL)arg20 virtualDeviceFusionEnabled:(BOOL)arg21 squareCropEnabled:(BOOL)arg22 deferredPhotoProxyDimensions:(SCD_Struct_AV41)arg23 photoProcessingTimeRange:(SCD_Struct_AV8)arg24 photoManifest:(id)arg25 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(long long)uniqueID;
-(id)photoManifest;
-(BOOL)isEV0PhotoDeliveryEnabled;
-(unsigned long long)expectedPhotoCount;
-(BOOL)isTurboModeEnabled;
-(BOOL)isSquareCropEnabled;
-(SCD_Struct_AV41)photoDimensions;
-(SCD_Struct_AV41)rawPhotoDimensions;
-(SCD_Struct_AV41)previewDimensions;
-(SCD_Struct_AV41)embeddedThumbnailDimensions;
-(SCD_Struct_AV41)rawEmbeddedThumbnailDimensions;
-(BOOL)livePhotoMovieEnabled;
-(SCD_Struct_AV41)livePhotoMovieDimensions;
-(SCD_Struct_AV41)portraitEffectsMatteDimensions;
-(SCD_Struct_AV41)spatialOverCapturePhotoDimensions;
-(SCD_Struct_AV41)deferredPhotoProxyDimensions;
-(SCD_Struct_AV8)photoProcessingTimeRange;
-(id)_initWithUniqueID:(long long)arg1 photoDimensions:(SCD_Struct_AV41)arg2 rawPhotoDimensions:(SCD_Struct_AV41)arg3 previewDimensions:(SCD_Struct_AV41)arg4 embeddedThumbnailDimensions:(SCD_Struct_AV41)arg5 rawEmbeddedThumbnailDimensions:(SCD_Struct_AV41)arg6 livePhotoMovieEnabled:(BOOL)arg7 livePhotoMovieDimensions:(SCD_Struct_AV41)arg8 portraitEffectsMatteDimensions:(SCD_Struct_AV41)arg9 hairSegmentationMatteDimensions:(SCD_Struct_AV41)arg10 skinSegmentationMatteDimensions:(SCD_Struct_AV41)arg11 teethSegmentationMatteDimensions:(SCD_Struct_AV41)arg12 spatialOverCapturePhotoDimensions:(SCD_Struct_AV41)arg13 turboModeEnabled:(BOOL)arg14 flashEnabled:(BOOL)arg15 redEyeReductionEnabled:(BOOL)arg16 HDREnabled:(BOOL)arg17 adjustedPhotoFiltersEnabled:(BOOL)arg18 EV0PhotoDeliveryEnabled:(BOOL)arg19 stillImageStabilizationEnabled:(BOOL)arg20 virtualDeviceFusionEnabled:(BOOL)arg21 squareCropEnabled:(BOOL)arg22 deferredPhotoProxyDimensions:(SCD_Struct_AV41)arg23 photoProcessingTimeRange:(SCD_Struct_AV8)arg24 photoManifest:(id)arg25 ;
-(SCD_Struct_AV41)dimensionsForSemanticSegmentationMatteOfType:(id)arg1 ;
-(BOOL)isFlashEnabled;
-(BOOL)isRedEyeReductionEnabled;
-(BOOL)isHDREnabled;
-(BOOL)isAdjustedPhotoFilterRenderingEnabled;
-(BOOL)isStillImageStabilizationEnabled;
-(BOOL)isVirtualDeviceFusionEnabled;
-(BOOL)isDualCameraFusionEnabled;
@end

