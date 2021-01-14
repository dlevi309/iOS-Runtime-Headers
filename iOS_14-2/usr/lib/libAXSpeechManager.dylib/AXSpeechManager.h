/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAXSpeechManager.dylib
*/

#import <libAXSpeechManager.dylib/libAXSpeechManager.dylib-Structs.h>
#import <libobjc.A.dylib/TTSSpeechSynthesizerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, TTSSpeechSynthesizer, AXSpeechThread, NSObject, NSLock, AXSpeechAction, NSString, AVAudioSession, NSNumber, AXDispatchTimer, NSArray;

@interface AXSpeechManager : NSObject <TTSSpeechSynthesizerDelegate> {

	NSMutableArray* _speechQueue;
	TTSSpeechSynthesizer* _synthesizer;
	AXSpeechThread* _runThread;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	BOOL _isSpeaking;
	BOOL _speechEnabled;
	BOOL _audioSessionObserversEnabled;
	BOOL _speechThreadFinished;
	NSLock* _speechThreadQueueLock;
	BOOL _isPaused;
	BOOL _isInAudioInterruption;
	BOOL _supportsAccurateWordCallbacks;
	BOOL _showControlCenterControls;
	BOOL _usesAuxiliarySession;
	BOOL _wasSpeakingBeforeAudioInterruption;
	BOOL _didRequestStartSpeakingDuringAudioInterruption;
	BOOL _didRequestPauseSpeakingDuringAudioInterruption;
	BOOL _didRequestResumeSpeakingDuringAudioInterruption;
	BOOL _shouldHandleAudioInterruptions;
	unsigned _audioQueueFlags;
	AXSpeechAction* _requestedActionDuringAudioInterruption;
	unsigned long long _audioSessionCategoryOptions;
	NSString* _audioSessionCategory;
	unsigned long long _setActiveOptions;
	AVAudioSession* _audioSession;
	double _audioSessionInactiveTimeout;
	/*^block*/id _requestWillStart;
	NSNumber* _originalSpeechRateForJobOverride;
	AXDispatchTimer* _audioDeactivatorTimer;
	double _audioInterruptionStartedTime;

}

