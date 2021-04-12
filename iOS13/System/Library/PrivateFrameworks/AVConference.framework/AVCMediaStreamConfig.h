/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class AVCNetworkAddress, NSString, NSData, AVCAudioStreamConfig, AVCVideoStreamConfig, AVCTextStreamConfig;

@interface AVCMediaStreamConfig : NSObject {

	AVCNetworkAddress* _localAddress;
	AVCNetworkAddress* _remoteAddress;
	long long _direction;
	unsigned long long _txPayloadType;
	unsigned long long _rxPayloadType;
	unsigned _localSSRC;
	unsigned _remoteSSRC;
	NSString* _cName;
	BOOL _rateAdaptationEnabled;
	BOOL _rtcpEnabled;
	BOOL _rtcpXREnabled;
	unsigned short _rtcpRemotePort;
	double _rtcpSendInterval;
	BOOL _rtpTimeOutEnabled;
	BOOL _rtcpTimeOutEnabled;
	double _rtpTimeOutInterval;
	double _rtcpTimeOutInterval;
	unsigned long long _recommendedMTU;
	NSData* _sendMasterKey;
	NSData* _receiveMasterKey;
	long long _SRTPCipherSuite;
	long long _SRTCPCipherSuite;
	AVCAudioStreamConfig* _audio;
	AVCVideoStreamConfig* _video;
	AVCTextStreamConfig* _text;

}

