/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class NSArray, FigCaptureSourceConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedMicSourceConfiguration : NSObject {

	NSArray* _micConnectionConfigurations;
	FigCaptureSourceConfiguration* _cameraConfigurationForStereoAudioCapture;
	FigVideoCaptureConnectionConfiguration* _movieFileVideoConnectionConfigurationForStereoAudioCapture;

}

@property (nonatomic,readonly) NSArray * micConnectionConfigurations;                                                                            //@synthesize micConnectionConfigurations=_micConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) FigCaptureSourceConfiguration * cameraConfigurationForStereoAudioCapture;                                         //@synthesize cameraConfigurationForStereoAudioCapture=_cameraConfigurationForStereoAudioCapture - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * movieFileVideoConnectionConfigurationForStereoAudioCapture;              //@synthesize movieFileVideoConnectionConfigurationForStereoAudioCapture=_movieFileVideoConnectionConfigurationForStereoAudioCapture - In the implementation block
-(FigVideoCaptureConnectionConfiguration *)movieFileVideoConnectionConfigurationForStereoAudioCapture;
-(id)initWithMicConnectionConfigurations:(id)arg1 cameraConfigurationForStereoAudioCapture:(id)arg2 movieFileVideoConnectionConfigurationForStereoAudioCapture:(id)arg3 ;
-(FigCaptureSourceConfiguration *)cameraConfigurationForStereoAudioCapture;
-(NSArray *)micConnectionConfigurations;
-(void)dealloc;
@end

