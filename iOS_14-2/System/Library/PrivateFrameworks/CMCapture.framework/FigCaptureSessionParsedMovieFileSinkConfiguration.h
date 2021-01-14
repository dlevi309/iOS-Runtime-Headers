/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
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
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(id)initWithCaptureConnectionConfigurations:(id)arg1 stillImageConnectionConfiguration:(id)arg2 sceneClassifierConnectionConfigurationsBySourceID:(id)arg3 ;
-(FigMetadataItemCaptureConnectionConfiguration *)cameraDebugInfoMetadataConnectionConfiguration;
-(FigAudioCaptureConnectionConfiguration *)audioConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)sceneClassifierConnectionConfiguration;
-(id)initWithVideoConnectionConfiguration:(id)arg1 audioConnectionConfiguration:(id)arg2 cameraDebugInfoMetadataConnectionConfiguration:(id)arg3 detectedObjectMetadataConnectionConfigurations:(id)arg4 stillImageConnectionConfiguration:(id)arg5 sceneClassifierConnectionConfiguration:(id)arg6 ;
-(FigVideoCaptureConnectionConfiguration *)videoConnectionConfiguration;
-(NSArray *)detectedObjectMetadataConnectionConfigurations;
-(void)dealloc;
@end

