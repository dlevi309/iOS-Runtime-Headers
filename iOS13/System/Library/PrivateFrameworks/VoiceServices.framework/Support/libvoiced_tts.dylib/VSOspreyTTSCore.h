/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <Foundation/NSOperation.h>

@protocol VSOspreyTTSCoreDelegate;
@class VSSpeechRequest, VSInstrumentMetrics, NSError, VSVoiceAsset, VSVoiceResourceAsset, VSServerTTSClient, VSServerTTSConfig, VSSpeechInternalSettings, VSTimeoutCondition, NSCondition;

@interface VSOspreyTTSCore : NSOperation {

	BOOL _didReceiveAudio;
	VSSpeechRequest* _request;
	id<VSOspreyTTSCoreDelegate> _delegate;
	VSInstrumentMetrics* _instrumentMetrics;
	NSError* _error;
	VSVoiceAsset* _voice;
	VSVoiceResourceAsset* _voiceResource;
	VSServerTTSClient* _serverTTSClient;
	VSServerTTSConfig* _serverConfig;
	VSSpeechInternalSettings* _internalSettings;
	double _bufferDurationLimit;
	VSTimeoutCondition* _timeoutCondition;
	NSCondition* _didReceiveAudioCondition;

}

@property (nonatomic,retain) VSServerTTSClient * serverTTSClient;                         //@synthesize serverTTSClient=_serverTTSClient - In the implementation block
@property (nonatomic,retain) VSServerTTSConfig * serverConfig;                            //@synthesize serverConfig=_serverConfig - In the implementation block
@property (nonatomic,retain) VSSpeechInternalSettings * internalSettings;                 //@synthesize internalSettings=_internalSettings - In the implementation block
@property (assign,nonatomic) double bufferDurationLimit;                                  //@synthesize bufferDurationLimit=_bufferDurationLimit - In the implementation block
@property (nonatomic,retain) VSTimeoutCondition * timeoutCondition;                       //@synthesize timeoutCondition=_timeoutCondition - In the implementation block
@property (assign,nonatomic) BOOL didReceiveAudio;                                        //@synthesize didReceiveAudio=_didReceiveAudio - In the implementation block
@property (nonatomic,retain) NSCondition * didReceiveAudioCondition;                      //@synthesize didReceiveAudioCondition=_didReceiveAudioCondition - In the implementation block
@property (nonatomic,readonly) VSSpeechRequest * request;                                 //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<VSOspreyTTSCoreDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) VSInstrumentMetrics * instrumentMetrics;              //@synthesize instrumentMetrics=_instrumentMetrics - In the implementation block
@property (nonatomic,retain) NSError * error;                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) VSVoiceAsset * voice;                                        //@synthesize voice=_voice - In the implementation block
@property (nonatomic,retain) VSVoiceResourceAsset * voiceResource;                        //@synthesize voiceResource=_voiceResource - In the implementation block
-(id<VSOspreyTTSCoreDelegate>)delegate;
-(void)setDelegate:(id<VSOspreyTTSCoreDelegate>)arg1 ;
-(NSError *)error;
-(void)cancel;
-(void)main;
-(void)setError:(NSError *)arg1 ;
-(double)timeout;
-(VSSpeechRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(VSVoiceAsset *)voice;
-(void)setVoice:(VSVoiceAsset *)arg1 ;
-(VSSpeechInternalSettings *)internalSettings;
-(void)setInternalSettings:(VSSpeechInternalSettings *)arg1 ;
-(VSInstrumentMetrics *)instrumentMetrics;
-(VSVoiceResourceAsset *)voiceResource;
-(void)setVoiceResource:(VSVoiceResourceAsset *)arg1 ;
-(void)setInstrumentMetrics:(VSInstrumentMetrics *)arg1 ;
-(void)waitUntilFinishedIfAudioReceivedWithin:(double)arg1 ;
-(VSTimeoutCondition *)timeoutCondition;
-(void)setTimeoutCondition:(VSTimeoutCondition *)arg1 ;
-(VSServerTTSConfig *)serverConfig;
-(NSCondition *)didReceiveAudioCondition;
-(VSServerTTSClient *)serverTTSClient;
-(void)setDidReceiveAudio:(BOOL)arg1 ;
-(BOOL)didReceiveAudio;
-(double)bufferDurationLimit;
-(void)setBufferDurationLimit:(double)arg1 ;
-(void)performStreamingOspreyTTS;
-(void)performRoundTripOspreyTTS;
-(void)setServerTTSClient:(VSServerTTSClient *)arg1 ;
-(void)setServerConfig:(VSServerTTSConfig *)arg1 ;
-(void)setDidReceiveAudioCondition:(NSCondition *)arg1 ;
@end

