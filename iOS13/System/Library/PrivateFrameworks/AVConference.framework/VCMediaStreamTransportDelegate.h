/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCMediaStreamTransportDelegate <NSObject>
@optional
-(void)vcMediaStreamTransport:(id)arg1 updateSourceNTPTime:(double)arg2 rtpTimeStamp:(unsigned)arg3;

@required
-(void)vcMediaStreamTransport:(id)arg1 didReceiveRTCPPackets:(id)arg2;

@end

