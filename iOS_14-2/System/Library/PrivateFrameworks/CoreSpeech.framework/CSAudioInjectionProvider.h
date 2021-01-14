/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSAudioRecorder.h>
#import <libobjc.A.dylib/CSAudioInjectionEngineDelegate.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject, NSUUID, NSMutableArray, CSAudioInjectionDevice, CSAudioInjectionEngine, NSMutableDictionary, NSString;

@interface CSAudioInjectionProvider : CSAudioRecorder <CSAudioInjectionEngineDelegate> {

	float _didStartDelayInSeconds;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	NSUUID* _uuid;
	NSMutableArray* _connectedDevices;
	CSAudioInjectionDevice* _builtInDevice;
	CSAudioInjectionDevice* _bundleTvRemote;
	CSAudioInjectionEngine* _builtInAudioInjectionEngine;
	NSMutableDictionary* _audioInjectionEngines;
	unsigned long long _latestPluginStreamId;

}

@property (nonatomic,retain) NSHashTable * observers;                                           //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSMutableArray * connectedDevices;                                 //@synthesize connectedDevices=_connectedDevices - In the implementation block
@property (nonatomic,retain) CSAudioInjectionDevice * builtInDevice;                            //@synthesize builtInDevice=_builtInDevice - In the implementation block
@property (nonatomic,retain) CSAudioInjectionDevice * bundleTvRemote;                           //@synthesize bundleTvRemote=_bundleTvRemote - In the implementation block
@property (nonatomic,retain) CSAudioInjectionEngine * builtInAudioInjectionEngine;              //@synthesize builtInAudioInjectionEngine=_builtInAudioInjectionEngine - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * audioInjectionEngines;                       //@synthesize audioInjectionEngines=_audioInjectionEngines - In the implementation block
@property (assign,nonatomic) unsigned long long latestPluginStreamId;                           //@synthesize latestPluginStreamId=_latestPluginStreamId - In the implementation block
@property (assign,nonatomic) float didStartDelayInSeconds;                                      //@synthesize didStartDelayInSeconds=_didStartDelayInSeconds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultInjectionProvider;
+(void)createSharedAudioSession;
-(void)unregisterObserver:(id)arg1 ;
-(id)metrics;
-(void)registerObserver:(id)arg1 ;
-(NSUUID *)uuid;
-(NSHashTable *)observers;
-(id)init;
-(void)start;
-(BOOL)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 ;
-(void)connectDevice:(id)arg1 ;
-(unsigned long long)alertStartTime;
-(void)setDuckOthersOption:(BOOL)arg1 ;
-(void)updateMeters;
-(void)stop;
-(NSMutableArray *)connectedDevices;
-(void)setObservers:(NSHashTable *)arg1 ;
-(BOOL)duckOthersOption;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(void)disconnectDevice:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)enableMiniDucking:(BOOL)arg1 ;
-(unsigned long long)setContext:(id)arg1 error:(id*)arg2 ;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(id)voiceTriggerInfo;
-(void)setUuid:(NSUUID *)arg1 ;
-(BOOL)playAlertSoundForType:(long long)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(id)playbackRoute;
-(void)dealloc;
-(void)audioEngineDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(BOOL)arg3 error:(id)arg4 ;
-(void)audioEngineDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(unsigned long long)arg3 ;
-(void)audioEngineBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 ;
-(void)audioEngineAudioChunkForTvAvailable:(id)arg1 audioChunk:(id)arg2 ;
-(void)_createSpeechDetectionVADIfNeeded;
-(void)_connectPluginDevice:(id)arg1 ;
-(void)_tearDownSpeechDetectionVADIfNeeded;
-(id)primaryInputDevice;
-(void)willDestroy;
-(void)setAudioServerCrashEventDelegate:(id)arg1 ;
-(void)setAudioSessionEventDelegate:(id)arg1 ;
-(BOOL)setCurrentContext:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)prepareAudioStreamRecord:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)startAudioStreamWithOption:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)stopAudioStreamWithStreamHandleId:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)isRecordingWithStreamHandleId:(unsigned long long)arg1 ;
-(id)recordRouteWithStreamHandleId:(unsigned long long)arg1 ;
-(id)recordDeviceInfoWithStreamHandleId:(unsigned long long)arg1 ;
-(id)recordSettingsWithStreamHandleId:(unsigned long long)arg1 ;
-(float)recordingSampleRateWithStreamHandleId:(unsigned long long)arg1 ;
-(BOOL)isNarrowBandWithStreamHandleId:(unsigned long long)arg1 ;
-(BOOL)prewarmAudioSessionWithStreamHandleId:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)deactivateAudioSession:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)setRecordMode:(long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)arg1 ;
-(BOOL)isSessionCurrentlyActivated;
-(void)configureAlertBehavior:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 ;
-(float)didStartDelayInSeconds;
-(void)setDidStartDelayInSeconds:(float)arg1 ;
-(void)setConnectedDevices:(NSMutableArray *)arg1 ;
-(CSAudioInjectionDevice *)builtInDevice;
-(void)setBuiltInDevice:(CSAudioInjectionDevice *)arg1 ;
-(CSAudioInjectionDevice *)bundleTvRemote;
-(void)setBundleTvRemote:(CSAudioInjectionDevice *)arg1 ;
-(CSAudioInjectionEngine *)builtInAudioInjectionEngine;
-(void)setBuiltInAudioInjectionEngine:(CSAudioInjectionEngine *)arg1 ;
-(NSMutableDictionary *)audioInjectionEngines;
-(void)setAudioInjectionEngines:(NSMutableDictionary *)arg1 ;
-(unsigned long long)latestPluginStreamId;
-(void)setLatestPluginStreamId:(unsigned long long)arg1 ;
@end

