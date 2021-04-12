/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
*/

#import <TextToSpeech/TextToSpeech-Structs.h>
#import <libobjc.A.dylib/TTSSpeechConnectionDelegate.h>

@protocol TTSSpeechSynthesizerDelegate, OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSMutableArray, NSArray, NSString;

@interface TTSSpeechSynthesizer : NSObject <TTSSpeechConnectionDelegate> {

	long long _footprint;
	id<TTSSpeechSynthesizerDelegate> _delegate;
	BOOL _useSharedSession;
	BOOL _audioSessionIDIsValid;
	unsigned _audioSessionID;
	unsigned _audioQueueFlags;
	BOOL _useMonarchStyleRate;
	NSMutableDictionary* _channels;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _currentRequestOwners;
	NSMutableArray* _speechRequests;
	struct {
		unsigned delegateStartWithRequest : 1;
		unsigned delegateFinishWithRequest : 1;
		unsigned delegateFinishWithPhonemesSpokenWithRequest : 1;
		unsigned delegatePauseWithRequest : 1;
		unsigned delegateContinueWithRequest : 1;
		unsigned delegateWillSpeakWithRequest : 1;
		unsigned delegateSynthesizedSilentlyURL : 1;
		unsigned willUseInput : 1;
	}  _synthesizerFlags;
	unsigned long long _synthesizerInstanceID;
	NSArray* _outputChannels;
	NSMutableDictionary* _testingLastRuleConversion;
	BOOL _supportsAccurateWordCallbacks;
	BOOL _ignoreSubstitutions;
	BOOL _synthesizeSilently;
	float _rate;
	float _pitch;
	float _volume;
	NSString* _voiceIdentifier;
	NSString* _bundleIdentifier;
	unsigned long long _requestClientIdentifier;
	void* _speakingRequestClientContext;
	NSArray* _userSubstitutions;
	NSArray* _phonemeSubstitutions;
	/*^block*/id _audioBufferCallback;

}

