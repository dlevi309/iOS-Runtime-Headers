/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IPTelephony.framework/Support/libIPTelephony.dylib
*/


@protocol AVCAudioStreamDelegate <NSObject>
@optional
-(void)streamDidStop:(id)arg1;
-(void)streamDidInterruptionBegin:(id)arg1;
-(void)streamDidInterruptionEnd:(id)arg1;
-(void)streamDidServerDie:(id)arg1;
-(void)stream:(id)arg1 didPause:(BOOL)arg2 error:(id)arg3;
-(void)stream:(id)arg1 didResume:(BOOL)arg2 error:(id)arg3;
-(void)stream:(id)arg1 didStartSynchronizer:(BOOL)arg2 error:(id)arg3;
-(void)streamDidRTPTimeOut:(id)arg1;
-(void)streamDidRTCPTimeOut:(id)arg1;
-(void)stream:(id)arg1 didReceiveDTMFEventWithDigit:(char)arg2;
-(void)stream:(id)arg1 didReceiveRTCPPackets:(id)arg2;
-(void)stream:(id)arg1 updateInputFrequencyLevel:(id)arg2;
-(void)stream:(id)arg1 updateOutputFrequencyLevel:(id)arg2;

@required
-(void)stream:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3;

@end

