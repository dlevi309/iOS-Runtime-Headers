/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureDeviceFormatInternal, NSString, NSArray;

@interface AVCaptureDeviceFormat : NSObject {

	AVCaptureDeviceFormatInternal* _internal;

}

@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) const opaqueCMFormatDescriptionRef formatDescription; 
@property (nonatomic,readonly) NSArray * videoSupportedFrameRateRanges; 
@property (nonatomic,readonly) float videoFieldOfView; 
@property (getter=isVideoBinned,nonatomic,readonly) BOOL videoBinned; 
@property (getter=isVideoStabilizationSupported,nonatomic,readonly) BOOL videoStabilizationSupported; 
@property (nonatomic,readonly) double videoMaxZoomFactor; 
@property (nonatomic,readonly) double videoZoomFactorUpscaleThreshold; 
@property (nonatomic,readonly) SCD_Struct_AV0 minExposureDuration; 
@property (nonatomic,readonly) SCD_Struct_AV0 maxExposureDuration; 
@property (nonatomic,readonly) float minISO; 
@property (nonatomic,readonly) float maxISO; 
@property (getter=isGlobalToneMappingSupported,nonatomic,readonly) BOOL globalToneMappingSupported; 
@property (getter=isVideoHDRSupported,nonatomic,readonly) BOOL videoHDRSupported; 
@property (nonatomic,readonly) SCD_Struct_AV19 highResolutionStillImageDimensions; 
@property (getter=isHighestPhotoQualitySupported,nonatomic,readonly) BOOL highestPhotoQualitySupported; 
@property (nonatomic,readonly) long long autoFocusSystem; 
@property (nonatomic,readonly) NSArray * supportedColorSpaces; 
@property (nonatomic,readonly) double videoMinZoomFactorForDepthDataDelivery; 
@property (nonatomic,readonly) double videoMaxZoomFactorForDepthDataDelivery; 
@property (nonatomic,readonly) NSArray * supportedDepthDataFormats; 
@property (nonatomic,readonly) NSArray * unsupportedCaptureOutputClasses; 
+(void)initialize;
-(int)axm_totalResolutionPixels;
-(BOOL)isSpatialOverCaptureSupported;
-(BOOL)isStreamingDisparitySupported;
-(float)maxPortraitLightingEffectStrength;
-(NSArray *)supportedDepthDataFormats;
-(float)maxSimulatedAperture;
-(BOOL)isExperimental;
-(BOOL)isGlobalToneMappingSupported;
-(BOOL)isIrisSupported;
-(float)defaultPortraitLightingEffectStrength;
-(BOOL)supportsHighResolutionStillImageOutput;
-(SCD_Struct_AV19)highResolutionStillImageDimensions;
-(float)geometricDistortionCorrectedVideoFieldOfView;
-(int)supportedStabilizationMethod;
-(double)videoMaxZoomFactor;
-(double)videoZoomFactorUpscaleThreshold;
-(BOOL)isVideoHDRSupported;
-(id)_stringForMediaType:(unsigned)arg1 formatDescription:(opaqueCMFormatDescriptionRef)arg2 frameRateRanges:(id)arg3 ;
-(SCD_Struct_AV0)maxExposureDuration;
-(NSString *)mediaType;
-(float)maxISO;
-(id)figCaptureSourceVideoFormat;
-(id)figCaptureSourceDepthDataFormat;
-(id)initWithFigCaptureSourceFormat:(id)arg1 ;
-(double)videoMinZoomFactorForDepthDataDelivery;
-(BOOL)isVideoStabilizationModeSupported:(long long)arg1 ;
-(SCD_Struct_AV0)lowestSupportedVideoFrameDuration;
-(SCD_Struct_AV0)highestSupportedVideoFrameDuration;
-(BOOL)isDefaultActiveFormat;
-(long long)videoHDRFlavor;
-(id)optimizedVideoPreviewFilterNames;
-(double)videoMaxZoomFactorForDepthDataDelivery;
-(double)videoMinZoomFactorForCameraCalibrationDataDelivery;
-(double)videoMaxZoomFactorForCameraCalibrationDataDelivery;
-(BOOL)isVideoHDRSuspensionSupported;
-(BOOL)isHighestPhotoQualitySupported;
-(NSArray *)unsupportedCaptureOutputClasses;
-(BOOL)isPortraitEffectsMatteStillImageDeliverySupported;
-(id)supportedSemanticSegmentationMatteTypes;
-(BOOL)prefersVideoHDREnabledForSessionPreset:(id)arg1 ;
-(BOOL)supportsDynamicCrop;
-(BOOL)supportsRedEyeReduction;
-(BOOL)supportsHighProfileH264;
-(int)supportedFormatsArrayIndex;
-(SCD_Struct_AV0)defaultActiveMinFrameDurationForSessionPreset:(id)arg1 ;
-(SCD_Struct_AV0)defaultActiveMaxFrameDurationForSessionPreset:(id)arg1 ;
-(id)vtScalingMode;
-(BOOL)supportsQuadraHighResolutionStillImageOutput;
-(id)optimizedPhotoFilterNames;
-(BOOL)isEquivalentToVirtualDeviceFormat:(id)arg1 ;
-(BOOL)isHDRSupported;
-(const opaqueCMFormatDescriptionRef)formatDescription;
-(BOOL)isDeferredPhotoProcessingSupported;
-(int)variableSensorPowerConsumption;
-(BOOL)isStereoFusionSupported;
-(int)rawBitDepth;
-(SCD_Struct_AV19)previewDimensions;
-(unsigned)supportedRawPixelFormat;
-(id)debugDescription;
-(BOOL)isSISSupported;
-(float)videoFieldOfView;
-(long long)autoFocusSystem;
-(id)AVCaptureSessionPresets;
-(BOOL)isVariableFrameRateVideoCaptureSupported;
-(BOOL)isStillImageDepthSupported;
-(id)description;
-(float)hardwareCost;
-(BOOL)isCameraCalibrationDataDeliverySupported;
-(BOOL)isVideoStabilizationSupported;
-(SCD_Struct_AV0)minExposureDuration;
-(long long)stabilizationTypeForTimelapse;
-(NSArray *)supportedColorSpaces;
-(float)minISO;
-(SCD_Struct_AV19)sensorDimensions;
-(BOOL)isHighResPhotoFormat;
-(int)ispPowerConsumption;
-(float)minPortraitLightingEffectStrength;
-(BOOL)isVideoBinned;
-(NSArray *)videoSupportedFrameRateRanges;
-(BOOL)isPhotoFormat;
-(BOOL)isContentAwareDistortionCorrectionSupported;
-(BOOL)isIrisVideoStabilizationSupported;
-(float)spatialOverCapturePercentage;
-(BOOL)isVisionDataDeliverySupported;
-(BOOL)isMultiCamSupported;
-(BOOL)isNonDestructiveCropSupported;
-(BOOL)isLowLightVideoCaptureSupported;
-(BOOL)isDigitalFlashSupported;
-(float)defaultSimulatedAperture;
-(BOOL)isStreamingDepthSupported;
-(BOOL)isStillImageDisparitySupported;
-(int)baseSensorPowerConsumption;
-(BOOL)isFastCapturePrioritizationSupported;
-(float)minSimulatedAperture;
-(BOOL)isMomentCaptureMovieRecordingSupported;
-(BOOL)isWideColorSupported;
-(BOOL)isDeepFusionSupported;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

