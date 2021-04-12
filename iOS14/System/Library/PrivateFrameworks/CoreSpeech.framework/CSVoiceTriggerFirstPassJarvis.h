/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSKeywordAnalyzerNDEAPIScoreDelegate.h>
#import <libobjc.A.dylib/CSActivationEventNotificationHandlerDelegate.h>
#import <libobjc.A.dylib/CSSPGEndpointAnalyzerDelegate.h>
#import <libobjc.A.dylib/CSAudioStreamProvidingDelegate.h>
#import <libobjc.A.dylib/CSSiriClientBehaviorMonitorDelegate.h>

@protocol CSVoiceTriggerDelegate, OS_dispatch_queue;
@class NSObject, CSAudioStream, CSAudioProvider, CSAudioStreamHolding, CSAsset, CSKeywordAnalyzerNDEAPI, CSKeywordAnalyzerNDEAPIResult, CSSPGEndpointAnalyzer, NSString, CSVoiceTriggerRTModel, CSPlainAudioFileWriter, CSVoiceTriggerSecondPass, NSMutableArray;

@interface CSVoiceTriggerFirstPassJarvis : NSObject <CSKeywordAnalyzerNDEAPIScoreDelegate, CSActivationEventNotificationHandlerDelegate, CSSPGEndpointAnalyzerDelegate, CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate> {

