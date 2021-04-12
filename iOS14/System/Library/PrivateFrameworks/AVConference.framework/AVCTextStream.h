/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
@class AVConferenceXPCClient, AVCMediaStreamConfig, NSDictionary, NSObject;

@interface AVCTextStream : NSObject {

	AVConferenceXPCClient* _connection;
	AVCMediaStreamConfig* _configuration;
	id _delegate;
	long long _streamToken;
	NSDictionary* _capabilities;
	NSObject*<OS_dispatch_queue> _queue;

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
@property (assign,nonatomic) id<AVCTextStreamDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
-(long long)direction;
-(NSDictionary *)capabilities;
-(void)setCapabilities:(NSDictionary *)arg1 ;
-(void)setDirection:(long long)arg1 ;
-(id<AVCTextStreamDelegate>)delegate;
-(void)start;
-(void)pause;
-(void)stop;
-(void)setDelegate:(id<AVCTextStreamDelegate>)arg1 ;
-(AVCMediaStreamConfig *)configuration;
-(long long)streamToken;
-(void)resume;
-(void)dealloc;
-(void)setConfiguration:(AVCMediaStreamConfig *)arg1 ;
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
-(id)newNSErrorWithErrorDictionary:(id)arg1 ;
-(BOOL)isRTCPEnabled;
-(BOOL)isRTCPTimeOutEnabled;
-(void)registerBlocksForDelegateNotifications;
-(void)deregisterBlocksForDelegateNotifications;
-(double)rtpTimeOutIntervalSec;
-(double)rtcpTimeOutIntervalSec;
-(double)rtcpSendIntervalSec;
-(BOOL)initializeServerWithNetworkSockets:(id)arg1 callID:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateResultsDictionary:(id)arg1 error:(id*)arg2 ;
@end

