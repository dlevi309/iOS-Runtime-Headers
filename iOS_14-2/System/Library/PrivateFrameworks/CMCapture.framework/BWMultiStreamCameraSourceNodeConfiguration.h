/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSDictionary, NSSet;

@interface BWMultiStreamCameraSourceNodeConfiguration : NSObject {

	unsigned _formatIndex;
	unsigned _clientVideoFormat;
	float _minFrameRate;
	float _maxFrameRate;
	float _aeMaxGain;
	SCD_Struct_BW8 _maxExposureDurationClientOverride;
	SCD_Struct_BW8 _maxExposureDurationFrameworkOverride;
	int _horizontalSensorBinningFactor;
	int _verticalSensorBinningFactor;
	int _fesBinningFactorHorizontal;
	SCD_Struct_BW2 _sensorCropDimensions;
	SCD_Struct_BW2 _cropDimensionsWhenFESIsEnabled;
	SCD_Struct_BW2 _cropAspectRatio;
	BOOL _highlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream;
	BOOL _highlightRecoveryEnabledWhenConfiguredAsSlave;
	BOOL _streamingRequiredWhenConfiguredAsSlave;
	BOOL _focusBlurMapEnabled;
	BOOL _ltmLookUpTableMetadataEnabled;
	BOOL _lumaHistogramMetadataEnabled;
	BOOL _ispAPSDataEnabled;
	int _motionAttachmentsSource;
	BOOL _lowLightVideoEnabled;
	BOOL _temporalNoiseReductionEnabled;
	BOOL _temporalNoiseReductionBand0Disabled;
	BOOL _chromaNoiseReductionEnabled;
	BOOL _keypointDetectionEnabled;
	int _ispMultiBandNoiseReductionMode;
	int _colorSpace;
	BOOL _discardsUnstableSphereVideoFrames;
	BOOL _chromaticAberrationReductionEnabled;
	float _maximumSupportedFrameRate;
	float _minimumSupportedFrameRate;
	BOOL _secondaryScalerIsNotAvailable;
	BOOL _primaryScalerDecoupled;
	BOOL _videoStabilizationEnabled;
	int _videoStabilizationMethod;
	BOOL _geometricDistortionCorrectionOnStillImageOutputEnabled;
	BOOL _geometricDistortionCorrectionOnStreamingOutputsEnabled;
	BOOL _geometricDistortionCorrectionSupported;
	BOOL _maximumGeometricDistortionCorrectionEnabled;
	CGSize _visOverscan;
	CGSize _sensorOverscan;
	float _additionalVISOverscanWhenRecording;
	BOOL _stillImageOutputEnabled;
	BOOL _usesFirmwareStillImageOutput;
	BOOL _forceFirmwareStillImageOutputEnabled;
	BOOL _stillImageOutputRequires10BitPixelFormat;
	BOOL _quadraHighResStillImageCaptureEnabled;
	SCD_Struct_BW2 _quadraCropDimensions;
	NSDictionary* _qHDRSensorDefectivePixelInfo;
	BOOL _includeOverscanOnStillImageOutput;
	BOOL _includeOverscanInStillImageFinalCropRect;
	BOOL _roundingOfStillImageDimensionsToMultipleOfFourEnabled;
	BOOL _discardsDepthDataForStillImages;
	BOOL _originalCameraIntrinsicMatrixDeliveryOnStillImageOutputEnabled;
	int _stillImageOutputSensorInterfaceRawAttachmentOptionRetainedBufferCount;
	int _stillImageOutputSashimiRawAttachmentOptionRetainedBufferCount;
	int _stillImageOutputFocusPixelDataAttachmentOptionRetainedBufferCount;
	int _firmwareStillImageOutputRetainedBufferCountOverride;
	BOOL _stillImageOutputSushiRawAttachmentOptionEnabled;
	BOOL _stillImageKeypointDetectionEnabled;
	BOOL _usesFIFOFirmwareTimeMachine;
	int _firmwareTimeMachineBufferCapacity;
	BOOL _firmwareTimeMachineSIFREnabled;
	int _maximumNumberOfBracketedSIFRFrames;
	BOOL _reflectsStillsOnStreamingOutputs;
	BOOL _livePhotoCaptureEnabled;
	BOOL _previewOutputEnabled;
	int _preferredPreviewMaxFrameRate;
	SCD_Struct_BW2 _preferredPreviewDimensions;
	BOOL _optimizeBandwidthForPreviewOutput;
	BOOL _detectedFacesOnPreviewOutputEnabled;
	BOOL _originalCameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled;
	BOOL _cameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled;
	BOOL _streamingForegroundSegmentationEnabled;
	BOOL _faceTrackingEnabled;
	BOOL _videoCaptureOutputEnabled;
	SCD_Struct_BW2 _videoCaptureDimensions;
	BOOL _detectedFacesOnVideoCaptureOutputEnabled;
	BOOL _originalCameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled;
	BOOL _cameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled;
	NSDictionary* _visionDataConfiguration;
	BOOL _depthOutputEnabled;
	BOOL _hardwareDepthFilteringPreferred;
	int _depthType;
	SCD_Struct_BW2 _depthDimensions;
	BOOL _originalCameraIntrinsicMatrixDeliveryOnDepthOutputEnabled;
	BOOL _RGBIRStereoFusionEnabled;
	BOOL _pointCloudOutputEnabled;
	BOOL _detectedObjectsOutputEnabled;
	NSSet* _enabledDetectedObjectTypes;
	BOOL _defersObjectDetectionStartup;
	NSDictionary* _detectedFacesOutputConfiguration;
	float _bravoShiftMitigationMaxZoomFactor;
	float _overscanForBravoShiftMitigation;
	BOOL _videoHDRImageStatisticsEnabled;
	BOOL _videoHDRFusionEnabled;
	BOOL _deferStreamingOutputsEnable;

}

