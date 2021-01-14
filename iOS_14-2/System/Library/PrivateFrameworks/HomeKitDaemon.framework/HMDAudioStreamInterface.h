/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDStreamInterface.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/AVCAudioStreamDelegate.h>

@protocol HMDAudioStreamInterfaceDelegate;
@class AVCAudioStream, NSNumber, NSString;

@interface HMDAudioStreamInterface : HMDStreamInterface <HMFLogging, AVCAudioStreamDelegate> {

	BOOL _streamStarted;
	AVCAudioStream* _audioStream;
	id<HMDAudioStreamInterfaceDelegate> _delegate;
	unsigned long long _audioStreamSetting;
	double _rtcpSendIntervalSec;
	/*^block*/id _stopStreamCompletionHandler;

}

@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (assign,getter=isRTCPEnabled,nonatomic) BOOL rtcpEnabled; 
@property (assign,getter=isRTPTimeOutEnabled,nonatomic) BOOL rtpTimeOutEnabled; 
@property (assign,getter=isRTCPTimeOutEnabled,nonatomic) BOOL rtcpTimeOutEnabled; 
@property (assign,nonatomic) double rtpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpSendIntervalSec;                                       //@synthesize rtcpSendIntervalSec=_rtcpSendIntervalSec - In the implementation block
@property (copy) id stopStreamCompletionHandler;                                               //@synthesize stopStreamCompletionHandler=_stopStreamCompletionHandler - In the implementation block
@property (nonatomic,readonly) NSNumber * syncSource; 
@property (nonatomic,retain) AVCAudioStream * audioStream;                                     //@synthesize audioStream=_audioStream - In the implementation block
@property (__weak,readonly) id<HMDAudioStreamInterfaceDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL streamStarted;                                               //@synthesize streamStarted=_streamStarted - In the implementation block
@property (assign,nonatomic) unsigned long long audioStreamSetting;                            //@synthesize audioStreamSetting=_audioStreamSetting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDAudioStreamInterfaceDelegate>)delegate;
-(void)streamDidStop:(id)arg1 ;
-(id)logIdentifier;
-(void)setMuted:(BOOL)arg1 ;
-(void)stopStream;
-(void)setAudioStream:(AVCAudioStream *)arg1 ;
-(void)setAudioStreamSetting:(unsigned long long)arg1 ;
-(unsigned long long)audioStreamSetting;
-(BOOL)isMuted;
-(void)dealloc;
-(AVCAudioStream *)audioStream;
-(void)stream:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3 ;
-(void)stream:(id)arg1 didPause:(BOOL)arg2 error:(id)arg3 ;
-(void)stream:(id)arg1 didResume:(BOOL)arg2 error:(id)arg3 ;
-(void)streamDidRTPTimeOut:(id)arg1 ;
-(void)streamDidRTCPTimeOut:(id)arg1 ;
-(void)streamDidServerDie:(id)arg1 ;
-(void)setRtpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(void)setRtcpSendInterval:(double)arg1 ;
-(BOOL)isRTPTimeOutEnabled;
-(void)setRtpTimeOutIntervalSec:(double)arg1 ;
-(void)setRtcpTimeOutIntervalSec:(double)arg1 ;
-(void)setRtcpSendIntervalSec:(double)arg1 ;
-(NSNumber *)syncSource;
-(BOOL)isRTCPEnabled;
-(BOOL)isRTCPTimeOutEnabled;
-(double)rtpTimeOutIntervalSec;
-(double)rtcpTimeOutIntervalSec;
-(double)rtcpSendIntervalSec;
-(void)startStream:(id)arg1 ;
-(BOOL)_createLocalSocket;
-(BOOL)_initializeStreamRemoteSender:(id)arg1 ;
-(BOOL)_initializeStreamRemoteDestinationReceiver:(id)arg1 ;
-(BOOL)_initializeStreamRemoteSocketReceiver:(id)arg1 ;
-(BOOL)_initializeStreamRemoteLocal;
-(void)_startStream:(id)arg1 ;
-(void)_callStarted:(id)arg1 ;
-(void)_callStopped:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 sessionHandler:(id)arg5 localNetworkConfig:(id)arg6 ;
-(void)updateAudioSetting:(unsigned long long)arg1 ;
-(void)updateAudioVolume:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)_updateAudioSetting:(unsigned long long)arg1 ;
-(void)_pauseStream;
-(void)_resumeStream;
-(void)_stopStreamWithCompletion:(/*^block*/id)arg1 ;
-(void)setStopStreamCompletionHandler:(id)arg1 ;
-(BOOL)streamStarted;
-(void)setStreamStarted:(BOOL)arg1 ;
-(id)stopStreamCompletionHandler;
-(void)_callPaused:(id)arg1 ;
-(void)_callResumed:(id)arg1 ;
@end

