/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSKeywordAnalyzerNDAPIScoreDelegate.h>
#import <libobjc.A.dylib/CSKeywordAnalyzerNDEAPIScoreDelegate.h>
#import <libobjc.A.dylib/CSKeywordAnalyzerQuasarScoreDelegate.h>
#import <libobjc.A.dylib/CSVoiceTriggerEnabledMonitorDelegate.h>
#import <libobjc.A.dylib/CSAudioServerCrashMonitorDelegate.h>
#import <libobjc.A.dylib/CSAudioStreamProvidingDelegate.h>
#import <libobjc.A.dylib/CSMediaPlayingMonitorDelegate.h>
#import <libobjc.A.dylib/CSVolumeMonitorDelegate.h>
#import <libobjc.A.dylib/CSSpIdVTTextDependentSpeakerRecognizerDelegate.h>
#import <libobjc.A.dylib/CSSelfTriggerDetectorDelegate.h>

@protocol CSVoiceTriggerDelegate, OS_dispatch_queue;
@class NSString, NSObject, CSAsset, CSAudioStream, CSKeywordAnalyzerNDAPI, CSKeywordAnalyzerNDEAPI, CSKeywordAnalyzerQuasar, CSSpeakerDetectorNDAPI, CSSpeakerModel, CSSpIdVTTextDependentSpeakerRecognizer, NSDictionary, NSData, CSAudioCircularBuffer, CSPlainAudioFileWriter, NSMutableDictionary, NSDate, NSUUID, CSShadowMicScoreCreator, NSMutableData, CSVTSecondPassScorer;

@interface CSVoiceTriggerSecondPass : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate, CSKeywordAnalyzerNDEAPIScoreDelegate, CSKeywordAnalyzerQuasarScoreDelegate, CSVoiceTriggerEnabledMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSAudioStreamProvidingDelegate, CSMediaPlayingMonitorDelegate, CSVolumeMonitorDelegate, CSSpIdVTTextDependentSpeakerRecognizerDelegate, CSSelfTriggerDetectorDelegate> {

