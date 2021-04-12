/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSKeywordAnalyzerNDAPIScoreDelegate.h>
#import <libobjc.A.dylib/CSAudioStreamProvidingDelegate.h>
#import <libobjc.A.dylib/CSSiriClientBehaviorMonitorDelegate.h>
#import <libobjc.A.dylib/CSAudioServerCrashMonitorDelegate.h>
#import <libobjc.A.dylib/CSPhraseSpotterEnabledMonitorDelegate.h>
#import <libobjc.A.dylib/CSAudioRouteChangeMonitorDelegate.h>
#import <libobjc.A.dylib/CSSiriEnabledMonitorDelegate.h>
#import <libobjc.A.dylib/CSFirstUnlockMonitorDelegate.h>
#import <libobjc.A.dylib/CSGestureMonitorDelegate.h>
#import <libobjc.A.dylib/CSVoiceTriggerXPCServiceDelegate.h>

@protocol CSVoiceTriggerDelegate, OS_dispatch_queue;
@class CSPolicy, CSAudioStream, NSObject, CSAsset, NSMutableArray, CSAudioProvider, CSKeywordAnalyzerNDAPI, NSDictionary, NSString, CSOSTransaction;

@interface CSBuiltInVoiceTriggerWatch : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate, CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSPhraseSpotterEnabledMonitorDelegate, CSAudioRouteChangeMonitorDelegate, CSSiriEnabledMonitorDelegate, CSFirstUnlockMonitorDelegate, CSGestureMonitorDelegate, CSVoiceTriggerXPCServiceDelegate> {

	BOOL _listeningEnabled;
	BOOL _voiceTriggerEnabled;
	BOOL _isSecondChanceHot;
	BOOL _isSiriClientListening;
	BOOL _hasTriggerPending;
	BOOL _hasPendingNearMiss;
	BOOL _isListenPollingStarting;
	BOOL _earlyDetected;
	BOOL _isStartSampleCountMarked;
	BOOL _isPhraseSpotterBypassed;
	BOOL _isExternalPhraseSpotterRunning;
	float _keywordThreshold;
	float _keywordLoggingThreshold;
	float _lastScore;
	float _keywordThresholdSecondChance;
	float _effectiveKeywordThreshold;
	id<CSVoiceTriggerDelegate> _delegate;
	CSPolicy* _listeningStartPolicy;
	CSAudioStream* _audioStream;
	NSObject*<OS_dispatch_queue> _queue;
	CSAsset* _currentAsset;
	NSMutableArray* _keywordAnalyzersNDAPI;
	unsigned long long _secondChanceHotTillMachTime;
	CSAudioProvider* _audioProvider;
	CSKeywordAnalyzerNDAPI* _keywordAnalyzerNDAPI;
	unsigned long long _numProcessedSamples;
	unsigned long long _nearMissDelayTimeout;
	unsigned long long _nearMissCandidateDetectedSamples;
	NSDictionary* _lastAnalyzerResult;
	unsigned long long _earlyDetectFiredMachTime;
	unsigned long long _analyzerStartSampleCount;
	NSString* _audioProviderUUID;
	CSOSTransaction* _osTransaction;
	double _lastAggTime;
	double _cumulativeUptime;
	double _cumulativeDowntime;
	unsigned long long _wakeGestureHostTime;

}

