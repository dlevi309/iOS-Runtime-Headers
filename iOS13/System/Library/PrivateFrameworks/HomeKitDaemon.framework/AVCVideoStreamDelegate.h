/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
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
-(void)streamDidServerDie:(id)arg1;
-(void)stream:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3;

@end

