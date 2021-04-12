/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
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
	SCD_Struct_BW94 _sceneClassifierPipelineVersion;
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
@property (assign,nonatomic) SCD_Struct_BW94 sceneClassifierPipelineVersion;                                                       //@synthesize sceneClassifierPipelineVersion=_sceneClassifierPipelineVersion - In the implementation block
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
-(void)dealloc;
-(void)setPrimaryCaptureRectModificationEnabled:(BOOL)arg1 ;
-(BOOL)overCaptureEnabled;
-(void)setOverCaptureEnabled:(BOOL)arg1 ;
-(FigVideoCaptureConnectionConfiguration *)videoPreviewSinkConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(FigDepthDataCaptureConnectionConfiguration *)depthDataConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)videoThumbnailConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)previewTimeMachineConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)sceneClassifierConnectionConfiguration;
-(FigMetadataObjectCaptureConnectionConfiguration *)metadataObjectConnectionConfiguration;
-(void)setVideoDataConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(BOOL)primaryCaptureRectModificationEnabled;
-(void)setVideoPreviewSinkConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setStillImageConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setDepthDataConnectionConfiguration:(FigDepthDataCaptureConnectionConfiguration *)arg1 ;
-(void)setVideoThumbnailConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setPreviewTimeMachineConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setSceneClassifierConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setMetadataObjectConnectionConfiguration:(FigMetadataObjectCaptureConnectionConfiguration *)arg1 ;
-(void)setSceneClassifierPipelineVersion:(SCD_Struct_BW94)arg1 ;
-(void)setSourceColorSpaceProperties:(int)arg1 ;
-(void)setSourcePixelFormatIsFullRange:(BOOL)arg1 ;
-(void)setSourceIsBravoDevice:(BOOL)arg1 ;
-(void)setClientIsCameraOrDerivative:(BOOL)arg1 ;
-(void)setVitalityScoringEnabled:(BOOL)arg1 ;
-(void)setDisplayPipeRequiresPacked10BitPixelFormatForP3Input:(BOOL)arg1 ;
-(void)setDeferredPrepareEnabled:(BOOL)arg1 ;
-(void)setRemoteVideoPreview:(BOOL)arg1 ;
-(void)setVideoStabilizationOverscan:(double)arg1 ;
-(void)setIspPreviewJitterCompensationEnabled:(BOOL)arg1 ;
-(BOOL)clientIsCameraOrDerivative;
-(BOOL)vitalityScoringEnabled;
-(BOOL)deferredPrepareEnabled;
-(SCD_Struct_BW94)sceneClassifierPipelineVersion;
-(int)sourceColorSpaceProperties;
-(BOOL)sourcePixelFormatIsFullRange;
-(BOOL)sourceIsBravoDevice;
-(BOOL)displayPipeRequiresPacked10BitPixelFormatForP3Input;
-(BOOL)remoteVideoPreview;
-(double)videoStabilizationOverscan;
-(BOOL)ispPreviewJitterCompensationEnabled;
@end

