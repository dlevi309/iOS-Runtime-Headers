/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/VSSpeechSpeakableProtocol.h>

@protocol VSSpeechServiceDelegate, VSSpeechCacheItem, OS_dispatch_queue;
@class VSSpeechRequest, NSArray, VSSpeechEngine, VSVoiceBooster, VSAudioPlaybackService, VSVoiceAssetSelection, VSVoiceResourceAsset, VSCachingService, VSInstrumentMetrics, VSAudioData, VSStreamAudioData, NSError, NSObject, NSString;

@interface VSSpeechSpeakTask : NSOperation <VSSpeechSpeakableProtocol> {

	BOOL _synthesisDidFallback;
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
	VSAudioData* _compressedAudio;
	VSStreamAudioData* _streamAudio;
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
@property (assign,nonatomic) BOOL synthesisDidFallback;                                    //@synthesize synthesisDidFallback=_synthesisDidFallback - In the implementation block
@property (nonatomic,retain) VSInstrumentMetrics * instrumentMetrics;                      //@synthesize instrumentMetrics=_instrumentMetrics - In the implementation block
@property (nonatomic,retain) id<VSSpeechCacheItem> speechCache;                            //@synthesize speechCache=_speechCache - In the implementation block
@property (nonatomic,retain) NSArray * phonemes;                                           //@synthesize phonemes=_phonemes - In the implementation block
@property (nonatomic,retain) VSAudioData * compressedAudio;                                //@synthesize compressedAudio=_compressedAudio - In the implementation block
@property (nonatomic,retain) VSStreamAudioData * streamAudio;                              //@synthesize streamAudio=_streamAudio - In the implementation block
@property (nonatomic,retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> taskAuxiliaryQueue;              //@synthesize taskAuxiliaryQueue=_taskAuxiliaryQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VSSpeechEngine *)engine;
-(void)setEngine:(VSSpeechEngine *)arg1 ;
-(void)suspend;
-(id)init;
-(void)setRequest:(VSSpeechRequest *)arg1 ;
-(id<VSSpeechServiceDelegate>)delegate;
-(void)pausePlayback;
-(void)setError:(NSError *)arg1 ;
-(VSSpeechRequest *)request;
-(NSError *)error;
-(BOOL)isSpeaking;
-(void)setDelegate:(id<VSSpeechServiceDelegate>)arg1 ;
-(void)main;
-(id)initWithRequest:(id)arg1 ;
-(void)setPhonemes:(NSArray *)arg1 ;
-(NSArray *)phonemes;
-(void)cancel;
-(void)resumePlayback;
-(void)resume;
-(VSVoiceResourceAsset *)voiceResource;
-(void)fetchVoiceResource;
-(void)fetchVoiceAsset;
-(void)setTimingInfos:(NSArray *)arg1 ;
-(VSCachingService *)cachingService;
-(id<VSSpeechCacheItem>)speechCache;
-(VSStreamAudioData *)streamAudio;
-(VSInstrumentMetrics *)instrumentMetrics;
-(void)reportTimingInfo;
-(void)speakCachedAudio;
-(VSAudioPlaybackService *)playbackService;
-(void)reportInstrumentMetrics;
-(BOOL)synthesisDidFallback;
-(void)enqueueCache;
-(void)reportFinish;
-(void)logFinish;
-(void)prepareForSynthesis;
-(void)startPlaybackServiceWithAudioSessionID:(unsigned)arg1 ;
-(VSVoiceBooster *)voiceBooster;
-(NSObject*<OS_dispatch_queue>)taskAuxiliaryQueue;
-(void)reportSpeechStart;
-(void)setSynthesisDidFallback:(BOOL)arg1 ;
-(NSArray *)timingInfos;
-(void)adjustWordTimingInfo;
-(void)waitUntilAudioFinished;
-(id)taskHash;
-(id)audioPowerProvider;
-(VSAudioData *)compressedAudio;
-(void)setInstrumentMetrics:(VSInstrumentMetrics *)arg1 ;
-(VSVoiceAssetSelection *)voiceSelection;
-(void)setSpeechCache:(id<VSSpeechCacheItem>)arg1 ;
-(void)synthesizeAndSpeak;
-(void)setVoiceBooster:(VSVoiceBooster *)arg1 ;
-(void)setPlaybackService:(VSAudioPlaybackService *)arg1 ;
-(void)setVoiceSelection:(VSVoiceAssetSelection *)arg1 ;
-(void)setVoiceResource:(VSVoiceResourceAsset *)arg1 ;
-(void)setCachingService:(VSCachingService *)arg1 ;
-(void)setCompressedAudio:(VSAudioData *)arg1 ;
-(void)setStreamAudio:(VSStreamAudioData *)arg1 ;
-(void)setTaskAuxiliaryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_fetchVoiceAsset_NoRetry;
@end

