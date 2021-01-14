/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSKeywordAnalyzerNDAPIScoreDelegate.h>
#import <libobjc.A.dylib/CSActivationEventNotificationHandlerDelegate.h>
#import <libobjc.A.dylib/CSAudioStreamProvidingDelegate.h>
#import <libobjc.A.dylib/CSSiriClientBehaviorMonitorDelegate.h>
#import <libobjc.A.dylib/CSAudioServerCrashMonitorDelegate.h>
#import <libobjc.A.dylib/CSVoiceTriggerXPCServiceProxyDelegate.h>
#import <libobjc.A.dylib/CSStateMachineDelegate.h>
#import <libobjc.A.dylib/CSBluetoothWirelessSplitterMonitorDelegate.h>
#import <libobjc.A.dylib/CSAudioRouteChangeMonitorDelegate.h>
#import <libobjc.A.dylib/CSSelfTriggerDetectorDelegate.h>

@protocol CSVoiceTriggerDelegate, OS_dispatch_queue, OS_dispatch_group, OS_dispatch_source;
@class CSPolicy, CSAudioStream, NSObject, CSAsset, NSMutableArray, CSKeywordAnalyzerNDAPIResult, NSDictionary, CSVoiceTriggerSecondPass, CSAudioProvider, CSOSTransaction, CSStateMachine, CSVoiceTriggerAlwaysOnProcessor, NSString;

@interface CSBuiltInVoiceTrigger : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate, CSActivationEventNotificationHandlerDelegate, CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSVoiceTriggerXPCServiceProxyDelegate, CSStateMachineDelegate, CSBluetoothWirelessSplitterMonitorDelegate, CSAudioRouteChangeMonitorDelegate, CSSelfTriggerDetectorDelegate> {

	BOOL _voiceTriggerEnabled;
	BOOL _hasTriggerPending;
	BOOL _isSecondPassRunning;
	BOOL _isSiriClientListening;
	BOOL _isListenPollingStarting;
	BOOL _isPhraseSpotterBypassed;
	BOOL _isExternalPhraseSpotterRunning;
	BOOL _shouldDisableOnSpeakerVerificationInSplitterMode;
	BOOL _firstTimeAssetConfigured;
	float _firstPassThreshold;
	float _bestScore;
	float _masterChannelScoreBoost;
	id<CSVoiceTriggerDelegate> _delegate;
	CSPolicy* _voiceTriggerStartPolicy;
	CSAudioStream* _audioStream;
	NSObject*<OS_dispatch_queue> _queue;
	CSAsset* _currentAsset;
	NSMutableArray* _keywordAnalyzersNDAPI;
	unsigned long long _bestChannel;
	CSKeywordAnalyzerNDAPIResult* _onsetResult;
	unsigned long long _onsetChannel;
	unsigned long long _channelSelectionDelay;
	unsigned long long _delayInSamplesRequiredForChannelSelection;
	NSDictionary* _channelSelectionScores;
	unsigned long long _processingChunkSamples;
	unsigned long long _processingChannelsBitset;
	CSVoiceTriggerSecondPass* _voiceTriggerSecondPass;
	CSAudioProvider* _audioProvider;
	NSMutableArray* _audioStreamHoldings;
	CSOSTransaction* _secondPassTransaction;
	CSPolicy* _voiceTriggerAOPModeStartPolicy;
	CSStateMachine* _stateMachine;
	CSVoiceTriggerAlwaysOnProcessor* _alwaysOnProcessorController;
	NSObject*<OS_dispatch_group> _recordingWillStartGroup;
	unsigned long long _secondChanceHotTillMachTime;
	unsigned long long _currentSplitterState;
	NSString* _name;
	NSMutableArray* _assetConfigWaitingBuffer;
	NSObject*<OS_dispatch_source> _validationTimer;

}

