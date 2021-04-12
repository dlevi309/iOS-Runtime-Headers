/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VideoCaptureServer
@required
-(void)setCaptureFrameRate:(int)arg1;
-(void)onCaptureScreenFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_AV77)arg2 droppedFrames:(int)arg3 orientation:(int)arg4;
-(void)handleCaptureEvent:(id)arg1;
-(void)onCaptureVideoFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_AV77)arg2 preview:(BOOL)arg3 shouldEnqueueFrame:(BOOL)arg4 droppedFrames:(int)arg5 switching:(BOOL)arg6 orientation:(int)arg7 camera:(int)arg8 videoMirrored:(BOOL)arg9;
-(void)handleCaptureEvent:(id)arg1 subType:(id)arg2;
-(void)onCaptureFramerateChange:(unsigned)arg1;
-(void)setCameraZoomAvailable:(BOOL)arg1 currentZoomFactor:(double)arg2 maxZoomFactor:(double)arg3;

@end

