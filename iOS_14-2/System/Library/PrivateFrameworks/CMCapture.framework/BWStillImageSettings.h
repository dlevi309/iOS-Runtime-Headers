/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
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
-(id)initWithRequestedSettings:(id)arg1 captureSettings:(id)arg2 processingSettings:(id)arg3 ;
-(BWStillImageProcessingSettings *)processingSettings;
-(FigCaptureStillImageSettings *)requestedSettings;
-(BWStillImageCaptureSettings *)captureSettings;
-(void)dealloc;
@end

