/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCMediaStreamProtocol <NSObject>
@optional
-(void)setRtpTimeOutEnabled:(BOOL)arg1;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1;
-(void)setRtcpEnabled:(BOOL)arg1;
-(void)setRtcpSendInterval:(double)arg1;
-(void)setRtpTimeOutInterval:(double)arg1;
-(void)setRtcpTimeOutInterval:(double)arg1;
-(id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id*)arg3;
-(void)setStreamDirection:(long long)arg1;
-(id)setupRTPWithIDSDestination:(id)arg1 error:(id*)arg2;
-(id)setupRTPWithSocketDictionary:(id)arg1 error:(id*)arg2;
-(long long)streamDirection;
-(void)setDecryptionTimeOutEnabled:(BOOL)arg1;
-(void)setDecryptionTimeOutInterval:(double)arg1;

@required
-(void)start;
-(void)stop;
-(void)setPause:(BOOL)arg1;
-(BOOL)setStreamConfig:(id)arg1 withError:(id*)arg2;

@end

