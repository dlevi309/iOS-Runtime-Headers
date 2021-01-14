/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class BWStillImageSettings, BWStillImageCaptureStreamSettings, NSMutableDictionary, FigCaptureStillImageSettings, BWStillImageCaptureSettings, BWStillImageProcessingSettings, NSString;

@interface BWStillImageProcessorInput : NSObject {

	BWStillImageSettings* _settings;
	BWStillImageCaptureStreamSettings* _captureStreamSettings;
	NSMutableDictionary* _outputSampleBufferRoutersByBufferType;

}

@property (nonatomic,readonly) BWStillImageSettings * stillImageSettings; 
@property (nonatomic,readonly) FigCaptureStillImageSettings * settings; 
@property (nonatomic,readonly) BWStillImageCaptureSettings * captureSettings; 
@property (nonatomic,readonly) BWStillImageCaptureStreamSettings * captureStreamSettings; 
@property (nonatomic,readonly) BWStillImageProcessingSettings * processingSettings; 
@property (nonatomic,readonly) BOOL isMaster; 
@property (nonatomic,readonly) NSString * portType; 
-(BOOL)isMaster;
-(BWStillImageProcessingSettings *)processingSettings;
-(NSString *)portType;
-(BWStillImageCaptureSettings *)captureSettings;
-(id)description;
-(FigCaptureStillImageSettings *)settings;
-(BWStillImageCaptureStreamSettings *)captureStreamSettings;
-(id)initWithSettings:(id)arg1 portType:(id)arg2 ;
-(void)addOutputSampleBufferRouter:(/*^block*/id)arg1 forBufferTypes:(id)arg2 ;
-(id)outputSampleBufferRouterForBufferType:(unsigned long long)arg1 ;
-(void)addBypassedProcessorType:(unsigned long long)arg1 forBufferTypes:(id)arg2 ;
-(BWStillImageSettings *)stillImageSettings;
-(void)dealloc;
@end

