/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCVideoSink <NSObject>
@required
-(BOOL)onVideoFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_VC84)arg2 attribute:(SCD_Struct_Vi133)arg3;
-(void)sourceFrameRateDidChange:(unsigned)arg1;

@end

