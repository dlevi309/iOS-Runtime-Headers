/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/CARSessionObserving.h>
#import <libobjc.A.dylib/VSSpeechSynthesizerDelegate.h>
#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>
#import <libobjc.A.dylib/MNVoiceEventQueueDelegate.h>

@protocol OS_dispatch_queue, VSSpeechSynthesizerDelegate;
@class MNNavigationAudioSession, MNVoiceEvent, NSMutableArray, VSSpeechRequest, AVAudioPlayer, NSObject, NSTimer, NSString, NSLocale, NSBundle, NSHashTable, VSSpeechSynthesizer, MNVoiceEventQueue, NSMutableDictionary, NSCache, CARSessionStatus;

@interface MNVoiceController : NSObject <CARSessionObserving, VSSpeechSynthesizerDelegate, AVAudioPlayerDelegate, MNVoiceEventQueueDelegate> {

	MNNavigationAudioSession* _activeNavigationSession;
	MNVoiceEvent* _currentVoiceEvent;
	NSMutableArray* _postAudioSessionActivationBlocks;
	float _currentVolume;
	VSSpeechRequest* _speechRequest;
	long long _previousGender;
	AVAudioPlayer* _leftTurnAudioPlayer;
	AVAudioPlayer* _rightTurnAudioPlayer;
	BOOL _shouldBePlayingPrompt;
	NSObject*<OS_dispatch_queue> _audioQueue;
	BOOL _muteOverride;
	NSTimer* _eventProcessingTimer;
	NSTimer* _activationDebugTimer;
	long long _currentLanguageSource;
	NSString* _currentLanguage;
	NSLocale* _currentLocale;
	NSBundle* _spokenBundle;
	BOOL _isPersistentConnectionOpen;
	long long _audioSessionState;
	NSHashTable* _observers;
	double _lastSpeechStartTime;
	NSString* _lastSpeech;
	unsigned long long _charactersSpokenCount;
	double _charactersSpokenDuration;
	id<VSSpeechSynthesizerDelegate> _delegate;
	VSSpeechSynthesizer* _synthesizer;
	MNVoiceEventQueue* _eventQueue;
	NSMutableDictionary* _durationRequests;
	NSCache* _speechDuration;
	CARSessionStatus* _carSessionStatus;

}

