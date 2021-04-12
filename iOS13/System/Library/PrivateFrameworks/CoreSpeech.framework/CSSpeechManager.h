/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSAudioServerCrashMonitorDelegate.h>
#import <libobjc.A.dylib/CSVoiceTriggerAssetHandlerDelegate.h>
#import <libobjc.A.dylib/CSActivationEventNotifierDelegate.h>
#import <libobjc.A.dylib/CSAudioRecorderDelegate.h>
#import <libobjc.A.dylib/CSVoiceTriggerXPCServiceDelegate.h>
#import <libobjc.A.dylib/CSAudioProviderDelegate.h>
#import <libobjc.A.dylib/CSOpportuneSpeakEventMonitorDelegate.h>

@protocol OS_dispatch_queue, CSSpeechManagerDelegate, CSSmartSiriVolumeDelegate, OS_dispatch_source;
@class NSObject, CSSmartSiriVolume, CSAudioRecorder, NSMutableDictionary, CSFallbackAudioSessionReleaseProvider, CSBuiltInVoiceTrigger, CSVoiceTriggerEventNotifier, CSVoiceTriggerFileLogger, CSSelfTriggerDetector, CSKeywordDetector, CSMyriadPHash, CSMyriadSelfTriggerCoordinator, CSVoiceTriggerFidesClient, CSVoiceTriggerFirstPassJarvis, CSVoiceTriggerFirstPassHearst, CSVoiceTriggerFirstPassHearstAP, CSVoiceProfileRetrainManager, CSSpIdImplicitTraining, CSOpportuneSpeakListnerTestService, NSString;

@interface CSSpeechManager : NSObject <CSAudioServerCrashMonitorDelegate, CSVoiceTriggerAssetHandlerDelegate, CSActivationEventNotifierDelegate, CSAudioRecorderDelegate, CSVoiceTriggerXPCServiceDelegate, CSAudioProviderDelegate, CSOpportuneSpeakEventMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CSSmartSiriVolume* _smartSiriVolume;
	NSObject*<OS_dispatch_queue> _assetQueryQueue;
	CSAudioRecorder* _audioRecorder;
	NSMutableDictionary* _audioProviders;
	CSFallbackAudioSessionReleaseProvider* _fallbackAudioSessionReleaseProvider;
	id<CSSpeechManagerDelegate> _clientController;
	id<CSSmartSiriVolumeDelegate> _volumeClientController;
	NSObject*<OS_dispatch_queue> _voiceTriggerQueue;
	CSBuiltInVoiceTrigger* _voiceTrigger;
	CSVoiceTriggerEventNotifier* _voiceTriggerEventNotifier;
	CSVoiceTriggerFileLogger* _voiceTriggerFileLogger;
	CSSelfTriggerDetector* _selfTriggerDetector;
	CSKeywordDetector* _keywordDetector;
	CSMyriadPHash* _myriad;
	CSMyriadSelfTriggerCoordinator* _myriadSelfTriggerCoordinator;
	CSVoiceTriggerFidesClient* _voiceTriggerFidesClient;
	CSVoiceTriggerFirstPassJarvis* _voiceTriggerFirstPassJarvis;
	CSVoiceTriggerFirstPassHearst* _voiceTriggerFirstPassHearst;
	CSVoiceTriggerFirstPassHearstAP* _voiceTriggerFirstPassHearstAP;
	CSVoiceProfileRetrainManager* _voiceTriggerRetrainer;
	CSSpIdImplicitTraining* _voiceTriggerImplicitTraining;
	NSObject*<OS_dispatch_source> _clearLoggingFileTimer;
	long long _clearLoggingFileTimerCount;
	CSOpportuneSpeakListnerTestService* _opportuneSpeakListnerTestService;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> assetQueryQueue;                                             //@synthesize assetQueryQueue=_assetQueryQueue - In the implementation block
