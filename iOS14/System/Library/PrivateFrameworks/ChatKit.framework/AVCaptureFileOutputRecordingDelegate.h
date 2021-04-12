/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol AVCaptureFileOutputRecordingDelegate <NSObject>
@optional
-(void)captureOutput:(id)arg1 didPauseRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
-(void)captureOutput:(id)arg1 didResumeRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
-(void)captureOutput:(id)arg1 willFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
-(void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;

@required
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;

@end

