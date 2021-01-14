/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWNodeFileCoordinatorStatusDelegate <NSObject>
@required
-(void)fileCoordinator:(id)arg1 sentMarkerBufferForFileWriterAction:(id)arg2 withPTS:(SCD_Struct_BW8)arg3 settingsID:(long long)arg4 errorCode:(int)arg5;
-(void)fileCoordinator:(id)arg1 stoppedBeforeStartedRecordingForSettings:(id)arg2 pendingIrisMovieInfos:(id)arg3 errorCode:(int)arg4;

@end

