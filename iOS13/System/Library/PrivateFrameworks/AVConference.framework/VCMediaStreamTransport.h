/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class VCMediaStreamConfig, AVCBasebandCongestionDetector;

@interface VCMediaStreamTransport : NSObject {

	VCMediaStreamConfig* _streamConfig;
	unsigned _localSSRC;
	tagHANDLE* _rtpHandle;
	BOOL _isSRTPInitialized;
	AVCBasebandCongestionDetector* _basebandCongestionDetector;
	id _delegate;

}

@property (nonatomic,readonly) VCMediaStreamConfig * streamConfig;                                         //@synthesize streamConfig=_streamConfig - In the implementation block
@property (nonatomic,readonly) tagHANDLE* rtpHandle;                                                       //@synthesize rtpHandle=_rtpHandle - In the implementation block
@property (nonatomic,readonly) unsigned short idsStreamId; 
@property (nonatomic,readonly) id<VCMediaStreamTransportDelegate> delegate; 
@property (nonatomic,readonly) double lastReceivedRTCPPacketTime; 
@property (getter=isRTCPSendEnabled,nonatomic,readonly) BOOL rtcpSendEnabled; 
@property (assign,nonatomic) long long streamDirection; 
@property (assign,nonatomic) double rtpTimeoutInterval; 
@property (assign,getter=isRTPTimeoutEnabled,nonatomic) BOOL rtpTimeoutEnabled; 
@property (assign,nonatomic) double decryptionTimeoutInterval; 
@property (assign,getter=isDecryptionTimeoutEnabled,nonatomic) BOOL decryptionTimeoutEnabled; 
@property (assign,nonatomic) double rtcpTimeoutInterval; 
@property (assign,nonatomic) double rtcpSendInterval; 
@property (assign,getter=isRTCPTimeoutEnabled,nonatomic) BOOL rtcpTimeoutEnabled; 
@property (assign,getter=isRTCPEnabled,nonatomic) BOOL rtcpEnabled; 
@property (nonatomic,retain) AVCBasebandCongestionDetector * basebandCongestionDetector;                   //@synthesize basebandCongestionDetector=_basebandCongestionDetector - In the implementation block
+(BOOL)isSameSRTPKey:(id)arg1 newKey:(id)arg2 ;
+(int)getSRTPMasterKeyLength:(long long)arg1 ;
+(int)SRTPCipherSuiteForVCMediaStreamCipherSuite:(long long)arg1 ;
-(void)dealloc;
-(id<VCMediaStreamTransportDelegate>)delegate;
-(void)setDelegate:(id<VCMediaStreamTransportDelegate>)arg1 ;
-(void)reset;
-(void)onStart;
-(AVCBasebandCongestionDetector *)basebandCongestionDetector;
-(void)setBasebandCongestionDetector:(AVCBasebandCongestionDetector *)arg1 ;
-(tagHANDLE*)rtpHandle;
-(BOOL)configureWithStreamConfig:(id)arg1 setupInfo:(VCMediaStreamTransportSetupInfo*)arg2 customRTCPPackets:(BOOL)arg3 error:(id*)arg4 ;
-(void)sendControlPacket:(RTCP_SEND_CONTROL_PARAMETERS*)arg1 ;
-(double)lastReceivedRTCPPacketTime;
-(VCMediaStreamConfig *)streamConfig;
-(unsigned short)idsStreamId;
-(void)setStreamDirection:(long long)arg1 ;
-(BOOL)isRTPTimeoutEnabled;
-(BOOL)isRTCPTimeoutEnabled;
-(BOOL)setThrottlingInterval:(double)arg1 ;
-(void)resetPayloadMapping;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(void)setRtcpSendInterval:(double)arg1 ;
-(unsigned)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1 ;
-(unsigned)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1 ;
-(void)handleEncryptionInfoChange:(id)arg1 ;
-(BOOL)setupRTPWithIPInfo:(VCMediaStreamTransportSetupInfo*)arg1 error:(id*)arg2 ;
-(id)initWithDelegate:(id)arg1 handle:(tagHANDLE*)arg2 localSSRC:(unsigned)arg3 ;
-(void)onStop;
-(long long)streamDirection;
-(BOOL)isDecryptionTimeoutEnabled;
-(BOOL)isRTCPSendEnabled;
-(void)setRtpTimeoutEnabled:(BOOL)arg1 ;
-(void)setRtcpTimeoutEnabled:(BOOL)arg1 ;
-(void)setDecryptionTimeoutEnabled:(BOOL)arg1 ;
-(void)setRtpTimeoutInterval:(double)arg1 ;
-(void)setRtcpTimeoutInterval:(double)arg1 ;
-(void)setDecryptionTimeoutInterval:(double)arg1 ;
-(BOOL)generateReceptionReport:(RTCP_RECEPTION_REPORT*)arg1 reportCount:(char*)arg2 ;
-(double)rtcpSendInterval;
-(BOOL)sendIntervalDidElapse:(int*)arg1 remainingTime:(double*)arg2 ;
-(BOOL)isRTCPEnabled;
-(double)rtpTimeoutInterval;
-(double)rtcpTimeoutInterval;
-(double)decryptionTimeoutInterval;
-(void)onRTCPPacket:(tagRTCPPACKET*)arg1 arrivalNTPTime:(tagNTP)arg2 ;
-(void)registerRTCPCallback;
-(void)unregisterRTCPCallback;
-(BOOL)isSameSRTPConfig:(id)arg1 ;
-(BOOL)setupRTPWithTransportSetupInfo:(VCMediaStreamTransportSetupInfo*)arg1 error:(id*)arg2 ;
-(int)setupSRTP;
-(void)registerRTPPayloadMappings;
-(id)rxNetworkPayloads;
-(int)getCryptoSet:(tagSRTPExchangeInfo*)arg1 withMasterKey:(id)arg2 ;
-(BOOL)setupRTPForIDS:(id*)arg1 ;
-(BOOL)setupRTPWithSockets:(VCMediaStreamTransportSetupInfo*)arg1 error:(id*)arg2 ;
-(BOOL)setupRTPWithNWConnection:(VCMediaStreamTransportSetupInfo*)arg1 error:(id*)arg2 ;
-(int)getKeyDerivationCryptoSet:(SCD_Struct_VC134*)arg1 withKeyMaterial:(id)arg2 ;
-(void)reportRTCPPackets:(RTCPPacketList*)arg1 ;
-(void)configureForMultiway;
@end

