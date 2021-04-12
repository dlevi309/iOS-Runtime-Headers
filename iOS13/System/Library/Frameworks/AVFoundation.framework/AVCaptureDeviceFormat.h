/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
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
@property (nonatomic,readonly) SCD_Struct_AV7 minExposureDuration; 
@property (nonatomic,readonly) SCD_Struct_AV7 maxExposureDuration; 
@property (nonatomic,readonly) float minISO; 
@property (nonatomic,readonly) float maxISO; 
@property (getter=isGlobalToneMappingSupported,nonatomic,readonly) BOOL globalToneMappingSupported; 
@property (getter=isVideoHDRSupported,nonatomic,readonly) BOOL videoHDRSupported; 
@property (nonatomic,readonly) SCD_Struct_AV41 highResolutionStillImageDimensions; 
@property (getter=isHighestPhotoQualitySupported,nonatomic,readonly) BOOL highestPhotoQualitySupported; 
@property (nonatomic,readonly) long long autoFocusSystem; 
@property (nonatomic,readonly) NSArray * supportedColorSpaces; 
@property (nonatomic,readonly) double videoMinZoomFactorForDepthDataDelivery; 
@property (nonatomic,readonly) double videoMaxZoomFactorForDepthDataDelivery; 
@property (nonatomic,readonly) NSArray * supportedDepthDataFormats; 
@property (nonatomic,readonly) NSArray * unsupportedCaptureOutputClasses; 
+(void)initialize;
-(int)axm_totalResolutionPixels;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(NSString *)mediaType;
-(BOOL)isVideoBinned;
-(NSArray *)videoSupportedFrameRateRanges;
-(const opaqueCMFormatDescriptionRef)formatDescription;
-(SCD_Struct_AV41)previewDimensions;
-(BOOL)isVideoStabilizationSupported;
-(BOOL)isVideoStabilizationModeSupported:(long long)arg1 ;
-(SCD_Struct_AV7)lowestSupportedVideoFrameDuration;
-(SCD_Struct_AV7)highestSupportedVideoFrameDuration;
-(SCD_Struct_AV7)defaultActiveMinFrameDuration;
-(SCD_Struct_AV7)defaultActiveMaxFrameDuration;
-(BOOL)supportsQuadraHighResolutionStillImageOutput;
-(BOOL)isPhotoFormat;
-(BOOL)isWideColorSupported;
-(float)defaultSimulatedAperture;
-(float)defaultPortraitLightingEffectStrength;
-(float)minSimulatedAperture;
-(float)maxSimulatedAperture;
-(float)minPortraitLightingEffectStrength;
-(float)maxPortraitLightingEffectStrength;
-(BOOL)isVisionDataDeliverySupported;
-(BOOL)isCameraCalibrationDataDeliverySupported;
-(BOOL)isDefaultActiveFormat;
-(double)videoMaxZoomFactor;
-(NSArray *)supportedDepthDataFormats;
-(BOOL)isStreamingDisparitySupported;
-(BOOL)isStreamingDepthSupported;
-(BOOL)isStillImageDisparitySupported;
-(BOOL)isStillImageDepthSupported;
-(id)AVCaptureSessionPresets;
-(double)videoMinZoomFactorForDepthDataDelivery;
-(double)videoMaxZoomFactorForDepthDataDelivery;
-(double)videoMinZoomFactorForCameraCalibrationDataDelivery;
-(double)videoMaxZoomFactorForCameraCalibrationDataDelivery;
-(SCD_Struct_AV7)maxExposureDuration;
-(SCD_Struct_AV7)minExposureDuration;
-(NSArray *)supportedColorSpaces;
-(BOOL)isLowLightVideoCaptureSupported;
-(BOOL)isDigitalFlashSupported;
-(float)minISO;
-(float)maxISO;
-(BOOL)isGlobalToneMappingSupported;
-(BOOL)isVideoHDRSupported;
-(BOOL)isVideoHDRSuspensionSupported;
-(BOOL)isSpatialOverCaptureSupported;
-(BOOL)isNonDestructiveCropSupported;
-(id)initWithFigCaptureSourceFormat:(id)arg1 ;
-(BOOL)isSISSupported;
-(id)figCaptureSourceVideoFormat;
-(id)figCaptureSourceDepthDataFormat;
-(SCD_Struct_AV41)sensorDimensions;
-(id)vtScalingMode;
-(BOOL)supportsHighProfileH264;
-(BOOL)isIrisVideoStabilizationSupported;
-(BOOL)prefersVideoHDREnabledForSessionPreset:(id)arg1 ;
-(NSArray *)unsupportedCaptureOutputClasses;
-(BOOL)isHDRSupported;
-(BOOL)supportsHighResolutionStillImageOutput;
-(SCD_Struct_AV41)highResolutionStillImageDimensions;
-(long long)videoHDRFlavor;
-(id)optimizedVideoPreviewFilterNames;
-(float)videoFieldOfView;
-(float)geometricDistortionCorrectedVideoFieldOfView;
-(int)supportedStabilizationMethod;
-(double)videoZoomFactorUpscaleThreshold;
-(long long)autoFocusSystem;
-(BOOL)isExperimental;
-(BOOL)isMultiCamSupported;
-(id)_stringForMediaType:(unsigned)arg1 formatDescription:(opaqueCMFormatDescriptionRef)arg2 frameRateRanges:(id)arg3 ;
-(BOOL)isStereoFusionSupported;
-(BOOL)isIrisSupported;
-(int)rawBitDepth;
-(BOOL)supportsDynamicCrop;
-(BOOL)isHighResPhotoFormat;
-(float)hardwareCost;
-(int)baseSensorPowerConsumption;
-(int)variableSensorPowerConsumption;
-(int)ispPowerConsumption;
-(unsigned)supportedRawPixelFormat;
-(BOOL)isMomentCaptureMovieRecordingSupported;
-(float)spatialOverCapturePercentage;
-(BOOL)isDeferredPhotoProcessingSupported;
-(BOOL)isDeepFusionSupported;
-(BOOL)isHighestPhotoQualitySupported;
-(BOOL)isPortraitEffectsMatteStillImageDeliverySupported;
-(id)supportedSemanticSegmentationMatteTypes;
-(BOOL)supportsRedEyeReduction;
-(id)videoZoomSupportedDownscaleStages;
-(id)videoZoomSupportedUpscaleStages;
-(BOOL)needsPhotoPreviewDPCC;
-(int)supportedFormatsArrayIndex;
-(id)optimizedPhotoFilterNames;
-(BOOL)isEquivalentToVirtualDeviceFormat:(id)arg1 ;
@end

