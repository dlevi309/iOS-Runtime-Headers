/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class FigCaptureStillImageSettings, BWStillImageCaptureSettings, BWStillImageCaptureStreamSettings, NSString;

@interface BWStillImageProcessorInput : NSObject {

	FigCaptureStillImageSettings* _settings;
	BWStillImageCaptureSettings* _captureSettings;
	BWStillImageCaptureStreamSettings* _captureStreamSettings;

}

@property (nonatomic,readonly) FigCaptureStillImageSettings * settings; 
@property (nonatomic,readonly) BWStillImageCaptureSettings * captureSettings; 
@property (nonatomic,readonly) BWStillImageCaptureStreamSettings * captureStreamSettings; 
@property (nonatomic,readonly) BOOL isMaster; 
@property (nonatomic,readonly) NSString * portType; 
-(void)dealloc;
-(id)description;
-(NSString *)portType;
-(FigCaptureStillImageSettings *)settings;
-(BOOL)isMaster;
-(BWStillImageCaptureStreamSettings *)captureStreamSettings;
-(BWStillImageCaptureSettings *)captureSettings;
-(id)initWithSettings:(id)arg1 captureSettings:(id)arg2 portType:(id)arg3 ;
@end

