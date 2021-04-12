/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCVideoCaptureClient
@optional
-(void)avConferenceScreenCaptureError:(id)arg1;
-(void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(BOOL)arg2 powerLevelDidChange:(BOOL)arg3;

@required
-(void)thermalLevelDidChange:(int)arg1;
-(id)clientCaptureRule;
-(BOOL)onCaptureFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_AV77)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
-(void)avConferencePreviewError:(id)arg1;
-(void)sourceFrameRateDidChange:(unsigned)arg1;

@end

