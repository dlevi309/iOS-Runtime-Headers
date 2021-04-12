/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <libobjc.A.dylib/VCMediaStreamDelegate.h>

@protocol OS_dispatch_queue;
@class AVConferenceXPCClient, AVCMediaStreamConfig, VCVideoStream, NSDictionary, NSObject, NSString;

@interface AVCVideoStream : NSObject <VCMediaStreamDelegate> {

	AVConferenceXPCClient* _connection;
	AVCMediaStreamConfig* _configuration;
	id _delegate;
	VCVideoStream* _opaqueStream;
	long long _streamToken;
	NSDictionary* _capabilities;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _shouldUseXPC;

}

@property (nonatomic,retain) NSDictionary * capabilities;                                      //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) AVCMediaStreamConfig * configuration;                             //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) long long direction; 
@property (assign,getter=isRTCPEnabled,nonatomic) BOOL rtcpEnabled; 
@property (assign,getter=isRTPTimeOutEnabled,nonatomic) BOOL rtpTimeOutEnabled; 
@property (assign,getter=isRTCPTimeOutEnabled,nonatomic) BOOL rtcpTimeOutEnabled; 
@property (assign,nonatomic) double rtpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpSendIntervalSec; 
@property (nonatomic,readonly) long long streamToken;                                          //@synthesize streamToken=_streamToken - In the implementation block
@property (assign,nonatomic) id<AVCVideoStreamDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)capabilities;
+(id)extractClientDownlinkQualityInfoDictionary:(id)arg1 ;
+(id)extractClientUplinkQualityInfoDictionary:(id)arg1 ;
-(long long)direction;
-(NSDictionary *)capabilities;
-(void)setCapabilities:(NSDictionary *)arg1 ;
-(void)vcMediaStream:(id)arg1 didPauseStream:(BOOL)arg2 error:(id)arg3 ;
-(void)setDirection:(long long)arg1 ;
-(id<AVCVideoStreamDelegate>)delegate;
-(void)start;
-(void)pause;
-(void)vcMediaStream:(id)arg1 didStartStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStream:(id)arg1 downlinkQualityDidChange:(id)arg2 ;
-(void)stop;
-(void)setDelegate:(id<AVCVideoStreamDelegate>)arg1 ;
-(AVCMediaStreamConfig *)configuration;
-(void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2 ;
-(long long)streamToken;
-(void)vcMediaStreamDidRTPTimeOut:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didUpdateVideoConfiguration:(BOOL)arg2 error:(id)arg3 dictionary:(id)arg4 ;
-(void)vcMediaStream:(id)arg1 uplinkQualityDidChange:(id)arg2 ;
-(void)vcMediaStreamDidRTCPTimeOut:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didResumeStream:(BOOL)arg2 error:(id)arg3 ;
-(void)resume;
-(void)dealloc;
-(void)setConfiguration:(AVCMediaStreamConfig *)arg1 ;
-(void)vcMediaStreamDidStop:(id)arg1 ;
-(BOOL)configure:(id)arg1 error:(id*)arg2 ;
-(void)setRtpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(BOOL)isRTPTimeOutEnabled;
-(void)setRtpTimeOutIntervalSec:(double)arg1 ;
-(void)setRtcpTimeOutIntervalSec:(double)arg1 ;
-(void)setRtcpSendIntervalSec:(double)arg1 ;
-(id)initWithNetworkSockets:(id)arg1 callID:(id)arg2 error:(id*)arg3 ;
-(void)refreshLoggingParameters;
-(void)requestLastDecodedFrame;
-(BOOL)isRTCPEnabled;
-(BOOL)isRTCPTimeOutEnabled;
-(void)registerBlocksForDelegateNotifications;
-(void)deregisterBlocksForDelegateNotifications;
-(void)terminateSession;
-(double)rtpTimeOutIntervalSec;
-(double)rtcpTimeOutIntervalSec;
-(double)rtcpSendIntervalSec;
-(id)initWithLocalAddress:(id)arg1 networkSockets:(id)arg2 IDSDestination:(id)arg3 connectionClientID:(id)arg4 callID:(id)arg5 options:(id)arg6 error:(id*)arg7 ;
-(id)initWithNetworkSockets:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithNWConnectionClientID:(unsigned char)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithIDSDestination:(id)arg1 callID:(id)arg2 error:(id*)arg3 ;
-(void)updateVideoConfiguration:(id)arg1 ;
-(id)getStats;
@end

