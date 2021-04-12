/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class FigCaptureSourceConfiguration, FigVideoCaptureConnectionConfiguration, NSArray, FigDepthDataCaptureConnectionConfiguration, FigPointCloudDataCaptureConnectionConfiguration;

@interface FigCaptureCameraSourcePipelineConfiguration : NSObject {

	int _motionAttachmentsSource;
	int _videoStabilizationType;
	int _depthType;
	SCD_Struct_BW8 _maxExposureDurationClientOverride;
	SCD_Struct_BW8 _maxExposureDurationFrameworkOverride;
	BOOL _forceCNRDisabled;
	BOOL _coreMediaFaceTrackingEnabled;
	BOOL _ispFaceTrackingEnabled;
	BOOL _stillImageGeometricDistortionCorrectionEnabled;
	BOOL _streamingGeometricDistortionCorrectionEnabled;
	BOOL _offlineVISEnabled;
	BOOL _zeroShutterLagEnabled;
	BOOL _configureForZeroShutterLagSupport;
	BOOL _configureForSIFRStillImageCaptureIfAvailable;
	BOOL _enableStillImageSensorOverscanIfAvailable;
	float _overCapturePercentage;
	BOOL _configureForSpatialOverCaptureSupport;
	BOOL _configureForDigitalFlashSupport;
	BOOL _clockSynchronizationEnabled;
	BOOL _depthConversionEnabled;
	int _stillImageFocusPixelDataRetainedBufferCount;
	int _stillImageSashimiRawRetainedBufferCount;
	int _stillImageSensorInterfaceRawRetainedBufferCount;
	int _stillImageOutputRetainedBufferCountOverride;
	BOOL _stillImageOutputSushiRawAttachmentOptionEnabled;
	BOOL _streamingForegroundSegmentationEnabled;
	BOOL _RGBIRStereoFusionEnabled;
	BOOL _streamingCameraCalibrationDataDeliveryEnabled;
	int _autoImageControlMode;
	FigCaptureSourceConfiguration* _cameraConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoPreviewSinkConnectionConfiguration;
	NSArray* _previewDerivedVideoConnectionConfigurations;
	NSArray* _videoCaptureConnectionConfigurations;
	FigVideoCaptureConnectionConfiguration* _stillImageConnectionConfiguration;
	FigDepthDataCaptureConnectionConfiguration* _depthDataConnectionConfiguration;
	NSArray* _visionDataConnectionConfigurations;
	NSArray* _metadataObjectConnectionConfigurations;
	NSArray* _movieFileDetectedObjectMetadataConnectionConfigurations;
	FigPointCloudDataCaptureConnectionConfiguration* _pointCloudDataConnectionConfiguration;
	BOOL _videoHDRImageStatisticsEnabled;
	float _additionalVISOverscanWhenRecording;
	int _originalVideoStabilizationTypeForOfflineVIS;

}

