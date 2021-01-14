/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySender.framework/AirPlaySender
*/


@protocol AVCVideoStreamDelegate <NSObject>
@optional
-(void)stream:(id)arg1 didPause:(BOOL)arg2 error:(id)arg3;
-(void)stream:(id)arg1 didResume:(BOOL)arg2 error:(id)arg3;
-(void)streamDidRTPTimeOut:(id)arg1;
-(void)streamDidRTCPTimeOut:(id)arg1;
-(void)stream:(id)arg1 didReceiveRTCPPackets:(id)arg2;
-(void)stream:(id)arg1 didUpdateVideoConfiguration:(BOOL)arg2 error:(id)arg3;
-(void)stream:(id)arg1 didGetLastDecodedFrame:(id)arg2;
-(void)stream:(id)arg1 downlinkQualityDidChange:(id)arg2;
-(void)stream:(id)arg1 uplinkQualityDidChange:(id)arg2;

@required
-(void)streamDidStop:(id)arg1;
-(void)stream:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3;
-(void)streamDidServerDie:(id)arg1;

@end