@property (nonatomic,readonly) CARSessionStatus * carSessionStatus;                        //@synthesize carSessionStatus=_carSessionStatus - In the implementation block
@property (assign,nonatomic,__weak) id<VSSpeechSynthesizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) VSSpeechSynthesizer * synthesizer;                          //@synthesize synthesizer=_synthesizer - In the implementation block
@property (nonatomic,retain) VSSpeechRequest * speechRequest;                              //@synthesize speechRequest=_speechRequest - In the implementation block
@property (nonatomic,retain) MNVoiceEvent * currentVoiceEvent;                             //@synthesize currentVoiceEvent=_currentVoiceEvent - In the implementation block
@property (nonatomic,readonly) AVAudioPlayer * leftTurnAudioPlayer; 
@property (nonatomic,readonly) AVAudioPlayer * rightTurnAudioPlayer; 
@property (nonatomic,readonly) MNVoiceEventQueue * eventQueue;                             //@synthesize eventQueue=_eventQueue - In the implementation block
@property (readonly) NSMutableDictionary * durationRequests;                               //@synthesize durationRequests=_durationRequests - In the implementation block
@property (readonly) NSCache * speechDuration;                                             //@synthesize speechDuration=_speechDuration - In the implementation block
@property (nonatomic,readonly) NSString * currentVoiceLanguage; 
@property (nonatomic,readonly) NSLocale * currentVoiceLocale; 
@property (nonatomic,readonly) BOOL speechMuted; 
@property (nonatomic,readonly) BOOL deviceMuted; 
@property (retain) MNNavigationAudioSession * activeNavigationSession;                     //@synthesize activeNavigationSession=_activeNavigationSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localizedStringForKey:(id)arg1 ;
+(id)sharedInstance;
+(id)defaultVoiceLanguageWithSource:(long long*)arg1 ;
-(BOOL)isPlayingAudio;
-(void)addObserver:(id)arg1 ;
-(void)prepareToAnnounce;
-(MNVoiceEventQueue *)eventQueue;
-(void)setVolume:(double)arg1 ;
-(id)init;
-(BOOL)_playBeepEvent:(id)arg1 ;
-(id<VSSpeechSynthesizerDelegate>)delegate;
-(void)warmUpTTS;
-(void)_resetAudioPlayers;
-(void)_eventProcessingTimerFired:(id)arg1 ;
-(void)_performWithActiveAudioSession:(/*^block*/id)arg1 ;
-(void)setSpeechRequest:(VSSpeechRequest *)arg1 ;
-(void)_updateCurrentVoiceLanguage;
-(void)setActiveNavigationSession:(MNNavigationAudioSession *)arg1 ;
-(void)_handleFinishedPlayingBeepWithStatusCode:(int)arg1 ;
-(void)cacheAnnouncement:(id)arg1 ;
-(void)_setGender;
-(void)stop;
-(void)_activationDebugTimerFired:(id)arg1 ;
-(void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4 ;
-(BOOL)isSpeaking;
-(BOOL)deviceMuted;
-(void)_mediaServicesWereReset:(id)arg1 ;
-(id)_localizedStringForKey:(id)arg1 ;
-(AVAudioPlayer *)rightTurnAudioPlayer;
-(void)setDelegate:(id<VSSpeechSynthesizerDelegate>)arg1 ;
-(NSCache *)speechDuration;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(void)setCurrentVoiceEvent:(MNVoiceEvent *)arg1 ;
-(id)requestForSpeech:(id)arg1 ;
-(MNNavigationAudioSession *)activeNavigationSession;
-(VSSpeechRequest *)speechRequest;
-(void)removeObserver:(id)arg1 ;
-(CARSessionStatus *)carSessionStatus;
-(void)_defaultsDidChange;
-(NSString *)currentVoiceLanguage;
-(double)_estimateDurationToSpeak:(id)arg1 ;
-(VSSpeechSynthesizer *)synthesizer;
-(void)voiceEventQueue:(id)arg1 wantsToImmediatelyPlayEvent:(id)arg2 ;
-(void)_playEvent:(id)arg1 ;
-(void)_failCurrentEventAndProcessNext;
-(void)clearAllEvents;
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2 withError:(id)arg3 ;
-(NSMutableDictionary *)durationRequests;
-(void)_handleFinishedSpeakingWithStatusCode:(int)arg1 ;
-(BOOL)_playTextEvent:(id)arg1 ;
-(void)beepIfNecessaryForShortPromptType:(unsigned long long)arg1 textToSpeak:(id)arg2 ;
-(double)durationToSpeak:(id)arg1 ;
-(void)_activateAudioSession:(/*^block*/id)arg1 ;
-(void)_setAudioSessionActive:(BOOL)arg1 ;
-(void)submitVoiceAssetWithLanguage:(id)arg1 andGender:(long long)arg2 ;
-(void)_audioInterruption:(id)arg1 ;
-(void)speak:(id)arg1 fallbackPrompt:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_setVolumeControlEnabled:(BOOL)arg1 ;
-(void)_processNextEvent;
-(void)_deactivateAudioSession;
-(BOOL)_stopCurrentEvent;
-(void)endAnnounce;
-(void)setAudioSessionProperties;
-(BOOL)speechMuted;
-(AVAudioPlayer *)leftTurnAudioPlayer;
-(MNVoiceEvent *)currentVoiceEvent;
-(void)_setMaintainInactivePersistentConnection:(BOOL)arg1 ;
-(NSLocale *)currentVoiceLocale;
-(void)dealloc;
@end

