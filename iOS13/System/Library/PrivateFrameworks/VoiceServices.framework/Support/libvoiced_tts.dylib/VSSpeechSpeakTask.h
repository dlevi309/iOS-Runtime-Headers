/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/VSSpeechSpeakableProtocol.h>

@protocol VSSpeechServiceDelegate, VSSpeechCacheItem, OS_dispatch_queue;
@class VSSpeechRequest, NSArray, VSSpeechEngine, VSVoiceBooster, VSAudioPlaybackService, VSVoiceAssetSelection, VSVoiceResourceAsset, VSCachingService, VSInstrumentMetrics, VSAudioData, NSError, NSObject, NSString;

@interface VSSpeechSpeakTask : NSOperation <VSSpeechSpeakableProtocol> {

	VSSpeechRequest* _request;
	NSArray* _timingInfos;
	id<VSSpeechServiceDelegate> _delegate;
	VSSpeechEngine* _engine;
	VSVoiceBooster* _voiceBooster;
	VSAudioPlaybackService* _playbackService;
	VSVoiceAssetSelection* _voiceSelection;
	VSVoiceResourceAsset* _voiceResource;
	VSCachingService* _cachingService;
	VSInstrumentMetrics* _instrumentMetrics;
	id<VSSpeechCacheItem> _speechCache;
	NSArray* _phonemes;
	VSAudioData* _audio;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _taskAuxiliaryQueue;

}

@property (nonatomic,retain) VSSpeechRequest * request;                                    //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSArray * timingInfos;                                        //@synthesize timingInfos=_timingInfos - In the implementation block
@property (assign,nonatomic,__weak) id<VSSpeechServiceDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VSSpeechEngine * engine;                                      //@synthesize engine=_engine - In the implementation block
@property (nonatomic,retain) VSVoiceBooster * voiceBooster;                                //@synthesize voiceBooster=_voiceBooster - In the implementation block
@property (nonatomic,retain) VSAudioPlaybackService * playbackService;                     //@synthesize playbackService=_playbackService - In the implementation block
@property (nonatomic,retain) VSVoiceAssetSelection * voiceSelection;                       //@synthesize voiceSelection=_voiceSelection - In the implementation block
@property (nonatomic,retain) VSVoiceResourceAsset * voiceResource;                         //@synthesize voiceResource=_voiceResource - In the implementation block
@property (nonatomic,retain) VSCachingService * cachingService;                            //@synthesize cachingService=_cachingService - In the implementation block
@property (nonatomic,retain) VSInstrumentMetrics * instrumentMetrics;                      //@synthesize instrumentMetrics=_instrumentMetrics - In the implementation block
@property (nonatomic,retain) id<VSSpeechCacheItem> speechCache;                            //@synthesize speechCache=_speechCache - In the implementation block
@property (nonatomic,retain) NSArray * phonemes;                                           //@synthesize phonemes=_phonemes - In the implementation block
@property (nonatomic,retain) VSAudioData * audio;                                          //@synthesize audio=_audio - In the implementation block
@property (nonatomic,retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> taskAuxiliaryQueue;              //@synthesize taskAuxiliaryQueue=_taskAuxiliaryQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<VSSpeechServiceDelegate>)delegate;
-(void)setDelegate:(id<VSSpeechServiceDelegate>)arg1 ;
-(NSError *)error;
-(void)cancel;
-(void)resume;
-(void)main;
-(void)setError:(NSError *)arg1 ;
-(VSSpeechEngine *)engine;
-(void)suspend;
-(void)setRequest:(VSSpeechRequest *)arg1 ;
-(VSSpeechRequest *)request;
-(void)setEngine:(VSSpeechEngine *)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(BOOL)isSpeaking;
-(void)resumePlayback;
-(VSAudioData *)audio;
-(void)setAudio:(VSAudioData *)arg1 ;
-(void)pausePlayback;
-(id)md5hash;
-(void)setPhonemes:(NSArray *)arg1 ;
-(NSArray *)phonemes;
-(void)fetchVoiceResource;
-(void)fetchVoiceAsset;
-(void)setTimingInfos:(NSArray *)arg1 ;
-(VSCachingService *)cachingService;
-(id<VSSpeechCacheItem>)speechCache;
-(VSInstrumentMetrics *)instrumentMetrics;
-(void)reportTimingInfo;
-(void)speakCachedAudio;
-(VSAudioPlaybackService *)playbackService;
-(void)reportInstrumentMetrics;
-(void)reportFinish;
-(void)logFinish;
-(void)prepareForSynthesis;
-(void)startPlaybackServiceWithAudioSessionID:(unsigned)arg1 ;
-(VSVoiceBooster *)voiceBooster;
-(NSObject*<OS_dispatch_queue>)taskAuxiliaryQueue;
-(void)reportSpeechStart;
-(NSArray *)timingInfos;
-(void)adjustWordTimingInfo;
-(void)waitUntilAudioFinished;
-(id)audioPowerProvider;
-(VSVoiceAssetSelection *)voiceSelection;
-(VSVoiceResourceAsset *)voiceResource;
-(void)setSpeechCache:(id<VSSpeechCacheItem>)arg1 ;
-(void)synthesizeAndSpeak;
-(void)setVoiceBooster:(VSVoiceBooster *)arg1 ;
-(void)setPlaybackService:(VSAudioPlaybackService *)arg1 ;
-(void)setVoiceSelection:(VSVoiceAssetSelection *)arg1 ;
-(void)setVoiceResource:(VSVoiceResourceAsset *)arg1 ;
-(void)setCachingService:(VSCachingService *)arg1 ;
-(void)setInstrumentMetrics:(VSInstrumentMetrics *)arg1 ;
-(void)setTaskAuxiliaryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_fetchVoiceAsset_NoRetry;
@end

