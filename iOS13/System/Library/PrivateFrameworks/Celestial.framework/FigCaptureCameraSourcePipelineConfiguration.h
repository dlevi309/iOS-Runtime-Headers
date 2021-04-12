/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class FigCaptureSourceConfiguration, FigVideoCaptureConnectionConfiguration, NSArray, FigDepthDataCaptureConnectionConfiguration, FigPointCloudDataCaptureConnectionConfiguration;

@interface FigCaptureCameraSourcePipelineConfiguration : NSObject {

	int _motionAttachmentsSource;
	int _videoStabilizationType;
	int _depthType;
	SCD_Struct_BW2 _maxExposureDurationClientOverride;
	SCD_Struct_BW2 _maxExposureDurationFrameworkOverride;
	BOOL _forceCNRDisabled;
	BOOL _coreMediaFaceTrackingEnabled;
	BOOL _ispFaceTrackingEnabled;
	BOOL _offlineVISEnabled;
	BOOL _zeroShutterLagEnabled;
	BOOL _configureForZeroShutterLagSupport;
	BOOL _configureForSIFRStillImageCaptureIfAvailable;
	float _overCapturePercentage;
	BOOL _stillImageOverCaptureEnabled;
	BOOL _configureForSpatialOverCaptureSupport;
	BOOL _configureForSpatialStillImageOverCaptureSupport;
	BOOL _clockSynchronizationEnabled;
	BOOL _depthConversionEnabled;
	int _preferredCompressionTypeOnPreviewOutput;
	int _preferredCompressionTypeOnVideoCaptureOutputs;
	int _stillImageFocusPixelDataRetainedBufferCount;
	int _stillImageSashimiRawRetainedBufferCount;
	int _stillImageSensorInterfaceRawRetainedBufferCount;
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
	int _originalVideoStabilizationTypeForOfflineVIS;

}

