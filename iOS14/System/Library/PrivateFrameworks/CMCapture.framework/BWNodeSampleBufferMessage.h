/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNodeMessage.h>

@class FigCaptureStillImageSettings, FigCaptureRecordingSettings;

@interface BWNodeSampleBufferMessage : BWNodeMessage {

	opaqueCMSampleBufferRef _sampleBuffer;
	FigCaptureStillImageSettings* _stillImageSettings;
	FigCaptureRecordingSettings* _recordingSettings;

}

@property (readonly) opaqueCMSampleBufferRef sampleBuffer; 
@property (readonly) FigCaptureStillImageSettings * stillImageSettings; 
@property (readonly) FigCaptureRecordingSettings * recordingSettings; 
+(id)newMessageWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 recordingSettings:(id)arg2 ;
+(id)newMessageWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
+(id)newMessageWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 ;
-(id)_initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 recordingSettings:(id)arg3 ;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(FigCaptureRecordingSettings *)recordingSettings;
-(FigCaptureStillImageSettings *)stillImageSettings;
-(void)dealloc;
@end

