/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class FigCaptureSourceConfiguration, FigVideoCaptureConnectionConfiguration, NSArray, FigDepthDataCaptureConnectionConfiguration, FigPointCloudDataCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedCameraSourceConfiguration : NSObject {

	FigCaptureSourceConfiguration* _cameraConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoPreviewSinkConnectionConfiguration;
	NSArray* _previewDerivedVideoConnectionConfigurations;
	NSArray* _videoCaptureConnectionConfigurations;
	NSArray* _videoDataConnectionConfigurations;
	FigVideoCaptureConnectionConfiguration* _stillImageConnectionConfiguration;
	FigDepthDataCaptureConnectionConfiguration* _depthDataConnectionConfiguration;
	NSArray* _visionDataConnectionConfigurations;
	NSArray* _metadataObjectConnectionConfigurations;
	NSArray* _movieFileDetectedObjectMetadataConnectionConfigurations;
	FigPointCloudDataCaptureConnectionConfiguration* _pointCloudDataConnectionConfiguration;
	NSArray* _cameraCalibrationDataConnectionConfigurations;

}

@property (nonatomic,readonly) FigCaptureSourceConfiguration * cameraConfiguration;                                                  //@synthesize cameraConfiguration=_cameraConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoPreviewSinkConnectionConfiguration;                     //@synthesize videoPreviewSinkConnectionConfiguration=_videoPreviewSinkConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * previewDerivedVideoConnectionConfigurations;                                                //@synthesize previewDerivedVideoConnectionConfigurations=_previewDerivedVideoConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * videoCaptureConnectionConfigurations;                                                       //@synthesize videoCaptureConnectionConfigurations=_videoCaptureConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * videoDataConnectionConfigurations;                                                          //@synthesize videoDataConnectionConfigurations=_videoDataConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * stillImageConnectionConfiguration;                           //@synthesize stillImageConnectionConfiguration=_stillImageConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigDepthDataCaptureConnectionConfiguration * depthDataConnectionConfiguration;                        //@synthesize depthDataConnectionConfiguration=_depthDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * visionDataConnectionConfigurations;                                                         //@synthesize visionDataConnectionConfigurations=_visionDataConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * metadataObjectConnectionConfigurations;                                                     //@synthesize metadataObjectConnectionConfigurations=_metadataObjectConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * movieFileDetectedObjectMetadataConnectionConfigurations;                                    //@synthesize movieFileDetectedObjectMetadataConnectionConfigurations=_movieFileDetectedObjectMetadataConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) FigPointCloudDataCaptureConnectionConfiguration * pointCloudDataConnectionConfiguration;              //@synthesize pointCloudDataConnectionConfiguration=_pointCloudDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * cameraCalibrationDataConnectionConfigurations;                                              //@synthesize cameraCalibrationDataConnectionConfigurations=_cameraCalibrationDataConnectionConfigurations - In the implementation block
-(void)dealloc;
-(id)initWithConnectionConfigurations:(id)arg1 clientSetsUserInitiatedCaptureRequestTime:(BOOL)arg2 sceneClassifierConnectionConfigurationOut:(id*)arg3 ;
-(FigCaptureSourceConfiguration *)cameraConfiguration;
-(FigVideoCaptureConnectionConfiguration *)videoPreviewSinkConnectionConfiguration;
-(NSArray *)previewDerivedVideoConnectionConfigurations;
-(NSArray *)videoCaptureConnectionConfigurations;
-(NSArray *)videoDataConnectionConfigurations;
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(FigDepthDataCaptureConnectionConfiguration *)depthDataConnectionConfiguration;
-(NSArray *)visionDataConnectionConfigurations;
-(NSArray *)metadataObjectConnectionConfigurations;
-(NSArray *)movieFileDetectedObjectMetadataConnectionConfigurations;
-(FigPointCloudDataCaptureConnectionConfiguration *)pointCloudDataConnectionConfiguration;
-(NSArray *)cameraCalibrationDataConnectionConfigurations;
@end

