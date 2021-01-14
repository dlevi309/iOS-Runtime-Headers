/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWNodeFileWriterStatusDelegate <NSObject>
@required
-(void)fileWriter:(id)arg1 writerPipelineIndex:(unsigned long long)arg2 stoppedRecordingSampleDataForSettingsID:(long long)arg3;
-(void)fileWriter:(id)arg1 writerPipelineIndex:(unsigned long long)arg2 stoppedRecordingForSettings:(id)arg3 withError:(int)arg4 thumbnailSurface:(IOSurfaceRef)arg5 irisMovieInfo:(id)arg6 debugMetadataSidecarFileURL:(id)arg7 recordingSucceeded:(BOOL)arg8;
-(void)fileWriter:(id)arg1 startedRecordingForSettings:(id)arg2 writerPipelineIndex:(unsigned long long)arg3;
-(void)fileWriter:(id)arg1 resumedRecordingForSettingsID:(unsigned long long)arg2;
-(void)fileWriter:(id)arg1 pausedRecordingForSettingsID:(unsigned long long)arg2;

@end

