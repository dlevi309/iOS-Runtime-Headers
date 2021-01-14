/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWFigVideoCaptureStreamStillImageCaptureDelegate <NSObject>
@required
-(void)captureStream:(id)arg1 didCapturePreBracketedEV0ImageWithPTS:(SCD_Struct_BW8)arg2;
-(void)captureStreamWillWaitForTimeMachineToFill:(id)arg1;
-(void)captureStream:(id)arg1 stillImageCaptureError:(int)arg2;
-(void)captureStreamDidCompleteStillImageCapture:(id)arg1;
-(void)captureStream:(id)arg1 didCaptureReferenceFrameWithPTS:(SCD_Struct_BW8)arg2 referenceFrameBracketedCaptureSequenceNumber:(id)arg3;
-(void)captureStreamWillBeginStillImageCapture:(id)arg1;

@end

