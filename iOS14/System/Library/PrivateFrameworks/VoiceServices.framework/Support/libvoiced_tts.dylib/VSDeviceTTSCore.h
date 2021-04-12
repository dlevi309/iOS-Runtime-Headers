/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <Foundation/NSOperation.h>

@protocol VSDeviceTTSCoreDelegate;
@class VSSpeechRequest, VSInstrumentMetrics, NSError, VSAudioData, VSStreamAudioData, VSSpeechEngine, VSCachingService, VSVoiceAssetSelection, VSVoiceResourceAsset, VSVoiceBooster;

@interface VSDeviceTTSCore : NSOperation {

	VSSpeechRequest* _request;
	id<VSDeviceTTSCoreDelegate> _delegate;
	VSInstrumentMetrics* _instrumentMetrics;
	NSError* _error;
	VSAudioData* _compressedAudio;
	VSStreamAudioData* _streamAudio;
	VSSpeechEngine* _engine;
	VSCachingService* _cachingService;
	VSVoiceAssetSelection* _selectedVoice;
	VSVoiceResourceAsset* _selectedVoiceResource;
	VSVoiceBooster* _voiceBooster;

}

@property (nonatomic,retain) VSCachingService * cachingService;                           //@synthesize cachingService=_cachingService - In the implementation block
@property (nonatomic,retain) VSVoiceAssetSelection * selectedVoice;                       //@synthesize selectedVoice=_selectedVoice - In the implementation block
@property (nonatomic,retain) VSVoiceResourceAsset * selectedVoiceResource;                //@synthesize selectedVoiceResource=_selectedVoiceResource - In the implementation block
@property (nonatomic,retain) VSVoiceBooster * voiceBooster;                               //@synthesize voiceBooster=_voiceBooster - In the implementation block
@property (nonatomic,readonly) VSSpeechRequest * request;                                 //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<VSDeviceTTSCoreDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) VSInstrumentMetrics * instrumentMetrics;              //@synthesize instrumentMetrics=_instrumentMetrics - In the implementation block
@property (nonatomic,retain) NSError * error;                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) VSAudioData * compressedAudio;                             //@synthesize compressedAudio=_compressedAudio - In the implementation block
@property (nonatomic,readonly) VSStreamAudioData * streamAudio;                           //@synthesize streamAudio=_streamAudio - In the implementation block
@property (nonatomic,retain) VSSpeechEngine * engine;                                     //@synthesize engine=_engine - In the implementation block
-(VSSpeechEngine *)engine;
-(void)setEngine:(VSSpeechEngine *)arg1 ;
-(id<VSDeviceTTSCoreDelegate>)delegate;
-(void)setError:(NSError *)arg1 ;
-(VSSpeechRequest *)request;
-(NSError *)error;
-(void)setDelegate:(id<VSDeviceTTSCoreDelegate>)arg1 ;
-(void)main;
-(id)initWithRequest:(id)arg1 ;
-(void)cancel;
-(VSCachingService *)cachingService;
-(VSStreamAudioData *)streamAudio;
-(VSInstrumentMetrics *)instrumentMetrics;
-(id)prepareForSynthesis;
-(VSVoiceBooster *)voiceBooster;
-(id)taskHash;
-(VSVoiceAssetSelection *)selectedVoice;
-(VSVoiceResourceAsset *)selectedVoiceResource;
-(VSAudioData *)compressedAudio;
-(void)setInstrumentMetrics:(VSInstrumentMetrics *)arg1 ;
-(void)setVoiceBooster:(VSVoiceBooster *)arg1 ;
-(void)setCachingService:(VSCachingService *)arg1 ;
-(id)voiceSelectionWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)getCacheForHash:(id)arg1 ;
-(void)reportWordTimingInfo:(id)arg1 ;
-(void)reportAudio:(id)arg1 ;
-(void)adjustWordTimingInfo:(id)arg1 ;
-(id)voiceSelection_noRetry_WithRequest:(id)arg1 error:(id*)arg2 ;
-(void)setSelectedVoice:(VSVoiceAssetSelection *)arg1 ;
-(void)setSelectedVoiceResource:(VSVoiceResourceAsset *)arg1 ;
@end

