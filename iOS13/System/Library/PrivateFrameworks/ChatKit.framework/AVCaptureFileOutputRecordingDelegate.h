/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
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

