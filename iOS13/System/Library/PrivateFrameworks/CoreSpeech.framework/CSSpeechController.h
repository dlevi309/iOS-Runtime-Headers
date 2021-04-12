/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CoreSpeech-Structs.h>
#import <libobjc.A.dylib/CSAudioConverterDelegate.h>
#import <libobjc.A.dylib/CSSpIdSpeakerRecognizerDelegate.h>
#import <libobjc.A.dylib/CSSmartSiriVolumeControllerDelegate.h>
#import <libobjc.A.dylib/CSAudioSessionProvidingDelegate.h>
#import <libobjc.A.dylib/CSAudioStreamProvidingDelegate.h>
#import <libobjc.A.dylib/CSAudioAlertProvidingDelegate.h>
#import <libobjc.A.dylib/CSAudioSessionControllerDelegate.h>
#import <libobjc.A.dylib/CSXPCClientDelegate.h>
#import <libobjc.A.dylib/CSVoiceTriggerAssetHandlerDelegate.h>
#import <libobjc.A.dylib/CSSpeechManagerDelegate.h>
#import <libobjc.A.dylib/CSContinuousVoiceTriggerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group, CSSpeechControllerDelegate, CSSpeakerIdentificationDelegate, CSLanguageDetectorDelegate, CSAudioStreamProviding, CSAudioSessionProviding, CSAudioAlertProviding, CSAudioMeterProviding, CSAudioMetricProviding, CSBargeInModeProviding, CSSpIdSpeakerRecognizer;
@class NSObject, CSAudioConverter, CSAudioSampleRateConverter, NSDictionary, CSAudioZeroCounter, CSEndpointerProxy, CSAudioRecordContext, CSAudioStream, CSPlainAudioFileWriter, CSSelectiveChannelAudioFileWriter, CSSmartSiriVolumeController, CSSpeakerIdRecognizerFactory, CSSpIdImplicitTraining, CSUserVoiceProfileStore, CSSpeechEndHostTimeEstimator, CSContinuousVoiceTrigger, CSLanguageDetector, NSUUID, CSXPCClient, CSAudioPowerMeter, CSStopRecordingOptions, NSString;

@interface CSSpeechController : NSObject <CSAudioConverterDelegate, CSSpIdSpeakerRecognizerDelegate, CSSmartSiriVolumeControllerDelegate, CSAudioSessionProvidingDelegate, CSAudioStreamProvidingDelegate, CSAudioAlertProvidingDelegate, CSAudioSessionControllerDelegate, CSXPCClientDelegate, CSVoiceTriggerAssetHandlerDelegate, CSSpeechManagerDelegate, CSContinuousVoiceTriggerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _contextResetQueue;
	CSAudioConverter* _opusAudioConverter;
	CSAudioConverter* _narrowBandOpusConverter;
	CSAudioConverter* _audioConverter;
	CSAudioSampleRateConverter* _downsampler;
	NSDictionary* _requestedRecordSettings;
	NSDictionary* _lastVoiceTriggerInfo;
	NSDictionary* _lastRTSTriggerInfo;
	CSAudioZeroCounter* _continuousZeroCounter;
	NSObject*<OS_dispatch_queue> _audibleFeedbackQueue;
	NSObject*<OS_dispatch_group> _twoShotAudibleFeedbackDecisionGroup;
	BOOL _isOpus;
	BOOL _isActivated;
	BOOL _isNarrowBand;
	BOOL _twoShotNotificationEnabled;
	BOOL _isMediaPlaying;
	BOOL _isAlarmPlaying;
	BOOL _isTimerPlaying;
	BOOL _isSoundPlaying;
	BOOL _isRemoteVADAvailableStream;
	BOOL _myriadPreventingTwoShotFeedback;
	BOOL _needsPostGain;
	BOOL _shouldUseLanguageDetectorForCurrentRequest;
	BOOL _didDeliverLastBuffer;
	BOOL _canPerformDelayedStop;
	float _cachedAvgPower;
	float _cachedPeakPower;
	id<CSSpeechControllerDelegate> _delegate;
	id<CSSpeakerIdentificationDelegate> _speakerIdDelegate;
	id<CSLanguageDetectorDelegate> _languageDetectorDelegate;
	CSEndpointerProxy* _endpointerProxy;
	CSAudioRecordContext* _audioRecordContext;
	CSAudioStream* _audioStream;
	id<CSAudioStreamProviding> _streamProvider;
	id<CSAudioSessionProviding> _sessionProvider;
	id<CSAudioAlertProviding> _alertProvider;
	id<CSAudioMeterProviding> _audioMeterProvider;
	id<CSAudioMetricProviding> _audioMetricProvider;
	id<CSBargeInModeProviding> _bargeInModeProvider;
	CSPlainAudioFileWriter* _audioFileWriter;
	CSSelectiveChannelAudioFileWriter* _serverLoggingWriter;
	CSSmartSiriVolumeController* _volumeController;
	CSSpeakerIdRecognizerFactory* _spIdFactory;
	id<CSSpIdSpeakerRecognizer> _spIdRecognizer;
	CSSpIdImplicitTraining* _voiceTriggerImplicitTraining;
	NSDictionary* _spIdUserScores;
	CSUserVoiceProfileStore* _voiceProfileStore;
	unsigned long long _activeChannel;
	CSSpeechEndHostTimeEstimator* _speechEndHostTimeEstimator;
	CSContinuousVoiceTrigger* _continuousVoiceTrigger;
	CSLanguageDetector* _languageDetector;
	NSUUID* _pendingAudioSessionActivationToken;
	/*^block*/id _pendingAudioSessionActivationCompletion;
	double _audioSessionActivationDelay;
	CSXPCClient* _xpcClient;
	CSXPCClient* _bargeInModeXPCClient;
	CSAudioPowerMeter* _powerMeter;
	CSStopRecordingOptions* _requestedStopRecordingOptions;
	unsigned long long _numTrailingSamplesAfterSchedulingStop;
	unsigned long long _maxAllowedTrailingSamplesAfterSchedulingStop;

}

