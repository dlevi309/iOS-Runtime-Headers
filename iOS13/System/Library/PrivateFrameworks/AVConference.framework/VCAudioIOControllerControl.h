/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCAudioIOControllerControl <VCBasebandCodecNotifications>
@optional
-(void)refreshInputMetering;
-(void)refreshOutputMetering;
-(void)refreshRemoteCodecType:(unsigned)arg1 sampleRate:(double)arg2;

@required
-(void)stopClient:(id)arg1;
-(void)startClient:(id)arg1;
-(void)updateClient:(id)arg1;

@end

