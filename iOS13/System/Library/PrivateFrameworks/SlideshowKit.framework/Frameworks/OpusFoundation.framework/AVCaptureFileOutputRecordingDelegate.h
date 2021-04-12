/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/


@protocol AVCaptureFileOutputRecordingDelegate <NSObject>
@optional
-(void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
-(void)captureOutput:(id)arg1 didPauseRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
-(void)captureOutput:(id)arg1 didResumeRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
-(void)captureOutput:(id)arg1 willFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;

@required
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;

@end