@property (nonatomic,retain) CSAudioRecorder * audioRecorder;                                                          //@synthesize audioRecorder=_audioRecorder - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * audioProviders;                                                     //@synthesize audioProviders=_audioProviders - In the implementation block
@property (nonatomic,retain) CSFallbackAudioSessionReleaseProvider * fallbackAudioSessionReleaseProvider;              //@synthesize fallbackAudioSessionReleaseProvider=_fallbackAudioSessionReleaseProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CSSpeechManagerDelegate> clientController;                                      //@synthesize clientController=_clientController - In the implementation block
@property (assign,nonatomic,__weak) id<CSSmartSiriVolumeDelegate> volumeClientController;                              //@synthesize volumeClientController=_volumeClientController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> voiceTriggerQueue;                                           //@synthesize voiceTriggerQueue=_voiceTriggerQueue - In the implementation block
@property (nonatomic,retain) CSBuiltInVoiceTrigger * voiceTrigger;                                                     //@synthesize voiceTrigger=_voiceTrigger - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerEventNotifier * voiceTriggerEventNotifier;                                  //@synthesize voiceTriggerEventNotifier=_voiceTriggerEventNotifier - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerFileLogger * voiceTriggerFileLogger;                                        //@synthesize voiceTriggerFileLogger=_voiceTriggerFileLogger - In the implementation block
@property (nonatomic,retain) CSSelfTriggerDetector * selfTriggerDetector;                                              //@synthesize selfTriggerDetector=_selfTriggerDetector - In the implementation block
@property (nonatomic,retain) CSKeywordDetector * keywordDetector;                                                      //@synthesize keywordDetector=_keywordDetector - In the implementation block
@property (nonatomic,retain) CSMyriadPHash * myriad;                                                                   //@synthesize myriad=_myriad - In the implementation block
@property (nonatomic,retain) CSMyriadSelfTriggerCoordinator * myriadSelfTriggerCoordinator;                            //@synthesize myriadSelfTriggerCoordinator=_myriadSelfTriggerCoordinator - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerFidesClient * voiceTriggerFidesClient;                                      //@synthesize voiceTriggerFidesClient=_voiceTriggerFidesClient - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerFirstPassJarvis * voiceTriggerFirstPassJarvis;                              //@synthesize voiceTriggerFirstPassJarvis=_voiceTriggerFirstPassJarvis - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerFirstPassHearst * voiceTriggerFirstPassHearst;                              //@synthesize voiceTriggerFirstPassHearst=_voiceTriggerFirstPassHearst - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerFirstPassHearstAP * voiceTriggerFirstPassHearstAP;                          //@synthesize voiceTriggerFirstPassHearstAP=_voiceTriggerFirstPassHearstAP - In the implementation block
@property (nonatomic,retain) CSVoiceProfileRetrainManager * voiceTriggerRetrainer;                                     //@synthesize voiceTriggerRetrainer=_voiceTriggerRetrainer - In the implementation block
@property (nonatomic,retain) CSSpIdImplicitTraining * voiceTriggerImplicitTraining;                                    //@synthesize voiceTriggerImplicitTraining=_voiceTriggerImplicitTraining - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> clearLoggingFileTimer;                                      //@synthesize clearLoggingFileTimer=_clearLoggingFileTimer - In the implementation block
@property (assign,nonatomic) long long clearLoggingFileTimerCount;                                                     //@synthesize clearLoggingFileTimerCount=_clearLoggingFileTimerCount - In the implementation block
@property (nonatomic,retain) CSOpportuneSpeakListnerTestService * opportuneSpeakListnerTestService;                    //@synthesize opportuneSpeakListnerTestService=_opportuneSpeakListnerTestService - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) CSSmartSiriVolume * smartSiriVolume;                                                    //@synthesize smartSiriVolume=_smartSiriVolume - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)sharedManagerForCoreSpeechDaemon;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)startManager;
-(NSObject*<OS_dispatch_queue>)assetQueryQueue;
-(void)setAssetQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)voiceTriggerAssetHandler:(id)arg1 didChangeCachedAsset:(id)arg2 ;
-(void)voiceTriggerXPCService:(id)arg1 setPhraseSpotterBypassing:(BOOL)arg2 ;
-(id)audioProviderWithContext:(id)arg1 error:(id*)arg2 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1 ;
-(void)activationEventNotifier:(id)arg1 event:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)CSAudioRouteChangeMonitor:(id)arg1 didReceiveAudioRouteChangeEvent:(long long)arg2 ;
-(void)_createClearLoggingFileTimer;
-(void)_startVoiceTrigger;
-(void)_setupVoiceTriggerWithCompletion:(/*^block*/id)arg1 ;
-(void)_startClearLoggingFilesTimer;
-(id)_voiceTriggerEventNotifierCreateIfNeeded:(BOOL)arg1 ;
-(id)_myriadSelfTriggerCoordinatorIfNeeded:(BOOL)arg1 ;
-(void)_setupForHearstIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)_setupForJarvisIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)_getVoiceTriggerAssetIfNeeded:(/*^block*/id)arg1 ;
-(id)_getAudioRecorderWithError:(id*)arg1 ;
-(NSMutableDictionary *)audioProviders;
-(void)setAudioRecorder:(CSAudioRecorder *)arg1 ;
-(void)_reinitializeVoiceTriggerIfNeeded;
-(void)_reinitializeVoiceTriggerWithAsset:(id)arg1 ;
-(void)_reinitializeSmartSiriVolumeWithAsset:(id)arg1 ;
-(void)_teardownForBluetoothDevice;
-(void)_setupForBluetoothDeviceIfNeededWithDeviceType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_prepareForBluetoothDeviceWithDeviceType:(unsigned long long)arg1 asset:(id)arg2 ;
-(void)opportuneSpeakEventMonitor:(id)arg1 didStreamStateChanged:(BOOL)arg2 ;
-(void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 ;
-(void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 ;
-(void)audioRecorderWillBeDestroyed:(id)arg1 ;
-(void)audioProviderInvalidated:(id)arg1 streamHandleId:(unsigned long long)arg2 ;
-(void)registerSpeechController:(id)arg1 ;
-(void)registerSiriClientProxy:(id)arg1 ;
-(void)registerVolumeController:(id)arg1 ;
-(id)audioProviderWithUUID:(id)arg1 ;
-(id)audioProviderWithStreamID:(unsigned long long)arg1 ;
-(id)fetchFallbackAudioSessionReleaseProvider;
-(CSSmartSiriVolume *)smartSiriVolume;
-(CSAudioRecorder *)audioRecorder;
-(void)setAudioProviders:(NSMutableDictionary *)arg1 ;
-(CSFallbackAudioSessionReleaseProvider *)fallbackAudioSessionReleaseProvider;
-(void)setFallbackAudioSessionReleaseProvider:(CSFallbackAudioSessionReleaseProvider *)arg1 ;
-(id<CSSpeechManagerDelegate>)clientController;
-(void)setClientController:(id<CSSpeechManagerDelegate>)arg1 ;
-(id<CSSmartSiriVolumeDelegate>)volumeClientController;
-(void)setVolumeClientController:(id<CSSmartSiriVolumeDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)voiceTriggerQueue;
-(void)setVoiceTriggerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CSBuiltInVoiceTrigger *)voiceTrigger;
-(void)setVoiceTrigger:(CSBuiltInVoiceTrigger *)arg1 ;
-(CSVoiceTriggerEventNotifier *)voiceTriggerEventNotifier;
-(void)setVoiceTriggerEventNotifier:(CSVoiceTriggerEventNotifier *)arg1 ;
-(CSVoiceTriggerFileLogger *)voiceTriggerFileLogger;
-(void)setVoiceTriggerFileLogger:(CSVoiceTriggerFileLogger *)arg1 ;
-(CSSelfTriggerDetector *)selfTriggerDetector;
-(void)setSelfTriggerDetector:(CSSelfTriggerDetector *)arg1 ;
-(CSKeywordDetector *)keywordDetector;
-(void)setKeywordDetector:(CSKeywordDetector *)arg1 ;
-(CSMyriadPHash *)myriad;
-(void)setMyriad:(CSMyriadPHash *)arg1 ;
-(CSMyriadSelfTriggerCoordinator *)myriadSelfTriggerCoordinator;
-(void)setMyriadSelfTriggerCoordinator:(CSMyriadSelfTriggerCoordinator *)arg1 ;
-(CSVoiceTriggerFidesClient *)voiceTriggerFidesClient;
-(void)setVoiceTriggerFidesClient:(CSVoiceTriggerFidesClient *)arg1 ;
-(CSVoiceTriggerFirstPassJarvis *)voiceTriggerFirstPassJarvis;
-(void)setVoiceTriggerFirstPassJarvis:(CSVoiceTriggerFirstPassJarvis *)arg1 ;
-(CSVoiceTriggerFirstPassHearst *)voiceTriggerFirstPassHearst;
-(void)setVoiceTriggerFirstPassHearst:(CSVoiceTriggerFirstPassHearst *)arg1 ;
-(CSVoiceTriggerFirstPassHearstAP *)voiceTriggerFirstPassHearstAP;
-(void)setVoiceTriggerFirstPassHearstAP:(CSVoiceTriggerFirstPassHearstAP *)arg1 ;
-(CSVoiceProfileRetrainManager *)voiceTriggerRetrainer;
-(void)setVoiceTriggerRetrainer:(CSVoiceProfileRetrainManager *)arg1 ;
-(CSSpIdImplicitTraining *)voiceTriggerImplicitTraining;
-(void)setVoiceTriggerImplicitTraining:(CSSpIdImplicitTraining *)arg1 ;
-(NSObject*<OS_dispatch_source>)clearLoggingFileTimer;
-(void)setClearLoggingFileTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(long long)clearLoggingFileTimerCount;
-(void)setClearLoggingFileTimerCount:(long long)arg1 ;
-(CSOpportuneSpeakListnerTestService *)opportuneSpeakListnerTestService;
-(void)setOpportuneSpeakListnerTestService:(CSOpportuneSpeakListnerTestService *)arg1 ;
@end