@property (assign,nonatomic) unsigned formatIndex;                                                                   //@synthesize formatIndex=_formatIndex - In the implementation block
@property (assign,nonatomic) unsigned clientVideoFormat;                                                             //@synthesize clientVideoFormat=_clientVideoFormat - In the implementation block
@property (assign,nonatomic) float minFrameRate;                                                                     //@synthesize minFrameRate=_minFrameRate - In the implementation block
@property (assign,nonatomic) float maxFrameRate;                                                                     //@synthesize maxFrameRate=_maxFrameRate - In the implementation block
@property (assign,nonatomic) float aeMaxGain;                                                                        //@synthesize aeMaxGain=_aeMaxGain - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 maxExposureDurationClientOverride;                                       //@synthesize maxExposureDurationClientOverride=_maxExposureDurationClientOverride - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 maxExposureDurationFrameworkOverride;                                    //@synthesize maxExposureDurationFrameworkOverride=_maxExposureDurationFrameworkOverride - In the implementation block
@property (assign,nonatomic) int horizontalSensorBinningFactor;                                                      //@synthesize horizontalSensorBinningFactor=_horizontalSensorBinningFactor - In the implementation block
@property (assign,nonatomic) int verticalSensorBinningFactor;                                                        //@synthesize verticalSensorBinningFactor=_verticalSensorBinningFactor - In the implementation block
@property (assign,nonatomic) int fesBinningFactorHorizontal;                                                         //@synthesize fesBinningFactorHorizontal=_fesBinningFactorHorizontal - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 sensorCropDimensions;                                                    //@synthesize sensorCropDimensions=_sensorCropDimensions - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 cropAspectRatio;                                                         //@synthesize cropAspectRatio=_cropAspectRatio - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 cropDimensionsWhenFESIsEnabled;                                          //@synthesize cropDimensionsWhenFESIsEnabled=_cropDimensionsWhenFESIsEnabled - In the implementation block
@property (assign,nonatomic) BOOL highlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream;                      //@synthesize highlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream=_highlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream - In the implementation block
@property (assign,nonatomic) BOOL highlightRecoveryEnabledWhenConfiguredAsSlave;                                     //@synthesize highlightRecoveryEnabledWhenConfiguredAsSlave=_highlightRecoveryEnabledWhenConfiguredAsSlave - In the implementation block
@property (assign,nonatomic) BOOL streamingRequiredWhenConfiguredAsSlave;                                            //@synthesize streamingRequiredWhenConfiguredAsSlave=_streamingRequiredWhenConfiguredAsSlave - In the implementation block
@property (assign,nonatomic) BOOL focusBlurMapEnabled;                                                               //@synthesize focusBlurMapEnabled=_focusBlurMapEnabled - In the implementation block
@property (assign,nonatomic) BOOL ltmLookUpTableMetadataEnabled;                                                     //@synthesize ltmLookUpTableMetadataEnabled=_ltmLookUpTableMetadataEnabled - In the implementation block
@property (assign,nonatomic) BOOL lumaHistogramMetadataEnabled;                                                      //@synthesize lumaHistogramMetadataEnabled=_lumaHistogramMetadataEnabled - In the implementation block
@property (assign,nonatomic) BOOL ispAPSDataEnabled;                                                                 //@synthesize ispAPSDataEnabled=_ispAPSDataEnabled - In the implementation block
@property (assign,nonatomic) int motionAttachmentsSource;                                                            //@synthesize motionAttachmentsSource=_motionAttachmentsSource - In the implementation block
@property (assign,nonatomic) BOOL lowLightVideoEnabled;                                                              //@synthesize lowLightVideoEnabled=_lowLightVideoEnabled - In the implementation block
@property (assign,nonatomic) BOOL temporalNoiseReductionEnabled;                                                     //@synthesize temporalNoiseReductionEnabled=_temporalNoiseReductionEnabled - In the implementation block
@property (assign,nonatomic) BOOL temporalNoiseReductionBand0Disabled;                                               //@synthesize temporalNoiseReductionBand0Disabled=_temporalNoiseReductionBand0Disabled - In the implementation block
@property (assign,nonatomic) BOOL chromaNoiseReductionEnabled;                                                       //@synthesize chromaNoiseReductionEnabled=_chromaNoiseReductionEnabled - In the implementation block
@property (assign,nonatomic) BOOL keypointDetectionEnabled;                                                          //@synthesize keypointDetectionEnabled=_keypointDetectionEnabled - In the implementation block
@property (assign,nonatomic) int ispMultiBandNoiseReductionMode;                                                     //@synthesize ispMultiBandNoiseReductionMode=_ispMultiBandNoiseReductionMode - In the implementation block
@property (assign,nonatomic) int colorSpace;                                                                         //@synthesize colorSpace=_colorSpace - In the implementation block
@property (assign,nonatomic) BOOL discardsUnstableSphereVideoFrames;                                                 //@synthesize discardsUnstableSphereVideoFrames=_discardsUnstableSphereVideoFrames - In the implementation block
@property (assign,nonatomic) BOOL chromaticAberrationReductionEnabled;                                               //@synthesize chromaticAberrationReductionEnabled=_chromaticAberrationReductionEnabled - In the implementation block
@property (assign,nonatomic) BOOL videoHDRImageStatisticsEnabled;                                                    //@synthesize videoHDRImageStatisticsEnabled=_videoHDRImageStatisticsEnabled - In the implementation block
@property (assign,nonatomic) BOOL videoHDRFusionEnabled;                                                             //@synthesize videoHDRFusionEnabled=_videoHDRFusionEnabled - In the implementation block
@property (assign,nonatomic) float maximumSupportedFrameRate;                                                        //@synthesize maximumSupportedFrameRate=_maximumSupportedFrameRate - In the implementation block
@property (assign,nonatomic) float minimumSupportedFrameRate;                                                        //@synthesize minimumSupportedFrameRate=_minimumSupportedFrameRate - In the implementation block
@property (assign,nonatomic) BOOL deferStreamingOutputsEnable;                                                       //@synthesize deferStreamingOutputsEnable=_deferStreamingOutputsEnable - In the implementation block
@property (assign,nonatomic) BOOL secondaryScalerIsNotAvailable;                                                     //@synthesize secondaryScalerIsNotAvailable=_secondaryScalerIsNotAvailable - In the implementation block
@property (assign,nonatomic) BOOL primaryScalerDecoupled;                                                            //@synthesize primaryScalerDecoupled=_primaryScalerDecoupled - In the implementation block
@property (assign,nonatomic) BOOL videoStabilizationEnabled;                                                         //@synthesize videoStabilizationEnabled=_videoStabilizationEnabled - In the implementation block
@property (assign,nonatomic) int videoStabilizationMethod;                                                           //@synthesize videoStabilizationMethod=_videoStabilizationMethod - In the implementation block
@property (assign,nonatomic) BOOL geometricDistortionCorrectionOnStillImageOutputEnabled;                            //@synthesize geometricDistortionCorrectionOnStillImageOutputEnabled=_geometricDistortionCorrectionOnStillImageOutputEnabled - In the implementation block
@property (assign,nonatomic) BOOL geometricDistortionCorrectionOnStreamingOutputsEnabled;                            //@synthesize geometricDistortionCorrectionOnStreamingOutputsEnabled=_geometricDistortionCorrectionOnStreamingOutputsEnabled - In the implementation block
@property (assign,nonatomic) BOOL geometricDistortionCorrectionSupported;                                            //@synthesize geometricDistortionCorrectionSupported=_geometricDistortionCorrectionSupported - In the implementation block
@property (assign,nonatomic) BOOL maximumGeometricDistortionCorrectionEnabled;                                       //@synthesize maximumGeometricDistortionCorrectionEnabled=_maximumGeometricDistortionCorrectionEnabled - In the implementation block
@property (assign,nonatomic) CGSize visOverscan;                                                                     //@synthesize visOverscan=_visOverscan - In the implementation block
@property (assign,nonatomic) CGSize sensorOverscan;                                                                  //@synthesize sensorOverscan=_sensorOverscan - In the implementation block
@property (assign,nonatomic) float additionalVISOverscanWhenRecording;                                               //@synthesize additionalVISOverscanWhenRecording=_additionalVISOverscanWhenRecording - In the implementation block
@property (assign,nonatomic) BOOL stillImageOutputEnabled;                                                           //@synthesize stillImageOutputEnabled=_stillImageOutputEnabled - In the implementation block
@property (assign,nonatomic) BOOL usesFirmwareStillImageOutput;                                                      //@synthesize usesFirmwareStillImageOutput=_usesFirmwareStillImageOutput - In the implementation block
@property (assign,nonatomic) BOOL forceFirmwareStillImageOutputEnabled;                                              //@synthesize forceFirmwareStillImageOutputEnabled=_forceFirmwareStillImageOutputEnabled - In the implementation block
@property (assign,nonatomic) BOOL stillImageOutputRequires10BitPixelFormat;                                          //@synthesize stillImageOutputRequires10BitPixelFormat=_stillImageOutputRequires10BitPixelFormat - In the implementation block
@property (assign,nonatomic) BOOL quadraHighResStillImageCaptureEnabled;                                             //@synthesize quadraHighResStillImageCaptureEnabled=_quadraHighResStillImageCaptureEnabled - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 quadraCropDimensions;                                                    //@synthesize quadraCropDimensions=_quadraCropDimensions - In the implementation block
@property (nonatomic,copy) NSDictionary * qHDRSensorDefectivePixelInfo;                                              //@synthesize qHDRSensorDefectivePixelInfo=_qHDRSensorDefectivePixelInfo - In the implementation block
@property (assign,nonatomic) BOOL includeOverscanOnStillImageOutput;                                                 //@synthesize includeOverscanOnStillImageOutput=_includeOverscanOnStillImageOutput - In the implementation block
@property (assign,nonatomic) BOOL includeOverscanInStillImageFinalCropRect;                                          //@synthesize includeOverscanInStillImageFinalCropRect=_includeOverscanInStillImageFinalCropRect - In the implementation block
@property (assign,nonatomic) BOOL roundingOfStillImageDimensionsToMultipleOfFourEnabled;                             //@synthesize roundingOfStillImageDimensionsToMultipleOfFourEnabled=_roundingOfStillImageDimensionsToMultipleOfFourEnabled - In the implementation block
@property (assign,nonatomic) BOOL discardsDepthDataForStillImages;                                                   //@synthesize discardsDepthDataForStillImages=_discardsDepthDataForStillImages - In the implementation block
@property (assign,nonatomic) BOOL originalCameraIntrinsicMatrixDeliveryOnStillImageOutputEnabled;                    //@synthesize originalCameraIntrinsicMatrixDeliveryOnStillImageOutputEnabled=_originalCameraIntrinsicMatrixDeliveryOnStillImageOutputEnabled - In the implementation block
@property (assign,nonatomic) int stillImageOutputSensorInterfaceRawAttachmentOptionRetainedBufferCount;              //@synthesize stillImageOutputSensorInterfaceRawAttachmentOptionRetainedBufferCount=_stillImageOutputSensorInterfaceRawAttachmentOptionRetainedBufferCount - In the implementation block
@property (assign,nonatomic) int stillImageOutputSashimiRawAttachmentOptionRetainedBufferCount;                      //@synthesize stillImageOutputSashimiRawAttachmentOptionRetainedBufferCount=_stillImageOutputSashimiRawAttachmentOptionRetainedBufferCount - In the implementation block
@property (assign,nonatomic) int stillImageOutputFocusPixelDataAttachmentOptionRetainedBufferCount;                  //@synthesize stillImageOutputFocusPixelDataAttachmentOptionRetainedBufferCount=_stillImageOutputFocusPixelDataAttachmentOptionRetainedBufferCount - In the implementation block
@property (assign,nonatomic) int firmwareStillImageOutputRetainedBufferCountOverride;                                //@synthesize firmwareStillImageOutputRetainedBufferCountOverride=_firmwareStillImageOutputRetainedBufferCountOverride - In the implementation block
@property (assign,nonatomic) BOOL stillImageOutputSushiRawAttachmentOptionEnabled;                                   //@synthesize stillImageOutputSushiRawAttachmentOptionEnabled=_stillImageOutputSushiRawAttachmentOptionEnabled - In the implementation block
@property (assign,nonatomic) BOOL stillImageKeypointDetectionEnabled;                                                //@synthesize stillImageKeypointDetectionEnabled=_stillImageKeypointDetectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL usesFIFOFirmwareTimeMachine;                                                       //@synthesize usesFIFOFirmwareTimeMachine=_usesFIFOFirmwareTimeMachine - In the implementation block
@property (assign,nonatomic) int firmwareTimeMachineBufferCapacity;                                                  //@synthesize firmwareTimeMachineBufferCapacity=_firmwareTimeMachineBufferCapacity - In the implementation block
@property (assign,nonatomic) BOOL firmwareTimeMachineSIFREnabled;                                                    //@synthesize firmwareTimeMachineSIFREnabled=_firmwareTimeMachineSIFREnabled - In the implementation block
@property (assign,nonatomic) int maximumNumberOfBracketedSIFRFrames;                                                 //@synthesize maximumNumberOfBracketedSIFRFrames=_maximumNumberOfBracketedSIFRFrames - In the implementation block
@property (assign,nonatomic) BOOL reflectsStillsOnStreamingOutputs;                                                  //@synthesize reflectsStillsOnStreamingOutputs=_reflectsStillsOnStreamingOutputs - In the implementation block
@property (assign,nonatomic) BOOL livePhotoCaptureEnabled;                                                           //@synthesize livePhotoCaptureEnabled=_livePhotoCaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL previewOutputEnabled;                                                              //@synthesize previewOutputEnabled=_previewOutputEnabled - In the implementation block
@property (assign,nonatomic) int preferredPreviewMaxFrameRate;                                                       //@synthesize preferredPreviewMaxFrameRate=_preferredPreviewMaxFrameRate - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 preferredPreviewDimensions;                                              //@synthesize preferredPreviewDimensions=_preferredPreviewDimensions - In the implementation block
@property (assign,nonatomic) BOOL optimizeBandwidthForPreviewOutput;                                                 //@synthesize optimizeBandwidthForPreviewOutput=_optimizeBandwidthForPreviewOutput - In the implementation block
@property (assign,nonatomic) BOOL detectedFacesOnPreviewOutputEnabled;                                               //@synthesize detectedFacesOnPreviewOutputEnabled=_detectedFacesOnPreviewOutputEnabled - In the implementation block
@property (assign,nonatomic) BOOL originalCameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled;                       //@synthesize originalCameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled=_originalCameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled - In the implementation block
@property (assign,nonatomic) BOOL cameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled;                               //@synthesize cameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled=_cameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled - In the implementation block
@property (assign,nonatomic) BOOL streamingForegroundSegmentationEnabled;                                            //@synthesize streamingForegroundSegmentationEnabled=_streamingForegroundSegmentationEnabled - In the implementation block
@property (assign,nonatomic) BOOL faceTrackingEnabled;                                                               //@synthesize faceTrackingEnabled=_faceTrackingEnabled - In the implementation block
@property (assign,nonatomic) BOOL videoCaptureOutputEnabled;                                                         //@synthesize videoCaptureOutputEnabled=_videoCaptureOutputEnabled - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 videoCaptureDimensions;                                                  //@synthesize videoCaptureDimensions=_videoCaptureDimensions - In the implementation block
@property (assign,nonatomic) BOOL detectedFacesOnVideoCaptureOutputEnabled;                                          //@synthesize detectedFacesOnVideoCaptureOutputEnabled=_detectedFacesOnVideoCaptureOutputEnabled - In the implementation block
@property (assign,nonatomic) BOOL originalCameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled;                  //@synthesize originalCameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled=_originalCameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled - In the implementation block
@property (assign,nonatomic) BOOL cameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled;                          //@synthesize cameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled=_cameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled - In the implementation block
@property (nonatomic,retain) NSDictionary * visionDataConfiguration;                                                 //@synthesize visionDataConfiguration=_visionDataConfiguration - In the implementation block
@property (assign,nonatomic) BOOL depthOutputEnabled;                                                                //@synthesize depthOutputEnabled=_depthOutputEnabled - In the implementation block
@property (assign,nonatomic) BOOL hardwareDepthFilteringPreferred;                                                   //@synthesize hardwareDepthFilteringPreferred=_hardwareDepthFilteringPreferred - In the implementation block
@property (assign,nonatomic) int depthType;                                                                          //@synthesize depthType=_depthType - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 depthDimensions;                                                         //@synthesize depthDimensions=_depthDimensions - In the implementation block
@property (assign,nonatomic) BOOL originalCameraIntrinsicMatrixDeliveryOnDepthOutputEnabled;                         //@synthesize originalCameraIntrinsicMatrixDeliveryOnDepthOutputEnabled=_originalCameraIntrinsicMatrixDeliveryOnDepthOutputEnabled - In the implementation block
@property (assign,nonatomic) BOOL RGBIRStereoFusionEnabled;                                                          //@synthesize RGBIRStereoFusionEnabled=_RGBIRStereoFusionEnabled - In the implementation block
@property (assign,nonatomic) BOOL pointCloudOutputEnabled;                                                           //@synthesize pointCloudOutputEnabled=_pointCloudOutputEnabled - In the implementation block
@property (assign,nonatomic) BOOL detectedObjectsOutputEnabled;                                                      //@synthesize detectedObjectsOutputEnabled=_detectedObjectsOutputEnabled - In the implementation block
@property (nonatomic,copy) NSSet * enabledDetectedObjectTypes;                                                       //@synthesize enabledDetectedObjectTypes=_enabledDetectedObjectTypes - In the implementation block
@property (assign,nonatomic) BOOL defersObjectDetectionStartup;                                                      //@synthesize defersObjectDetectionStartup=_defersObjectDetectionStartup - In the implementation block
@property (nonatomic,copy) NSDictionary * detectedFacesOutputConfiguration;                                          //@synthesize detectedFacesOutputConfiguration=_detectedFacesOutputConfiguration - In the implementation block
@property (assign,nonatomic) float bravoShiftMitigationMaxZoomFactor;                                                //@synthesize bravoShiftMitigationMaxZoomFactor=_bravoShiftMitigationMaxZoomFactor - In the implementation block
@property (assign,nonatomic) float overscanForBravoShiftMitigation;                                                  //@synthesize overscanForBravoShiftMitigation=_overscanForBravoShiftMitigation - In the implementation block
-(float)aeMaxGain;
-(SCD_Struct_BW8)maxExposureDurationClientOverride;
-(void)setLivePhotoCaptureEnabled:(BOOL)arg1 ;
-(void)setColorSpace:(int)arg1 ;
-(void)setQuadraHighResStillImageCaptureEnabled:(BOOL)arg1 ;
-(BOOL)focusBlurMapEnabled;
-(int)colorSpace;
-(void)setMaxExposureDurationClientOverride:(SCD_Struct_BW8)arg1 ;
-(float)additionalVISOverscanWhenRecording;
-(void)setVideoStabilizationMethod:(int)arg1 ;
-(void)setQuadraCropDimensions:(SCD_Struct_BW2)arg1 ;
-(void)setFirmwareStillImageOutputRetainedBufferCountOverride:(int)arg1 ;
-(SCD_Struct_BW2)preferredPreviewDimensions;
-(void)setFesBinningFactorHorizontal:(int)arg1 ;
-(void)setStillImageKeypointDetectionEnabled:(BOOL)arg1 ;
-(float)maxFrameRate;
-(BOOL)firmwareTimeMachineSIFREnabled;
-(BOOL)ltmLookUpTableMetadataEnabled;
-(void)setPreferredPreviewMaxFrameRate:(int)arg1 ;
-(void)setStillImageOutputSensorInterfaceRawAttachmentOptionRetainedBufferCount:(int)arg1 ;
-(BOOL)detectedObjectsOutputEnabled;
-(void)setDiscardsDepthDataForStillImages:(BOOL)arg1 ;
-(SCD_Struct_BW2)quadraCropDimensions;
-(BOOL)highlightRecoveryEnabledWhenConfiguredAsSlave;
-(BOOL)hardwareDepthFilteringPreferred;
-(SCD_Struct_BW2)cropDimensionsWhenFESIsEnabled;
-(void)setMaxExposureDurationFrameworkOverride:(SCD_Struct_BW8)arg1 ;
-(id)init;
-(void)setIncludeOverscanInStillImageFinalCropRect:(BOOL)arg1 ;
-(void)setOptimizeBandwidthForPreviewOutput:(BOOL)arg1 ;
-(BOOL)streamingRequiredWhenConfiguredAsSlave;
-(void)setMaxFrameRate:(float)arg1 ;
-(void)setStillImageOutputRequires10BitPixelFormat:(BOOL)arg1 ;
-(int)maximumNumberOfBracketedSIFRFrames;
-(BOOL)previewOutputEnabled;
-(void)setPointCloudOutputEnabled:(BOOL)arg1 ;
-(void)setGeometricDistortionCorrectionSupported:(BOOL)arg1 ;
-(void)setVideoCaptureDimensions:(SCD_Struct_BW2)arg1 ;
-(void)setUsesFirmwareStillImageOutput:(BOOL)arg1 ;
-(BOOL)primaryScalerDecoupled;
-(void)setDetectedFacesOnPreviewOutputEnabled:(BOOL)arg1 ;
-(BOOL)chromaNoiseReductionEnabled;
-(BOOL)quadraHighResStillImageCaptureEnabled;
-(BOOL)temporalNoiseReductionEnabled;
-(SCD_Struct_BW2)sensorCropDimensions;
-(BOOL)detectedFacesOnPreviewOutputEnabled;
-(void)setChromaNoiseReductionEnabled:(BOOL)arg1 ;
-(BOOL)lumaHistogramMetadataEnabled;
-(BOOL)cameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled;
-(void)setMinimumSupportedFrameRate:(float)arg1 ;
-(BOOL)reflectsStillsOnStreamingOutputs;
-(void)setDetectedObjectsOutputEnabled:(BOOL)arg1 ;
-(SCD_Struct_BW8)maxExposureDurationFrameworkOverride;
-(int)verticalSensorBinningFactor;
-(BOOL)videoStabilizationEnabled;
-(void)setSecondaryScalerIsNotAvailable:(BOOL)arg1 ;
-(void)setHorizontalSensorBinningFactor:(int)arg1 ;
-(void)setVideoHDRImageStatisticsEnabled:(BOOL)arg1 ;
-(BOOL)temporalNoiseReductionBand0Disabled;
-(void)setChromaticAberrationReductionEnabled:(BOOL)arg1 ;
-(int)fesBinningFactorHorizontal;
-(void)setVideoCaptureOutputEnabled:(BOOL)arg1 ;
-(BOOL)maximumGeometricDistortionCorrectionEnabled;
-(BOOL)stillImageOutputRequires10BitPixelFormat;
-(void)setTemporalNoiseReductionEnabled:(BOOL)arg1 ;
-(void)setClientVideoFormat:(unsigned)arg1 ;
-(NSSet *)enabledDetectedObjectTypes;
-(void)setGeometricDistortionCorrectionOnStreamingOutputsEnabled:(BOOL)arg1 ;
-(float)minFrameRate;
-(void)setLumaHistogramMetadataEnabled:(BOOL)arg1 ;
-(void)setPrimaryScalerDecoupled:(BOOL)arg1 ;
-(int)videoStabilizationMethod;
-(BOOL)stillImageOutputEnabled;
-(BOOL)originalCameraIntrinsicMatrixDeliveryOnDepthOutputEnabled;
-(void)setIncludeOverscanOnStillImageOutput:(BOOL)arg1 ;
-(BOOL)usesFIFOFirmwareTimeMachine;
-(SCD_Struct_BW2)cropAspectRatio;
-(BOOL)lowLightVideoEnabled;
-(void)setMaximumNumberOfBracketedSIFRFrames:(int)arg1 ;
-(BOOL)cameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled;
-(void)setLowLightVideoEnabled:(BOOL)arg1 ;
-(void)setQHDRSensorDefectivePixelInfo:(NSDictionary *)arg1 ;
-(void)setIspAPSDataEnabled:(BOOL)arg1 ;
-(float)bravoShiftMitigationMaxZoomFactor;
-(BOOL)streamingForegroundSegmentationEnabled;
-(BOOL)deferStreamingOutputsEnable;
-(int)stillImageOutputFocusPixelDataAttachmentOptionRetainedBufferCount;
-(BOOL)chromaticAberrationReductionEnabled;
-(BOOL)originalCameraIntrinsicMatrixDeliveryOnStillImageOutputEnabled;
-(BOOL)includeOverscanOnStillImageOutput;
-(CGSize)visOverscan;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(BOOL)secondaryScalerIsNotAvailable;
-(void)setDiscardsUnstableSphereVideoFrames:(BOOL)arg1 ;
-(void)setMinFrameRate:(float)arg1 ;
-(NSDictionary *)visionDataConfiguration;
-(void)setVideoHDRFusionEnabled:(BOOL)arg1 ;
-(BOOL)geometricDistortionCorrectionSupported;
-(void)setVerticalSensorBinningFactor:(int)arg1 ;
-(void)setHardwareDepthFilteringPreferred:(BOOL)arg1 ;
-(void)setUsesFIFOFirmwareTimeMachine:(BOOL)arg1 ;
-(BOOL)depthOutputEnabled;
-(void)setCameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled:(BOOL)arg1 ;
-(BOOL)defersObjectDetectionStartup;
-(BOOL)roundingOfStillImageDimensionsToMultipleOfFourEnabled;
-(BOOL)usesFirmwareStillImageOutput;
-(unsigned)clientVideoFormat;
-(SCD_Struct_BW2)videoCaptureDimensions;
-(void)setDetectedFacesOnVideoCaptureOutputEnabled:(BOOL)arg1 ;
-(void)setOriginalCameraIntrinsicMatrixDeliveryOnStillImageOutputEnabled:(BOOL)arg1 ;
-(BOOL)highlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream;
-(int)firmwareStillImageOutputRetainedBufferCountOverride;
-(int)ispMultiBandNoiseReductionMode;
-(void)setPreferredPreviewDimensions:(SCD_Struct_BW2)arg1 ;
-(void)setDepthOutputEnabled:(BOOL)arg1 ;
-(float)minimumSupportedFrameRate;
-(float)overscanForBravoShiftMitigation;
-(void)setSensorCropDimensions:(SCD_Struct_BW2)arg1 ;
-(void)setFaceTrackingEnabled:(BOOL)arg1 ;
-(BOOL)faceTrackingEnabled;
-(BOOL)videoCaptureOutputEnabled;
-(int)horizontalSensorBinningFactor;
-(int)stillImageOutputSensorInterfaceRawAttachmentOptionRetainedBufferCount;
-(void)setDefersObjectDetectionStartup:(BOOL)arg1 ;
-(void)setVisionDataConfiguration:(NSDictionary *)arg1 ;
-(void)setOriginalCameraIntrinsicMatrixDeliveryOnDepthOutputEnabled:(BOOL)arg1 ;
-(void)setFormatIndex:(unsigned)arg1 ;
-(BOOL)detectedFacesOnVideoCaptureOutputEnabled;
-(void)setStreamingForegroundSegmentationEnabled:(BOOL)arg1 ;
-(void)setFirmwareTimeMachineSIFREnabled:(BOOL)arg1 ;
-(BOOL)ispAPSDataEnabled;
-(void)setHighlightRecoveryEnabledWhenConfiguredAsSlave:(BOOL)arg1 ;
-(void)setLtmLookUpTableMetadataEnabled:(BOOL)arg1 ;
-(void)setForceFirmwareStillImageOutputEnabled:(BOOL)arg1 ;
-(void)setCropDimensionsWhenFESIsEnabled:(SCD_Struct_BW2)arg1 ;
-(void)setOriginalCameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled:(BOOL)arg1 ;
-(int)preferredPreviewMaxFrameRate;
-(BOOL)RGBIRStereoFusionEnabled;
-(void)setStillImageOutputSushiRawAttachmentOptionEnabled:(BOOL)arg1 ;
-(void)setSensorOverscan:(CGSize)arg1 ;
-(BOOL)videoHDRImageStatisticsEnabled;
-(BOOL)optimizeBandwidthForPreviewOutput;
-(void)setBravoShiftMitigationMaxZoomFactor:(float)arg1 ;
-(void)setStillImageOutputSashimiRawAttachmentOptionRetainedBufferCount:(int)arg1 ;
-(BOOL)geometricDistortionCorrectionOnStreamingOutputsEnabled;
-(unsigned)formatIndex;
-(BOOL)originalCameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled;
-(void)setStillImageOutputEnabled:(BOOL)arg1 ;
-(BOOL)discardsUnstableSphereVideoFrames;
-(BOOL)originalCameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled;
-(void)setGeometricDistortionCorrectionOnStillImageOutputEnabled:(BOOL)arg1 ;
-(void)setOriginalCameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled:(BOOL)arg1 ;
-(void)setStreamingRequiredWhenConfiguredAsSlave:(BOOL)arg1 ;
-(void)setStillImageOutputFocusPixelDataAttachmentOptionRetainedBufferCount:(int)arg1 ;
-(void)setFocusBlurMapEnabled:(BOOL)arg1 ;
-(NSDictionary *)qHDRSensorDefectivePixelInfo;
-(void)setMaximumGeometricDistortionCorrectionEnabled:(BOOL)arg1 ;
-(void)setVideoStabilizationEnabled:(BOOL)arg1 ;
-(void)setAdditionalVISOverscanWhenRecording:(float)arg1 ;
-(void)setFirmwareTimeMachineBufferCapacity:(int)arg1 ;
-(void)setOverscanForBravoShiftMitigation:(float)arg1 ;
-(void)setVisOverscan:(CGSize)arg1 ;
-(void)setDepthDimensions:(SCD_Struct_BW2)arg1 ;
-(int)motionAttachmentsSource;
-(void)setIspMultiBandNoiseReductionMode:(int)arg1 ;
-(BOOL)geometricDistortionCorrectionOnStillImageOutputEnabled;
-(void)setDetectedFacesOutputConfiguration:(NSDictionary *)arg1 ;
-(CGSize)sensorOverscan;
-(BOOL)includeOverscanInStillImageFinalCropRect;
-(BOOL)pointCloudOutputEnabled;
-(void)setPreviewOutputEnabled:(BOOL)arg1 ;
-(void)setRoundingOfStillImageDimensionsToMultipleOfFourEnabled:(BOOL)arg1 ;
-(BOOL)videoHDRFusionEnabled;
-(NSDictionary *)detectedFacesOutputConfiguration;
-(void)setDeferStreamingOutputsEnable:(BOOL)arg1 ;
-(void)setEnabledDetectedObjectTypes:(NSSet *)arg1 ;
-(BOOL)forceFirmwareStillImageOutputEnabled;
-(void)setAeMaxGain:(float)arg1 ;
-(int)depthType;
-(void)setTemporalNoiseReductionBand0Disabled:(BOOL)arg1 ;
-(void)setMaximumSupportedFrameRate:(float)arg1 ;
-(void)setReflectsStillsOnStreamingOutputs:(BOOL)arg1 ;
-(int)stillImageOutputSashimiRawAttachmentOptionRetainedBufferCount;
-(void)setHighlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream:(BOOL)arg1 ;
-(void)setKeypointDetectionEnabled:(BOOL)arg1 ;
-(BOOL)stillImageKeypointDetectionEnabled;
-(void)setCropAspectRatio:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)depthDimensions;
-(BOOL)discardsDepthDataForStillImages;
-(BOOL)livePhotoCaptureEnabled;
-(int)firmwareTimeMachineBufferCapacity;
-(void)dealloc;
-(float)maximumSupportedFrameRate;
-(void)setDepthType:(int)arg1 ;
-(BOOL)keypointDetectionEnabled;
-(void)setRGBIRStereoFusionEnabled:(BOOL)arg1 ;
-(void)setCameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled:(BOOL)arg1 ;
-(BOOL)stillImageOutputSushiRawAttachmentOptionEnabled;
@end

