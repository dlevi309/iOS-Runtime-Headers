/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCMediaStreamSyncSourceDelegate <NSObject>
@required
-(void)updateSourceState:(int)arg1;
-(void)updateSourceNTPTime:(double)arg1 withRTPTimeStamp:(unsigned)arg2;
-(void)updateSourcePlayoutSampleRTPTimestamp:(unsigned)arg1 systemTime:(double)arg2 uuid:(id)arg3;

@end