@property (assign,nonatomic,__weak) id<TTSSpeechSynthesizerDelegate> delegate; 
@property (assign,nonatomic) float rate;                                                    //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float pitch;                                                   //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) float volume;                                                  //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSString * voiceIdentifier;                                    //@synthesize voiceIdentifier=_voiceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * resolvedVoiceIdentifier; 
@property (assign,nonatomic) unsigned long long requestClientIdentifier;                    //@synthesize requestClientIdentifier=_requestClientIdentifier - In the implementation block
@property (assign,nonatomic) void* speakingRequestClientContext;                            //@synthesize speakingRequestClientContext=_speakingRequestClientContext - In the implementation block
@property (assign,nonatomic) BOOL supportsAccurateWordCallbacks;                            //@synthesize supportsAccurateWordCallbacks=_supportsAccurateWordCallbacks - In the implementation block
@property (assign,nonatomic) unsigned audioQueueFlags;                                      //@synthesize audioQueueFlags=_audioQueueFlags - In the implementation block
@property (nonatomic,readonly) unsigned audioSessionID;                                     //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (nonatomic,copy) NSArray * userSubstitutions;                                     //@synthesize userSubstitutions=_userSubstitutions - In the implementation block
@property (nonatomic,copy) NSArray * phonemeSubstitutions;                                  //@synthesize phonemeSubstitutions=_phonemeSubstitutions - In the implementation block
@property (nonatomic,copy) id audioBufferCallback;                                          //@synthesize audioBufferCallback=_audioBufferCallback - In the implementation block
@property (nonatomic,retain) NSArray * outputChannels; 
@property (assign,nonatomic) BOOL ignoreSubstitutions;                                      //@synthesize ignoreSubstitutions=_ignoreSubstitutions - In the implementation block
@property (assign,nonatomic) BOOL synthesizeSilently;                                       //@synthesize synthesizeSilently=_synthesizeSilently - In the implementation block
+(void)initialize;
+(id)availableVoices;
+(id)availableLanguageCodes;
+(id)speechMarkupStringForType:(long long)arg1 forIdentifier:(id)arg2 string:(id)arg3 ;
+(id)allAvailableVoices;
+(id)refreshAllAvailableVoices:(BOOL)arg1 ;
+(id)audioFileSettingsForVoice:(id)arg1 ;
+(id)_speechVoiceForIdentifier:(id)arg1 language:(id)arg2 footprint:(long long)arg3 useFallbackDefault:(BOOL)arg4 ;
+(id)supportedIPAPhonemeLanguages;
+(void)_initializeServers;
+(id)availableVoicesForLanguageCode:(id)arg1 queryingMobileAssets:(BOOL)arg2 ;
+(id)_speechVoiceForIdentifier:(id)arg1 language:(id)arg2 footprint:(long long)arg3 ;
+(id)voiceForIdentifier:(id)arg1 ;
+(BOOL)employSpeechMarkupForType:(long long)arg1 identifier:(id)arg2 withLanguage:(id)arg3 ;
+(void)testingSetAllVoices:(id)arg1 ;
+(void)setVoiceAssetsForTesting:(id)arg1 ;
+(id)voiceAssetsForTesting;
+(id)synthesizerForSynthesizerID:(unsigned long long)arg1 ;
+(id)refreshAllAvailableVoices;
+(id)voiceAccessQueue;
+(void)setTestingAvailableVoicesForLanguageCode:(id)arg1 ;
+(void)setSpeechJobFinishedUnitTestBlock:(/*^block*/id)arg1 ;
+(void)setSpeechJobStartedUnitTestBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<TTSSpeechSynthesizerDelegate>)delegate;
-(void)setDelegate:(id<TTSSpeechSynthesizerDelegate>)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(float)pitch;
-(void)setPitch:(float)arg1 ;
-(NSArray *)outputChannels;
-(void)setOutputChannels:(NSArray *)arg1 ;
-(void)_setDelegate:(id)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(BOOL)stopSpeakingAtNextBoundary:(long long)arg1 synchronously:(BOOL)arg2 error:(id*)arg3 ;
-(NSString *)voiceIdentifier;
-(void)setVoiceIdentifier:(NSString *)arg1 ;
-(BOOL)isSpeaking;
-(id)speechString;
-(unsigned)audioSessionID;
-(long long)footprint;
-(void)setFootprint:(long long)arg1 ;
-(unsigned)audioQueueFlags;
-(void)setAudioQueueFlags:(unsigned)arg1 ;
-(BOOL)_stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_startSpeakingString:(id)arg1 orAttributedString:(id)arg2 toURL:(id)arg3 withLanguageCode:(id)arg4 request:(id*)arg5 error:(id*)arg6 ;
-(BOOL)pauseSpeakingAtNextBoundary:(long long)arg1 synchronously:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_continueSpeakingRequest:(id)arg1 withError:(id*)arg2 ;
-(BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id*)arg4 ;
-(void)connection:(id)arg1 speechRequestDidStart:(id)arg2 ;
-(void)connection:(id)arg1 speechRequestDidPause:(id)arg2 ;
-(void)connection:(id)arg1 speechRequestDidContinue:(id)arg2 ;
-(void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(BOOL)arg3 phonemesSpoken:(id)arg4 error:(id)arg5 ;
-(void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(NSRange)arg4 ;
-(float)minimumRate;
-(float)maximumRate;
-(BOOL)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)startSpeakingString:(id)arg1 request:(id*)arg2 error:(id*)arg3 ;
-(BOOL)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 request:(id*)arg3 error:(id*)arg4 ;
-(BOOL)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id*)arg3 ;
-(BOOL)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id*)arg3 ;
-(BOOL)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)pauseSpeakingAtNextBoundary:(long long)arg1 error:(id*)arg2 ;
-(BOOL)continueSpeakingRequest:(id)arg1 withError:(id*)arg2 ;
-(void)useSpecificAudioSession:(unsigned)arg1 ;
-(void)useAudioQueueFlags:(unsigned)arg1 ;
-(BOOL)startSpeakingString:(id)arg1 error:(id*)arg2 ;
-(BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 error:(id*)arg3 ;
-(BOOL)stopSpeakingAtNextBoundary:(long long)arg1 error:(id*)arg2 ;
-(BOOL)continueSpeakingWithError:(id*)arg1 ;
-(BOOL)synthesizeSilently;
-(void)setSynthesizeSilently:(BOOL)arg1 ;
-(id)audioBufferCallback;
-(void)setAudioBufferCallback:(id)arg1 ;
-(void)setUserSubstitutions:(NSArray *)arg1 ;
-(void)setUseMonarchStyleRate:(BOOL)arg1 ;
-(void)setPhonemeSubstitutions:(NSArray *)arg1 ;
-(void)setSpeakingRequestClientContext:(void*)arg1 ;
-(BOOL)supportsAccurateWordCallbacks;
-(void)setSupportsAccurateWordCallbacks:(BOOL)arg1 ;
-(BOOL)useMonarchStyleRate;
-(unsigned long long)synthesizerInstanceID;
-(void)_mediaServicesDied;
-(BOOL)ignoreSubstitutions;
-(BOOL)_skipSubstition:(id)arg1 language:(id)arg2 bundleIdentifier:(id)arg3 voice:(id)arg4 ;
-(id)_applySubstitution:(id)arg1 toText:(id)arg2 wordRange:(NSRange)arg3 request:(id)arg4 phonemes:(id*)arg5 ;
-(id)_preprocessText:(id)arg1 languageCode:(id)arg2 ;
-(NSArray *)phonemeSubstitutions;
-(NSArray *)userSubstitutions;
-(void)_processUserSubstitutions:(id)arg1 toText:(id)arg2 request:(id)arg3 bundleIdentifier:(id)arg4 voice:(id)arg5 ;
-(void)connection:(id)arg1 speechRequest:(id)arg2 didSynthesizeSilentlyToURL:(id)arg3 ;
-(id)testingLastRuleConversion;
-(void)testingSetLastRuleConversion:(id)arg1 replacement:(id)arg2 ;
-(NSString *)resolvedVoiceIdentifier;
-(id)resolvedVoiceIdentifierForLanguageCode:(id)arg1 ;
-(BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 request:(id*)arg4 error:(id*)arg5 ;
-(unsigned long long)requestClientIdentifier;
-(void)setRequestClientIdentifier:(unsigned long long)arg1 ;
-(void*)speakingRequestClientContext;
-(void)setIgnoreSubstitutions:(BOOL)arg1 ;
@end

