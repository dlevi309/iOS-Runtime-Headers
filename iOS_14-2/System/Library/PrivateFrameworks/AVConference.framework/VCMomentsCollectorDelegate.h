/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCMomentsCollectorDelegate <NSObject>
@required
-(void)cleanupActiveRequests;
-(void)stream:(id)arg1 addAudioSampleBuffer:(opaqueVCAudioBufferListRef)arg2 timestamp:(unsigned)arg3;
-(void)stream:(id)arg1 addVideoSampleBuffer:(opaqueCMSampleBufferRef)arg2 cameraStatusBits:(unsigned char)arg3 timestamp:(unsigned)arg4;

@end

