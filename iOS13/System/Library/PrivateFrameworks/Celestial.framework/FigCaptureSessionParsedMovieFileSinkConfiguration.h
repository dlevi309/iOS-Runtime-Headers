/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class FigVideoCaptureConnectionConfiguration, FigAudioCaptureConnectionConfiguration, FigMetadataItemCaptureConnectionConfiguration, NSArray;

@interface FigCaptureSessionParsedMovieFileSinkConfiguration : NSObject {

	FigVideoCaptureConnectionConfiguration* _videoConnectionConfiguration;
	FigAudioCaptureConnectionConfiguration* _audioConnectionConfiguration;
	FigMetadataItemCaptureConnectionConfiguration* _cameraDebugInfoMetadataConnectionConfiguration;
	NSArray* _detectedObjectMetadataConnectionConfigurations;
	FigVideoCaptureConnectionConfiguration* _stillImageConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _sceneClassifierConnectionConfiguration;

}

@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoConnectionConfiguration;                                       //@synthesize videoConnectionConfiguration=_videoConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigAudioCaptureConnectionConfiguration * audioConnectionConfiguration;                                       //@synthesize audioConnectionConfiguration=_audioConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigMetadataItemCaptureConnectionConfiguration * cameraDebugInfoMetadataConnectionConfiguration;              //@synthesize cameraDebugInfoMetadataConnectionConfiguration=_cameraDebugInfoMetadataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * detectedObjectMetadataConnectionConfigurations;                                                    //@synthesize detectedObjectMetadataConnectionConfigurations=_detectedObjectMetadataConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * stillImageConnectionConfiguration;                                  //@synthesize stillImageConnectionConfiguration=_stillImageConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * sceneClassifierConnectionConfiguration;                             //@synthesize sceneClassifierConnectionConfiguration=_sceneClassifierConnectionConfiguration - In the implementation block
-(void)dealloc;
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)sceneClassifierConnectionConfiguration;
-(id)initWithCaptureConnectionConfigurations:(id)arg1 stillImageConnectionConfiguration:(id)arg2 sceneClassifierConnectionConfigurationsBySourceID:(id)arg3 ;
-(id)initWithVideoConnectionConfiguration:(id)arg1 audioConnectionConfiguration:(id)arg2 cameraDebugInfoMetadataConnectionConfiguration:(id)arg3 detectedObjectMetadataConnectionConfigurations:(id)arg4 stillImageConnectionConfiguration:(id)arg5 sceneClassifierConnectionConfiguration:(id)arg6 ;
-(FigVideoCaptureConnectionConfiguration *)videoConnectionConfiguration;
-(FigAudioCaptureConnectionConfiguration *)audioConnectionConfiguration;
-(FigMetadataItemCaptureConnectionConfiguration *)cameraDebugInfoMetadataConnectionConfiguration;
-(NSArray *)detectedObjectMetadataConnectionConfigurations;
@end

