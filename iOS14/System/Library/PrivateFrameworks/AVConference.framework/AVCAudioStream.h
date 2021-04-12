/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <libobjc.A.dylib/VCMediaStreamDelegate.h>

@protocol OS_dispatch_queue;
@class AVConferenceXPCClient, VCAudioStream, AVCMediaStreamConfig, NSDictionary, NSObject, NSString;

@interface AVCAudioStream : NSObject <VCMediaStreamDelegate> {

	AVConferenceXPCClient* _connection;
	id _delegate;
	VCAudioStream* _opaqueStream;
	AVCMediaStreamConfig* _configuration;
	NSDictionary* _capabilities;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	long long _streamToken;

}

@property (nonatomic,retain) NSDictionary * capabilities;                                                              //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) AVCMediaStreamConfig * configuration;                                                     //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) long long direction; 
@property (assign,getter=isRTCPEnabled,nonatomic) BOOL rtcpEnabled; 
@property (assign,getter=isRTPTimeOutEnabled,nonatomic) BOOL rtpTimeOutEnabled; 
@property (assign,getter=isRTCPTimeOutEnabled,nonatomic) BOOL rtcpTimeOutEnabled; 
@property (assign,nonatomic) double rtpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpSendIntervalSec; 
@property (assign,nonatomic) float volume; 
@property (assign,getter=isInputFrequencyMeteringEnabled,nonatomic) BOOL inputFrequencyMeteringEnabled; 
@property (assign,getter=isOutputFrequencyMeteringEnabled,nonatomic) BOOL outputFrequencyMeteringEnabled; 
@property (assign,nonatomic) id<AVCAudioStreamDelegate> delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)capabilities;
-(long long)direction;
-(NSDictionary *)capabilities;
-(void)setVolume:(float)arg1 ;
-(void)setCapabilities:(NSDictionary *)arg1 ;
-(void)vcMediaStream:(id)arg1 didPauseStream:(BOOL)arg2 error:(id)arg3 ;
-(void)setDirection:(long long)arg1 ;
-(id<AVCAudioStreamDelegate>)delegate;
-(void)start;
-(void)pause;
-(void)vcMediaStream:(id)arg1 updateFrequencyLevel:(id)arg2 isInputMeter:(BOOL)arg3 ;
-(void)vcMediaStream:(id)arg1 didStartStream:(BOOL)arg2 error:(id)arg3 ;
-(void)stop;
-(void)setDelegate:(id<AVCAudioStreamDelegate>)arg1 ;
-(AVCMediaStreamConfig *)configuration;
-(void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2 ;
-(void)vcMediaStreamDidRTPTimeOut:(id)arg1 ;
-(void)vcMediaStreamDidRTCPTimeOut:(id)arg1 ;
-(float)volume;
-(void)vcMediaStream:(id)arg1 didResumeStream:(BOOL)arg2 error:(id)arg3 ;
-(void)resume;
-(void)vcMediaStream:(id)arg1 didReceiveDTMFEventWithDigit:(char)arg2 ;
-(void)dealloc;
-(void)setConfiguration:(AVCMediaStreamConfig *)arg1 ;
-(void)vcMediaStreamDidStop:(id)arg1 ;
-(BOOL)configure:(id)arg1 error:(id*)arg2 ;
-(void)setRtpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(id)initWithNetworkSockets:(id)arg1 isOriginator:(BOOL)arg2 callID:(id)arg3 error:(id*)arg4 ;
-(BOOL)isRTPTimeOutEnabled;
-(void)setRtpTimeOutIntervalSec:(double)arg1 ;
-(void)setRtcpTimeOutIntervalSec:(double)arg1 ;
-(void)setRtcpSendIntervalSec:(double)arg1 ;
-(void)startContinuousDTMFWithDigit:(char)arg1 volume:(unsigned char)arg2 ;
-(void)stopContinuousDTMF;
-(void)sendDTMFDigitString:(id)arg1 withVolume:(unsigned char)arg2 duration:(unsigned short)arg3 interval:(unsigned short)arg4 ;
-(void)refreshLoggingParameters;
-(BOOL)isInputFrequencyMeteringEnabled;
-(void)setInputFrequencyMeteringEnabled:(BOOL)arg1 ;
-(BOOL)isOutputFrequencyMeteringEnabled;
-(void)setOutputFrequencyMeteringEnabled:(BOOL)arg1 ;
-(BOOL)isRTCPEnabled;
-(BOOL)isRTCPTimeOutEnabled;
-(id)initWithLocalAddress:(id)arg1 networkSockets:(id)arg2 IDSDestination:(id)arg3 isOriginator:(BOOL)arg4 callID:(id)arg5 error:(id*)arg6 ;
-(void)registerBlocksForDelegateNotifications;
-(id)validateInitializeConnectionResult:(id)arg1 ;
-(void)deregisterBlocksForDelegateNotifications;
-(void)terminateSession;
-(void)vcMediaStream:(id)arg1 updateInputFrequencyLevel:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 updateOutputFrequencyLevel:(id)arg2 ;
-(void)didInterruptionBeginHandler;
-(void)didInterruptionEndHandler;
-(id)initWithLocalAddress:(id)arg1 error:(id*)arg2 ;
-(id)initWithLocalAddress:(id)arg1 callID:(id)arg2 error:(id*)arg3 ;
-(id)initWithLocalAddress:(id)arg1 isOriginator:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithLocalAddress:(id)arg1 isOriginator:(BOOL)arg2 callID:(id)arg3 error:(id*)arg4 ;
-(id)initWithNetworkSockets:(id)arg1 isOriginator:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithIDSDestination:(id)arg1 isOriginator:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithIDSDestination:(id)arg1 isOriginator:(BOOL)arg2 callID:(id)arg3 error:(id*)arg4 ;
-(void)startSynchronizeWithStream:(long long)arg1 ;
-(double)rtpTimeOutIntervalSec;
-(double)rtcpTimeOutIntervalSec;
-(double)rtcpSendIntervalSec;
@end

