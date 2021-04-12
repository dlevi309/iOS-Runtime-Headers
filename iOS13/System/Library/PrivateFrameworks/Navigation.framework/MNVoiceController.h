/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedInstance;
+(id)localizedStringForKey:(id)arg1 ;
+(id)defaultVoiceLanguageWithSource:(long long*)arg1 ;
-(id)init;
-(void)dealloc;
-(id<VSSpeechSynthesizerDelegate>)delegate;
-(void)setDelegate:(id<VSSpeechSynthesizerDelegate>)arg1 ;
-(void)stop;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_defaultsDidChange;
-(MNVoiceEventQueue *)eventQueue;
-(void)_processNextEvent;
-(void)setVolume:(double)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(VSSpeechRequest *)speechRequest;
-(void)setSpeechRequest:(VSSpeechRequest *)arg1 ;
-(void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2 withError:(id)arg3 ;
-(BOOL)isSpeaking;
-(VSSpeechSynthesizer *)synthesizer;
-(void)_mediaServicesWereReset:(id)arg1 ;
-(NSCache *)speechDuration;
-(NSMutableDictionary *)durationRequests;
-(double)durationToSpeak:(id)arg1 ;
-(void)prepareToAnnounce;
-(NSString *)currentVoiceLanguage;
-(MNNavigationAudioSession *)activeNavigationSession;
-(void)setAudioSessionProperties;
-(void)speak:(id)arg1 fallbackPrompt:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)deviceMuted;
-(void)beepIfNecessaryForShortPromptType:(unsigned long long)arg1 textToSpeak:(id)arg2 ;
-(void)clearAllEvents;
-(void)setActiveNavigationSession:(MNNavigationAudioSession *)arg1 ;
-(BOOL)speechMuted;
-(void)voiceEventQueue:(id)arg1 wantsToImmediatelyPlayEvent:(id)arg2 ;
-(void)_updateCurrentVoiceLanguage;
-(id)_localizedStringForKey:(id)arg1 ;
-(void)submitVoiceAssetWithLanguage:(id)arg1 andGender:(long long)arg2 ;
-(double)_estimateDurationToSpeak:(id)arg1 ;
-(id)requestForSpeech:(id)arg1 ;
-(BOOL)_stopCurrentEvent;
-(void)_deactivateAudioSession;
-(AVAudioPlayer *)leftTurnAudioPlayer;
-(AVAudioPlayer *)rightTurnAudioPlayer;
-(MNVoiceEvent *)currentVoiceEvent;
-(void)setCurrentVoiceEvent:(MNVoiceEvent *)arg1 ;
-(void)_handleFinishedSpeakingWithStatusCode:(int)arg1 ;
-(void)cacheAnnouncement:(id)arg1 ;
-(BOOL)isPlayingAudio;
-(void)_handleFinishedPlayingBeepWithStatusCode:(int)arg1 ;
-(void)_playEvent:(id)arg1 ;
-(void)_performWithActiveAudioSession:(/*^block*/id)arg1 ;
-(BOOL)_playTextEvent:(id)arg1 ;
-(BOOL)_playBeepEvent:(id)arg1 ;
-(void)_setGender;
-(void)_eventProcessingTimerFired:(id)arg1 ;
-(void)_failCurrentEventAndProcessNext;
-(void)_setMaintainInactivePersistentConnection:(BOOL)arg1 ;
-(void)_activateAudioSession:(/*^block*/id)arg1 ;
-(void)_setAudioSessionActive:(BOOL)arg1 ;
-(void)_activationDebugTimerFired:(id)arg1 ;
-(void)_audioInterruption:(id)arg1 ;
-(void)_setVolumeControlEnabled:(BOOL)arg1 ;
-(void)_resetAudioPlayers;
-(CARSessionStatus *)carSessionStatus;
-(NSLocale *)currentVoiceLocale;
-(void)warmUpTTS;
-(void)endAnnounce;
@end