	BOOL _hasReceivedNDEAPIResult;
	BOOL _hasTriggerCandidate;
	BOOL _isSecondPassRunning;
	BOOL _isSiriClientListening;
	BOOL _firstTimeAssetConfigured;
	id<CSVoiceTriggerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	CSAudioStream* _audioStream;
	CSAudioProvider* _audioProvider;
	CSAudioStreamHolding* _audioStreamHolding;
	CSAsset* _currentAsset;
	CSKeywordAnalyzerNDEAPI* _keywordAnalyzerNDEAPI;
	unsigned long long _numProcessedSamples;
	unsigned long long _jarvisVoiceTriggerTimeout;
	unsigned long long _activeChannel;
	CSKeywordAnalyzerNDEAPIResult* _jarvisTriggerResult;
	unsigned long long _earlyDetectFiredMachTime;
	CSSPGEndpointAnalyzer* _endpointAnalyzer;
	NSString* _deviceId;
	CSVoiceTriggerRTModel* _rtModel;
	CSPlainAudioFileWriter* _audioFileWriter;
	CSVoiceTriggerSecondPass* _voiceTriggerSecondPass;
	unsigned long long _secondChanceHotTillMachTime;
	NSMutableArray* _assetConfigWaitingBuffer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSAudioStream * audioStream;                                      //@synthesize audioStream=_audioStream - In the implementation block
@property (nonatomic,retain) CSAudioProvider * audioProvider;                                  //@synthesize audioProvider=_audioProvider - In the implementation block
@property (nonatomic,retain) CSAudioStreamHolding * audioStreamHolding;                        //@synthesize audioStreamHolding=_audioStreamHolding - In the implementation block
@property (nonatomic,retain) CSAsset * currentAsset;                                           //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,retain) CSKeywordAnalyzerNDEAPI * keywordAnalyzerNDEAPI;                  //@synthesize keywordAnalyzerNDEAPI=_keywordAnalyzerNDEAPI - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedNDEAPIResult;                                     //@synthesize hasReceivedNDEAPIResult=_hasReceivedNDEAPIResult - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerCandidate;                                         //@synthesize hasTriggerCandidate=_hasTriggerCandidate - In the implementation block
@property (assign,nonatomic) unsigned long long numProcessedSamples;                           //@synthesize numProcessedSamples=_numProcessedSamples - In the implementation block
@property (assign,nonatomic) unsigned long long jarvisVoiceTriggerTimeout;                     //@synthesize jarvisVoiceTriggerTimeout=_jarvisVoiceTriggerTimeout - In the implementation block
@property (assign,nonatomic) unsigned long long activeChannel;                                 //@synthesize activeChannel=_activeChannel - In the implementation block
@property (nonatomic,retain) CSKeywordAnalyzerNDEAPIResult * jarvisTriggerResult;              //@synthesize jarvisTriggerResult=_jarvisTriggerResult - In the implementation block
@property (assign,nonatomic) unsigned long long earlyDetectFiredMachTime;                      //@synthesize earlyDetectFiredMachTime=_earlyDetectFiredMachTime - In the implementation block
@property (nonatomic,retain) CSSPGEndpointAnalyzer * endpointAnalyzer;                         //@synthesize endpointAnalyzer=_endpointAnalyzer - In the implementation block
@property (nonatomic,retain) NSString * deviceId;                                              //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerRTModel * rtModel;                                  //@synthesize rtModel=_rtModel - In the implementation block
@property (nonatomic,retain) CSPlainAudioFileWriter * audioFileWriter;                         //@synthesize audioFileWriter=_audioFileWriter - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerSecondPass * voiceTriggerSecondPass;                //@synthesize voiceTriggerSecondPass=_voiceTriggerSecondPass - In the implementation block
@property (assign,nonatomic) BOOL isSecondPassRunning;                                         //@synthesize isSecondPassRunning=_isSecondPassRunning - In the implementation block
@property (assign,nonatomic) BOOL isSiriClientListening;                                       //@synthesize isSiriClientListening=_isSiriClientListening - In the implementation block
@property (assign,nonatomic) unsigned long long secondChanceHotTillMachTime;                   //@synthesize secondChanceHotTillMachTime=_secondChanceHotTillMachTime - In the implementation block
@property (assign,nonatomic) BOOL firstTimeAssetConfigured;                                    //@synthesize firstTimeAssetConfigured=_firstTimeAssetConfigured - In the implementation block
@property (nonatomic,retain) NSMutableArray * assetConfigWaitingBuffer;                        //@synthesize assetConfigWaitingBuffer=_assetConfigWaitingBuffer - In the implementation block
@property (assign,nonatomic,__weak) id<CSVoiceTriggerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)jarvisAudioLoggingFilePath;
+(id)jarvisAudioLogDirectory;
+(id)timeStampString;
-(CSAsset *)currentAsset;
-(unsigned long long)secondChanceHotTillMachTime;
-(void)setAsset:(id)arg1 ;
-(id)init;
-(void)setSecondChanceHotTillMachTime:(unsigned long long)arg1 ;
-(id<CSVoiceTriggerDelegate>)delegate;
-(void)setAssetConfigWaitingBuffer:(NSMutableArray *)arg1 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3 ;
-(void)start;
-(unsigned long long)activeChannel;
-(void)setCurrentAsset:(CSAsset *)arg1 ;
-(void)setFirstTimeAssetConfigured:(BOOL)arg1 ;
-(void)setAudioProvider:(CSAudioProvider *)arg1 ;
-(BOOL)isSiriClientListening;
-(BOOL)isSecondPassRunning;
-(CSVoiceTriggerSecondPass *)voiceTriggerSecondPass;
-(void)setDelegate:(id<CSVoiceTriggerDelegate>)arg1 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 ;
-(void)_handleAudioChunk:(id)arg1 ;
-(void)setIsSiriClientListening:(BOOL)arg1 ;
-(void)setDeviceId:(NSString *)arg1 ;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(CSVoiceTriggerRTModel *)rtModel;
-(void)setIsSecondPassRunning:(BOOL)arg1 ;
-(void)setAudioStream:(CSAudioStream *)arg1 ;
-(void)setVoiceTriggerSecondPass:(CSVoiceTriggerSecondPass *)arg1 ;
-(void)reset;
-(void)activationEventNotificationHandler:(id)arg1 event:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableArray *)assetConfigWaitingBuffer;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2 ;
-(BOOL)firstTimeAssetConfigured;
-(void)_setAsset:(id)arg1 ;
-(void)_reset;
-(void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3 ;
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 withEventUUID:(id)arg5 ;
-(CSAudioProvider *)audioProvider;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)deviceId;
-(CSAudioStream *)audioStream;
-(CSAudioStreamHolding *)audioStreamHolding;
-(void)setAudioStreamHolding:(CSAudioStreamHolding *)arg1 ;
-(void)spgEndpointAnalyzerDidDetectEndpoint:(id)arg1 ;
-(CSPlainAudioFileWriter *)audioFileWriter;
-(void)setAudioFileWriter:(CSPlainAudioFileWriter *)arg1 ;
-(void)_clearTriggerCandidate;
-(void)_didStopAudioStream;
-(void)_notifyJarvisVoiceTriggerReject;
-(void)_reportJarvisVoiceTriggerFire;
-(void)_didDetectKeywordFromDeviceId:(id)arg1 activationInfo:(id)arg2 triggerHostTime:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_holdAudioStreamWithTimeout:(double)arg1 ;
-(void)_requestStartAudioStreamWitContext:(id)arg1 startStreamOption:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_didStartAudioStream;
-(void)_handleJarvisVoiceTriggerFromDeviceId:(id)arg1 activationInfo:(id)arg2 triggerHostTime:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_cancelAudioStreamHold;
-(void)_createSecondPassIfNeeded;
-(void)_handleSecondPassResult:(unsigned long long)arg1 deviceId:(id)arg2 voiceTriggerInfo:(id)arg3 secondChanceCandidate:(BOOL)arg4 error:(id)arg5 ;
-(void)_teardownSecondPass;
-(void)keywordAnalyzerNDEAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(CSKeywordAnalyzerNDEAPI *)keywordAnalyzerNDEAPI;
-(void)setKeywordAnalyzerNDEAPI:(CSKeywordAnalyzerNDEAPI *)arg1 ;
-(BOOL)hasReceivedNDEAPIResult;
-(void)setHasReceivedNDEAPIResult:(BOOL)arg1 ;
-(BOOL)hasTriggerCandidate;
-(void)setHasTriggerCandidate:(BOOL)arg1 ;
-(unsigned long long)numProcessedSamples;
-(void)setNumProcessedSamples:(unsigned long long)arg1 ;
-(unsigned long long)jarvisVoiceTriggerTimeout;
-(void)setJarvisVoiceTriggerTimeout:(unsigned long long)arg1 ;
-(CSKeywordAnalyzerNDEAPIResult *)jarvisTriggerResult;
-(void)setJarvisTriggerResult:(CSKeywordAnalyzerNDEAPIResult *)arg1 ;
-(unsigned long long)earlyDetectFiredMachTime;
-(void)setEarlyDetectFiredMachTime:(unsigned long long)arg1 ;
-(CSSPGEndpointAnalyzer *)endpointAnalyzer;
-(void)setEndpointAnalyzer:(CSSPGEndpointAnalyzer *)arg1 ;
-(void)setRtModel:(CSVoiceTriggerRTModel *)arg1 ;
@end

