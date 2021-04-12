/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class FigVideoCaptureConnectionConfiguration, FigDepthDataCaptureConnectionConfiguration, FigMetadataObjectCaptureConnectionConfiguration;

@interface FigCapturePreviewSinkPipelineConfiguration : NSObject {

	FigVideoCaptureConnectionConfiguration* _videoPreviewSinkConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoThumbnailConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;
	FigDepthDataCaptureConnectionConfiguration* _depthDataConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _previewTimeMachineConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _sceneClassifierConnectionConfiguration;
	FigMetadataObjectCaptureConnectionConfiguration* _metadataObjectConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _stillImageConnectionConfiguration;
	SCD_Struct_BW57 _sceneClassifierPipelineVersion;
	int _sourceColorSpaceProperties;
	BOOL _sourcePixelFormatIsFullRange;
	BOOL _sourceIsBravoDevice;
	BOOL _clientIsCameraOrDerivative;
	BOOL _vitalityScoringEnabled;
	BOOL _displayPipeRequiresPacked10BitPixelFormatForP3Input;
	BOOL _deferredPrepareEnabled;
	BOOL _remoteVideoPreview;
	BOOL _overCaptureEnabled;
	BOOL _primaryCaptureRectModificationEnabled;
	double _videoStabilizationOverscan;
	BOOL _focusBlurMapForDepthFiltersEnabled;
	BOOL _depthFromMonocularNetworkEnabled;
	BOOL _smartCameraMotionDetectionEnabled;
	BOOL _generatesHistogram;
	BOOL _ispPreviewJitterCompensationEnabled;

}

