/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCMediaStreamSyncSourceDelegate <NSObject>
@required
-(void)updateSourceState:(int)arg1;
-(void)updateSourceNTPTime:(double)arg1 withRTPTimeStamp:(unsigned)arg2;
-(void)updateSourcePlayoutSampleRTPTimestamp:(unsigned)arg1 systemTime:(double)arg2 uuid:(id)arg3;

@end

