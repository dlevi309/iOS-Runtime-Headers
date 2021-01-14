/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSAudioStreamProvidingDelegate.h>
#import <libobjc.A.dylib/CSKeywordAnalyzerNDAPIScoreDelegate.h>
#import <libobjc.A.dylib/CSVoiceTriggerEnabledMonitorDelegate.h>
#import <libobjc.A.dylib/CSSiriClientBehaviorMonitorDelegate.h>
#import <libobjc.A.dylib/CSOpportuneSpeakEventMonitorDelegate.h>

@protocol CSVoiceTriggerDelegate, OS_dispatch_queue, OS_dispatch_group;
@class NSObject, CSAsset, CSKeywordAnalyzerNDAPI, CSAudioStream, CSVoiceTriggerSecondPass, CSOSTransaction, NSString, CSAudioProvider, NSMutableArray;

@interface CSVoiceTriggerFirstPassHearstAP : NSObject <CSAudioStreamProvidingDelegate, CSKeywordAnalyzerNDAPIScoreDelegate, CSVoiceTriggerEnabledMonitorDelegate, CSSiriClientBehaviorMonitorDelegate, CSOpportuneSpeakEventMonitorDelegate> {

	BOOL _isAPHearstFirstPassEnabled;
	BOOL _isSiriClientListening;
	BOOL _isSecondPassRunning;
	BOOL _isVoiceTriggerEnabled;
	float _keywordThreshold;
	id<CSVoiceTriggerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	CSAsset* _currentAsset;
	CSKeywordAnalyzerNDAPI* _keywordAnalyzerNDAPI;
	CSAudioStream* _audioStream;
	NSObject*<OS_dispatch_group> _recordingWillStartGroup;
	CSVoiceTriggerSecondPass* _voiceTriggerSecondPass;
	CSOSTransaction* _secondPassTransaction;
	unsigned long long _secondChanceHotTillMachTime;
	NSString* _deviceId;
	CSAudioProvider* _audioProvider;
	NSString* _opportuneSpeakAudioProviderUUID;
	NSMutableArray* _audioStreamHoldings;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSAsset * currentAsset;                                            //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,retain) CSKeywordAnalyzerNDAPI * keywordAnalyzerNDAPI;                     //@synthesize keywordAnalyzerNDAPI=_keywordAnalyzerNDAPI - In the implementation block
@property (nonatomic,retain) CSAudioStream * audioStream;                                       //@synthesize audioStream=_audioStream - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> recordingWillStartGroup;              //@synthesize recordingWillStartGroup=_recordingWillStartGroup - In the implementation block
@property (assign,nonatomic) BOOL isAPHearstFirstPassEnabled;                                   //@synthesize isAPHearstFirstPassEnabled=_isAPHearstFirstPassEnabled - In the implementation block
@property (assign,nonatomic) float keywordThreshold;                                            //@synthesize keywordThreshold=_keywordThreshold - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerSecondPass * voiceTriggerSecondPass;                 //@synthesize voiceTriggerSecondPass=_voiceTriggerSecondPass - In the implementation block
@property (nonatomic,retain) CSOSTransaction * secondPassTransaction;                           //@synthesize secondPassTransaction=_secondPassTransaction - In the implementation block
@property (assign,nonatomic) BOOL isSiriClientListening;                                        //@synthesize isSiriClientListening=_isSiriClientListening - In the implementation block
@property (assign,nonatomic) BOOL isSecondPassRunning;                                          //@synthesize isSecondPassRunning=_isSecondPassRunning - In the implementation block
@property (assign,nonatomic) unsigned long long secondChanceHotTillMachTime;                    //@synthesize secondChanceHotTillMachTime=_secondChanceHotTillMachTime - In the implementation block
@property (nonatomic,retain) NSString * deviceId;                                               //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,retain) CSAudioProvider * audioProvider;                                   //@synthesize audioProvider=_audioProvider - In the implementation block
@property (nonatomic,retain) NSString * opportuneSpeakAudioProviderUUID;                        //@synthesize opportuneSpeakAudioProviderUUID=_opportuneSpeakAudioProviderUUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * audioStreamHoldings;                              //@synthesize audioStreamHoldings=_audioStreamHoldings - In the implementation block
@property (assign,nonatomic) BOOL isVoiceTriggerEnabled;                                        //@synthesize isVoiceTriggerEnabled=_isVoiceTriggerEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<CSVoiceTriggerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CSAsset *)currentAsset;
-(unsigned long long)secondChanceHotTillMachTime;
-(void)setAsset:(id)arg1 ;
-(id)init;
-(void)setSecondChanceHotTillMachTime:(unsigned long long)arg1 ;
-(id<CSVoiceTriggerDelegate>)delegate;
-(void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3 ;
-(void)start;
-(void)_handleSecondPassResult:(unsigned long long)arg1 voiceTriggerInfo:(id)arg2 deviceId:(id)arg3 secondChanceCandidate:(BOOL)arg4 error:(id)arg5 ;
-(void)setCurrentAsset:(CSAsset *)arg1 ;
-(void)setAudioProvider:(CSAudioProvider *)arg1 ;
-(BOOL)isSiriClientListening;
-(void)_cancelLastAudioStreamHold;
-(BOOL)isSecondPassRunning;
-(CSVoiceTriggerSecondPass *)voiceTriggerSecondPass;
-(void)setDelegate:(id<CSVoiceTriggerDelegate>)arg1 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 ;
-(void)setIsSiriClientListening:(BOOL)arg1 ;
-(void)setDeviceId:(NSString *)arg1 ;
-(void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(NSMutableArray *)audioStreamHoldings;
-(void)setIsSecondPassRunning:(BOOL)arg1 ;
-(void)setAudioStream:(CSAudioStream *)arg1 ;
-(void)setVoiceTriggerSecondPass:(CSVoiceTriggerSecondPass *)arg1 ;
-(void)_addAudioStreamHold:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2 ;
-(void)setRecordingWillStartGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)_setAsset:(id)arg1 ;
-(void)_reset;
-(void)setSecondPassTransaction:(CSOSTransaction *)arg1 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3 ;
-(void)setAudioStreamHoldings:(NSMutableArray *)arg1 ;
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2 ;
-(NSObject*<OS_dispatch_group>)recordingWillStartGroup;
-(void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 withEventUUID:(id)arg5 ;
-(CSAudioProvider *)audioProvider;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)CSVoiceTriggerEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2 ;
-(CSOSTransaction *)secondPassTransaction;
-(NSString *)deviceId;
-(void)_stopListening;
-(void)opportuneSpeakEventMonitor:(id)arg1 didStreamStateChanged:(BOOL)arg2 ;
-(CSAudioStream *)audioStream;
-(float)keywordThreshold;
-(void)setKeywordThreshold:(float)arg1 ;
-(void)_teardownSecondPass;
-(void)_createSecondPass;
-(void)_startListenWithAudioProviderUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_shouldHearstAPModeEnabled;
-(void)_transitHearstAPEnable:(BOOL)arg1 ;
-(CSKeywordAnalyzerNDAPI *)keywordAnalyzerNDAPI;
-(void)setKeywordAnalyzerNDAPI:(CSKeywordAnalyzerNDAPI *)arg1 ;
-(BOOL)isAPHearstFirstPassEnabled;
-(void)setIsAPHearstFirstPassEnabled:(BOOL)arg1 ;
-(NSString *)opportuneSpeakAudioProviderUUID;
-(void)setOpportuneSpeakAudioProviderUUID:(NSString *)arg1 ;
-(BOOL)isVoiceTriggerEnabled;
-(void)setIsVoiceTriggerEnabled:(BOOL)arg1 ;
@end