@property (assign,nonatomic) int motionAttachmentsSource;                                                                          //@synthesize motionAttachmentsSource=_motionAttachmentsSource - In the implementation block
@property (assign,nonatomic) int videoStabilizationType;                                                                           //@synthesize videoStabilizationType=_videoStabilizationType - In the implementation block
@property (assign,nonatomic) int originalVideoStabilizationTypeForOfflineVIS;                                                      //@synthesize originalVideoStabilizationTypeForOfflineVIS=_originalVideoStabilizationTypeForOfflineVIS - In the implementation block
@property (assign,nonatomic) int depthType;                                                                                        //@synthesize depthType=_depthType - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 maxExposureDurationClientOverride;                                                     //@synthesize maxExposureDurationClientOverride=_maxExposureDurationClientOverride - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 maxExposureDurationFrameworkOverride;                                                  //@synthesize maxExposureDurationFrameworkOverride=_maxExposureDurationFrameworkOverride - In the implementation block
@property (assign,nonatomic) BOOL forceCNRDisabled;                                                                                //@synthesize forceCNRDisabled=_forceCNRDisabled - In the implementation block
@property (assign,nonatomic) BOOL coreMediaFaceTrackingEnabled;                                                                    //@synthesize coreMediaFaceTrackingEnabled=_coreMediaFaceTrackingEnabled - In the implementation block
@property (assign,nonatomic) BOOL ispFaceTrackingEnabled;                                                                          //@synthesize ispFaceTrackingEnabled=_ispFaceTrackingEnabled - In the implementation block
@property (assign,nonatomic) BOOL offlineVISEnabled;                                                                               //@synthesize offlineVISEnabled=_offlineVISEnabled - In the implementation block
@property (assign,nonatomic) BOOL zeroShutterLagEnabled;                                                                           //@synthesize zeroShutterLagEnabled=_zeroShutterLagEnabled - In the implementation block
@property (assign,nonatomic) BOOL configureForZeroShutterLagSupport;                                                               //@synthesize configureForZeroShutterLagSupport=_configureForZeroShutterLagSupport - In the implementation block
@property (assign,nonatomic) BOOL configureForSIFRStillImageCaptureIfAvailable;                                                    //@synthesize configureForSIFRStillImageCaptureIfAvailable=_configureForSIFRStillImageCaptureIfAvailable - In the implementation block
@property (assign,nonatomic) float overCapturePercentage;                                                                          //@synthesize overCapturePercentage=_overCapturePercentage - In the implementation block
@property (assign,nonatomic) BOOL stillImageOverCaptureEnabled;                                                                    //@synthesize stillImageOverCaptureEnabled=_stillImageOverCaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL configureForSpatialOverCaptureSupport;                                                           //@synthesize configureForSpatialOverCaptureSupport=_configureForSpatialOverCaptureSupport - In the implementation block
@property (assign,nonatomic) BOOL configureForSpatialStillImageOverCaptureSupport;                                                 //@synthesize configureForSpatialStillImageOverCaptureSupport=_configureForSpatialStillImageOverCaptureSupport - In the implementation block
@property (assign,nonatomic) BOOL clockSynchronizationEnabled;                                                                     //@synthesize clockSynchronizationEnabled=_clockSynchronizationEnabled - In the implementation block
@property (assign,nonatomic) BOOL depthConversionEnabled;                                                                          //@synthesize depthConversionEnabled=_depthConversionEnabled - In the implementation block
@property (assign,nonatomic) int preferredCompressionTypeOnPreviewOutput;                                                          //@synthesize preferredCompressionTypeOnPreviewOutput=_preferredCompressionTypeOnPreviewOutput - In the implementation block
@property (assign,nonatomic) int preferredCompressionTypeOnVideoCaptureOutputs;                                                    //@synthesize preferredCompressionTypeOnVideoCaptureOutputs=_preferredCompressionTypeOnVideoCaptureOutputs - In the implementation block
@property (assign,nonatomic) int stillImageFocusPixelDataRetainedBufferCount;                                                      //@synthesize stillImageFocusPixelDataRetainedBufferCount=_stillImageFocusPixelDataRetainedBufferCount - In the implementation block
@property (assign,nonatomic) int stillImageSashimiRawRetainedBufferCount;                                                          //@synthesize stillImageSashimiRawRetainedBufferCount=_stillImageSashimiRawRetainedBufferCount - In the implementation block
@property (assign,nonatomic) int stillImageSensorInterfaceRawRetainedBufferCount;                                                  //@synthesize stillImageSensorInterfaceRawRetainedBufferCount=_stillImageSensorInterfaceRawRetainedBufferCount - In the implementation block
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
-(void)dealloc;
-(void)setMaxExposureDurationClientOverride:(SCD_Struct_BW2)arg1 ;
-(BOOL)zeroShutterLagEnabled;
-(void)setZeroShutterLagEnabled:(BOOL)arg1 ;
-(FigCaptureSourceConfiguration *)cameraConfiguration;
-(FigVideoCaptureConnectionConfiguration *)videoPreviewSinkConnectionConfiguration;
-(NSArray *)previewDerivedVideoConnectionConfigurations;
-(NSArray *)videoCaptureConnectionConfigurations;
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(FigDepthDataCaptureConnectionConfiguration *)depthDataConnectionConfiguration;
-(NSArray *)visionDataConnectionConfigurations;
-(NSArray *)metadataObjectConnectionConfigurations;
-(NSArray *)movieFileDetectedObjectMetadataConnectionConfigurations;
-(FigPointCloudDataCaptureConnectionConfiguration *)pointCloudDataConnectionConfiguration;
-(void)setOverCapturePercentage:(float)arg1 ;
-(int)videoStabilizationType;
-(void)setVideoStabilizationType:(int)arg1 ;
-(int)motionAttachmentsSource;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(int)autoImageControlMode;
-(void)setAutoImageControlMode:(int)arg1 ;
-(void)setOriginalVideoStabilizationTypeForOfflineVIS:(int)arg1 ;
-(void)setDepthType:(int)arg1 ;
-(SCD_Struct_BW2)maxExposureDurationClientOverride;
-(void)setMaxExposureDurationFrameworkOverride:(SCD_Struct_BW2)arg1 ;
-(void)setForceCNRDisabled:(BOOL)arg1 ;
-(void)setCoreMediaFaceTrackingEnabled:(BOOL)arg1 ;
-(void)setOfflineVISEnabled:(BOOL)arg1 ;
-(void)setConfigureForZeroShutterLagSupport:(BOOL)arg1 ;
-(void)setConfigureForSIFRStillImageCaptureIfAvailable:(BOOL)arg1 ;
-(void)setStillImageOverCaptureEnabled:(BOOL)arg1 ;
-(BOOL)configureForSpatialOverCaptureSupport;
-(void)setConfigureForSpatialOverCaptureSupport:(BOOL)arg1 ;
-(BOOL)stillImageOverCaptureEnabled;
-(void)setConfigureForSpatialStillImageOverCaptureSupport:(BOOL)arg1 ;
-(void)setPreferredCompressionTypeOnPreviewOutput:(int)arg1 ;
-(void)setPreferredCompressionTypeOnVideoCaptureOutputs:(int)arg1 ;
-(void)setStillImageFocusPixelDataRetainedBufferCount:(int)arg1 ;
-(void)setStillImageSashimiRawRetainedBufferCount:(int)arg1 ;
-(void)setStillImageSensorInterfaceRawRetainedBufferCount:(int)arg1 ;
-(BOOL)configureForSIFRStillImageCaptureIfAvailable;
-(void)setStreamingForegroundSegmentationEnabled:(BOOL)arg1 ;
-(void)setIspFaceTrackingEnabled:(BOOL)arg1 ;
-(void)setRGBIRStereoFusionEnabled:(BOOL)arg1 ;
-(void)setStreamingCameraCalibrationDataDeliveryEnabled:(BOOL)arg1 ;
-(void)setCameraConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(void)setVideoPreviewSinkConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setPreviewDerivedVideoConnectionConfigurations:(NSArray *)arg1 ;
-(void)setVideoCaptureConnectionConfigurations:(NSArray *)arg1 ;
-(void)setStillImageConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setDepthDataConnectionConfiguration:(FigDepthDataCaptureConnectionConfiguration *)arg1 ;
-(void)setPointCloudDataConnectionConfiguration:(FigPointCloudDataCaptureConnectionConfiguration *)arg1 ;
-(void)setClockSynchronizationEnabled:(BOOL)arg1 ;
-(void)setDepthConversionEnabled:(BOOL)arg1 ;
-(void)setVisionDataConnectionConfigurations:(NSArray *)arg1 ;
-(void)setMetadataObjectConnectionConfigurations:(NSArray *)arg1 ;
-(void)setMovieFileDetectedObjectMetadataConnectionConfigurations:(NSArray *)arg1 ;
-(SCD_Struct_BW2)maxExposureDurationFrameworkOverride;
-(int)depthType;
-(BOOL)forceCNRDisabled;
-(BOOL)coreMediaFaceTrackingEnabled;
-(BOOL)ispFaceTrackingEnabled;
-(BOOL)offlineVISEnabled;
-(BOOL)configureForZeroShutterLagSupport;
-(float)overCapturePercentage;
-(BOOL)configureForSpatialStillImageOverCaptureSupport;
-(BOOL)clockSynchronizationEnabled;
-(BOOL)depthConversionEnabled;
-(int)preferredCompressionTypeOnPreviewOutput;
-(int)preferredCompressionTypeOnVideoCaptureOutputs;
-(int)stillImageFocusPixelDataRetainedBufferCount;
-(int)stillImageSashimiRawRetainedBufferCount;
-(int)stillImageSensorInterfaceRawRetainedBufferCount;
-(BOOL)streamingForegroundSegmentationEnabled;
-(BOOL)RGBIRStereoFusionEnabled;
-(BOOL)streamingCameraCalibrationDataDeliveryEnabled;
-(int)originalVideoStabilizationTypeForOfflineVIS;
@end

