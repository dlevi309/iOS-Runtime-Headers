/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCVideoReceiverDelegate <NSObject>
@optional
-(void)vcVideoReceiver:(id)arg1 downlinkQualityDidChange:(id)arg2;
-(unsigned)vcVideoReceiver:(id)arg1 receivedTMMBR:(unsigned)arg2;
-(void)vcVideoReceiverRequestKeyFrame:(id)arg1 rtcpPSFBType:(unsigned)arg2;
-(void)vcVideoReceiver:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;

@required
-(BOOL)vcVideoReceiver:(id)arg1 didReceiveRemoteFrame:(CVBufferRef)arg2 atTime:(SCD_Struct_AV77)arg3 newVideoAttributes:(id)arg4 isFirstFrame:(BOOL)arg5;
-(void)vcVideoReceiver:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;

@end

