/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/VSDeviceTTSCoreDelegate.h>
#import <libobjc.A.dylib/VSSpeechSpeakableProtocol.h>

@protocol VSSpeechServiceDelegate;
@class VSSpeechRequest, NSString, VSInstrumentMetrics, VSDeviceTTSCore, VSAudioPlaybackService, NSError, NSCondition, VSAudioData, NSMutableArray, NSDate;

@interface VSSiriInlineTTSStreamTask : NSOperation <VSDeviceTTSCoreDelegate, VSSpeechSpeakableProtocol> {

	id<VSSpeechServiceDelegate> _delegate;
	VSSpeechRequest* _request;
	NSString* _streamID;
	VSInstrumentMetrics* _instrumentMetrics;
	VSDeviceTTSCore* _deviceTTSCore;
	VSAudioPlaybackService* _playbackServices;
	NSError* _error;
	NSCondition* _refreshTimeoutCondition;
	VSAudioData* _finalAudio;
	NSMutableArray* _finalTimingInfo;
	double _bufferDurationLimit;
	double _timeoutValue;
	NSDate* _playbackBeginDate;

}

@property (nonatomic,retain) VSSpeechRequest * request;                                //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSString * streamID;                                      //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,retain) VSInstrumentMetrics * instrumentMetrics;                  //@synthesize instrumentMetrics=_instrumentMetrics - In the implementation block
@property (nonatomic,retain) VSDeviceTTSCore * deviceTTSCore;                          //@synthesize deviceTTSCore=_deviceTTSCore - In the implementation block
@property (nonatomic,retain) VSAudioPlaybackService * playbackServices;                //@synthesize playbackServices=_playbackServices - In the implementation block
@property (nonatomic,retain) NSError * error;                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSCondition * refreshTimeoutCondition;                    //@synthesize refreshTimeoutCondition=_refreshTimeoutCondition - In the implementation block
@property (nonatomic,retain) VSAudioData * finalAudio;                                 //@synthesize finalAudio=_finalAudio - In the implementation block
@property (nonatomic,retain) NSMutableArray * finalTimingInfo;                         //@synthesize finalTimingInfo=_finalTimingInfo - In the implementation block
@property (assign,nonatomic) double bufferDurationLimit;                               //@synthesize bufferDurationLimit=_bufferDurationLimit - In the implementation block
@property (assign,nonatomic) double timeoutValue;                                      //@synthesize timeoutValue=_timeoutValue - In the implementation block
@property (nonatomic,retain) NSDate * playbackBeginDate;                               //@synthesize playbackBeginDate=_playbackBeginDate - In the implementation block
@property (assign,nonatomic,__weak) id<VSSpeechServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<VSSpeechServiceDelegate>)delegate;
-(void)setDelegate:(id<VSSpeechServiceDelegate>)arg1 ;
-(NSError *)error;
-(void)cancel;
-(void)resume;
-(void)main;
-(void)setError:(NSError *)arg1 ;
-(void)suspend;
-(void)setRequest:(VSSpeechRequest *)arg1 ;
-(VSSpeechRequest *)request;
-(NSString *)streamID;
-(void)setStreamID:(NSString *)arg1 ;
-(BOOL)isSpeaking;
-(void)startPlayback;
-(void)setTimeoutValue:(double)arg1 ;
-(double)timeoutValue;
-(id)voiceKey;
-(id)md5hash;
-(VSInstrumentMetrics *)instrumentMetrics;
-(void)reportTimingInfo;
-(void)reportInstrumentMetrics;
-(void)reportFinish;
-(void)reportSpeechStart;
-(id)audioPowerProvider;
-(void)setInstrumentMetrics:(VSInstrumentMetrics *)arg1 ;
-(void)synthesisCore:(id)arg1 didReceiveAudio:(id)arg2 ;
-(void)synthesisCore:(id)arg1 didReceiveWordTimingInfo:(id)arg2 ;
-(id)initWithRequest:(id)arg1 withStreamID:(id)arg2 ;
-(double)bufferDurationLimit;
-(void)setBufferDurationLimit:(double)arg1 ;
-(NSCondition *)refreshTimeoutCondition;
-(void)setRefreshTimeoutCondition:(NSCondition *)arg1 ;
-(void)handleBegin:(id)arg1 ;
-(void)handleChunk:(id)arg1 ;
-(void)handleEnd:(id)arg1 ;
-(VSAudioData *)finalAudio;
-(void)setPlaybackServices:(VSAudioPlaybackService *)arg1 ;
-(VSAudioPlaybackService *)playbackServices;
-(void)signalNewDataWithError:(id)arg1 ;
-(void)setPlaybackBeginDate:(NSDate *)arg1 ;
-(NSDate *)playbackBeginDate;
-(void)handleStreamNotification:(id)arg1 ;
-(BOOL)waitForNewData:(double)arg1 ;
-(void)setFinalAudio:(VSAudioData *)arg1 ;
-(NSMutableArray *)finalTimingInfo;
-(VSDeviceTTSCore *)deviceTTSCore;
-(void)setDeviceTTSCore:(VSDeviceTTSCore *)arg1 ;
-(void)setFinalTimingInfo:(NSMutableArray *)arg1 ;
@end

