/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <VoiceTrigger/VoiceTrigger-Structs.h>
#import <libobjc.A.dylib/VTTextDependentSpeakerRecognizerDelegate.h>
#import <libobjc.A.dylib/VTAssetMonitorDelegate.h>
#import <libobjc.A.dylib/VTLanguageCodeUpdateMonitorDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class VTAnalyzerNDAPI, NSArray, NSString, VTAudioCircularBuffer, NSDateFormatter, NSObject, VTSiriNotifications, VTTranscriber, VTTextDependentSpeakerRecognizer, NSMutableArray, VTCorruptDetector, NSData, NSDictionary, NSDate, VTPhraseSpotterEnabledPolicy, VTAudioFileReader, VTBiometricMatchMonitor;

@interface VTPhraseSpotter : NSObject <VTTextDependentSpeakerRecognizerDelegate, VTAssetMonitorDelegate, VTLanguageCodeUpdateMonitorDelegate> {

	double _hardwareSampleRate;
	VTAnalyzerNDAPI* _analyzer;
	NSArray* _triggerPhrases;
	/*^block*/id _readyCompletion;
	/*^block*/id _readyForAnalyze;
	int _firstUnlockAfterRebootNotificationToken;
	BOOL _isMaximized;
	int _numFramesFromPreTrigger;
	double _ndapiThreshold;
	double _ndapiThresholdSecondChance;
	double _ndapiThresholdLogNearMisses;
	double _combinedThreshold;
	double _combinedThresholdSecondChance;
	double _combinedThresholdLogNearMisses;
	double _threshold;
	double _thresholdSecondChance;
	double _effectiveThreshold;
	BOOL _audioLoggingEnabled;
	double _thresholdLogNearMisses;
	NSString* _audioFileDir;
	BOOL _secondPassAudioLoggingEnabled;
	BOOL _audioCaptureRequested;
	NSString* _languageCode;
	NSString* _configPath;
	NSString* _configData;
	NSString* _configLanguageCode;
	NSString* _configVersion;
	NSString* _resourcePath;
	double _triggerThreshold;
	unsigned _extraSamplesAtStart;
	double _secondPassTrailingTime;
	BOOL _isRunningSATEnrollment;
	BOOL _isRunningSATDetection;
	double _thresholdSAT;
	BOOL _implicitlyTrained;
	NSString* _lastImplicitlyTrainedAudioFile;
	unsigned long long _retrainNumExplicitUtt;
	unsigned long long _retrainNumImplicitUtt;
	NSString* _retrainSamplingPolicy;
	double _retrainThresholdTrigger;
	double _retrainThresholdSAT;
	VTAudioCircularBuffer* _audioBuffer;
	NSDateFormatter* _formatter;
	BOOL _doSuperVectorSecondaryTest;
	double _thresholdPreSuperVector;
	BOOL _isSuperVectorNeeded;
	unsigned _samplecount;
	unsigned _samplecountAtLastTriggerStart;
	unsigned _samplecountAtLastTriggerEnd;
	unsigned _samplecountAtRealTriggerStart;
	unsigned _sampleCountAtFirstChance;
	unsigned _lastEventEnd;
	int _nearMissLogPreDelayTimer;
	BOOL _nearMissLogPending;
	BOOL _firstChanceDetected;
	double _firstChanceDetectionTime;
	BOOL _isSecondChanceEffective;
	double _lastUptime;
	double _lastDowntime;
	double _lastScore;
	BOOL _earlyDetected;
	double _earlyDetectTime;
	NSObject*<OS_dispatch_queue> _loggingQueue;
	NSObject*<OS_dispatch_queue> _ndetectQueue;
	int _heartbeatCounter;
	int _languageCodeChangedNotificationToken;
	NSObject*<OS_dispatch_queue> _assetChangedQueue;
	BOOL _registeredForPhraseSpotterNotification;
	BOOL _phraseSpotterEnabled;
	BOOL _registeredforVoiceTriggerEnabledNotification;
	BOOL _voiceTriggerEnabled;
	BOOL _phraseSpotterBypassed;
	BOOL _isSecondPass;
	int _secondPassResetTimer;
	BOOL _secondPassAccepted;
	double _secondPassBestScore;
	BOOL _didWakeAP;
	BOOL _secondPassTriggered;
	BOOL _secondPassStopSent;
	/*^block*/id _assetChangedCallback;
	VTSiriNotifications* siriNotifications;
	NSObject*<OS_dispatch_queue> _desQueue;
	BOOL _useRecognizer;
	BOOL _isRunningRecognizer;
	BOOL _isRecognitionResultPending;
	BOOL _firstRecognitionResultReceived;
	BOOL _useFallbackThresholdUponTimeout;
	BOOL _useKeywordSpotting;
	NSString* _recognizerConfigName;
	double _recognizerThresholdOffset;
	double _recognizerWaitTime;
	double _recognizerScore;
	double _recognizerScoreScaleFactor;
	NSString* _triggerTokens;
	VTTranscriber* _transcriber;
	VTTextDependentSpeakerRecognizer* _satDetectionTdSr;
	NSObject*<OS_dispatch_semaphore> _satDetectionTdSrSemaphore;
	double _tdSpeakerRecognizerSATThreshold;
	double _lastCombinedTdSpeakerRecognizerSATScore;
	double _tdSpeakerRecognizerCombinationWeight;
	NSMutableArray* _nonceTriggerEvents;
	unsigned char _lastTriggerType;
	VTCorruptDetector* _corruptDetector;
	long long _triggerCount;
	unsigned long long _earlyDetecFiredMachTime;
	unsigned long long _triggerStartMachTime;
	unsigned long long _triggerFireMachTime;
	BOOL _deviceHandheld;
	double _handHeldDetectedTime;
	NSData* _firstChanceAudioBuffer;
	NSDictionary* _firstChanceVTEventInfo;
	NSDate* _firstChanceTriggeredDate;
	double _firstPassScore;
	VTPhraseSpotterEnabledPolicy* _policy;
	OpaqueAudioConverterRef _deinterleaver;
	unsigned long long _numChannels;
	AudioBufferList* _deinterleavedABL;
	VTAudioFileReader* _audioFileReader;
	unsigned long long _audioInjectionIndex;
	NSString* _injectedAudioFilePath;
	BOOL _externalPhraseSpotterRunning;
	NSDictionary* _lastVoiceTriggerEventInfo;
	VTBiometricMatchMonitor* _biometricMonitor;
	double _lastPHSRejectedTime;
	double _consecutivePHSRejects;
	double _lastSupervecScore;
	unsigned long long _samplerate;

}