@property (nonatomic,retain) CSEndpointerProxy * endpointerProxy;                                          //@synthesize endpointerProxy=_endpointerProxy - In the implementation block
@property (nonatomic,retain) CSAudioRecordContext * audioRecordContext;                                    //@synthesize audioRecordContext=_audioRecordContext - In the implementation block
@property (nonatomic,retain) CSAudioStream * audioStream;                                                  //@synthesize audioStream=_audioStream - In the implementation block
@property (nonatomic,retain) id<CSAudioStreamProviding> streamProvider;                                    //@synthesize streamProvider=_streamProvider - In the implementation block
@property (nonatomic,retain) id<CSAudioSessionProviding> sessionProvider;                                  //@synthesize sessionProvider=_sessionProvider - In the implementation block
@property (nonatomic,retain) id<CSAudioAlertProviding> alertProvider;                                      //@synthesize alertProvider=_alertProvider - In the implementation block
@property (nonatomic,retain) id<CSAudioMeterProviding> audioMeterProvider;                                 //@synthesize audioMeterProvider=_audioMeterProvider - In the implementation block
@property (nonatomic,retain) id<CSAudioMetricProviding> audioMetricProvider;                               //@synthesize audioMetricProvider=_audioMetricProvider - In the implementation block
@property (nonatomic,retain) id<CSBargeInModeProviding> bargeInModeProvider;                               //@synthesize bargeInModeProvider=_bargeInModeProvider - In the implementation block
@property (assign,nonatomic) BOOL isOpus;                                                                  //@synthesize isOpus=_isOpus - In the implementation block
@property (assign,nonatomic) BOOL isActivated;                                                             //@synthesize isActivated=_isActivated - In the implementation block
@property (assign,nonatomic) BOOL isNarrowBand;                                                            //@synthesize isNarrowBand=_isNarrowBand - In the implementation block
@property (nonatomic,retain) CSPlainAudioFileWriter * audioFileWriter;                                     //@synthesize audioFileWriter=_audioFileWriter - In the implementation block
@property (nonatomic,retain) CSSelectiveChannelAudioFileWriter * serverLoggingWriter;                      //@synthesize serverLoggingWriter=_serverLoggingWriter - In the implementation block
@property (nonatomic,retain) CSSmartSiriVolumeController * volumeController;                               //@synthesize volumeController=_volumeController - In the implementation block
@property (nonatomic,retain) CSSpeakerIdRecognizerFactory * spIdFactory;                                   //@synthesize spIdFactory=_spIdFactory - In the implementation block
@property (nonatomic,retain) id<CSSpIdSpeakerRecognizer> spIdRecognizer;                                   //@synthesize spIdRecognizer=_spIdRecognizer - In the implementation block
@property (nonatomic,retain) CSSpIdImplicitTraining * voiceTriggerImplicitTraining;                        //@synthesize voiceTriggerImplicitTraining=_voiceTriggerImplicitTraining - In the implementation block
@property (nonatomic,retain) NSDictionary * spIdUserScores;                                                //@synthesize spIdUserScores=_spIdUserScores - In the implementation block
@property (nonatomic,retain) CSUserVoiceProfileStore * voiceProfileStore;                                  //@synthesize voiceProfileStore=_voiceProfileStore - In the implementation block
@property (assign,nonatomic) unsigned long long activeChannel;                                             //@synthesize activeChannel=_activeChannel - In the implementation block
@property (assign,nonatomic) BOOL twoShotNotificationEnabled;                                              //@synthesize twoShotNotificationEnabled=_twoShotNotificationEnabled - In the implementation block
@property (assign,nonatomic) BOOL isMediaPlaying;                                                          //@synthesize isMediaPlaying=_isMediaPlaying - In the implementation block
@property (assign,nonatomic) BOOL isAlarmPlaying;                                                          //@synthesize isAlarmPlaying=_isAlarmPlaying - In the implementation block
@property (assign,nonatomic) BOOL isTimerPlaying;                                                          //@synthesize isTimerPlaying=_isTimerPlaying - In the implementation block
@property (assign,nonatomic) BOOL isSoundPlaying;                                                          //@synthesize isSoundPlaying=_isSoundPlaying - In the implementation block
@property (assign,nonatomic) BOOL isRemoteVADAvailableStream;                                              //@synthesize isRemoteVADAvailableStream=_isRemoteVADAvailableStream - In the implementation block
@property (assign,nonatomic) BOOL myriadPreventingTwoShotFeedback;                                         //@synthesize myriadPreventingTwoShotFeedback=_myriadPreventingTwoShotFeedback - In the implementation block
@property (assign,nonatomic) BOOL needsPostGain;                                                           //@synthesize needsPostGain=_needsPostGain - In the implementation block
@property (nonatomic,retain) CSSpeechEndHostTimeEstimator * speechEndHostTimeEstimator;                    //@synthesize speechEndHostTimeEstimator=_speechEndHostTimeEstimator - In the implementation block
@property (nonatomic,retain) CSContinuousVoiceTrigger * continuousVoiceTrigger;                            //@synthesize continuousVoiceTrigger=_continuousVoiceTrigger - In the implementation block
@property (nonatomic,retain) CSLanguageDetector * languageDetector;                                        //@synthesize languageDetector=_languageDetector - In the implementation block
@property (assign,nonatomic) BOOL shouldUseLanguageDetectorForCurrentRequest;                              //@synthesize shouldUseLanguageDetectorForCurrentRequest=_shouldUseLanguageDetectorForCurrentRequest - In the implementation block
@property (nonatomic,retain) NSUUID * pendingAudioSessionActivationToken;                                  //@synthesize pendingAudioSessionActivationToken=_pendingAudioSessionActivationToken - In the implementation block
@property (nonatomic,copy) id pendingAudioSessionActivationCompletion;                                     //@synthesize pendingAudioSessionActivationCompletion=_pendingAudioSessionActivationCompletion - In the implementation block
@property (assign,nonatomic) double audioSessionActivationDelay;                                           //@synthesize audioSessionActivationDelay=_audioSessionActivationDelay - In the implementation block
@property (nonatomic,retain) CSXPCClient * xpcClient;                                                      //@synthesize xpcClient=_xpcClient - In the implementation block
@property (nonatomic,retain) CSXPCClient * bargeInModeXPCClient;                                           //@synthesize bargeInModeXPCClient=_bargeInModeXPCClient - In the implementation block
@property (assign,nonatomic) float cachedAvgPower;                                                         //@synthesize cachedAvgPower=_cachedAvgPower - In the implementation block
@property (assign,nonatomic) float cachedPeakPower;                                                        //@synthesize cachedPeakPower=_cachedPeakPower - In the implementation block
@property (nonatomic,retain) CSAudioPowerMeter * powerMeter;                                               //@synthesize powerMeter=_powerMeter - In the implementation block
@property (assign,nonatomic) BOOL didDeliverLastBuffer;                                                    //@synthesize didDeliverLastBuffer=_didDeliverLastBuffer - In the implementation block
@property (assign,nonatomic) BOOL canPerformDelayedStop;                                                   //@synthesize canPerformDelayedStop=_canPerformDelayedStop - In the implementation block
@property (nonatomic,retain) CSStopRecordingOptions * requestedStopRecordingOptions;                       //@synthesize requestedStopRecordingOptions=_requestedStopRecordingOptions - In the implementation block
@property (assign,nonatomic) unsigned long long numTrailingSamplesAfterSchedulingStop;                     //@synthesize numTrailingSamplesAfterSchedulingStop=_numTrailingSamplesAfterSchedulingStop - In the implementation block
@property (assign,nonatomic) unsigned long long maxAllowedTrailingSamplesAfterSchedulingStop;              //@synthesize maxAllowedTrailingSamplesAfterSchedulingStop=_maxAllowedTrailingSamplesAfterSchedulingStop - In the implementation block
@property (assign,nonatomic,__weak) id<CSSpeechControllerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CSSpeakerIdentificationDelegate> speakerIdDelegate;                 //@synthesize speakerIdDelegate=_speakerIdDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CSLanguageDetectorDelegate> languageDetectorDelegate;               //@synthesize languageDetectorDelegate=_languageDetectorDelegate - In the implementation block
@property (assign,nonatomic) BOOL duckOthersOption; 
@property (nonatomic,readonly) id<CSEndpointAnalyzer> endpointAnalyzer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
+(BOOL)isSmartSiriVolumeAvailable;
-(id)init;
-(id<CSSpeechControllerDelegate>)delegate;
-(void)setDelegate:(id<CSSpeechControllerDelegate>)arg1 ;
-(void)reset;
-(id)metrics;
-(void)preheat;
-(BOOL)isActivated;
-(BOOL)startRecording:(id*)arg1 ;
-(void)stopRecording;
-(BOOL)prepareRecordWithSettings:(id)arg1 error:(id*)arg2 ;
-(void)prewarmAudioSession;
-(BOOL)setRecordBufferDuration:(double)arg1 ;
-(BOOL)isMediaPlaying;
-(BOOL)isRecording;
-(unsigned long long)activeChannel;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(id)recordRoute;
-(void)setVolumeController:(CSSmartSiriVolumeController *)arg1 ;
-(CSSmartSiriVolumeController *)volumeController;
-(void)releaseAudioSession;
-(void)releaseAudioSession:(unsigned long long)arg1 ;
-(BOOL)setCurrentContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 ;
-(BOOL)playAlertSoundForType:(long long)arg1 ;
-(void)resetEndpointer;
-(BOOL)playRecordStartingAlertAndResetEndpointer;
-(BOOL)startRecordingWithSettings:(id)arg1 error:(id*)arg2 ;
-(id)recordSettings;
-(double)getRecordBufferDuration;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(void)updateMeters;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(unsigned long long)alertStartTime;
-(id)playbackRoute;
-(id)voiceTriggerInfo;
-(void)setSynchronousCallbackEnabled:(BOOL)arg1 ;
-(void)setDuckOthersOption:(BOOL)arg1 ;
-(BOOL)duckOthersOption;
-(double)lastEndOfVoiceActivityTime;
-(CSLanguageDetector *)languageDetector;
-(CSXPCClient *)xpcClient;
-(void)setXpcClient:(CSXPCClient *)arg1 ;
-(void)setSessionProvider:(id<CSAudioSessionProviding>)arg1 ;
-(id<CSAudioSessionProviding>)sessionProvider;
-(CSAudioStream *)audioStream;
-(void)setAudioStream:(CSAudioStream *)arg1 ;
-(void)setIsActivated:(BOOL)arg1 ;
-(void)voiceTriggerAssetHandler:(id)arg1 didChangeCachedAsset:(id)arg2 ;
-(void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2 ;
-(void)CSXPCClient:(id)arg1 didDisconnect:(BOOL)arg2 ;
-(void)CSMediaPlayingMonitor:(id)arg1 didReceiveMediaPlayingChanged:(long long)arg2 ;
-(void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(long long)arg2 ;
-(void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(long long)arg2 ;
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2 ;
-(void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2 ;
-(void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2 ;
-(void)keywordDetectorDidDetectKeyword;
-(BOOL)isRTSTriggered;
-(BOOL)isHearstVoiceTriggered;
-(void)continuousVoiceTrigger:(id)arg1 detectedSilenceAfterVoiceTriggerAt:(double)arg2 ;
-(void)continuousVoiceTrigger:(id)arg1 detectedVoiceTriggerResult:(id)arg2 ;
-(CSPlainAudioFileWriter *)audioFileWriter;
-(void)setAudioFileWriter:(CSPlainAudioFileWriter *)arg1 ;
-(id<CSEndpointAnalyzer>)endpointAnalyzer;
-(void)stopEndpointer;
-(void)processServerEndpointFeatures:(id)arg1 ;
-(void)updateEndpointerThreshold:(float)arg1 ;
-(void)updateEndpointerDelayedTrigger:(BOOL)arg1 ;
-(void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(/*^block*/id)arg2 ;
-(id)endpointerModelVersion;
-(void)setLanguageDetector:(CSLanguageDetector *)arg1 ;
-(BOOL)isBuiltInVoiceTriggered;
-(BOOL)isJarvisVoiceTriggered;
-(CSAudioRecordContext *)audioRecordContext;
-(void)setAudioRecordContext:(CSAudioRecordContext *)arg1 ;
-(void)speakerRecognizer:(id)arg1 hasSpeakerIdInfo:(id)arg2 ;
-(void)speakerRecognizerFinishedProcessing:(id)arg1 withFinalSpeakerIdInfo:(id)arg2 ;
-(CSSpIdImplicitTraining *)voiceTriggerImplicitTraining;
-(void)setVoiceTriggerImplicitTraining:(CSSpIdImplicitTraining *)arg1 ;
-(void)startController;
-(BOOL)twoShotNotificationEnabled;
-(long long)_currentAudioRecorderSampleRate;
-(void)_initializeMediaPlayingState;
-(void)_initializeAlarmState;
-(void)_initializeTimerState;
-(void)_setSoundPlayingState;
-(id)_contextToString:(id)arg1 ;
-(BOOL)_shouldResetContextAtPrepare;
-(BOOL)_fetchAudioProviderWithContext:(id)arg1 ;
-(BOOL)_shouldFetchVoiceTriggerInfo;
-(BOOL)_shouldFetchRaiseToSpeakInfo;
-(BOOL)_fetchLastTriggerInfo;
-(BOOL)_activateAudioSessionWithDelay:(double)arg1 error:(id*)arg2 ;
-(BOOL)_activateAudioSession:(id*)arg1 forRetry:(BOOL)arg2 ;
-(id<CSAudioStreamProviding>)streamProvider;
-(BOOL)isNarrowBand;
-(void)_setupDownsamplerIfNeeded;
-(BOOL)_setupAudioConverter:(BOOL)arg1 isNarrowBand:(BOOL)arg2 ;
-(void)_createAudioPowerMeterIfNeeded;
-(BOOL)_isDelayedDuckingSupportedContext;
-(void)_scheduleActivateAudioSessionWithDelay:(double)arg1 forReason:(id)arg2 validator:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_cancelPendingAudioSessionActivateForReason:(id)arg1 ;
-(void)_createBargeInModeProviderFromXPCIfNeeded;
-(id<CSBargeInModeProviding>)bargeInModeProvider;
-(void)_enableBargeInMode:(BOOL)arg1 ;
-(void)_teardownAudioProviderIfNeeded;
-(void)_tearDownBargeInModeProviderIfNeeded;
-(id)_fetchFallbackAudioSessionReleaseProviding;
-(BOOL)_isRecordRouteBuiltinMic;
-(BOOL)_shouldSetStartSampleCount;
-(BOOL)_shouldSetStartSampleCountForRTS;
-(void)_setupSpeakerId;
-(void)_startPhaticDecision;
-(BOOL)_shouldUseLanguageDetector:(id)arg1 ;
-(void)_createLanguageDetectorIfNeeded;
-(id)_languageDetectorOptionFromSettings:(id)arg1 ;
-(id<CSLanguageDetectorDelegate>)languageDetectorDelegate;
-(BOOL)_canPlayPhaticDuringMediaPlayback;
-(BOOL)_shouldSchedulePhaticAtStartRecording;
-(float)_scheduledPhaticDelay;
-(unsigned long long)_phaticPlaybackReason;
-(void)_didStopForReason:(long long)arg1 ;
-(BOOL)canPerformDelayedStop;
-(id)recordDeviceInfo;
-(void)_deviceAudioLoggingWithFileWriter:(id)arg1 ;
-(void)setCachedAvgPower:(float)arg1 ;
-(void)setCachedPeakPower:(float)arg1 ;
-(id<CSAudioAlertProviding>)alertProvider;
-(id<CSAudioMeterProviding>)audioMeterProvider;
-(float)cachedPeakPower;
-(float)cachedAvgPower;
-(void)_performPendingAudioSessionActivateForReason:(id)arg1 ;
-(id<CSAudioMetricProviding>)audioMetricProvider;
-(BOOL)_createAudioProviderFromXPCWithContext:(id)arg1 ;
-(void)setStreamProvider:(id<CSAudioStreamProviding>)arg1 ;
-(void)setAlertProvider:(id<CSAudioAlertProviding>)arg1 ;
-(void)setAudioMeterProvider:(id<CSAudioMeterProviding>)arg1 ;
-(void)setAudioMetricProvider:(id<CSAudioMetricProviding>)arg1 ;
-(void)setBargeInModeProvider:(id<CSBargeInModeProviding>)arg1 ;
-(id)_getSpeechIdentifier;
-(BOOL)isSmartSiriVolumeAvailable;
-(void)audioConverterDidConvertPackets:(id)arg1 packets:(id)arg2 durationInSec:(float)arg3 timestamp:(unsigned long long)arg4 ;
-(void)smartSiriVolumeControllerDetectedSystemVolumeChange:(id)arg1 withVolume:(float)arg2 forReason:(unsigned long long)arg3 ;
-(void)audioSessionProviderBeginInterruption:(id)arg1 ;
-(void)audioSessionProviderBeginInterruption:(id)arg1 withContext:(id)arg2 ;
-(void)audioSessionProviderEndInterruption:(id)arg1 ;
-(void)audioSessionProvider:(id)arg1 willSetAudioSessionActive:(BOOL)arg2 ;
-(void)audioSessionProvider:(id)arg1 didSetAudioSessionActive:(BOOL)arg2 ;
-(void)audioSessionProvider:(id)arg1 providerInvalidated:(BOOL)arg2 ;
-(void)audioSessionProvider:(id)arg1 didChangeContext:(BOOL)arg2 ;
-(void)audioAlertProvidingDidFinishAlertPlayback:(id)arg1 ofType:(long long)arg2 error:(id)arg3 ;
-(BOOL)initializeRecordSessionWithContext:(id)arg1 ;
-(void)resetAudioSession;
-(AudioStreamBasicDescription)getLPCMAudioStreamBasicDescription;
-(void)stopRecordingWithOptions:(id)arg1 ;
-(float)peakPowerForOutputReference;
-(float)averagePowerForOutputReference;
-(unsigned long long)outputReferenceChannel;
-(void)setEndpointAnalyzerDelegate:(id)arg1 ;
-(float)getSmartSiriVolume;
-(void)languageDetectorSetMostRecentRecognitionLanguage:(id)arg1 ;
-(void)cancelCurrentLanguageDetectorRequest;
-(void)setLanguageDetectorInteractionID:(id)arg1 ;
-(void)beginWaitingForMyriad;
-(void)endWaitingForMyriadWithDecision:(unsigned long long)arg1 ;
-(id<CSSpeakerIdentificationDelegate>)speakerIdDelegate;
-(void)setSpeakerIdDelegate:(id<CSSpeakerIdentificationDelegate>)arg1 ;
-(void)setLanguageDetectorDelegate:(id<CSLanguageDetectorDelegate>)arg1 ;
-(CSEndpointerProxy *)endpointerProxy;
-(void)setEndpointerProxy:(CSEndpointerProxy *)arg1 ;
-(BOOL)isOpus;
-(void)setIsOpus:(BOOL)arg1 ;
-(void)setIsNarrowBand:(BOOL)arg1 ;
-(CSSelectiveChannelAudioFileWriter *)serverLoggingWriter;
-(void)setServerLoggingWriter:(CSSelectiveChannelAudioFileWriter *)arg1 ;
-(CSSpeakerIdRecognizerFactory *)spIdFactory;
-(void)setSpIdFactory:(CSSpeakerIdRecognizerFactory *)arg1 ;
-(id<CSSpIdSpeakerRecognizer>)spIdRecognizer;
-(void)setSpIdRecognizer:(id<CSSpIdSpeakerRecognizer>)arg1 ;
-(NSDictionary *)spIdUserScores;
-(void)setSpIdUserScores:(NSDictionary *)arg1 ;
-(CSUserVoiceProfileStore *)voiceProfileStore;
-(void)setVoiceProfileStore:(CSUserVoiceProfileStore *)arg1 ;
-(void)setTwoShotNotificationEnabled:(BOOL)arg1 ;
-(void)setIsMediaPlaying:(BOOL)arg1 ;
-(BOOL)isAlarmPlaying;
-(void)setIsAlarmPlaying:(BOOL)arg1 ;
-(BOOL)isTimerPlaying;
-(void)setIsTimerPlaying:(BOOL)arg1 ;
-(BOOL)isSoundPlaying;
-(void)setIsSoundPlaying:(BOOL)arg1 ;
-(BOOL)isRemoteVADAvailableStream;
-(void)setIsRemoteVADAvailableStream:(BOOL)arg1 ;
-(BOOL)myriadPreventingTwoShotFeedback;
-(void)setMyriadPreventingTwoShotFeedback:(BOOL)arg1 ;
-(BOOL)needsPostGain;
-(void)setNeedsPostGain:(BOOL)arg1 ;
-(CSSpeechEndHostTimeEstimator *)speechEndHostTimeEstimator;
-(void)setSpeechEndHostTimeEstimator:(CSSpeechEndHostTimeEstimator *)arg1 ;
-(CSContinuousVoiceTrigger *)continuousVoiceTrigger;
-(void)setContinuousVoiceTrigger:(CSContinuousVoiceTrigger *)arg1 ;
-(BOOL)shouldUseLanguageDetectorForCurrentRequest;
-(void)setShouldUseLanguageDetectorForCurrentRequest:(BOOL)arg1 ;
-(NSUUID *)pendingAudioSessionActivationToken;
-(void)setPendingAudioSessionActivationToken:(NSUUID *)arg1 ;
-(id)pendingAudioSessionActivationCompletion;
-(void)setPendingAudioSessionActivationCompletion:(id)arg1 ;
-(double)audioSessionActivationDelay;
-(void)setAudioSessionActivationDelay:(double)arg1 ;
-(CSXPCClient *)bargeInModeXPCClient;
-(void)setBargeInModeXPCClient:(CSXPCClient *)arg1 ;
-(CSAudioPowerMeter *)powerMeter;
-(void)setPowerMeter:(CSAudioPowerMeter *)arg1 ;
-(BOOL)didDeliverLastBuffer;
-(void)setDidDeliverLastBuffer:(BOOL)arg1 ;
-(void)setCanPerformDelayedStop:(BOOL)arg1 ;
-(CSStopRecordingOptions *)requestedStopRecordingOptions;
-(void)setRequestedStopRecordingOptions:(CSStopRecordingOptions *)arg1 ;
-(unsigned long long)numTrailingSamplesAfterSchedulingStop;
-(void)setNumTrailingSamplesAfterSchedulingStop:(unsigned long long)arg1 ;
-(unsigned long long)maxAllowedTrailingSamplesAfterSchedulingStop;
-(void)setMaxAllowedTrailingSamplesAfterSchedulingStop:(unsigned long long)arg1 ;
@end

