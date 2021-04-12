/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class FigCaptureSourceConfiguration, FigVideoCaptureConnectionConfiguration, FigAudioCaptureConnectionConfiguration, FigMetadataItemCaptureConnectionConfiguration, NSArray, NSDictionary, NSString;

@interface FigCaptureMovieFileSinkPipelineConfiguration : NSObject {

	FigCaptureSourceConfiguration* _cameraConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoConnectionConfiguration;
	FigAudioCaptureConnectionConfiguration* _audioConnectionConfiguration;
	FigMetadataItemCaptureConnectionConfiguration* _cameraDebugInfoMetadataConnectionConfiguration;
	NSArray* _detectedObjectMetadataConnectionConfigurations;
	FigVideoCaptureConnectionConfiguration* _stillImageConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _sceneClassifierConnectionConfiguration;
	NSDictionary* _movieFileColorInfo;
	FigCaptureVideoTransform _videoSourceCaptureTransform;
	int _videoStabilizationType;
	int _motionAttachmentsSource;
	SCD_Struct_BW94 _smartCameraPipelineVersion;
	BOOL _offlineVISEnabled;
	BOOL _captureSourceCompressedPixelFormatsEnabled;
	BOOL _vitalityScoringEnabled;
	BOOL _overCaptureEnabled;
	BOOL _overCaptureVideoStitchingEnabled;
	float _videoStabilizationOverscanOverride;
	NSString* _clientApplicationID;

}

@property (nonatomic,retain) FigCaptureSourceConfiguration * cameraConfiguration;                                                         //@synthesize cameraConfiguration=_cameraConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoConnectionConfiguration;                                       //@synthesize videoConnectionConfiguration=_videoConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigAudioCaptureConnectionConfiguration * audioConnectionConfiguration;                                       //@synthesize audioConnectionConfiguration=_audioConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigMetadataItemCaptureConnectionConfiguration * cameraDebugInfoMetadataConnectionConfiguration;              //@synthesize cameraDebugInfoMetadataConnectionConfiguration=_cameraDebugInfoMetadataConnectionConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * detectedObjectMetadataConnectionConfigurations;                                                    //@synthesize detectedObjectMetadataConnectionConfigurations=_detectedObjectMetadataConnectionConfigurations - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * stillImageConnectionConfiguration;                                  //@synthesize stillImageConnectionConfiguration=_stillImageConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * sceneClassifierConnectionConfiguration;                             //@synthesize sceneClassifierConnectionConfiguration=_sceneClassifierConnectionConfiguration - In the implementation block
@property (nonatomic,retain) NSDictionary * movieFileColorInfo;                                                                           //@synthesize movieFileColorInfo=_movieFileColorInfo - In the implementation block
@property (assign,nonatomic) FigCaptureVideoTransform videoSourceCaptureTransform;                                                        //@synthesize videoSourceCaptureTransform=_videoSourceCaptureTransform - In the implementation block
@property (assign,nonatomic) int videoStabilizationType;                                                                                  //@synthesize videoStabilizationType=_videoStabilizationType - In the implementation block
@property (assign,nonatomic) int motionAttachmentsSource;                                                                                 //@synthesize motionAttachmentsSource=_motionAttachmentsSource - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW94 smartCameraPipelineVersion;                                                                  //@synthesize smartCameraPipelineVersion=_smartCameraPipelineVersion - In the implementation block
@property (assign,nonatomic) BOOL offlineVISEnabled;                                                                                      //@synthesize offlineVISEnabled=_offlineVISEnabled - In the implementation block
@property (assign,nonatomic) BOOL captureSourceCompressedPixelFormatsEnabled;                                                             //@synthesize captureSourceCompressedPixelFormatsEnabled=_captureSourceCompressedPixelFormatsEnabled - In the implementation block
@property (assign,nonatomic) BOOL vitalityScoringEnabled;                                                                                 //@synthesize vitalityScoringEnabled=_vitalityScoringEnabled - In the implementation block
@property (assign,nonatomic) BOOL overCaptureEnabled;                                                                                     //@synthesize overCaptureEnabled=_overCaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL overCaptureVideoStitchingEnabled;                                                                       //@synthesize overCaptureVideoStitchingEnabled=_overCaptureVideoStitchingEnabled - In the implementation block
@property (assign,nonatomic) float videoStabilizationOverscanOverride;                                                                    //@synthesize videoStabilizationOverscanOverride=_videoStabilizationOverscanOverride - In the implementation block
@property (nonatomic,retain) NSString * clientApplicationID;                                                                              //@synthesize clientApplicationID=_clientApplicationID - In the implementation block
-(void)dealloc;
-(BOOL)overCaptureEnabled;
-(void)setOverCaptureEnabled:(BOOL)arg1 ;
-(FigCaptureSourceConfiguration *)cameraConfiguration;
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)sceneClassifierConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)videoConnectionConfiguration;
-(FigAudioCaptureConnectionConfiguration *)audioConnectionConfiguration;
-(FigMetadataItemCaptureConnectionConfiguration *)cameraDebugInfoMetadataConnectionConfiguration;
-(NSArray *)detectedObjectMetadataConnectionConfigurations;
-(int)videoStabilizationType;
-(void)setVideoStabilizationType:(int)arg1 ;
-(int)motionAttachmentsSource;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(NSDictionary *)movieFileColorInfo;
-(void)setOfflineVISEnabled:(BOOL)arg1 ;
-(void)setCameraConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(void)setStillImageConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setSceneClassifierConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setVitalityScoringEnabled:(BOOL)arg1 ;
-(void)setSmartCameraPipelineVersion:(SCD_Struct_BW94)arg1 ;
-(void)setVideoConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setAudioConnectionConfiguration:(FigAudioCaptureConnectionConfiguration *)arg1 ;
-(void)setDetectedObjectMetadataConnectionConfigurations:(NSArray *)arg1 ;
-(void)setCameraDebugInfoMetadataConnectionConfiguration:(FigMetadataItemCaptureConnectionConfiguration *)arg1 ;
-(void)setMovieFileColorInfo:(NSDictionary *)arg1 ;
-(void)setVideoSourceCaptureTransform:(FigCaptureVideoTransform)arg1 ;
-(void)setCaptureSourceCompressedPixelFormatsEnabled:(BOOL)arg1 ;
-(void)setOverCaptureVideoStitchingEnabled:(BOOL)arg1 ;
-(void)setVideoStabilizationOverscanOverride:(float)arg1 ;
-(void)setClientApplicationID:(NSString *)arg1 ;
-(BOOL)offlineVISEnabled;
-(FigCaptureVideoTransform)videoSourceCaptureTransform;
-(SCD_Struct_BW94)smartCameraPipelineVersion;
-(BOOL)captureSourceCompressedPixelFormatsEnabled;
-(BOOL)vitalityScoringEnabled;
-(BOOL)overCaptureVideoStitchingEnabled;
-(float)videoStabilizationOverscanOverride;
-(NSString *)clientApplicationID;
@end