	BOOL _hasReceivedNDEAPIResult;
	BOOL _isSecondChanceHot;
	BOOL _isSATDetectionRunning;
	BOOL _shouldUsePHS;
	BOOL _hasPendingNearMiss;
	BOOL _isRunningRecognizer;
	BOOL _recognizerResultPending;
	BOOL _didWakeAP;
	BOOL _hasTriggerCandidate;
	BOOL _isStartSampleCountMarked;
	BOOL _secondPassHasMadeDecision;
	BOOL _skipTdsrProc;
	BOOL _tdsrResultPending;
	BOOL _kwdRejectCleanupPending;
	unsigned char _hasReceivedEarlyDetectNDEAPIResult;
	float _referenceKeywordThreshold;
	float _keywordThreshold;
	float _keywordThresholdSecondChance;
	float _effectiveKeywordThreshold;
	float _keywordLoggingThreshold;
	float _keywordRejectLoggingThreshold;
	float _lastScore;
	float _recognizerScore;
	float _recognizerScoreScaleFactor;
	float _recognizerThresholdOffset;
	float _firstPassChannelSelectionDelaySeconds;
	float _firstPassMasterChannelScoreBoost;
	float _firstPassOnsetScore;
	float _twoShotFeedbackDelay;
	float _mediaVolume;
	float _shadowMicScoreThresholdForVAD;
	NSString* _UUID;
	id<CSVoiceTriggerDelegate> _delegate;
	unsigned long long _secondChanceHotTillMachTime;
	NSObject*<OS_dispatch_queue> _queue;
	CSAsset* _currentAsset;
	CSAudioStream* _audioStream;
	NSString* _audioProviderUUID;
	CSKeywordAnalyzerNDAPI* _keywordAnalyzerNDAPI;
	CSKeywordAnalyzerNDEAPI* _keywordAnalyzerNDEAPI;
	CSKeywordAnalyzerQuasar* _keywordAnalyzerQuasar;
	CSSpeakerDetectorNDAPI* _speakerDetector;
	CSSpeakerModel* _speakerModel;
	/*^block*/id _resultCompletion;
	CSSpIdVTTextDependentSpeakerRecognizer* _tdsrAnalyzer;
	double _tdSpeakerRecognizerCombinationWeight;
	double _tdSpeakerRecognizerSATThreshold;
	unsigned long long _secondPassTimeout;
	unsigned long long _numProcessedSamples;
	unsigned long long _numAnalyzedSamples;
	unsigned long long _extraSamplesAtStart;
	unsigned long long _analyzerPrependingSamples;
	unsigned long long _analyzerTrailingSamples;
	unsigned long long _nearMissDelayTimeout;
	unsigned long long _nearMissCandidateDetectedSamples;
	NSDictionary* _lastAnalyzerResult;
	unsigned long long _recognizerWaitSamples;
	unsigned long long _earlyDetectFiredMachTime;
	unsigned long long _activeChannel;
	NSDictionary* _lastResult;
	unsigned long long _processedSampleCountsInPending;
	unsigned long long _firstPassTriggerStartSampleCount;
	unsigned long long _firstPassTriggerFireSampleCount;
	NSDictionary* _firstPassChannelSelectionScores;
	unsigned long long _firstPassOnsetChannel;
	unsigned long long _secondPassAnalyzerStartSampleCount;
	unsigned long long _secondPassTriggerMachAbsTime;
	NSObject*<OS_dispatch_queue> _stateSerialQueue;
	double _lastAggTime;
	double _cumulativeUptime;
	double _cumulativeDowntime;
	NSData* _superVector;
	CSAudioCircularBuffer* _audioBuffer;
	unsigned long long _firstPassSource;
	NSString* _firstPassDeviceID;
	CSPlainAudioFileWriter* _audioFileWriter;
	long long _mediaPlayingState;
	NSMutableDictionary* _lastVoiceTriggerEventInfo;
	NSDate* _tdsrStartTime;
	unsigned long long _kwdRejectCleanupSecondPassResult;
	NSUUID* _kwdRejectCleanupToken;
	NSUUID* _tdsrTimeoutToken;
	CSShadowMicScoreCreator* _shadowMicScoreCreator;
	NSMutableData* _dataBufferNDEAPI;
	unsigned long long _dataBufferPositionNDEAPI;
	CSVTSecondPassScorer* _secondPassScorer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSAsset * currentAsset;                                             //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,retain) CSAudioStream * audioStream;                                        //@synthesize audioStream=_audioStream - In the implementation block
@property (nonatomic,retain) NSString * audioProviderUUID;                                       //@synthesize audioProviderUUID=_audioProviderUUID - In the implementation block
@property (nonatomic,retain) CSKeywordAnalyzerNDAPI * keywordAnalyzerNDAPI;                      //@synthesize keywordAnalyzerNDAPI=_keywordAnalyzerNDAPI - In the implementation block
@property (nonatomic,retain) CSKeywordAnalyzerNDEAPI * keywordAnalyzerNDEAPI;                    //@synthesize keywordAnalyzerNDEAPI=_keywordAnalyzerNDEAPI - In the implementation block
@property (nonatomic,retain) CSKeywordAnalyzerQuasar * keywordAnalyzerQuasar;                    //@synthesize keywordAnalyzerQuasar=_keywordAnalyzerQuasar - In the implementation block
@property (nonatomic,retain) CSSpeakerDetectorNDAPI * speakerDetector;                           //@synthesize speakerDetector=_speakerDetector - In the implementation block
@property (nonatomic,retain) CSSpeakerModel * speakerModel;                                      //@synthesize speakerModel=_speakerModel - In the implementation block
@property (nonatomic,copy) id resultCompletion;                                                  //@synthesize resultCompletion=_resultCompletion - In the implementation block
@property (nonatomic,retain) CSSpIdVTTextDependentSpeakerRecognizer * tdsrAnalyzer;              //@synthesize tdsrAnalyzer=_tdsrAnalyzer - In the implementation block
@property (assign,nonatomic) double tdSpeakerRecognizerCombinationWeight;                        //@synthesize tdSpeakerRecognizerCombinationWeight=_tdSpeakerRecognizerCombinationWeight - In the implementation block
@property (assign,nonatomic) double tdSpeakerRecognizerSATThreshold;                             //@synthesize tdSpeakerRecognizerSATThreshold=_tdSpeakerRecognizerSATThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedNDEAPIResult;                                       //@synthesize hasReceivedNDEAPIResult=_hasReceivedNDEAPIResult - In the implementation block
@property (assign,nonatomic) unsigned long long secondPassTimeout;                               //@synthesize secondPassTimeout=_secondPassTimeout - In the implementation block
@property (assign,nonatomic) unsigned long long numProcessedSamples;                             //@synthesize numProcessedSamples=_numProcessedSamples - In the implementation block
@property (assign,nonatomic) unsigned long long numAnalyzedSamples;                              //@synthesize numAnalyzedSamples=_numAnalyzedSamples - In the implementation block
@property (assign,nonatomic) float referenceKeywordThreshold;                                    //@synthesize referenceKeywordThreshold=_referenceKeywordThreshold - In the implementation block
@property (assign,nonatomic) float keywordThreshold;                                             //@synthesize keywordThreshold=_keywordThreshold - In the implementation block
@property (assign,nonatomic) float keywordThresholdSecondChance;                                 //@synthesize keywordThresholdSecondChance=_keywordThresholdSecondChance - In the implementation block
@property (assign,nonatomic) float effectiveKeywordThreshold;                                    //@synthesize effectiveKeywordThreshold=_effectiveKeywordThreshold - In the implementation block
@property (assign,nonatomic) float keywordLoggingThreshold;                                      //@synthesize keywordLoggingThreshold=_keywordLoggingThreshold - In the implementation block
@property (assign,nonatomic) float keywordRejectLoggingThreshold;                                //@synthesize keywordRejectLoggingThreshold=_keywordRejectLoggingThreshold - In the implementation block
@property (assign,nonatomic) float lastScore;                                                    //@synthesize lastScore=_lastScore - In the implementation block
@property (assign,nonatomic) BOOL isSecondChanceHot;                                             //@synthesize isSecondChanceHot=_isSecondChanceHot - In the implementation block
@property (assign,nonatomic) unsigned long long extraSamplesAtStart;                             //@synthesize extraSamplesAtStart=_extraSamplesAtStart - In the implementation block
@property (assign,nonatomic) unsigned long long analyzerPrependingSamples;                       //@synthesize analyzerPrependingSamples=_analyzerPrependingSamples - In the implementation block
@property (assign,nonatomic) unsigned long long analyzerTrailingSamples;                         //@synthesize analyzerTrailingSamples=_analyzerTrailingSamples - In the implementation block
@property (assign,nonatomic) BOOL isSATDetectionRunning;                                         //@synthesize isSATDetectionRunning=_isSATDetectionRunning - In the implementation block
@property (assign,nonatomic) BOOL shouldUsePHS;                                                  //@synthesize shouldUsePHS=_shouldUsePHS - In the implementation block
@property (assign,nonatomic) unsigned long long nearMissDelayTimeout;                            //@synthesize nearMissDelayTimeout=_nearMissDelayTimeout - In the implementation block
@property (assign,nonatomic) unsigned long long nearMissCandidateDetectedSamples;                //@synthesize nearMissCandidateDetectedSamples=_nearMissCandidateDetectedSamples - In the implementation block
@property (assign,nonatomic) BOOL hasPendingNearMiss;                                            //@synthesize hasPendingNearMiss=_hasPendingNearMiss - In the implementation block
@property (nonatomic,retain) NSDictionary * lastAnalyzerResult;                                  //@synthesize lastAnalyzerResult=_lastAnalyzerResult - In the implementation block
@property (assign,nonatomic) float recognizerScore;                                              //@synthesize recognizerScore=_recognizerScore - In the implementation block
@property (assign,nonatomic) BOOL isRunningRecognizer;                                           //@synthesize isRunningRecognizer=_isRunningRecognizer - In the implementation block
@property (assign,nonatomic) BOOL recognizerResultPending;                                       //@synthesize recognizerResultPending=_recognizerResultPending - In the implementation block
@property (assign,nonatomic) float recognizerScoreScaleFactor;                                   //@synthesize recognizerScoreScaleFactor=_recognizerScoreScaleFactor - In the implementation block
@property (assign,nonatomic) float recognizerThresholdOffset;                                    //@synthesize recognizerThresholdOffset=_recognizerThresholdOffset - In the implementation block
@property (assign,nonatomic) unsigned long long recognizerWaitSamples;                           //@synthesize recognizerWaitSamples=_recognizerWaitSamples - In the implementation block
@property (assign,nonatomic) unsigned long long earlyDetectFiredMachTime;                        //@synthesize earlyDetectFiredMachTime=_earlyDetectFiredMachTime - In the implementation block
@property (assign,nonatomic) unsigned long long activeChannel;                                   //@synthesize activeChannel=_activeChannel - In the implementation block
@property (nonatomic,retain) NSDictionary * lastResult;                                          //@synthesize lastResult=_lastResult - In the implementation block
@property (assign,nonatomic) unsigned long long processedSampleCountsInPending;                  //@synthesize processedSampleCountsInPending=_processedSampleCountsInPending - In the implementation block
@property (assign,nonatomic) unsigned long long firstPassTriggerStartSampleCount;                //@synthesize firstPassTriggerStartSampleCount=_firstPassTriggerStartSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long firstPassTriggerFireSampleCount;                 //@synthesize firstPassTriggerFireSampleCount=_firstPassTriggerFireSampleCount - In the implementation block
@property (nonatomic,retain) NSDictionary * firstPassChannelSelectionScores;                     //@synthesize firstPassChannelSelectionScores=_firstPassChannelSelectionScores - In the implementation block
@property (assign,nonatomic) float firstPassChannelSelectionDelaySeconds;                        //@synthesize firstPassChannelSelectionDelaySeconds=_firstPassChannelSelectionDelaySeconds - In the implementation block
@property (assign,nonatomic) float firstPassMasterChannelScoreBoost;                             //@synthesize firstPassMasterChannelScoreBoost=_firstPassMasterChannelScoreBoost - In the implementation block
@property (assign,nonatomic) float firstPassOnsetScore;                                          //@synthesize firstPassOnsetScore=_firstPassOnsetScore - In the implementation block
@property (assign,nonatomic) unsigned long long firstPassOnsetChannel;                           //@synthesize firstPassOnsetChannel=_firstPassOnsetChannel - In the implementation block
@property (assign,nonatomic) BOOL didWakeAP;                                                     //@synthesize didWakeAP=_didWakeAP - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerCandidate;                                           //@synthesize hasTriggerCandidate=_hasTriggerCandidate - In the implementation block
@property (assign,nonatomic) BOOL isStartSampleCountMarked;                                      //@synthesize isStartSampleCountMarked=_isStartSampleCountMarked - In the implementation block
@property (assign,nonatomic) unsigned long long secondPassAnalyzerStartSampleCount;              //@synthesize secondPassAnalyzerStartSampleCount=_secondPassAnalyzerStartSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long secondPassTriggerMachAbsTime;                    //@synthesize secondPassTriggerMachAbsTime=_secondPassTriggerMachAbsTime - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateSerialQueue;                      //@synthesize stateSerialQueue=_stateSerialQueue - In the implementation block
@property (assign,nonatomic) double lastAggTime;                                                 //@synthesize lastAggTime=_lastAggTime - In the implementation block
@property (assign,nonatomic) double cumulativeUptime;                                            //@synthesize cumulativeUptime=_cumulativeUptime - In the implementation block
@property (assign,nonatomic) double cumulativeDowntime;                                          //@synthesize cumulativeDowntime=_cumulativeDowntime - In the implementation block
@property (nonatomic,retain) NSData * superVector;                                               //@synthesize superVector=_superVector - In the implementation block
@property (assign,nonatomic,__weak) CSAudioCircularBuffer * audioBuffer;                         //@synthesize audioBuffer=_audioBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long firstPassSource;                                 //@synthesize firstPassSource=_firstPassSource - In the implementation block
@property (nonatomic,retain) NSString * firstPassDeviceID;                                       //@synthesize firstPassDeviceID=_firstPassDeviceID - In the implementation block
@property (assign,nonatomic) float twoShotFeedbackDelay;                                         //@synthesize twoShotFeedbackDelay=_twoShotFeedbackDelay - In the implementation block
@property (nonatomic,retain) CSPlainAudioFileWriter * audioFileWriter;                           //@synthesize audioFileWriter=_audioFileWriter - In the implementation block
@property (assign,nonatomic) BOOL secondPassHasMadeDecision;                                     //@synthesize secondPassHasMadeDecision=_secondPassHasMadeDecision - In the implementation block
@property (assign,nonatomic) long long mediaPlayingState;                                        //@synthesize mediaPlayingState=_mediaPlayingState - In the implementation block
@property (assign,nonatomic) float mediaVolume;                                                  //@synthesize mediaVolume=_mediaVolume - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lastVoiceTriggerEventInfo;                    //@synthesize lastVoiceTriggerEventInfo=_lastVoiceTriggerEventInfo - In the implementation block
@property (assign,nonatomic) BOOL skipTdsrProc;                                                  //@synthesize skipTdsrProc=_skipTdsrProc - In the implementation block
@property (nonatomic,retain) NSDate * tdsrStartTime;                                             //@synthesize tdsrStartTime=_tdsrStartTime - In the implementation block
@property (assign,nonatomic) BOOL tdsrResultPending;                                             //@synthesize tdsrResultPending=_tdsrResultPending - In the implementation block
@property (assign,nonatomic) BOOL kwdRejectCleanupPending;                                       //@synthesize kwdRejectCleanupPending=_kwdRejectCleanupPending - In the implementation block
@property (assign,nonatomic) unsigned long long kwdRejectCleanupSecondPassResult;                //@synthesize kwdRejectCleanupSecondPassResult=_kwdRejectCleanupSecondPassResult - In the implementation block
@property (nonatomic,retain) NSUUID * kwdRejectCleanupToken;                                     //@synthesize kwdRejectCleanupToken=_kwdRejectCleanupToken - In the implementation block
@property (nonatomic,retain) NSUUID * tdsrTimeoutToken;                                          //@synthesize tdsrTimeoutToken=_tdsrTimeoutToken - In the implementation block
@property (nonatomic,retain) CSShadowMicScoreCreator * shadowMicScoreCreator;                    //@synthesize shadowMicScoreCreator=_shadowMicScoreCreator - In the implementation block
@property (nonatomic,retain) NSMutableData * dataBufferNDEAPI;                                   //@synthesize dataBufferNDEAPI=_dataBufferNDEAPI - In the implementation block
@property (assign,nonatomic) unsigned long long dataBufferPositionNDEAPI;                        //@synthesize dataBufferPositionNDEAPI=_dataBufferPositionNDEAPI - In the implementation block
@property (assign,nonatomic) unsigned char hasReceivedEarlyDetectNDEAPIResult;                   //@synthesize hasReceivedEarlyDetectNDEAPIResult=_hasReceivedEarlyDetectNDEAPIResult - In the implementation block
@property (assign,nonatomic) float shadowMicScoreThresholdForVAD;                                //@synthesize shadowMicScoreThresholdForVAD=_shadowMicScoreThresholdForVAD - In the implementation block
@property (nonatomic,retain) CSVTSecondPassScorer * secondPassScorer;                            //@synthesize secondPassScorer=_secondPassScorer - In the implementation block
@property (nonatomic,readonly) NSString * UUID;                                                  //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic,__weak) id<CSVoiceTriggerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long secondChanceHotTillMachTime;                     //@synthesize secondChanceHotTillMachTime=_secondChanceHotTillMachTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)timeStampString;
+(id)secondPassAudioLoggingFilePath;
+(id)secondPassAudioLogDirectory;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CSVoiceTriggerDelegate>)delegate;
-(void)setDelegate:(id<CSVoiceTriggerDelegate>)arg1 ;
-(void)start;
-(NSString *)UUID;
-(void)reset;
-(void)_reset;
-(void)setAsset:(id)arg1 ;
-(void)cancelCurrentRequest;
-(void)_setAsset:(id)arg1 ;
-(unsigned long long)activeChannel;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(void)setMediaVolume:(float)arg1 ;
-(float)mediaVolume;
-(CSAudioCircularBuffer *)audioBuffer;
-(void)setAudioBuffer:(CSAudioCircularBuffer *)arg1 ;
-(void)textDependentSpeakerRecognizer:(id)arg1 failedWithError:(id)arg2 ;
-(void)textDependentSpeakerRecognizer:(id)arg1 hasSatScore:(float)arg2 ;
-(NSObject*<OS_dispatch_queue>)stateSerialQueue;
-(void)setStateSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)lastVoiceTriggerEventInfo;
-(float)lastScore;
-(void)setCurrentAsset:(CSAsset *)arg1 ;
-(CSAsset *)currentAsset;
-(CSAudioStream *)audioStream;
-(void)setAudioStream:(CSAudioStream *)arg1 ;
-(void)CSMediaPlayingMonitor:(id)arg1 didReceiveMediaPlayingChanged:(long long)arg2 ;
-(long long)mediaPlayingState;
-(void)CSVolumeMonitor:(id)arg1 didReceiveMusicVolumeChanged:(float)arg2 ;
-(void)_resetStartAnalyzeTime;
-(void)_setStartAnalyzeTime:(unsigned long long)arg1 ;
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1 ;
-(void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(float)keywordThreshold;
-(void)setKeywordThreshold:(float)arg1 ;
-(void)setLastScore:(float)arg1 ;
-(id)initWithPHSEnabled:(BOOL)arg1 ;
-(void)setFirstPassSource:(unsigned long long)arg1 ;
-(NSString *)firstPassDeviceID;
-(void)setFirstPassDeviceID:(NSString *)arg1 ;
-(void)setSecondChanceHotTillMachTime:(unsigned long long)arg1 ;
-(void)handleVoiceTriggerSecondPassFrom:(unsigned long long)arg1 deviceId:(id)arg2 audioProviderUUID:(id)arg3 firstPassInfo:(id)arg4 completion:(/*^block*/id)arg5 ;
-(unsigned long long)secondChanceHotTillMachTime;
-(CSPlainAudioFileWriter *)audioFileWriter;
-(void)setAudioFileWriter:(CSPlainAudioFileWriter *)arg1 ;
-(void)_clearTriggerCandidate;
-(void)_didStopAudioStream;
-(void)keywordAnalyzerNDEAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(CSKeywordAnalyzerNDEAPI *)keywordAnalyzerNDEAPI;
-(void)setKeywordAnalyzerNDEAPI:(CSKeywordAnalyzerNDEAPI *)arg1 ;
-(BOOL)hasReceivedNDEAPIResult;
-(void)setHasReceivedNDEAPIResult:(BOOL)arg1 ;
-(BOOL)hasTriggerCandidate;
-(void)setHasTriggerCandidate:(BOOL)arg1 ;
-(unsigned long long)numProcessedSamples;
-(void)setNumProcessedSamples:(unsigned long long)arg1 ;
-(unsigned long long)earlyDetectFiredMachTime;
-(void)setEarlyDetectFiredMachTime:(unsigned long long)arg1 ;
-(CSSpIdVTTextDependentSpeakerRecognizer *)tdsrAnalyzer;
-(void)setTdsrAnalyzer:(CSSpIdVTTextDependentSpeakerRecognizer *)arg1 ;
-(void)selfTriggerDetector:(id)arg1 didDetectSelfTrigger:(id)arg2 ;
-(unsigned long long)extraSamplesAtStart;
-(void)setExtraSamplesAtStart:(unsigned long long)arg1 ;
-(void)_initializeMediaPlayingState;
-(void)setAudioProviderUUID:(NSString *)arg1 ;
-(void)_resetUpTime;
-(void)_analyzeForKeywordDetection:(id)arg1 result:(id)arg2 forChannel:(unsigned long long)arg3 forceMaximized:(BOOL)arg4 ;
-(void)_computeEffectiveThreshold;
-(void)_logUptimeWithVTSwitchChanged:(BOOL)arg1 VTEnabled:(BOOL)arg2 ;
-(NSString *)audioProviderUUID;
-(float)keywordLoggingThreshold;
-(void)setKeywordLoggingThreshold:(float)arg1 ;
-(float)keywordThresholdSecondChance;
-(void)setKeywordThresholdSecondChance:(float)arg1 ;
-(float)effectiveKeywordThreshold;
-(void)setEffectiveKeywordThreshold:(float)arg1 ;
-(BOOL)isSecondChanceHot;
-(void)setIsSecondChanceHot:(BOOL)arg1 ;
-(CSKeywordAnalyzerNDAPI *)keywordAnalyzerNDAPI;
-(void)setKeywordAnalyzerNDAPI:(CSKeywordAnalyzerNDAPI *)arg1 ;
-(unsigned long long)nearMissDelayTimeout;
-(void)setNearMissDelayTimeout:(unsigned long long)arg1 ;
-(unsigned long long)nearMissCandidateDetectedSamples;
-(void)setNearMissCandidateDetectedSamples:(unsigned long long)arg1 ;
-(BOOL)hasPendingNearMiss;
-(void)setHasPendingNearMiss:(BOOL)arg1 ;
-(NSDictionary *)lastAnalyzerResult;
-(void)setLastAnalyzerResult:(NSDictionary *)arg1 ;
-(BOOL)isStartSampleCountMarked;
-(void)setIsStartSampleCountMarked:(BOOL)arg1 ;
-(double)lastAggTime;
-(void)setLastAggTime:(double)arg1 ;
-(double)cumulativeUptime;
-(void)setCumulativeUptime:(double)arg1 ;
-(double)cumulativeDowntime;
-(void)setCumulativeDowntime:(double)arg1 ;
-(void)CSVoiceTriggerEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2 ;
-(float)recognizerScoreScaleFactor;
-(void)setRecognizerScoreScaleFactor:(float)arg1 ;
-(float)recognizerThresholdOffset;
-(void)setRecognizerThresholdOffset:(float)arg1 ;
-(void)_prepareStartAudioStream;
-(void)_didStartAudioStream:(BOOL)arg1 ;
-(void)setResultCompletion:(id)arg1 ;
-(void)_requestStartAudioStreamWitContext:(id)arg1 audioProviderUUID:(id)arg2 startStreamOption:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_voiceTriggerFirstPassDidDetectKeywordFrom:(unsigned long long)arg1 deviceId:(id)arg2 audioProviderUUID:(id)arg3 firstPassInfo:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_handleResultCompletion:(unsigned long long)arg1 voiceTriggerInfo:(id)arg2 error:(id)arg3 ;
-(void)_getDidWakeAP:(id)arg1 ;
-(void)_handleVoiceTriggerFirstPassFromAP:(id)arg1 audioProviderUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleVoiceTriggerFirstPassFromHearst:(unsigned long long)arg1 deviceId:(id)arg2 audioProviderUUID:(id)arg3 firstPassInfo:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_handleVoiceTriggerFirstPassFromHearstAP:(unsigned long long)arg1 deviceId:(id)arg2 audioProviderUUID:(id)arg3 firstPassInfo:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_handleVoiceTriggerFirstPassFromJarvis:(unsigned long long)arg1 deviceId:(id)arg2 audioProviderUUID:(id)arg3 firstPassInfo:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_handleVoiceTriggerFirstPassFromAOP:(id)arg1 audioProviderUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_addDeviceStatusInfoToDict:(id)arg1 ;
-(void)_addToPHSRejectListIfNeeded:(id)arg1 ;
-(void)_cleanupKeywordRejectionWithToken:(id)arg1 result:(unsigned long long)arg2 voiceTriggerInfo:(id)arg3 ;
-(BOOL)_isTDSRProcessingAllowed;
-(void)_mpAnalyzeForTriggerDetection:(id)arg1 forceMaximized:(BOOL)arg2 ;
-(void)_handleSecondPassSuccess:(id)arg1 ;
-(void)handleSATOnlyScore;
-(void)_handleTDSRTimeout:(id)arg1 ;
-(void)_notifySecondPassReject:(id)arg1 result:(unsigned long long)arg2 ;
-(void)_markSecondPassTriggerMachAbsoluteTime:(unsigned long long)arg1 ;
-(void)_implicitTrainingIfNeeded:(id)arg1 ;
-(BOOL)_supportTwoShotFeedbackDelay;
-(void)_addSatAnalyzerInfoToDict:(id)arg1 satScore:(float)arg2 satThreshold:(float)arg3 ;
-(void)_addTdsrInfoToDict:(id)arg1 combinedScore:(float)arg2 ;
-(void)_addRejectStatsToDict:(id)arg1 ;
-(void)_addPHSExplicitOnlyModelScoresToDict:(id)arg1 ;
-(void)_mpProcessTDSRScore:(float)arg1 ;
-(void)handleTDSRCombinedScore;
-(void)_mpHandleTDSRFailure;
-(id)_mpGetVoiceTriggerEventInfoForPhrase:(id)arg1 ;
-(void)_mpVerifySATWithAnalyzer:(id)arg1 voiceTriggerEventInfo:(id)arg2 ;
-(void)keywordAnalyzerQuasar:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(unsigned long long)secondPassTriggerMachAbsTime;
-(CSKeywordAnalyzerQuasar *)keywordAnalyzerQuasar;
-(void)setKeywordAnalyzerQuasar:(CSKeywordAnalyzerQuasar *)arg1 ;
-(CSSpeakerDetectorNDAPI *)speakerDetector;
-(void)setSpeakerDetector:(CSSpeakerDetectorNDAPI *)arg1 ;
-(CSSpeakerModel *)speakerModel;
-(void)setSpeakerModel:(CSSpeakerModel *)arg1 ;
-(id)resultCompletion;
-(double)tdSpeakerRecognizerCombinationWeight;
-(void)setTdSpeakerRecognizerCombinationWeight:(double)arg1 ;
-(double)tdSpeakerRecognizerSATThreshold;
-(void)setTdSpeakerRecognizerSATThreshold:(double)arg1 ;
-(unsigned long long)secondPassTimeout;
-(void)setSecondPassTimeout:(unsigned long long)arg1 ;
-(unsigned long long)numAnalyzedSamples;
-(void)setNumAnalyzedSamples:(unsigned long long)arg1 ;
-(float)referenceKeywordThreshold;
-(void)setReferenceKeywordThreshold:(float)arg1 ;
-(float)keywordRejectLoggingThreshold;
-(void)setKeywordRejectLoggingThreshold:(float)arg1 ;
-(unsigned long long)analyzerPrependingSamples;
-(void)setAnalyzerPrependingSamples:(unsigned long long)arg1 ;
-(unsigned long long)analyzerTrailingSamples;
-(void)setAnalyzerTrailingSamples:(unsigned long long)arg1 ;
-(BOOL)isSATDetectionRunning;
-(void)setIsSATDetectionRunning:(BOOL)arg1 ;
-(BOOL)shouldUsePHS;
-(void)setShouldUsePHS:(BOOL)arg1 ;
-(float)recognizerScore;
-(void)setRecognizerScore:(float)arg1 ;
-(BOOL)isRunningRecognizer;
-(void)setIsRunningRecognizer:(BOOL)arg1 ;
-(BOOL)recognizerResultPending;
-(void)setRecognizerResultPending:(BOOL)arg1 ;
-(unsigned long long)recognizerWaitSamples;
-(void)setRecognizerWaitSamples:(unsigned long long)arg1 ;
-(NSDictionary *)lastResult;
-(void)setLastResult:(NSDictionary *)arg1 ;
-(unsigned long long)processedSampleCountsInPending;
-(void)setProcessedSampleCountsInPending:(unsigned long long)arg1 ;
-(unsigned long long)firstPassTriggerStartSampleCount;
-(void)setFirstPassTriggerStartSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)firstPassTriggerFireSampleCount;
-(void)setFirstPassTriggerFireSampleCount:(unsigned long long)arg1 ;
-(NSDictionary *)firstPassChannelSelectionScores;
-(void)setFirstPassChannelSelectionScores:(NSDictionary *)arg1 ;
-(float)firstPassChannelSelectionDelaySeconds;
-(void)setFirstPassChannelSelectionDelaySeconds:(float)arg1 ;
-(float)firstPassMasterChannelScoreBoost;
-(void)setFirstPassMasterChannelScoreBoost:(float)arg1 ;
-(float)firstPassOnsetScore;
-(void)setFirstPassOnsetScore:(float)arg1 ;
-(unsigned long long)firstPassOnsetChannel;
-(void)setFirstPassOnsetChannel:(unsigned long long)arg1 ;
-(BOOL)didWakeAP;
-(void)setDidWakeAP:(BOOL)arg1 ;
-(unsigned long long)secondPassAnalyzerStartSampleCount;
-(void)setSecondPassAnalyzerStartSampleCount:(unsigned long long)arg1 ;
-(void)setSecondPassTriggerMachAbsTime:(unsigned long long)arg1 ;
-(NSData *)superVector;
-(void)setSuperVector:(NSData *)arg1 ;
-(unsigned long long)firstPassSource;
-(float)twoShotFeedbackDelay;
-(void)setTwoShotFeedbackDelay:(float)arg1 ;
-(BOOL)secondPassHasMadeDecision;
-(void)setSecondPassHasMadeDecision:(BOOL)arg1 ;
-(void)setMediaPlayingState:(long long)arg1 ;
-(void)setLastVoiceTriggerEventInfo:(NSMutableDictionary *)arg1 ;
-(BOOL)skipTdsrProc;
-(void)setSkipTdsrProc:(BOOL)arg1 ;
-(NSDate *)tdsrStartTime;
-(void)setTdsrStartTime:(NSDate *)arg1 ;
-(BOOL)tdsrResultPending;
-(void)setTdsrResultPending:(BOOL)arg1 ;
-(BOOL)kwdRejectCleanupPending;
-(void)setKwdRejectCleanupPending:(BOOL)arg1 ;
-(unsigned long long)kwdRejectCleanupSecondPassResult;
-(void)setKwdRejectCleanupSecondPassResult:(unsigned long long)arg1 ;
-(NSUUID *)kwdRejectCleanupToken;
-(void)setKwdRejectCleanupToken:(NSUUID *)arg1 ;
-(NSUUID *)tdsrTimeoutToken;
-(void)setTdsrTimeoutToken:(NSUUID *)arg1 ;
-(CSShadowMicScoreCreator *)shadowMicScoreCreator;
-(void)setShadowMicScoreCreator:(CSShadowMicScoreCreator *)arg1 ;
-(NSMutableData *)dataBufferNDEAPI;
-(void)setDataBufferNDEAPI:(NSMutableData *)arg1 ;
-(unsigned long long)dataBufferPositionNDEAPI;
-(void)setDataBufferPositionNDEAPI:(unsigned long long)arg1 ;
-(unsigned char)hasReceivedEarlyDetectNDEAPIResult;
-(void)setHasReceivedEarlyDetectNDEAPIResult:(unsigned char)arg1 ;
-(float)shadowMicScoreThresholdForVAD;
-(void)setShadowMicScoreThresholdForVAD:(float)arg1 ;
-(CSVTSecondPassScorer *)secondPassScorer;
-(void)setSecondPassScorer:(CSVTSecondPassScorer *)arg1 ;
@end