@property (readonly) unsigned long long samplerate;                               //@synthesize samplerate=_samplerate - In the implementation block
@property (readonly) unsigned long long sampleCount; 
@property (readonly) unsigned long long sampleCountAtStartOfTrigger; 
@property (readonly) unsigned long long sampleCountAtEndOfTrigger; 
@property (readonly) double lastScore;                                            //@synthesize lastScore=_lastScore - In the implementation block
@property (readonly) double lastSupervecScore;                                    //@synthesize lastSupervecScore=_lastSupervecScore - In the implementation block
@property (readonly) unsigned char lastTriggerType;                               //@synthesize lastTriggerType=_lastTriggerType - In the implementation block
@property (readonly) long long triggerCount;                                      //@synthesize triggerCount=_triggerCount - In the implementation block
@property (readonly) NSData * firstChanceAudioBuffer;                             //@synthesize firstChanceAudioBuffer=_firstChanceAudioBuffer - In the implementation block
@property (readonly) NSDictionary * firstChanceVTEventInfo;                       //@synthesize firstChanceVTEventInfo=_firstChanceVTEventInfo - In the implementation block
@property (readonly) NSDate * firstChanceTriggeredDate;                           //@synthesize firstChanceTriggeredDate=_firstChanceTriggeredDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)currentSpotter;
-(void)_resetCounters;
-(BOOL)_isDeviceHandheld;
-(void)stopAudioCapture;
-(id)assetDictionary;
-(unsigned long long)_applyExtraTime:(double)arg1 to:(unsigned long long)arg2 ;
-(void)_storeFirstChanceAudio;
-(id)getAudioBuffer;
-(id)getLanguageCode;
-(id)init;
-(BOOL)_shouldPerformRetrainingWithAnalyzerNDAPI:(id)arg1 resourcePath:(id)arg2 ;
-(void)_initDetector;
-(void)clearTriggerCount;
-(void)_firstUnlockedAndSpringBoardStarted;
-(void)VTLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2 ;
-(id)lastVoiceTriggerEventInfo;
-(unsigned long long)sampleCountAtStartOfTrigger;
-(void)didReceiveSiriSessionCancellation:(id)arg1 ;
-(void)_clearDeviceHandHeld;
-(id)_desRecordFromTriggerData:(const ndresult*)arg1 sampleCount:(unsigned long long*)arg2 ;
-(void)_logDESRecord:(const ndresult*)arg1 result:(id)arg2 isActualTrigger:(BOOL)arg3 ;
-(void)setStartSampleHostTime:(unsigned long long)arg1 ;
-(void)setBypass:(BOOL)arg1 ;
-(long long)triggerCount;
-(void)textDependentSpeakerRecognizer:(id)arg1 hasSatScore:(float)arg2 ;
-(id)_analyzeMakeResult:(const ndresult*)arg1 eventKind:(unsigned char)arg2 satScore:(double)arg3 ;
-(void)_setDeviceHandHeld;
-(void)_voiceTriggerEnabledDidChange;
-(void)VTAssetMonitor:(id)arg1 didReceiveNewAssetAvailable:(BOOL)arg2 ;
-(void)_resetVoiceTriggerDueToRTSTrigger;
-(void)_logDESTriggerRecord:(const ndresult*)arg1 result:(id)arg2 ;
-(double)lastScore;
-(void)VTAudioRouteChangeMonitorDidChangeAudioRoute:(id)arg1 ;
-(void)didReceiveWakeGesture;
-(void)_logPrepareProperty:(id)arg1 ;
-(void)looseTriggerThreshold;
-(void)_analyzeResetWithOption:(unsigned char)arg1 ;
-(void)prepareWithProperty:(id)arg1 readyCompletion:(/*^block*/id)arg2 ;
-(id)getCorealisRTModel;
-(id)analyzeBufferList:(AudioBufferList*)arg1 ;
-(unsigned long long)samplerate;
-(unsigned char)lastTriggerType;
-(BOOL)_getSecondChanceEffective;
-(void)_phraseSpotterEnabledDidChange;
-(id)_capturePathWithPrefix:(id)arg1 eventKind:(unsigned char)arg2 ;
-(void)_notifyAssetChangedCallback;
-(void)_logMetaData:(id)arg1 ;
-(BOOL)_configureWithDefaults;
-(id)analyze:(AudioBuffer*)arg1 ;
-(id)initWithConfig:(id)arg1 assetDir:(id)arg2 runMode:(unsigned long long)arg3 ;
-(BOOL)_shouldCreateAudioBuffer;
-(id)getSATDirectory;
-(void)startAudioCapture;
-(unsigned long long)sampleCount;
-(void)didReceiveSleepGesture;
-(void)_logPHSDESRecord:(const ndsupervec*)arg1 ;
-(void)_createFirstChanceMeta:(const ndresult*)arg1 ;
-(id)_randomSubset:(id)arg1 numSelected:(unsigned)arg2 ;
-(void)requestFoceTrigger;
-(void)_handleAssetChangeForLanguageCode:(id)arg1 ;
-(NSData *)firstChanceAudioBuffer;
-(unsigned long long)_sampleLengthFrom:(unsigned)arg1 To:(unsigned)arg2 ;
-(void)_commonInit;
-(NSDictionary *)firstChanceVTEventInfo;
-(id)_storeTrainingAudioAndMetaInfo;
-(void)_performReadyCompletion;
-(void)_logCorruptAudio;
-(id)initWithConfig:(id)arg1 resourcePath:(id)arg2 ;
-(void)requestSecondChance;
-(id)_analyzeEvents:(const ndresult*)arg1 ;
-(unsigned long long)sampleCountAtEndOfTrigger;
-(void)notifyAssetChangeWithCallback:(/*^block*/id)arg1 ;
-(double)_computeSATScore:(const ndresult*)arg1 ;
-(unsigned long long)_getBiometricMatchResult;
-(double)lastSupervecScore;
-(long long)_getNumberOfAudioFilesInDirectory:(id)arg1 ;
-(NSDate *)firstChanceTriggeredDate;
-(void)_safeReconfig;
-(id)_handleTriggerEvent:(const ndresult*)arg1 num_new_samples:(unsigned)arg2 satScore:(double)arg3 ;
-(id)initWithHardwareSampleRate:(double)arg1 ;
-(unsigned long long)_addExtraTime:(double)arg1 to:(unsigned long long)arg2 ;
-(id)initWithHardwareSampleRate:(double)arg1 readyCompletion:(/*^block*/id)arg2 ;
-(BOOL)_configureWithConfig:(id)arg1 resourcePath:(id)arg2 ;
-(void)_safeConfigureWithAnalyzer:(id)arg1 path:(id)arg2 data:(id)arg3 resourcePath:(id)arg4 ;
-(void)_setSecondChance;
-(id)_createVTEventInfoString:(id)arg1 ;
-(id)initWithLanguageCodeForSATEnrollment:(id)arg1 ;
-(void)_cancelSecondChance;
-(long long)isFollowedBySpeech;
-(void)dealloc;
-(id)_sampleFromSortedArray:(id)arg1 numSelected:(unsigned long long)arg2 ;
-(unsigned long long)getAdjustedDeviceStartTime:(unsigned long long)arg1 ;
-(void)textDependentSpeakerRecognizer:(id)arg1 failedWithError:(id)arg2 ;
-(void)_logDESRecord:(const ndresult*)arg1 result:(id)arg2 ;
@end