@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoPreviewSinkConnectionConfiguration;                     //@synthesize videoPreviewSinkConnectionConfiguration=_videoPreviewSinkConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoThumbnailConnectionConfiguration;                       //@synthesize videoThumbnailConnectionConfiguration=_videoThumbnailConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                            //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigDepthDataCaptureConnectionConfiguration * depthDataConnectionConfiguration;                        //@synthesize depthDataConnectionConfiguration=_depthDataConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * previewTimeMachineConnectionConfiguration;                   //@synthesize previewTimeMachineConnectionConfiguration=_previewTimeMachineConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * sceneClassifierConnectionConfiguration;                      //@synthesize sceneClassifierConnectionConfiguration=_sceneClassifierConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigMetadataObjectCaptureConnectionConfiguration * metadataObjectConnectionConfiguration;              //@synthesize metadataObjectConnectionConfiguration=_metadataObjectConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * stillImageConnectionConfiguration;                           //@synthesize stillImageConnectionConfiguration=_stillImageConnectionConfiguration - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW57 sceneClassifierPipelineVersion;                                                       //@synthesize sceneClassifierPipelineVersion=_sceneClassifierPipelineVersion - In the implementation block
@property (assign,nonatomic) int sourceColorSpaceProperties;                                                                       //@synthesize sourceColorSpaceProperties=_sourceColorSpaceProperties - In the implementation block
@property (assign,nonatomic) BOOL sourcePixelFormatIsFullRange;                                                                    //@synthesize sourcePixelFormatIsFullRange=_sourcePixelFormatIsFullRange - In the implementation block
@property (assign,nonatomic) BOOL sourceIsBravoDevice;                                                                             //@synthesize sourceIsBravoDevice=_sourceIsBravoDevice - In the implementation block
@property (assign,nonatomic) BOOL clientIsCameraOrDerivative;                                                                      //@synthesize clientIsCameraOrDerivative=_clientIsCameraOrDerivative - In the implementation block
@property (assign,nonatomic) BOOL vitalityScoringEnabled;                                                                          //@synthesize vitalityScoringEnabled=_vitalityScoringEnabled - In the implementation block
@property (assign,nonatomic) BOOL displayPipeRequiresPacked10BitPixelFormatForP3Input;                                             //@synthesize displayPipeRequiresPacked10BitPixelFormatForP3Input=_displayPipeRequiresPacked10BitPixelFormatForP3Input - In the implementation block
@property (assign,nonatomic) BOOL deferredPrepareEnabled;                                                                          //@synthesize deferredPrepareEnabled=_deferredPrepareEnabled - In the implementation block
@property (assign,nonatomic) BOOL remoteVideoPreview;                                                                              //@synthesize remoteVideoPreview=_remoteVideoPreview - In the implementation block
@property (assign,nonatomic) BOOL overCaptureEnabled;                                                                              //@synthesize overCaptureEnabled=_overCaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL primaryCaptureRectModificationEnabled;                                                           //@synthesize primaryCaptureRectModificationEnabled=_primaryCaptureRectModificationEnabled - In the implementation block
@property (assign,nonatomic) double videoStabilizationOverscan;                                                                    //@synthesize videoStabilizationOverscan=_videoStabilizationOverscan - In the implementation block
@property (assign,nonatomic) BOOL ispPreviewJitterCompensationEnabled;                                                             //@synthesize ispPreviewJitterCompensationEnabled=_ispPreviewJitterCompensationEnabled - In the implementation block
@property (assign,nonatomic) BOOL focusBlurMapForDepthFiltersEnabled;                                                              //@synthesize focusBlurMapForDepthFiltersEnabled=_focusBlurMapForDepthFiltersEnabled - In the implementation block
@property (assign,nonatomic) BOOL depthFromMonocularNetworkEnabled;                                                                //@synthesize depthFromMonocularNetworkEnabled=_depthFromMonocularNetworkEnabled - In the implementation block
@property (assign,nonatomic) BOOL smartCameraMotionDetectionEnabled;                                                               //@synthesize smartCameraMotionDetectionEnabled=_smartCameraMotionDetectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL generatesHistogram;                                                                              //@synthesize generatesHistogram=_generatesHistogram - In the implementation block
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(BOOL)overCaptureEnabled;
-(void)setOverCaptureEnabled:(BOOL)arg1 ;
-(FigDepthDataCaptureConnectionConfiguration *)depthDataConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)previewTimeMachineConnectionConfiguration;
-(void)setClientIsCameraOrDerivative:(BOOL)arg1 ;
-(BOOL)remoteVideoPreview;
-(BOOL)depthFromMonocularNetworkEnabled;
-(void)setGeneratesHistogram:(BOOL)arg1 ;
-(int)sourceColorSpaceProperties;
-(void)setSourceColorSpaceProperties:(int)arg1 ;
-(void)setVideoStabilizationOverscan:(double)arg1 ;
-(void)setMetadataObjectConnectionConfiguration:(FigMetadataObjectCaptureConnectionConfiguration *)arg1 ;
-(void)setVideoDataConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(BOOL)displayPipeRequiresPacked10BitPixelFormatForP3Input;
-(void)setVideoPreviewSinkConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setIspPreviewJitterCompensationEnabled:(BOOL)arg1 ;
-(void)setSceneClassifierPipelineVersion:(SCD_Struct_BW57)arg1 ;
-(FigVideoCaptureConnectionConfiguration *)videoPreviewSinkConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)sceneClassifierConnectionConfiguration;
-(void)setDeferredPrepareEnabled:(BOOL)arg1 ;
-(BOOL)focusBlurMapForDepthFiltersEnabled;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(BOOL)smartCameraMotionDetectionEnabled;
-(void)setVitalityScoringEnabled:(BOOL)arg1 ;
-(BOOL)ispPreviewJitterCompensationEnabled;
-(void)setFocusBlurMapForDepthFiltersEnabled:(BOOL)arg1 ;
-(double)videoStabilizationOverscan;
-(void)setSceneClassifierConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(FigMetadataObjectCaptureConnectionConfiguration *)metadataObjectConnectionConfiguration;
-(void)setSmartCameraMotionDetectionEnabled:(BOOL)arg1 ;
-(void)setSourcePixelFormatIsFullRange:(BOOL)arg1 ;
-(BOOL)sourcePixelFormatIsFullRange;
-(BOOL)vitalityScoringEnabled;
-(void)setPreviewTimeMachineConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setPrimaryCaptureRectModificationEnabled:(BOOL)arg1 ;
-(void)setDepthFromMonocularNetworkEnabled:(BOOL)arg1 ;
-(FigVideoCaptureConnectionConfiguration *)videoThumbnailConnectionConfiguration;
-(void)setStillImageConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(BOOL)sourceIsBravoDevice;
-(void)setVideoThumbnailConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setDisplayPipeRequiresPacked10BitPixelFormatForP3Input:(BOOL)arg1 ;
-(BOOL)generatesHistogram;
-(void)setRemoteVideoPreview:(BOOL)arg1 ;
-(BOOL)primaryCaptureRectModificationEnabled;
-(void)setSourceIsBravoDevice:(BOOL)arg1 ;
-(BOOL)deferredPrepareEnabled;
-(SCD_Struct_BW57)sceneClassifierPipelineVersion;
-(BOOL)clientIsCameraOrDerivative;
-(void)setDepthDataConnectionConfiguration:(FigDepthDataCaptureConnectionConfiguration *)arg1 ;
-(void)dealloc;
@end

