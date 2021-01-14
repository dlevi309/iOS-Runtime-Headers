/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCAudioIOControllerControl <VCBasebandCodecNotifications>
@optional
-(void)refreshOutputMetering;
-(void)refreshInputMetering;
-(void)refreshRemoteCodecType:(unsigned)arg1 sampleRate:(double)arg2;

@required
-(void)updateClient:(id)arg1;
-(void)startClient:(id)arg1;
-(void)stopClient:(id)arg1;

@end