@property (assign,nonatomic) int motionAttachmentsSource;                                                                          //@synthesize motionAttachmentsSource=_motionAttachmentsSource - In the implementation block
@property (assign,nonatomic) int videoStabilizationType;                                                                           //@synthesize videoStabilizationType=_videoStabilizationType - In the implementation block
@property (assign,nonatomic) int originalVideoStabilizationTypeForOfflineVIS;                                                      //@synthesize originalVideoStabilizationTypeForOfflineVIS=_originalVideoStabilizationTypeForOfflineVIS - In the implementation block
@property (assign,nonatomic) int depthType;                                                                                        //@synthesize depthType=_depthType - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 maxExposureDurationClientOverride;                                                     //@synthesize maxExposureDurationClientOverride=_maxExposureDurationClientOverride - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 maxExposureDurationFrameworkOverride;                                                  //@synthesize maxExposureDurationFrameworkOverride=_maxExposureDurationFrameworkOverride - In the implementation block
@property (assign,nonatomic) BOOL forceCNRDisabled;                                                                                //@synthesize forceCNRDisabled=_forceCNRDisabled - In the implementation block
@property (assign,nonatomic) BOOL coreMediaFaceTrackingEnabled;                                                                    //@synthesize coreMediaFaceTrackingEnabled=_coreMediaFaceTrackingEnabled - In the implementation block
@property (assign,nonatomic) BOOL ispFaceTrackingEnabled;                                                                          //@synthesize ispFaceTrackingEnabled=_ispFaceTrackingEnabled - In the implementation block
@property (assign,nonatomic) BOOL stillImageGeometricDistortionCorrectionEnabled;                                                  //@synthesize stillImageGeometricDistortionCorrectionEnabled=_stillImageGeometricDistortionCorrectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL streamingGeometricDistortionCorrectionEnabled;                                                   //@synthesize streamingGeometricDistortionCorrectionEnabled=_streamingGeometricDistortionCorrectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL offlineVISEnabled;                                                                               //@synthesize offlineVISEnabled=_offlineVISEnabled - In the implementation block
@property (assign,nonatomic) BOOL zeroShutterLagEnabled;                                                                           //@synthesize zeroShutterLagEnabled=_zeroShutterLagEnabled - In the implementation block
@property (assign,nonatomic) BOOL configureForZeroShutterLagSupport;                                                               //@synthesize configureForZeroShutterLagSupport=_configureForZeroShutterLagSupport - In the implementation block
@property (assign,nonatomic) BOOL configureForSIFRStillImageCaptureIfAvailable;                                                    //@synthesize configureForSIFRStillImageCaptureIfAvailable=_configureForSIFRStillImageCaptureIfAvailable - In the implementation block
@property (assign,nonatomic) BOOL enableStillImageSensorOverscanIfAvailable;                                                       //@synthesize enableStillImageSensorOverscanIfAvailable=_enableStillImageSensorOverscanIfAvailable - In the implementation block
@property (assign,nonatomic) float overCapturePercentage;                                                                          //@synthesize overCapturePercentage=_overCapturePercentage - In the implementation block
@property (assign,nonatomic) BOOL configureForSpatialOverCaptureSupport;                                                           //@synthesize configureForSpatialOverCaptureSupport=_configureForSpatialOverCaptureSupport - In the implementation block
@property (assign,nonatomic) BOOL configureForDigitalFlashSupport;                                                                 //@synthesize configureForDigitalFlashSupport=_configureForDigitalFlashSupport - In the implementation block
@property (assign,nonatomic) BOOL clockSynchronizationEnabled;                                                                     //@synthesize clockSynchronizationEnabled=_clockSynchronizationEnabled - In the implementation block
@property (assign,nonatomic) BOOL depthConversionEnabled;                                                                          //@synthesize depthConversionEnabled=_depthConversionEnabled - In the implementation block
@property (assign,nonatomic) int stillImageFocusPixelDataRetainedBufferCount;                                                      //@synthesize stillImageFocusPixelDataRetainedBufferCount=_stillImageFocusPixelDataRetainedBufferCount - In the implementation block
@property (assign,nonatomic) int stillImageSashimiRawRetainedBufferCount;                                                          //@synthesize stillImageSashimiRawRetainedBufferCount=_stillImageSashimiRawRetainedBufferCount - In the implementation block
@property (assign,nonatomic) int stillImageSensorInterfaceRawRetainedBufferCount;                                                  //@synthesize stillImageSensorInterfaceRawRetainedBufferCount=_stillImageSensorInterfaceRawRetainedBufferCount - In the implementation block
@property (assign,nonatomic) int stillImageOutputRetainedBufferCountOverride;                                                      //@synthesize stillImageOutputRetainedBufferCountOverride=_stillImageOutputRetainedBufferCountOverride - In the implementation block
@property (assign,nonatomic) BOOL stillImageOutputSushiRawAttachmentOptionEnabled;                                                 //@synthesize stillImageOutputSushiRawAttachmentOptionEnabled=_stillImageOutputSushiRawAttachmentOptionEnabled - In the implementation block
@property (assign,nonatomic) BOOL streamingForegroundSegmentationEnabled;                                                          //@synthesize streamingForegroundSegmentationEnabled=_streamingForegroundSegmentationEnabled - In the implementation block
@property (assign,nonatomic) BOOL RGBIRStereoFusionEnabled;                                                                        //@synthesize RGBIRStereoFusionEnabled=_RGBIRStereoFusionEnabled - In the implementation block
@property (assign,nonatomic) BOOL streamingCameraCalibrationDataDeliveryEnabled;                                                   //@synthesize streamingCameraCalibrationDataDeliveryEnabled=_streamingCameraCalibrationDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) int autoImageControlMode;                                                                             //@synthesize autoImageControlMode=_autoImageControlMode - In the implementation block
@property (nonatomic,retain) FigCaptureSourceConfiguration * cameraConfiguration;                                                  //@synthesize cameraConfiguration=_cameraConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoPreviewSinkConnectionConfiguration;                     //@synthesize videoPreviewSinkConnectionConfiguration=_videoPreviewSinkConnectionConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * previewDerivedVideoConnectionConfigurations;                                                //@synthesize previewDerivedVideoConnectionConfigurations=_previewDerivedVideoConnectionConfigurations - In the implementation block
@property (nonatomic,retain) NSArray * videoCaptureConnectionConfigurations;                                                       //@synthesize videoCaptureConnectionConfigurations=_videoCaptureConnectionConfigurations - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * stillImageConnectionConfiguration;                           //@synthesize stillImageConnectionConfiguration=_stillImageConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigDepthDataCaptureConnectionConfiguration * depthDataConnectionConfiguration;                        //@synthesize depthDataConnectionConfiguration=_depthDataConnectionConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * visionDataConnectionConfigurations;                                                         //@synthesize visionDataConnectionConfigurations=_visionDataConnectionConfigurations - In the implementation block
@property (nonatomic,retain) NSArray * metadataObjectConnectionConfigurations;                                                     //@synthesize metadataObjectConnectionConfigurations=_metadataObjectConnectionConfigurations - In the implementation block
@property (nonatomic,retain) NSArray * movieFileDetectedObjectMetadataConnectionConfigurations;                                    //@synthesize movieFileDetectedObjectMetadataConnectionConfigurations=_movieFileDetectedObjectMetadataConnectionConfigurations - In the implementation block
@property (nonatomic,retain) FigPointCloudDataCaptureConnectionConfiguration * pointCloudDataConnectionConfiguration;              //@synthesize pointCloudDataConnectionConfiguration=_pointCloudDataConnectionConfiguration - In the implementation block
@property (assign,nonatomic) BOOL videoHDRImageStatisticsEnabled;                                                                  //@synthesize videoHDRImageStatisticsEnabled=_videoHDRImageStatisticsEnabled - In the implementation block
@property (assign,nonatomic) float additionalVISOverscanWhenRecording;                                                             //@synthesize additionalVISOverscanWhenRecording=_additionalVISOverscanWhenRecording - In the implementation block
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(SCD_Struct_BW8)maxExposureDurationClientOverride;
-(FigCaptureSourceConfiguration *)cameraConfiguration;
-(void)setMaxExposureDurationClientOverride:(SCD_Struct_BW8)arg1 ;
-(float)additionalVISOverscanWhenRecording;
-(FigPointCloudDataCaptureConnectionConfiguration *)pointCloudDataConnectionConfiguration;
-(FigDepthDataCaptureConnectionConfiguration *)depthDataConnectionConfiguration;
-(NSArray *)videoCaptureConnectionConfigurations;
-(void)setPointCloudDataConnectionConfiguration:(FigPointCloudDataCaptureConnectionConfiguration *)arg1 ;
-(BOOL)configureForSIFRStillImageCaptureIfAvailable;
-(void)setStillImageSensorInterfaceRawRetainedBufferCount:(int)arg1 ;
-(BOOL)coreMediaFaceTrackingEnabled;
-(int)stillImageFocusPixelDataRetainedBufferCount;
-(void)setMaxExposureDurationFrameworkOverride:(SCD_Struct_BW8)arg1 ;
-(BOOL)enableStillImageSensorOverscanIfAvailable;
-(BOOL)configureForSpatialOverCaptureSupport;
-(BOOL)zeroShutterLagEnabled;
-(int)autoImageControlMode;
-(void)setStillImageGeometricDistortionCorrectionEnabled:(BOOL)arg1 ;
-(BOOL)configureForZeroShutterLagSupport;
-(void)setEnableStillImageSensorOverscanIfAvailable:(BOOL)arg1 ;
-(BOOL)forceCNRDisabled;
-(NSArray *)metadataObjectConnectionConfigurations;
-(void)setVideoPreviewSinkConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setCoreMediaFaceTrackingEnabled:(BOOL)arg1 ;
-(void)setForceCNRDisabled:(BOOL)arg1 ;
-(SCD_Struct_BW8)maxExposureDurationFrameworkOverride;
-(void)setVisionDataConnectionConfigurations:(NSArray *)arg1 ;
-(NSArray *)movieFileDetectedObjectMetadataConnectionConfigurations;
-(void)setConfigureForSIFRStillImageCaptureIfAvailable:(BOOL)arg1 ;
-(void)setConfigureForDigitalFlashSupport:(BOOL)arg1 ;
-(void)setVideoHDRImageStatisticsEnabled:(BOOL)arg1 ;
-(void)setStillImageFocusPixelDataRetainedBufferCount:(int)arg1 ;
-(int)originalVideoStabilizationTypeForOfflineVIS;
-(FigVideoCaptureConnectionConfiguration *)videoPreviewSinkConnectionConfiguration;
-(float)overCapturePercentage;
-(void)setConfigureForZeroShutterLagSupport:(BOOL)arg1 ;
-(void)setZeroShutterLagEnabled:(BOOL)arg1 ;
-(BOOL)stillImageGeometricDistortionCorrectionEnabled;
-(BOOL)streamingForegroundSegmentationEnabled;
-(void)setIspFaceTrackingEnabled:(BOOL)arg1 ;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(void)setCameraConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(int)stillImageSensorInterfaceRawRetainedBufferCount;
-(void)setOfflineVISEnabled:(BOOL)arg1 ;
-(void)setVideoStabilizationType:(int)arg1 ;
-(NSArray *)previewDerivedVideoConnectionConfigurations;
-(void)setStreamingGeometricDistortionCorrectionEnabled:(BOOL)arg1 ;
-(void)setConfigureForSpatialOverCaptureSupport:(BOOL)arg1 ;
-(void)setPreviewDerivedVideoConnectionConfigurations:(NSArray *)arg1 ;
-(BOOL)offlineVISEnabled;
-(void)setStillImageOutputRetainedBufferCountOverride:(int)arg1 ;
-(int)videoStabilizationType;
-(int)stillImageOutputRetainedBufferCountOverride;
-(void)setMetadataObjectConnectionConfigurations:(NSArray *)arg1 ;
-(void)setStreamingForegroundSegmentationEnabled:(BOOL)arg1 ;
-(BOOL)clockSynchronizationEnabled;
-(BOOL)RGBIRStereoFusionEnabled;
-(void)setStillImageConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setStillImageOutputSushiRawAttachmentOptionEnabled:(BOOL)arg1 ;
-(BOOL)videoHDRImageStatisticsEnabled;
-(BOOL)streamingCameraCalibrationDataDeliveryEnabled;
-(void)setVideoCaptureConnectionConfigurations:(NSArray *)arg1 ;
-(BOOL)ispFaceTrackingEnabled;
-(NSArray *)visionDataConnectionConfigurations;
-(void)setOriginalVideoStabilizationTypeForOfflineVIS:(int)arg1 ;
-(BOOL)streamingGeometricDistortionCorrectionEnabled;
-(BOOL)depthConversionEnabled;
-(void)setAdditionalVISOverscanWhenRecording:(float)arg1 ;
-(int)motionAttachmentsSource;
-(void)setOverCapturePercentage:(float)arg1 ;
-(BOOL)configureForDigitalFlashSupport;
-(void)setStreamingCameraCalibrationDataDeliveryEnabled:(BOOL)arg1 ;
-(void)setMovieFileDetectedObjectMetadataConnectionConfigurations:(NSArray *)arg1 ;
-(int)depthType;
-(int)stillImageSashimiRawRetainedBufferCount;
-(void)setDepthDataConnectionConfiguration:(FigDepthDataCaptureConnectionConfiguration *)arg1 ;
-(void)setStillImageSashimiRawRetainedBufferCount:(int)arg1 ;
-(void)setDepthConversionEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)setClockSynchronizationEnabled:(BOOL)arg1 ;
-(void)setDepthType:(int)arg1 ;
-(void)setRGBIRStereoFusionEnabled:(BOOL)arg1 ;
-(void)setAutoImageControlMode:(int)arg1 ;
-(BOOL)stillImageOutputSushiRawAttachmentOptionEnabled;
@end