@property (nonatomic,retain) NSNumber * originalSpeechRateForJobOverride;                          //@synthesize originalSpeechRateForJobOverride=_originalSpeechRateForJobOverride - In the implementation block
@property (assign,nonatomic) BOOL isPaused;                                                        //@synthesize isPaused=_isPaused - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * audioDeactivatorTimer;                              //@synthesize audioDeactivatorTimer=_audioDeactivatorTimer - In the implementation block
@property (assign,nonatomic) BOOL wasSpeakingBeforeAudioInterruption;                              //@synthesize wasSpeakingBeforeAudioInterruption=_wasSpeakingBeforeAudioInterruption - In the implementation block
@property (assign,nonatomic) BOOL didRequestStartSpeakingDuringAudioInterruption;                  //@synthesize didRequestStartSpeakingDuringAudioInterruption=_didRequestStartSpeakingDuringAudioInterruption - In the implementation block
@property (assign,nonatomic) BOOL didRequestPauseSpeakingDuringAudioInterruption;                  //@synthesize didRequestPauseSpeakingDuringAudioInterruption=_didRequestPauseSpeakingDuringAudioInterruption - In the implementation block
@property (assign,nonatomic) BOOL didRequestResumeSpeakingDuringAudioInterruption;                 //@synthesize didRequestResumeSpeakingDuringAudioInterruption=_didRequestResumeSpeakingDuringAudioInterruption - In the implementation block
@property (assign,nonatomic) double audioInterruptionStartedTime;                                  //@synthesize audioInterruptionStartedTime=_audioInterruptionStartedTime - In the implementation block
@property (nonatomic,retain) AVAudioSession * audioSession;                                        //@synthesize audioSession=_audioSession - In the implementation block
@property (assign,nonatomic) BOOL isInAudioInterruption;                                           //@synthesize isInAudioInterruption=_isInAudioInterruption - In the implementation block
@property (nonatomic,retain) AXSpeechAction * requestedActionDuringAudioInterruption;              //@synthesize requestedActionDuringAudioInterruption=_requestedActionDuringAudioInterruption - In the implementation block
@property (assign,nonatomic) BOOL shouldHandleAudioInterruptions;                                  //@synthesize shouldHandleAudioInterruptions=_shouldHandleAudioInterruptions - In the implementation block
@property (assign,nonatomic) BOOL speechEnabled;                                                   //@synthesize speechEnabled=_speechEnabled - In the implementation block
@property (nonatomic,readonly) BOOL showControlCenterControls;                                     //@synthesize showControlCenterControls=_showControlCenterControls - In the implementation block
@property (nonatomic,readonly) BOOL isSpeaking; 
@property (assign,nonatomic) unsigned audioQueueFlags;                                             //@synthesize audioQueueFlags=_audioQueueFlags - In the implementation block
@property (assign,nonatomic) BOOL usesAuxiliarySession;                                            //@synthesize usesAuxiliarySession=_usesAuxiliarySession - In the implementation block
@property (assign,nonatomic) unsigned long long setActiveOptions;                                  //@synthesize setActiveOptions=_setActiveOptions - In the implementation block
@property (nonatomic,retain) NSString * audioSessionCategory;                                      //@synthesize audioSessionCategory=_audioSessionCategory - In the implementation block
@property (assign,nonatomic) unsigned long long audioSessionCategoryOptions;                       //@synthesize audioSessionCategoryOptions=_audioSessionCategoryOptions - In the implementation block
@property (nonatomic,retain) NSArray * outputChannels; 
@property (assign,nonatomic) double audioSessionInactiveTimeout;                                   //@synthesize audioSessionInactiveTimeout=_audioSessionInactiveTimeout - In the implementation block
@property (nonatomic,copy) id requestWillStart;                                                    //@synthesize requestWillStart=_requestWillStart - In the implementation block
@property (assign,nonatomic) BOOL supportsAccurateWordCallbacks;                                   //@synthesize supportsAccurateWordCallbacks=_supportsAccurateWordCallbacks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)availableVoices;
+(id)availableLanguageCodes;
+(id)currentLanguageCode;
+(id)audioFileSettingsForVoice:(id)arg1 ;
+(BOOL)currentProcessAllowedToSaveVoiceInfo;
+(id)availableVoices:(BOOL)arg1 ;
+(id)_resetAvailableVoices:(BOOL)arg1 ;
+(id)spellOutMarkupString:(id)arg1 string:(id)arg2 ;
+(id)pauseMarkupString:(id)arg1 ;
+(id)_resetAvailableVoices;
+(URegularExpressionRef)createRegularExpressionFromString:(id)arg1 ;
+(id)matchedRangesForString:(id)arg1 withRegularExpression:(URegularExpressionRef)arg2 ;
+(id)remapLanguageCode:(id)arg1 ;
+(void)test_actionStartTap:(/*^block*/id)arg1 ;
+(void)test_setUnitTestMode:(BOOL)arg1 ;
+(void)test_setAvailableVoices:(id)arg1 ;
-(BOOL)speechEnabled;
-(void)tearDown;
-(NSString *)audioSessionCategory;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSArray *)outputChannels;
-(void)setOutputChannels:(NSArray *)arg1 ;
-(id)init;
-(void)setAudioSessionCategory:(NSString *)arg1 ;
-(void)setIsPaused:(BOOL)arg1 ;
-(BOOL)isSpeaking;
-(void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2 ;
-(void)stopSpeaking;
-(void)setSpeechEnabled:(BOOL)arg1 ;
-(void)speechSynthesizer:(id)arg1 didPauseSpeakingRequest:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didContinueSpeakingRequest:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2 forRequest:(id)arg3 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 withError:(id)arg4 ;
-(void)setAudioSession:(AVAudioSession *)arg1 ;
-(void)_tearDown;
-(void)continueSpeaking;
-(void)_didBeginInterruption;
-(unsigned long long)audioSessionCategoryOptions;
-(void)pauseSpeaking:(int)arg1 ;
-(BOOL)isPaused;
-(AVAudioSession *)audioSession;
-(void)setAudioSessionInactiveTimeout:(double)arg1 ;
-(void)setSetActiveOptions:(unsigned long long)arg1 ;
-(void)setAudioSessionCategoryOptions:(unsigned long long)arg1 ;
-(void)stopSpeaking:(int)arg1 ;
-(void)dealloc;
-(double)audioSessionInactiveTimeout;
-(void)_initialize;
-(void)setAudioQueueFlags:(unsigned)arg1 ;
-(BOOL)supportsAccurateWordCallbacks;
-(void)setSupportsAccurateWordCallbacks:(BOOL)arg1 ;
-(unsigned)audioQueueFlags;
-(void)setShouldHandleAudioInterruptions:(BOOL)arg1 ;
-(void)_updateAuxiliarySession;
-(void)handleAudioSessionObservers:(BOOL)arg1 ;
-(void)_handleAudioInterruption:(id)arg1 ;
-(void)_handleMediaServicesWereLost:(id)arg1 ;
-(void)_handleMediaServicesWereReset:(id)arg1 ;
-(AXDispatchTimer *)audioDeactivatorTimer;
-(BOOL)shouldHandleAudioInterruptions;
-(void)_updateAudioSessionProperties;
-(void)_didEndInterruption;
-(void)setAudioInterruptionStartedTime:(double)arg1 ;
-(void)setWasSpeakingBeforeAudioInterruption:(BOOL)arg1 ;
-(void)setDidRequestStartSpeakingDuringAudioInterruption:(BOOL)arg1 ;
-(void)setDidRequestPauseSpeakingDuringAudioInterruption:(BOOL)arg1 ;
-(void)setDidRequestResumeSpeakingDuringAudioInterruption:(BOOL)arg1 ;
-(void)setRequestedActionDuringAudioInterruption:(AXSpeechAction *)arg1 ;
-(void)setIsInAudioInterruption:(BOOL)arg1 ;
-(BOOL)didRequestStartSpeakingDuringAudioInterruption;
-(AXSpeechAction *)requestedActionDuringAudioInterruption;
-(void)dispatchSpeechAction:(id)arg1 ;
-(BOOL)wasSpeakingBeforeAudioInterruption;
-(BOOL)didRequestPauseSpeakingDuringAudioInterruption;
-(BOOL)didRequestResumeSpeakingDuringAudioInterruption;
-(void)_resetInterruptionTracking;
-(BOOL)_enqueueSelectorOnSpeechThread:(SEL)arg1 object:(id)arg2 waitUntilDone:(BOOL)arg3 ;
-(void)_updateUserSubstitutions;
-(void)_startNextSpeechJob;
-(unsigned long long)setActiveOptions;
-(BOOL)isInAudioInterruption;
-(double)audioInterruptionStartedTime;
-(id)_phonemeSubstitutionsForAction:(id)arg1 ;
-(id)requestWillStart;
-(void)clearSpeechQueue;
-(void)_clearSpeechQueue;
-(void)_dispatchSpeechAction:(id)arg1 ;
-(void)_pauseSpeaking:(id)arg1 ;
-(void)_continueSpeaking;
-(void)_stopSpeaking:(id)arg1 ;
-(void)_isSpeaking:(id)arg1 ;
-(void)_processDidStartCallback:(id)arg1 ;
-(void)_speechJobFinished:(BOOL)arg1 action:(id)arg2 ;
-(void)__speechJobFinished:(id)arg1 ;
-(void)_processDidPauseCallback:(id)arg1 ;
-(void)_processDidContinueCallback:(id)arg1 ;
-(void)_processWillSpeechRange:(id)arg1 ;
-(void)setUsesAuxiliarySession:(BOOL)arg1 ;
-(id)externalVoiceIdentifierUsedForLanguage:(id)arg1 ;
-(id)voiceIdentifierUsedForLanguage:(id)arg1 ;
-(BOOL)showControlCenterControls;
-(BOOL)usesAuxiliarySession;
-(void)setRequestWillStart:(id)arg1 ;
-(NSNumber *)originalSpeechRateForJobOverride;
-(void)setOriginalSpeechRateForJobOverride:(NSNumber *)arg1 ;
-(void)setAudioDeactivatorTimer:(AXDispatchTimer *)arg1 ;
@end

