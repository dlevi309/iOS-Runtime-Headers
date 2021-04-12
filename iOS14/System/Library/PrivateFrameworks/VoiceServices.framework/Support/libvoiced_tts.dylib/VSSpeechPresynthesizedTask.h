/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)suspend;
-(AudioStreamBasicDescription)asbd;
-(id)init;
-(id<VSSpeechServiceDelegate>)delegate;
-(VSPresynthesizedAudioRequest *)request;
-(BOOL)isSpeaking;
-(void)setDelegate:(id<VSSpeechServiceDelegate>)arg1 ;
-(NSString *)description;
-(void)main;
-(id)initWithRequest:(id)arg1 ;
-(NSMutableData *)audioData;
-(void)setAudioData:(NSMutableData *)arg1 ;
-(void)cancel;
-(void)resume;
-(VSInstrumentMetrics *)instrumentMetrics;
-(void)reportTimingInfo;
-(VSAudioPlaybackService *)playbackService;
-(void)reportInstrumentMetrics;
-(void)reportFinish;
-(void)reportSpeechStart;
-(id)taskHash;
-(id)audioPowerProvider;
-(void)setAsbd:(AudioStreamBasicDescription)arg1 ;
-(void)setInstrumentMetrics:(VSInstrumentMetrics *)arg1 ;
-(void)setPlaybackService:(VSAudioPlaybackService *)arg1 ;
@end

