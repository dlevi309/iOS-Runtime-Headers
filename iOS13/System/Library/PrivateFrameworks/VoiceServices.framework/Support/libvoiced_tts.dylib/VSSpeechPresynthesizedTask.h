/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/VSSpeechSpeakableProtocol.h>

@protocol VSSpeechServiceDelegate;
@class VSPresynthesizedAudioRequest, VSAudioPlaybackService, VSInstrumentMetrics, NSMutableData, NSString;

@interface VSSpeechPresynthesizedTask : NSOperation <VSSpeechSpeakableProtocol> {

	VSPresynthesizedAudioRequest* _request;
	id<VSSpeechServiceDelegate> _delegate;
	VSAudioPlaybackService* _playbackService;
	VSInstrumentMetrics* _instrumentMetrics;
	NSMutableData* _audioData;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,readonly) VSPresynthesizedAudioRequest * request;                 //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<VSSpeechServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VSAudioPlaybackService * playbackService;                 //@synthesize playbackService=_playbackService - In the implementation block
@property (nonatomic,retain) VSInstrumentMetrics * instrumentMetrics;                  //@synthesize instrumentMetrics=_instrumentMetrics - In the implementation block
@property (nonatomic,retain) NSMutableData * audioData;                                //@synthesize audioData=_audioData - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription asbd;                         //@synthesize asbd=_asbd - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id<VSSpeechServiceDelegate>)delegate;
-(void)setDelegate:(id<VSSpeechServiceDelegate>)arg1 ;
-(void)cancel;
-(void)resume;
-(void)main;
-(void)suspend;
-(VSPresynthesizedAudioRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(BOOL)isSpeaking;
-(NSMutableData *)audioData;
-(void)setAudioData:(NSMutableData *)arg1 ;
-(id)md5hash;
-(VSInstrumentMetrics *)instrumentMetrics;
-(void)reportTimingInfo;
-(VSAudioPlaybackService *)playbackService;
-(void)reportInstrumentMetrics;
-(void)reportFinish;
-(void)reportSpeechStart;
-(id)audioPowerProvider;
-(AudioStreamBasicDescription)asbd;
-(void)setAsbd:(AudioStreamBasicDescription)arg1 ;
-(void)setPlaybackService:(VSAudioPlaybackService *)arg1 ;
-(void)setInstrumentMetrics:(VSInstrumentMetrics *)arg1 ;
@end

