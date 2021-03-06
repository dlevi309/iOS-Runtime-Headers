/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSourceFormat.h>

@class NSArray, FigCaptureSourceCompanionFormat;

@interface FigCaptureSourceVideoFormat : FigCaptureSourceFormat {

	NSArray* _frontEndScalerCompanionFormats;
	BOOL _sifrSupported;
	FigCaptureSourceCompanionFormat* _nonSIFRCompanionFormat;
	FigCaptureSourceCompanionFormat* _depthCompanionFormat;
	NSArray* _supportedDepthDataFormats;
	BOOL _isStreamingDisparitySupported;
	BOOL _isStreamingDepthSupported;
	BOOL _isStillImageDisparitySupported;
	BOOL _isStillImageDepthSupported;

}

@property (readonly) int formatIndex; 
@property (readonly) SCD_Struct_BW2 dimensions; 
@property (readonly) SCD_Struct_BW2 sensorDimensions; 
@property (readonly) SCD_Struct_BW2 previewDimensions; 
@property (readonly) float minSupportedFrameRate; 
@property (readonly) float maxSupportedFrameRate; 
@property (readonly) float fieldOfView; 
@property (readonly) float geometricDistortionCorrectedFieldOfView; 
@property (getter=isBinned,readonly) BOOL binned; 
@property (readonly) int stabilizationTypeForTimelapse; 
@property (readonly) int stabilizationTypeOverrideForStandard; 
@property (readonly) int stabilizationTypeOverrideForCinematic; 
@property (readonly) float stabilizationOverscanPercentageOverrideForStandard; 
@property (readonly) float stabilizationOverscanPercentageOverrideForCinematic; 
@property (readonly) float cinematicStabilizationExtendedLookAheadDuration; 
@property (getter=isZoomSupported,readonly) BOOL zoomSupported; 
@property (readonly) float maxZoomFactor; 
@property (readonly) float zoomFactorUpscaleThreshold; 
@property (getter=isZoomDynamicSensorCropSupported,readonly) BOOL zoomDynamicSensorCropSupported; 
@property (readonly) int rawBitDepth; 
@property (readonly) float minISO; 
@property (readonly) float maxISO; 
@property (readonly) SCD_Struct_BW8 minExposureDuration; 
@property (readonly) SCD_Struct_BW8 maxExposureDuration; 
@property (readonly) BOOL hasSensorHDRCompanionIndex; 
@property (readonly) BOOL prefersSensorHDREnabled; 
@property (getter=isSIFRSupported,readonly) BOOL SIFRSupported; 
@property (getter=isLowLightVideoCaptureSupported,readonly) BOOL lowLightVideoCaptureSupported; 
@property (getter=isVariableFrameRateVideoCaptureSupported,readonly) BOOL variableFrameRateVideoCaptureSupported; 
@property (getter=isVisionDataDeliverySupported,readonly) BOOL visionDataDeliverySupported; 
@property (getter=isCameraCalibrationDataDeliverySupported,readonly) BOOL cameraCalibrationDataDeliverySupported; 
@property (getter=isPointCloudDataDeliverySupported,readonly) BOOL pointCloudDataDeliverySupported; 
@property (getter=isSecondaryScalerUnavailable,readonly) BOOL secondaryScalerUnavailable; 
@property (getter=isStudioAndContourPreviewRenderingSupported,readonly) BOOL studioAndContourPreviewRenderingSupported; 
@property (getter=isStagePreviewRenderingSupported,readonly) BOOL stagePreviewRenderingSupported; 
@property (getter=isWideAsStatsMasterEnabled,readonly) BOOL wideAsStatsMasterEnabled; 
@property (readonly) BOOL is10bitVideoFormat; 
@property (getter=isVideoHDRFusionSupported,readonly) BOOL videoHDRFusionSupported; 
@property (readonly) int autoFocusSystem; 
@property (getter=isPhotoFormat,readonly) BOOL photoFormat; 
@property (getter=isHighResPhotoFormat,readonly) BOOL highResPhotoFormat; 
@property (getter=isStillImageStabilizationSupported,readonly) BOOL stillImageStabilizationSupported; 
@property (getter=isSupplementalTimeOfFlightCameraSupported,readonly) BOOL supplementalTimeOfFlightCameraSupported; 
@property (readonly) BOOL configureForStillImageStabilizationSupport; 
@property (readonly) BOOL configureForSpatialOverCaptureSupport; 
@property (readonly) BOOL configureForDigitalFlashSupport; 
@property (getter=isIrisSupported,readonly) BOOL irisSupported; 
@property (getter=isIrisVideoStabilizationSupported,readonly) BOOL irisVideoStabilizationSupported; 
@property (getter=isHDRSupported,readonly) BOOL hdrSupported; 
@property (getter=isGNRHDRSupported,readonly) BOOL gnrHDRSupported; 
@property (getter=isHighResStillImageSupported,readonly) BOOL highResStillImageSupported; 
@property (getter=isQuadraHighResStillImageSupported,readonly) BOOL quadraHighResStillImageSupported; 
@property (getter=isStereoFusionSupported,readonly) BOOL stereoFusionSupported; 
@property (getter=isISPMultiBandNoiseReductionSupported,readonly) BOOL ispMultiBandNoiseReductionSupported; 
@property (getter=isStillImageISPMultiBandNoiseReductionSupported,readonly) BOOL stillImageISPMultiBandNoiseReductionSupported; 
@property (getter=isZeroShutterLagSupported,readonly) BOOL zeroShutterLagSupported; 
@property (readonly) BOOL zeroShutterLagRequiresUserInitiatedCaptureRequestTime; 
@property (getter=isRedEyeReductionSupported,readonly) BOOL redEyeReductionSupported; 
@property (getter=isDigitalFlashSupported,readonly) BOOL digitalFlashSupported; 
@property (readonly) NSArray * digitalFlashDetectedObjectTypes; 
@property (getter=isDeepFusionSupported,readonly) BOOL deepFusionSupported; 
@property (getter=isResponsiveShutterSupported,readonly) BOOL responsiveShutterSupported; 
@property (readonly) SCD_Struct_BW2 highResStillImageDimensions; 
@property (getter=isWideColorSupported,readonly) BOOL wideColorSupported; 
@property (readonly) NSArray * supportedColorSpaces; 
@property (readonly) unsigned supportedRawPixelFormat; 
@property (readonly) float defaultSimulatedAperture; 
@property (readonly) float minSimulatedAperture; 
@property (readonly) float maxSimulatedAperture; 
@property (readonly) float defaultPortraitLightingEffectStrength; 
@property (readonly) float minPortraitLightingEffectStrength; 
@property (readonly) float maxPortraitLightingEffectStrength; 
@property (getter=isSIFRStillImageCaptureWithDepthDataDisabled,readonly) BOOL sifrStillImageCaptureWithDepthDataDisabled; 
@property (getter=isHighProfileH264Supported,readonly) BOOL highProfileH264Supported; 
@property (readonly) NSArray * AVCaptureSessionPresets; 
@property (getter=isStreamingDisparitySupported,readonly) BOOL streamingDisparitySupported; 
@property (getter=isStreamingDepthSupported,readonly) BOOL streamingDepthSupported; 
@property (getter=isStillImageDisparitySupported,readonly) BOOL stillImageDisparitySupported; 
@property (getter=isStillImageDepthSupported,readonly) BOOL stillImageDepthSupported; 
@property (readonly) NSArray * supportedDepthDataFormats; 
@property (readonly) float minZoomFactorForDepthDataDelivery; 
@property (readonly) float maxZoomFactorForDepthDataDelivery; 
@property (getter=isMomentCaptureMovieRecordingSupported,readonly) BOOL momentCaptureMovieRecordingSupported; 
@property (getter=isSpatialOverCaptureSupported,readonly) BOOL spatialOverCaptureSupported; 
@property (readonly) float spatialOverCapturePercentage; 
@property (getter=isNonDestructiveCropSupported,readonly) BOOL nonDestructiveCropSupported; 
@property (getter=isDeferredPhotoProcessingSupported,readonly) BOOL deferredPhotoProcessingSupported; 
@property (getter=isMultiCamSupported,readonly) BOOL multiCamSupported; 
@property (readonly) float hardwareCost; 
@property (readonly) int sensorPowerConsumption; 
@property (readonly) int baseSensorPowerConsumption; 
@property (readonly) int variableSensorPowerConsumption; 
@property (readonly) int ispPowerConsumption; 
@property (getter=isGlobalToneMappingSupported,readonly) BOOL globalToneMappingSupported; 
@property (nonatomic,readonly) int intelligentDistortionCorrectionVersion; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(float)aeMaxGain;
-(BOOL)isSpatialOverCaptureSupported;
-(BOOL)isStreamingDisparitySupported;
-(float)maxPortraitLightingEffectStrength;
-(NSArray *)supportedDepthDataFormats;
-(id)initWithXPCEncoding:(id)arg1 ;
-(BOOL)isPointCloudDataDeliverySupported;
-(float)maxSimulatedAperture;
-(BOOL)isGlobalToneMappingSupported;
-(float)cinematicStabilizationExtendedLookAheadDuration;
-(BOOL)hasSensorHDRCompanionIndex;
-(BOOL)isIrisSupported;
-(float)defaultPortraitLightingEffectStrength;
-(SCD_Struct_BW8)maxExposureDuration;
-(unsigned)mediaType;
-(float)maxISO;
-(id)depthCompanionFormat;
-(BOOL)configureForSpatialOverCaptureSupport;
-(BOOL)isHighResStillImageSupported;
-(BOOL)isHDRSupported;
-(BOOL)isStillImageStabilizationSupported;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(float)maxZoomFactor;
-(BOOL)isSIFRSupported;
-(float)depthDataAEMaxGain;
-(BOOL)isDeferredPhotoProcessingSupported;
-(int)variableSensorPowerConsumption;
-(BOOL)capturesStillsFromVideoStream;
-(BOOL)is10bitVideoFormat;
-(CGRect)maxVisibleSensorRect;
-(float)minSupportedFrameRate;
-(int)sensorHDRCompanionIndex;
-(SCD_Struct_BW2)dimensions;
-(SCD_Struct_BW2)fesInputCropDimensions;
-(BOOL)isStereoFusionSupported;
-(int)rawBitDepth;
-(SCD_Struct_BW2)previewDimensions;
-(int)stabilizationTypeOverrideForCinematic;
-(SCD_Struct_BW2)cropDimensionsForFES;
-(SCD_Struct_BW2)sensorCropDimensions;
-(BOOL)isVideoHDRFusionSupported;
-(unsigned)supportedRawPixelFormat;
-(BOOL)isValidDerivedBravoFormatForUnderlyingFormat:(id)arg1 ;
-(float)lowLightVideoAEMaxGain;
-(int)sensorPowerConsumption;
-(int)verticalSensorBinningFactor;
-(BOOL)isStudioAndContourPreviewRenderingSupported;
-(SCD_Struct_BW2)nativeDimensions;
-(BOOL)temporalNoiseReductionBand0Disabled;
-(int)fesBinningFactorHorizontal;
-(BOOL)isZeroShutterLagSupported;
-(SCD_Struct_BW2)_visibleSensorDimensionsIncludingCinematic:(BOOL)arg1 ;
-(BOOL)isRedEyeReductionSupported;
-(BOOL)usesPacked10BitFirmwareStillImageOutputPixelFormat;
-(BOOL)isStagePreviewRenderingSupported;
-(int)autoFocusSystem;
-(BOOL)isStillImageISPChromaNoiseReductionEnabled;
-(NSArray *)AVCaptureSessionPresets;
-(BOOL)isWideAsStatsMasterEnabled;
-(BOOL)isVariableFrameRateVideoCaptureSupported;
-(BOOL)isStillImageDepthSupported;
-(float)hardwareCost;
-(int)semanticDevelopmentVersion;
-(int)semanticRenderingVersion;
-(BOOL)isCameraCalibrationDataDeliverySupported;
-(BOOL)isSupplementalTimeOfFlightCameraSupported;
-(float)stabilizationOverscanPercentageOverrideForCinematic;
-(int)previewImageQueueSyncStrategy;
-(BOOL)isHighProfileH264Supported;
-(SCD_Struct_BW8)minExposureDuration;
-(float)maxZoomFactorForDepthDataDelivery;
-(int)stabilizationTypeForTimelapse;
-(float)stabilizationOverscanPercentageOverrideForStandard;
-(NSArray *)supportedColorSpaces;
-(BOOL)isResponsiveShutterSupported;
-(float)depthDataMaxIntegrationTimeOverride;
-(float)minISO;
-(SCD_Struct_BW2)_nativeDimensionsWithoutCrop;
-(SCD_Struct_BW2)_outputDimensions;
-(SCD_Struct_BW2)sensorDimensions;
-(int)intelligentDistortionCorrectionVersion;
-(BOOL)isHighResPhotoFormat;
-(int)ispPowerConsumption;
-(BOOL)configureForStillImageStabilizationSupport;
-(BOOL)isGainMapSupported;
-(BOOL)isSIFRStillImageCaptureWithDepthDataDisabled;
-(float)minPortraitLightingEffectStrength;
-(int)horizontalSensorBinningFactor;
-(id)rawLensShadingCorrection;
-(BOOL)isPhotoFormat;
-(BOOL)isBinned;
-(SCD_Struct_BW2)highResStillImageDimensions;
-(id)initWithCoder:(id)arg1 ;
-(int)temporalNoiseReductionMode;
-(int)redEyeReductionVersion;
-(BOOL)isIrisVideoStabilizationSupported;
-(id)frontEndScalerCompanionFormats;
-(float)minZoomFactorForDepthDataDelivery;
-(BOOL)isCompatibleWithInfraredFormat:(id)arg1 ;
-(float)zoomFactorUpscaleThreshold;
-(float)spatialOverCapturePercentage;
-(BOOL)isVisionDataDeliverySupported;
-(float)maxSupportedFrameRate;
-(BOOL)isCaptureTimePhotoCurationSupported;
-(BOOL)isGNRHDRSupported;
-(BOOL)isMultiCamSupported;
-(BOOL)isNonDestructiveCropSupported;
-(id)nonSIFRCompanionFormat;
-(BOOL)isStabilizationModeSupported:(int)arg1 ;
-(BOOL)isLowLightVideoCaptureSupported;
-(BOOL)isDigitalFlashSupported;
-(BOOL)isISPMultiBandNoiseReductionSupported;
-(int)formatIndex;
-(SCD_Struct_BW2)_highQualitySensorDimensions;
-(float)fieldOfView;
-(float)defaultSimulatedAperture;
-(BOOL)isSecondaryScalerUnavailable;
-(int)maxIntegrationTimeOverride;
-(BOOL)sushiRawBlackBorderingEnabled;
-(BOOL)isZoomSupported;
-(BOOL)isStreamingDepthSupported;
-(SCD_Struct_BW2)_maxUseableSensorDimensions;
-(BOOL)isQuadraHighResStillImageSupported;
-(BOOL)isStillImageDisparitySupported;
-(float)defaultMinFrameRateForSessionPreset:(id)arg1 ;
-(id)copyWithNewPixelFormat:(unsigned)arg1 ;
-(SCD_Struct_BW2)sourceCropAspectRatio;
-(BOOL)isStillImageISPMultiBandNoiseReductionSupported;
-(int)baseSensorPowerConsumption;
-(BOOL)configureForDigitalFlashSupport;
-(NSArray *)digitalFlashDetectedObjectTypes;
-(float)defaultMaxFrameRateForSessionPreset:(id)arg1 ;
-(void)_resolveProperties;
-(BOOL)zeroShutterLagRequiresUserInitiatedCaptureRequestTime;
-(float)minSimulatedAperture;
-(int)stillImageNoiseReductionAndStabilizationScheme;
-(BOOL)isMomentCaptureMovieRecordingSupported;
-(id)initWithFigCaptureStreamFormatDictionary:(id)arg1 ;
-(BOOL)isZoomDynamicSensorCropSupported;
-(BOOL)ispChromaNoiseReductionEnabled;
-(BOOL)isWideColorSupported;
-(BOOL)isDeepFusionSupported;
-(float)geometricDistortionCorrectedFieldOfView;
-(CGSize)stabilizationOverscanFromSensorForFESCropDimensions:(SCD_Struct_BW2)arg1 preferSIFRFormat:(BOOL)arg2 ;
-(void)dealloc;
-(int)stabilizationTypeOverrideForStandard;
-(BOOL)prefersSensorHDREnabled;
-(BOOL)isWideDigitalFlashAvailableShallowDepthOfFieldEffectsEnabled;
@end

