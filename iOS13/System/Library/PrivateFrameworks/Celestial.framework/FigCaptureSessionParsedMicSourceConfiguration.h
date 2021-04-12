/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class NSArray, FigCaptureSourceConfiguration;

@interface FigCaptureSessionParsedMicSourceConfiguration : NSObject {

	NSArray* _micConnectionConfigurations;
	FigCaptureSourceConfiguration* _cameraConfigurationForStereoAudioCapture;

}

@property (nonatomic,readonly) NSArray * micConnectionConfigurations;                                                 //@synthesize micConnectionConfigurations=_micConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) FigCaptureSourceConfiguration * cameraConfigurationForStereoAudioCapture;              //@synthesize cameraConfigurationForStereoAudioCapture=_cameraConfigurationForStereoAudioCapture - In the implementation block
-(void)dealloc;
-(id)initWithMicConnectionConfigurations:(id)arg1 cameraConfigurationForStereoAudioCapture:(id)arg2 ;
-(NSArray *)micConnectionConfigurations;
-(FigCaptureSourceConfiguration *)cameraConfigurationForStereoAudioCapture;
@end