@property (nonatomic,retain) AVCNetworkAddress * localAddress;                                       //@synthesize localAddress=_localAddress - In the implementation block
@property (nonatomic,retain) AVCNetworkAddress * remoteAddress;                                      //@synthesize remoteAddress=_remoteAddress - In the implementation block
@property (nonatomic,copy) NSString * cName;                                                         //@synthesize cName=_cName - In the implementation block
@property (assign,nonatomic) long long direction;                                                    //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) unsigned long long txPayloadType;                                       //@synthesize txPayloadType=_txPayloadType - In the implementation block
@property (assign,nonatomic) unsigned long long rxPayloadType;                                       //@synthesize rxPayloadType=_rxPayloadType - In the implementation block
@property (assign,nonatomic) unsigned localSSRC;                                                     //@synthesize localSSRC=_localSSRC - In the implementation block
@property (assign,nonatomic) unsigned remoteSSRC;                                                    //@synthesize remoteSSRC=_remoteSSRC - In the implementation block
@property (assign,getter=isRateAdaptationEnabled,nonatomic) BOOL rateAdaptationEnabled;              //@synthesize rateAdaptationEnabled=_rateAdaptationEnabled - In the implementation block
@property (assign,getter=isRTCPEnabled,nonatomic) BOOL rtcpEnabled;                                  //@synthesize rtcpEnabled=_rtcpEnabled - In the implementation block
@property (assign,getter=isRTCPXREnabled,nonatomic) BOOL rtcpXREnabled;                              //@synthesize rtcpXREnabled=_rtcpXREnabled - In the implementation block
@property (assign,nonatomic) unsigned short rtcpRemotePort;                                          //@synthesize rtcpRemotePort=_rtcpRemotePort - In the implementation block
@property (assign,nonatomic) double rtcpSendInterval;                                                //@synthesize rtcpSendInterval=_rtcpSendInterval - In the implementation block
@property (assign,getter=isRTPTimeOutEnabled,nonatomic) BOOL rtpTimeOutEnabled;                      //@synthesize rtpTimeOutEnabled=_rtpTimeOutEnabled - In the implementation block
@property (assign,getter=isRTCPTimeOutEnabled,nonatomic) BOOL rtcpTimeOutEnabled;                    //@synthesize rtcpTimeOutEnabled=_rtcpTimeOutEnabled - In the implementation block
@property (assign,nonatomic) double rtpTimeOutInterval;                                              //@synthesize rtpTimeOutInterval=_rtpTimeOutInterval - In the implementation block
@property (assign,nonatomic) double rtcpTimeOutInterval;                                             //@synthesize rtcpTimeOutInterval=_rtcpTimeOutInterval - In the implementation block
@property (assign,nonatomic) unsigned long long recommendedMTU;                                      //@synthesize recommendedMTU=_recommendedMTU - In the implementation block
@property (nonatomic,retain) NSData * sendMasterKey;                                                 //@synthesize sendMasterKey=_sendMasterKey - In the implementation block
@property (nonatomic,retain) NSData * receiveMasterKey;                                              //@synthesize receiveMasterKey=_receiveMasterKey - In the implementation block
@property (assign,setter=RTPCipherSuite,nonatomic) long long SRTPCipherSuite;                        //@synthesize SRTPCipherSuite=_SRTPCipherSuite - In the implementation block
@property (assign,setter=RTCPCipherSuite,nonatomic) long long SRTCPCipherSuite;                      //@synthesize SRTCPCipherSuite=_SRTCPCipherSuite - In the implementation block
@property (nonatomic,retain) AVCAudioStreamConfig * audio;                                           //@synthesize audio=_audio - In the implementation block
@property (nonatomic,retain) AVCVideoStreamConfig * video;                                           //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) AVCTextStreamConfig * text;                                             //@synthesize text=_text - In the implementation block
+(long long)streamDirectionWithClientDirection:(long long)arg1 ;
+(long long)clientStreamDirectionWithDirection:(long long)arg1 ;
+(long long)clientCipherSuiteWithCipherSuite:(long long)arg1 ;
+(id)dictionaryForCommonStreamConfig:(id)arg1 ;
+(long long)cipherSuiteWithClientCipherSuite:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)dictionary;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(AVCTextStreamConfig *)text;
-(void)setText:(AVCTextStreamConfig *)arg1 ;
-(AVCNetworkAddress *)localAddress;
-(AVCNetworkAddress *)remoteAddress;
-(void)setLocalAddress:(AVCNetworkAddress *)arg1 ;
-(AVCVideoStreamConfig *)video;
-(void)setVideo:(AVCVideoStreamConfig *)arg1 ;
-(AVCAudioStreamConfig *)audio;
-(void)setAudio:(AVCAudioStreamConfig *)arg1 ;
-(void)setRemoteAddress:(AVCNetworkAddress *)arg1 ;
-(unsigned long long)recommendedMTU;
-(unsigned)remoteSSRC;
-(void)setRtpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(void)setRtpTimeOutInterval:(double)arg1 ;
-(void)setRtcpTimeOutInterval:(double)arg1 ;
-(void)setRtcpSendInterval:(double)arg1 ;
-(void)setRemoteSSRC:(unsigned)arg1 ;
-(unsigned)localSSRC;
-(void)setRecommendedMTU:(unsigned long long)arg1 ;
-(double)rtcpSendInterval;
-(BOOL)isRTCPEnabled;
-(long long)SRTPCipherSuite;
-(long long)SRTCPCipherSuite;
-(NSData *)sendMasterKey;
-(NSData *)receiveMasterKey;
-(NSString *)cName;
-(BOOL)isRTPTimeOutEnabled;
-(double)rtpTimeOutInterval;
-(BOOL)isRTCPTimeOutEnabled;
-(double)rtcpTimeOutInterval;
-(BOOL)isValidAudioConfig;
-(void)setLocalSSRC:(unsigned)arg1 ;
-(void)setTxPayloadType:(unsigned long long)arg1 ;
-(void)setRxPayloadType:(unsigned long long)arg1 ;
-(void)setRateAdaptationEnabled:(BOOL)arg1 ;
-(BOOL)isValidTextConfig;
-(BOOL)isRateAdaptationEnabled;
-(void)setCName:(NSString *)arg1 ;
-(unsigned short)rtcpRemotePort;
-(void)setRtcpRemotePort:(unsigned short)arg1 ;
-(void)setSendMasterKey:(NSData *)arg1 ;
-(void)setReceiveMasterKey:(NSData *)arg1 ;
-(void)setSRTPCipherSuite:(long long)arg1 ;
-(void)setSRTCPCipherSuite:(long long)arg1 ;
-(void)setUpWithDictionary:(id)arg1 ;
-(BOOL)isValidVideoConfig;
-(BOOL)isAudioCodecValid;
-(unsigned long long)txPayloadType;
-(unsigned long long)rxPayloadType;
-(BOOL)isRTCPXREnabled;
-(void)setRtcpXREnabled:(BOOL)arg1 ;
@end