@property (nonatomic,retain) CSPolicy * voiceTriggerStartPolicy;                                         //@synthesize voiceTriggerStartPolicy=_voiceTriggerStartPolicy - In the implementation block
@property (nonatomic,retain) CSAudioStream * audioStream;                                                //@synthesize audioStream=_audioStream - In the implementation block
@property (assign,nonatomic) BOOL voiceTriggerEnabled;                                                   //@synthesize voiceTriggerEnabled=_voiceTriggerEnabled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSAsset * currentAsset;                                                     //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,retain) NSMutableArray * keywordAnalyzersNDAPI;                                     //@synthesize keywordAnalyzersNDAPI=_keywordAnalyzersNDAPI - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerPending;                                                     //@synthesize hasTriggerPending=_hasTriggerPending - In the implementation block
@property (assign,nonatomic) float firstPassThreshold;                                                   //@synthesize firstPassThreshold=_firstPassThreshold - In the implementation block
@property (assign,nonatomic) float bestScore;                                                            //@synthesize bestScore=_bestScore - In the implementation block
@property (assign,nonatomic) unsigned long long bestChannel;                                             //@synthesize bestChannel=_bestChannel - In the implementation block
@property (nonatomic,retain) CSKeywordAnalyzerNDAPIResult * onsetResult;                                 //@synthesize onsetResult=_onsetResult - In the implementation block
@property (assign,nonatomic) unsigned long long onsetChannel;                                            //@synthesize onsetChannel=_onsetChannel - In the implementation block
@property (assign,nonatomic) unsigned long long channelSelectionDelay;                                   //@synthesize channelSelectionDelay=_channelSelectionDelay - In the implementation block
@property (assign,nonatomic) unsigned long long delayInSamplesRequiredForChannelSelection;               //@synthesize delayInSamplesRequiredForChannelSelection=_delayInSamplesRequiredForChannelSelection - In the implementation block
@property (assign,nonatomic) float masterChannelScoreBoost;                                              //@synthesize masterChannelScoreBoost=_masterChannelScoreBoost - In the implementation block
@property (nonatomic,retain) NSDictionary * channelSelectionScores;                                      //@synthesize channelSelectionScores=_channelSelectionScores - In the implementation block
@property (assign,nonatomic) unsigned long long processingChunkSamples;                                  //@synthesize processingChunkSamples=_processingChunkSamples - In the implementation block
@property (assign,nonatomic) unsigned long long processingChannelsBitset;                                //@synthesize processingChannelsBitset=_processingChannelsBitset - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerSecondPass * voiceTriggerSecondPass;                          //@synthesize voiceTriggerSecondPass=_voiceTriggerSecondPass - In the implementation block
@property (assign,nonatomic) BOOL isSecondPassRunning;                                                   //@synthesize isSecondPassRunning=_isSecondPassRunning - In the implementation block
@property (assign,nonatomic) BOOL isSiriClientListening;                                                 //@synthesize isSiriClientListening=_isSiriClientListening - In the implementation block
@property (assign,nonatomic) BOOL isListenPollingStarting;                                               //@synthesize isListenPollingStarting=_isListenPollingStarting - In the implementation block
@property (nonatomic,retain) CSAudioProvider * audioProvider;                                            //@synthesize audioProvider=_audioProvider - In the implementation block
@property (nonatomic,retain) NSMutableArray * audioStreamHoldings;                                       //@synthesize audioStreamHoldings=_audioStreamHoldings - In the implementation block
@property (nonatomic,retain) CSOSTransaction * secondPassTransaction;                                    //@synthesize secondPassTransaction=_secondPassTransaction - In the implementation block
@property (assign,nonatomic) BOOL isPhraseSpotterBypassed;                                               //@synthesize isPhraseSpotterBypassed=_isPhraseSpotterBypassed - In the implementation block
@property (assign,nonatomic) BOOL isExternalPhraseSpotterRunning;                                        //@synthesize isExternalPhraseSpotterRunning=_isExternalPhraseSpotterRunning - In the implementation block
@property (nonatomic,retain) CSPolicy * voiceTriggerAOPModeStartPolicy;                                  //@synthesize voiceTriggerAOPModeStartPolicy=_voiceTriggerAOPModeStartPolicy - In the implementation block
@property (nonatomic,retain) CSStateMachine * stateMachine;                                              //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerAlwaysOnProcessor * alwaysOnProcessorController;              //@synthesize alwaysOnProcessorController=_alwaysOnProcessorController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> recordingWillStartGroup;                       //@synthesize recordingWillStartGroup=_recordingWillStartGroup - In the implementation block
@property (assign,nonatomic) unsigned long long secondChanceHotTillMachTime;                             //@synthesize secondChanceHotTillMachTime=_secondChanceHotTillMachTime - In the implementation block
@property (assign,nonatomic) unsigned long long currentSplitterState;                                    //@synthesize currentSplitterState=_currentSplitterState - In the implementation block
@property (assign,nonatomic) BOOL shouldDisableOnSpeakerVerificationInSplitterMode;                      //@synthesize shouldDisableOnSpeakerVerificationInSplitterMode=_shouldDisableOnSpeakerVerificationInSplitterMode - In the implementation block
@property (nonatomic,retain) NSString * name;                                                            //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL firstTimeAssetConfigured;                                              //@synthesize firstTimeAssetConfigured=_firstTimeAssetConfigured - In the implementation block
@property (nonatomic,retain) NSMutableArray * assetConfigWaitingBuffer;                                  //@synthesize assetConfigWaitingBuffer=_assetConfigWaitingBuffer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> validationTimer;                              //@synthesize validationTimer=_validationTimer - In the implementation block
@property (assign,nonatomic,__weak) id<CSVoiceTriggerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CSAsset *)currentAsset;
-(void)setBestChannel:(unsigned long long)arg1 ;
-(unsigned long long)secondChanceHotTillMachTime;
-(void)setAsset:(id)arg1 ;
-(BOOL)isListenPollingStarting;
-(CSKeywordAnalyzerNDAPIResult *)onsetResult;
-(unsigned long long)_currentState;
-(void)_transitVoiceTriggerStatus:(BOOL)arg1 force:(BOOL)arg2 ;
-(unsigned long long)currentSplitterState;
-(void)setCurrentSplitterState:(unsigned long long)arg1 ;
-(void)setShouldDisableOnSpeakerVerificationInSplitterMode:(BOOL)arg1 ;
-(BOOL)_shouldEnableAPVoiceTrigger;
-(BOOL)_shouldEnableAOPVoiceTrigger;
-(void)setChannelSelectionDelay:(unsigned long long)arg1 ;
-(void)_transitAOPMode:(BOOL)arg1 ;
-(void)setDelayInSamplesRequiredForChannelSelection:(unsigned long long)arg1 ;
-(void)setBestScore:(float)arg1 ;
-(void)setSecondChanceHotTillMachTime:(unsigned long long)arg1 ;
-(void)_transitAOPModeSync:(BOOL)arg1 ;
-(id<CSVoiceTriggerDelegate>)delegate;
-(BOOL)voiceTriggerEnabled;
-(void)setAssetConfigWaitingBuffer:(NSMutableArray *)arg1 ;
-(float)firstPassThreshold;
-(void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3 ;
-(void)start;
-(void)setOnsetChannel:(unsigned long long)arg1 ;
-(float)bestScore;
-(void)_notifyEvent:(unsigned long long)arg1 ;
-(void)_handleSecondPassResult:(unsigned long long)arg1 voiceTriggerInfo:(id)arg2 deviceId:(id)arg3 secondChanceCandidate:(BOOL)arg4 error:(id)arg5 ;
-(void)setStateMachine:(CSStateMachine *)arg1 ;
-(unsigned long long)onsetChannel;
-(void)setProcessingChunkSamples:(unsigned long long)arg1 ;
-(void)setCurrentAsset:(CSAsset *)arg1 ;
-(void)setFirstTimeAssetConfigured:(BOOL)arg1 ;
-(void)setIsListenPollingStarting:(BOOL)arg1 ;
-(void)CSVoiceTriggerXPCServiceProxy:(id)arg1 bypassPhraseSpotter:(BOOL)arg2 ;
-(unsigned long long)bestChannel;
-(id)_eventName:(unsigned long long)arg1 ;
-(id)initWithTargetQueue:(id)arg1 ;
-(void)didTransitFrom:(long long)arg1 to:(long long)arg2 by:(long long)arg3 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1 ;
-(void)setAudioProvider:(CSAudioProvider *)arg1 ;
-(BOOL)isSiriClientListening;
-(void)_keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(void)_startListenPollingWithInterval:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cancelLastAudioStreamHold;
-(BOOL)_isBuiltInAOPVoiceTriggerEvent:(id)arg1 ;
-(BOOL)isSecondPassRunning;
-(id)_stateName:(unsigned long long)arg1 ;
-(void)setIsExternalPhraseSpotterRunning:(BOOL)arg1 ;
-(BOOL)hasTriggerPending;
-(void)setVoiceTriggerAOPModeStartPolicy:(CSPolicy *)arg1 ;
-(void)_startAPVoiceTriggerWithCompletion:(/*^block*/id)arg1 ;
-(void)setAlwaysOnProcessorController:(CSVoiceTriggerAlwaysOnProcessor *)arg1 ;
-(void)CSAudioRouteChangeMonitor:(id)arg1 didReceiveAudioRouteChangeEvent:(long long)arg2 ;
-(NSString *)name;
-(NSObject*<OS_dispatch_source>)validationTimer;
-(CSVoiceTriggerSecondPass *)voiceTriggerSecondPass;
-(void)setDelegate:(id<CSVoiceTriggerDelegate>)arg1 ;
-(BOOL)isPhraseSpotterBypassed;
-(unsigned long long)processingChannelsBitset;
-(void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 ;
-(void)_startListenWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleAudioChunk:(id)arg1 ;
-(void)setVoiceTriggerStartPolicy:(CSPolicy *)arg1 ;
-(void)_receivedHearstConnectionEvent:(BOOL)arg1 ;
-(void)setIsSiriClientListening:(BOOL)arg1 ;
-(void)keywordAnalyzerNDAPI:(id)arg1 hasMpVtResultsAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(BOOL)_shouldSecondPassKeepAlive;
-(void)_cancelAllAudioStreamHold;
-(CSVoiceTriggerAlwaysOnProcessor *)alwaysOnProcessorController;
-(CSStateMachine *)stateMachine;
-(void)_handleVoiceTriggerSecondPassWithSource:(unsigned long long)arg1 deviceId:(id)arg2 audioProviderUUID:(id)arg3 firstPassInfo:(id)arg4 ;
-(void)_requestStartAudioStreamWithSource:(unsigned long long)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setMasterChannelScoreBoost:(float)arg1 ;
-(void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(NSMutableArray *)audioStreamHoldings;
-(void)setValidationTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_reportVoiceTriggerFirstPassFireFromAP;
-(BOOL)shouldDisableOnSpeakerVerificationInSplitterMode;
-(void)setIsSecondPassRunning:(BOOL)arg1 ;
-(void)_APModeValidationTimerFired;
-(void)_transitAOPModeAsync:(BOOL)arg1 ;
-(void)setAudioStream:(CSAudioStream *)arg1 ;
-(void)setVoiceTriggerSecondPass:(CSVoiceTriggerSecondPass *)arg1 ;
-(CSPolicy *)voiceTriggerAOPModeStartPolicy;
-(void)didIgnoreEvent:(long long)arg1 from:(long long)arg2 ;
-(void)setHasTriggerPending:(BOOL)arg1 ;
-(void)_stopAPVoiceTrigger;
-(void)_setupStateMachine;
-(void)reset;
-(void)activationEventNotificationHandler:(id)arg1 event:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_addAudioStreamHold:(id)arg1 ;
-(void)_startAOPVoiceTrigger;
-(NSMutableArray *)assetConfigWaitingBuffer;
-(void)CSVoiceTriggerXPCServiceProxy:(id)arg1 bypassRaiseToSpeak:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)CSBluetoothWirelessSplitterMonitor:(id)arg1 didReceiveSplitterStateChange:(unsigned long long)arg2 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)arg3 ;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2 ;
-(BOOL)firstTimeAssetConfigured;
-(BOOL)_shouldReuseBuiltInAudioProvider;
-(void)setRecordingWillStartGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(BOOL)_shouldHandleAOPVoiceTrigger;
-(void)_setAsset:(id)arg1 ;
-(void)_reset;
-(void)setProcessingChannelsBitset:(unsigned long long)arg1 ;
-(NSDictionary *)channelSelectionScores;
-(void)setName:(NSString *)arg1 ;
-(void)setSecondPassTransaction:(CSOSTransaction *)arg1 ;
-(void)setChannelSelectionScores:(NSDictionary *)arg1 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3 ;
-(void)setIsPhraseSpotterBypassed:(BOOL)arg1 ;
-(unsigned long long)processingChunkSamples;
-(unsigned long long)delayInSamplesRequiredForChannelSelection;
-(void)setAudioStreamHoldings:(NSMutableArray *)arg1 ;
-(void)setOnsetResult:(CSKeywordAnalyzerNDAPIResult *)arg1 ;
-(void)_startVoiceTriggerWithCompletion:(/*^block*/id)arg1 ;
-(void)setKeywordAnalyzersNDAPI:(NSMutableArray *)arg1 ;
-(CSPolicy *)voiceTriggerStartPolicy;
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2 ;
-(NSObject*<OS_dispatch_group>)recordingWillStartGroup;
-(void)selfTriggerDetector:(id)arg1 didDetectSelfTrigger:(id)arg2 ;
-(void)setFirstPassThreshold:(float)arg1 ;
-(BOOL)_isVoiceTriggerStateTransitionEvent:(id)arg1 ;
-(void)_teardownSecondPassIfNeeded;
-(void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 withEventUUID:(id)arg5 ;
-(CSAudioProvider *)audioProvider;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CSOSTransaction *)secondPassTransaction;
-(float)masterChannelScoreBoost;
-(void)_createSecondPassIfNeededWithFirstPassSource:(unsigned long long)arg1 ;
-(void)_updateCurrentSplitterState:(unsigned long long)arg1 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)arg2 ;
-(void)_stopListening;
-(void)_stopAOPVoiceTrigger;
-(unsigned long long)channelSelectionDelay;
-(BOOL)isExternalPhraseSpotterRunning;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1 ;
-(void)setVoiceTriggerEnabled:(BOOL)arg1 ;
-(CSAudioStream *)audioStream;
-(NSMutableArray *)keywordAnalyzersNDAPI;
@end

