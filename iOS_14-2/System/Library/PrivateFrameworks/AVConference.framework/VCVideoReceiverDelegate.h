/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCVideoReceiverDelegate <NSObject>
@optional
-(void)vcVideoReceiver:(id)arg1 downlinkQualityDidChange:(id)arg2;
-(unsigned)vcVideoReceiver:(id)arg1 receivedTMMBR:(unsigned)arg2;
-(void)vcVideoReceiverRequestKeyFrame:(id)arg1 rtcpPSFBType:(unsigned)arg2;
-(void)vcVideoReceiver:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;

@required
-(BOOL)vcVideoReceiver:(id)arg1 didReceiveRemoteFrame:(CVBufferRef)arg2 atTime:(SCD_Struct_VC84)arg3 newVideoAttributes:(id)arg4 isFirstFrame:(BOOL)arg5;
-(void)vcVideoReceiver:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;

@end

