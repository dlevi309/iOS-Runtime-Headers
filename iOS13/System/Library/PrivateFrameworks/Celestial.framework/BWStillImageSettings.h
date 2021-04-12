/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class FigCaptureStillImageSettings, BWStillImageCaptureSettings, BWStillImageProcessingSettings;

@interface BWStillImageSettings : NSObject {

	FigCaptureStillImageSettings* _requestedSettings;
	BWStillImageCaptureSettings* _captureSettings;
	BWStillImageProcessingSettings* _processingSettings;

}

@property (nonatomic,readonly) FigCaptureStillImageSettings * requestedSettings;                 //@synthesize requestedSettings=_requestedSettings - In the implementation block
@property (nonatomic,readonly) BWStillImageCaptureSettings * captureSettings;                    //@synthesize captureSettings=_captureSettings - In the implementation block
@property (nonatomic,readonly) BWStillImageProcessingSettings * processingSettings;              //@synthesize processingSettings=_processingSettings - In the implementation block
-(void)dealloc;
-(BWStillImageCaptureSettings *)captureSettings;
-(id)initWithRequestedSettings:(id)arg1 captureSettings:(id)arg2 processingSettings:(id)arg3 ;
-(FigCaptureStillImageSettings *)requestedSettings;
-(BWStillImageProcessingSettings *)processingSettings;
@end