@property (nonatomic,retain) CSPolicy * listeningStartPolicy;                                  //@synthesize listeningStartPolicy=_listeningStartPolicy - In the implementation block
@property (nonatomic,retain) CSAudioStream * audioStream;                                      //@synthesize audioStream=_audioStream - In the implementation block
@property (assign,nonatomic) BOOL listeningEnabled;                                            //@synthesize listeningEnabled=_listeningEnabled - In the implementation block
@property (assign,nonatomic) BOOL voiceTriggerEnabled;                                         //@synthesize voiceTriggerEnabled=_voiceTriggerEnabled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSAsset * currentAsset;                                           //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,retain) NSMutableArray * keywordAnalyzersNDAPI;                           //@synthesize keywordAnalyzersNDAPI=_keywordAnalyzersNDAPI - In the implementation block
@property (assign,nonatomic) float keywordThreshold;                                           //@synthesize keywordThreshold=_keywordThreshold - In the implementation block
@property (assign,nonatomic) float keywordLoggingThreshold;                                    //@synthesize keywordLoggingThreshold=_keywordLoggingThreshold - In the implementation block
@property (assign,nonatomic) float lastScore;                                                  //@synthesize lastScore=_lastScore - In the implementation block
@property (assign,nonatomic) float keywordThresholdSecondChance;                               //@synthesize keywordThresholdSecondChance=_keywordThresholdSecondChance - In the implementation block
@property (assign,nonatomic) float effectiveKeywordThreshold;                                  //@synthesize effectiveKeywordThreshold=_effectiveKeywordThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long secondChanceHotTillMachTime;                   //@synthesize secondChanceHotTillMachTime=_secondChanceHotTillMachTime - In the implementation block
@property (assign,nonatomic) BOOL isSecondChanceHot;                                           //@synthesize isSecondChanceHot=_isSecondChanceHot - In the implementation block
@property (assign,nonatomic) BOOL isSiriClientListening;                                       //@synthesize isSiriClientListening=_isSiriClientListening - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerPending;                                           //@synthesize hasTriggerPending=_hasTriggerPending - In the implementation block
@property (nonatomic,retain) CSAudioProvider * audioProvider;                                  //@synthesize audioProvider=_audioProvider - In the implementation block
@property (nonatomic,retain) CSKeywordAnalyzerNDAPI * keywordAnalyzerNDAPI;                    //@synthesize keywordAnalyzerNDAPI=_keywordAnalyzerNDAPI - In the implementation block
@property (assign,nonatomic) unsigned long long numProcessedSamples;                           //@synthesize numProcessedSamples=_numProcessedSamples - In the implementation block
@property (assign,nonatomic) unsigned long long nearMissDelayTimeout;                          //@synthesize nearMissDelayTimeout=_nearMissDelayTimeout - In the implementation block
@property (assign,nonatomic) unsigned long long nearMissCandidateDetectedSamples;              //@synthesize nearMissCandidateDetectedSamples=_nearMissCandidateDetectedSamples - In the implementation block
@property (assign,nonatomic) BOOL hasPendingNearMiss;                                          //@synthesize hasPendingNearMiss=_hasPendingNearMiss - In the implementation block
@property (assign,nonatomic) BOOL isListenPollingStarting;                                     //@synthesize isListenPollingStarting=_isListenPollingStarting - In the implementation block
@property (nonatomic,retain) NSDictionary * lastAnalyzerResult;                                //@synthesize lastAnalyzerResult=_lastAnalyzerResult - In the implementation block
@property (assign,nonatomic) unsigned long long earlyDetectFiredMachTime;                      //@synthesize earlyDetectFiredMachTime=_earlyDetectFiredMachTime - In the implementation block
@property (assign,nonatomic) BOOL earlyDetected;                                               //@synthesize earlyDetected=_earlyDetected - In the implementation block
@property (assign,nonatomic) BOOL isStartSampleCountMarked;                                    //@synthesize isStartSampleCountMarked=_isStartSampleCountMarked - In the implementation block
@property (assign,nonatomic) unsigned long long analyzerStartSampleCount;                      //@synthesize analyzerStartSampleCount=_analyzerStartSampleCount - In the implementation block
@property (nonatomic,retain) NSString * audioProviderUUID;                                     //@synthesize audioProviderUUID=_audioProviderUUID - In the implementation block
@property (assign,nonatomic) BOOL isPhraseSpotterBypassed;                                     //@synthesize isPhraseSpotterBypassed=_isPhraseSpotterBypassed - In the implementation block
@property (assign,nonatomic) BOOL isExternalPhraseSpotterRunning;                              //@synthesize isExternalPhraseSpotterRunning=_isExternalPhraseSpotterRunning - In the implementation block
@property (nonatomic,retain) CSOSTransaction * osTransaction;                                  //@synthesize osTransaction=_osTransaction - In the implementation block
@property (assign,nonatomic) double lastAggTime;                                               //@synthesize lastAggTime=_lastAggTime - In the implementation block
@property (assign,nonatomic) double cumulativeUptime;                                          //@synthesize cumulativeUptime=_cumulativeUptime - In the implementation block
@property (assign,nonatomic) double cumulativeDowntime;                                        //@synthesize cumulativeDowntime=_cumulativeDowntime - In the implementation block
@property (assign,nonatomic) unsigned long long wakeGestureHostTime;                           //@synthesize wakeGestureHostTime=_wakeGestureHostTime - In the implementation block
@property (assign,nonatomic,__weak) id<CSVoiceTriggerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CSVoiceTriggerDelegate>)delegate;
-(void)setDelegate:(id<CSVoiceTriggerDelegate>)arg1 ;
-(void)start;
-(void)reset;
-(void)_reset;
-(void)setAsset:(id)arg1 ;
-(void)_stopListening;
-(BOOL)voiceTriggerEnabled;
-(void)_setAsset:(id)arg1 ;
-(void)setVoiceTriggerEnabled:(BOOL)arg1 ;
-(BOOL)earlyDetected;
-(void)gestureMonitorDidReceiveWakeGesture:(id)arg1 ;
-(void)gestureMonitorDidReceiveSleepGesture:(id)arg1 ;
-(float)lastScore;
-(void)setCurrentAsset:(CSAsset *)arg1 ;
-(CSAsset *)currentAsset;
-(CSAudioStream *)audioStream;
-(void)setAudioStream:(CSAudioStream *)arg1 ;
-(void)setOsTransaction:(CSOSTransaction *)arg1 ;
-(CSOSTransaction *)osTransaction;
-(void)voiceTriggerXPCService:(id)arg1 setPhraseSpotterBypassing:(BOOL)arg2 ;
-(BOOL)isPhraseSpotterBypassed;
-(void)setIsPhraseSpotterBypassed:(BOOL)arg1 ;
-(void)_startListenPollingWithInterval:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startListenWithCompletion:(/*^block*/id)arg1 ;
-(void)_resetStartAnalyzeTime;
-(void)_setStartAnalyzeTime:(unsigned long long)arg1 ;
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2 ;
-(void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 ;
-(void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(float)keywordThreshold;
-(void)setKeywordThreshold:(float)arg1 ;
-(void)setLastScore:(float)arg1 ;
-(CSAudioProvider *)audioProvider;
-(void)setAudioProvider:(CSAudioProvider *)arg1 ;
-(void)setSecondChanceHotTillMachTime:(unsigned long long)arg1 ;
-(unsigned long long)secondChanceHotTillMachTime;
-(void)CSAudioRouteChangeMonitor:(id)arg1 didReceiveAudioRouteChangeEvent:(long long)arg2 ;
-(void)_didStopAudioStream;
-(unsigned long long)numProcessedSamples;
-(void)setNumProcessedSamples:(unsigned long long)arg1 ;
-(unsigned long long)earlyDetectFiredMachTime;
-(void)setEarlyDetectFiredMachTime:(unsigned long long)arg1 ;
-(BOOL)isSiriClientListening;
-(void)setIsSiriClientListening:(BOOL)arg1 ;
-(void)handleListenStartPolicyChange:(BOOL)arg1 ;
-(void)_transitListeningStatus:(BOOL)arg1 ;
-(void)_receivedHearstConnectionEvent:(BOOL)arg1 ;
-(void)_resetVoiceTrigger;
-(void)_adjustWakeGestureHostTimeIfNeeded;
-(void)_startRaiseToSpeakVAD;
-(void)_startListeningWithCompletion:(/*^block*/id)arg1 ;
-(void)_startRaiseToSpeak;
-(void)_stopRaiseToSpeak;
-(void)_requestStartAudioStreamWithSource:(unsigned long long)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAudioProviderUUID:(NSString *)arg1 ;
-(void)_resetUpTime;
-(void)_analyzeForKeywordDetection:(id)arg1 result:(id)arg2 forChannel:(unsigned long long)arg3 forceMaximized:(BOOL)arg4 ;
-(void)_computeEffectiveThreshold;
-(id)_buildVoiceTriggerEventInfo:(id)arg1 ;
-(void)_analyzerReset:(id)arg1 withCause:(unsigned long long)arg2 ;
-(void)_logUptimeWithVTSwitchChanged:(BOOL)arg1 VTEnabled:(BOOL)arg2 ;
-(NSString *)audioProviderUUID;
-(void)CSPhraseSpotterEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2 ;
-(void)CSFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(BOOL)arg2 ;
-(CSPolicy *)listeningStartPolicy;
-(void)setListeningStartPolicy:(CSPolicy *)arg1 ;
-(BOOL)listeningEnabled;
-(void)setListeningEnabled:(BOOL)arg1 ;
-(NSMutableArray *)keywordAnalyzersNDAPI;
-(void)setKeywordAnalyzersNDAPI:(NSMutableArray *)arg1 ;
-(float)keywordLoggingThreshold;
-(void)setKeywordLoggingThreshold:(float)arg1 ;
-(float)keywordThresholdSecondChance;
-(void)setKeywordThresholdSecondChance:(float)arg1 ;
-(float)effectiveKeywordThreshold;
-(void)setEffectiveKeywordThreshold:(float)arg1 ;
-(BOOL)isSecondChanceHot;
-(void)setIsSecondChanceHot:(BOOL)arg1 ;
-(BOOL)hasTriggerPending;
-(void)setHasTriggerPending:(BOOL)arg1 ;
-(CSKeywordAnalyzerNDAPI *)keywordAnalyzerNDAPI;
-(void)setKeywordAnalyzerNDAPI:(CSKeywordAnalyzerNDAPI *)arg1 ;
-(unsigned long long)nearMissDelayTimeout;
-(void)setNearMissDelayTimeout:(unsigned long long)arg1 ;
-(unsigned long long)nearMissCandidateDetectedSamples;
-(void)setNearMissCandidateDetectedSamples:(unsigned long long)arg1 ;
-(BOOL)hasPendingNearMiss;
-(void)setHasPendingNearMiss:(BOOL)arg1 ;
-(BOOL)isListenPollingStarting;
-(void)setIsListenPollingStarting:(BOOL)arg1 ;
-(NSDictionary *)lastAnalyzerResult;
-(void)setLastAnalyzerResult:(NSDictionary *)arg1 ;
-(void)setEarlyDetected:(BOOL)arg1 ;
-(BOOL)isStartSampleCountMarked;
-(void)setIsStartSampleCountMarked:(BOOL)arg1 ;
-(unsigned long long)analyzerStartSampleCount;
-(void)setAnalyzerStartSampleCount:(unsigned long long)arg1 ;
-(BOOL)isExternalPhraseSpotterRunning;
-(void)setIsExternalPhraseSpotterRunning:(BOOL)arg1 ;
-(double)lastAggTime;
-(void)setLastAggTime:(double)arg1 ;
-(double)cumulativeUptime;
-(void)setCumulativeUptime:(double)arg1 ;
-(double)cumulativeDowntime;
-(void)setCumulativeDowntime:(double)arg1 ;
-(unsigned long long)wakeGestureHostTime;
-(void)setWakeGestureHostTime:(unsigned long long)arg1 ;
@end

