/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSAudioSessionProviding.h>
#import <libobjc.A.dylib/CSFallbackAudioSessionReleaseProviding.h>
#import <libobjc.A.dylib/CSAudioStreamProviding.h>
#import <libobjc.A.dylib/CSAudioAlertProviding.h>
#import <libobjc.A.dylib/CSAudioSessionInfoProviding.h>
#import <libobjc.A.dylib/CSAudioMeterProviding.h>
#import <libobjc.A.dylib/CSAudioMetricProviding.h>
#import <libobjc.A.dylib/CSSmartSiriVolumeProviding.h>
#import <libobjc.A.dylib/CSAudioTimeConversionProviding.h>
#import <libobjc.A.dylib/CSTriggerInfoProviding.h>
#import <libobjc.A.dylib/CSBargeInModeProviding.h>

@protocol CSAudioSessionProvidingDelegate, CSAudioStreamProvidingDelegate, CSAudioAlertProvidingDelegate, CSXPCClientDelegate, OS_xpc_object;
@class NSString, NSObject, CSAudioStream, NSMutableSet, NSHashTable;

@interface CSXPCClient : NSObject <CSAudioSessionProviding, CSFallbackAudioSessionReleaseProviding, CSAudioStreamProviding, CSAudioAlertProviding, CSAudioSessionInfoProviding, CSAudioMeterProviding, CSAudioMetricProviding, CSSmartSiriVolumeProviding, CSAudioTimeConversionProviding, CSTriggerInfoProviding, CSBargeInModeProviding> {

	id<CSAudioSessionProvidingDelegate> _audioSessionProvidingDelegate;
	id<CSAudioStreamProvidingDelegate> _audioStreamProvidingDelegate;
	id<CSAudioAlertProvidingDelegate> _audioAlertProvidingDelegate;
	id<CSXPCClientDelegate> _delegate;
	NSString* _UUID;
	NSObject*<OS_xpc_object> _xpcConnection;
	CSAudioStream* _audioStream;
	NSMutableSet* _activationAssertions;
	NSHashTable* _audioSessionInfoObservers;
	unsigned long long _xpcClientType;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;                                                //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) CSAudioStream * audioStream;                                                           //@synthesize audioStream=_audioStream - In the implementation block
@property (nonatomic,retain) NSMutableSet * activationAssertions;                                                   //@synthesize activationAssertions=_activationAssertions - In the implementation block
@property (nonatomic,retain) NSHashTable * audioSessionInfoObservers;                                               //@synthesize audioSessionInfoObservers=_audioSessionInfoObservers - In the implementation block
@property (assign,nonatomic) unsigned long long xpcClientType;                                                      //@synthesize xpcClientType=_xpcClientType - In the implementation block
@property (assign,nonatomic,__weak) id<CSAudioSessionProvidingDelegate> audioSessionProvidingDelegate;              //@synthesize audioSessionProvidingDelegate=_audioSessionProvidingDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CSAudioStreamProvidingDelegate> audioStreamProvidingDelegate;                //@synthesize audioStreamProvidingDelegate=_audioStreamProvidingDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CSAudioAlertProvidingDelegate> audioAlertProvidingDelegate;                  //@synthesize audioAlertProvidingDelegate=_audioAlertProvidingDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CSXPCClientDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * UUID;                                                                     //@synthesize UUID=_UUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CSXPCClientDelegate>)delegate;
-(void)setDelegate:(id<CSXPCClientDelegate>)arg1 ;
-(NSString *)UUID;
-(void)disconnect;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)connect;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(BOOL)isRecording;
-(id)recordRoute;
-(void)enableMiniDucking:(BOOL)arg1 ;
-(BOOL)setCurrentContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 ;
-(BOOL)playAlertSoundForType:(long long)arg1 ;
-(BOOL)playRecordStartingAlertAndResetEndpointer;
-(void)configureAlertBehavior:(id)arg1 ;
-(id)recordSettings;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(void)updateMeters;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(unsigned long long)alertStartTime;
-(id)playbackRoute;
-(void)setDuckOthersOption:(BOOL)arg1 ;
-(BOOL)duckOthersOption;
-(unsigned)audioSessionID;
-(void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3 ;
-(void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 ;
-(CSAudioStream *)audioStream;
-(void)setAudioStream:(CSAudioStream *)arg1 ;
-(NSMutableSet *)activationAssertions;
-(void)setActivationAssertions:(NSMutableSet *)arg1 ;
-(id)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 ;
-(id)holdAudioStreamWithDescription:(id)arg1 timeout:(double)arg2 ;
-(void)cancelAudioStreamHold:(id)arg1 ;
-(BOOL)prepareAudioProviderWithContext:(id)arg1 clientType:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_handleListenerEvent:(id)arg1 ;
-(void)_handleListenerError:(id)arg1 ;
-(void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_decodeError:(id)arg1 ;
-(BOOL)isNarrowBand;
-(void)triggerInfoForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enableBargeInMode:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)activateAudioSessionWithReason:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)prewarmAudioSessionWithError:(id*)arg1 ;
-(BOOL)deactivateAudioSession:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)fallbackDeactivateAudioSession:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)recordDeviceInfo;
-(id)audioMetric;
-(void)setAudioSessionDelegate:(id)arg1 ;
-(void)setAudioAlertDelegate:(id)arg1 ;
-(float)getEstimatedTTSVolume;
-(unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 ;
-(void)sendXPCClientType;
-(BOOL)_sendMessageAndReplySync:(id)arg1 connection:(id)arg2 error:(id*)arg3 ;
-(void)setAudioSessionProvidingDelegate:(id<CSAudioSessionProvidingDelegate>)arg1 ;
-(void)setAudioAlertProvidingDelegate:(id<CSAudioAlertProvidingDelegate>)arg1 ;
-(void)_handleListenerMessage:(id)arg1 ;
-(void)_handleSessionProvidingDelegateMessageBody:(id)arg1 ;
-(void)_handleStreamProvidingDelegateMessageBody:(id)arg1 ;
-(void)_handleAlertProvidingDelegateMessageBody:(id)arg1 ;
-(void)_handleSessionInfoProvidingDelegateMessageBody:(id)arg1 ;
-(void)_handleListenerDisconnectedError:(id)arg1 ;
-(void)_handleAlertProvidingDelegateDidFinishAlertPlayback:(id)arg1 ;
-(id<CSAudioAlertProvidingDelegate>)audioAlertProvidingDelegate;
-(void)_handleSessionProvidingDelegateBeginInterruption:(id)arg1 ;
-(void)_handleSessionProvidingDelegateBeginInterruptionWithContext:(id)arg1 ;
-(void)_handleSessionProvidingDelegateEndInterruption:(id)arg1 ;
-(void)_handleSessionProvidingDelegateWillSetAudioSession:(id)arg1 ;
-(void)_handleSessionProvidingDelegateDidSetAudioSession:(id)arg1 ;
-(void)_handleSessionProvidingDelegateStreamHandleIdInvalidation:(id)arg1 ;
-(void)_handleSessionProvidingDelegateDidChangeContext:(id)arg1 ;
-(id<CSAudioSessionProvidingDelegate>)audioSessionProvidingDelegate;
-(void)_handleSessionInfoProvidingDelegateInterruptionNotification:(id)arg1 ;
-(void)_handleSessionInfoProvidingDelegateRouteChangeNotification:(id)arg1 ;
-(void)_handleSessionInfoProvidingDelegateMediaServicesWereLostNotification:(id)arg1 ;
-(void)_handleSessionInfoProvidingDelegateMediaServicesWereResetNotification:(id)arg1 ;
-(void)_handleStreamProvidingDelegateDidStopUnexpectly:(id)arg1 ;
-(void)_handleStreamProvidingDelegateChunkAvailable:(id)arg1 ;
-(void)_handleStreamProvidingDelegateChunkForTVAvailable:(id)arg1 ;
-(void)_handleStreamProvidingDelegateHardwareConfigChange:(id)arg1 ;
-(void)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)prepareAudioStreamSync:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(void)prepareAudioStream:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startAudioStream:(id)arg1 option:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopAudioStream:(id)arg1 option:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(id)audioChunkToEndFrom:(unsigned long long)arg1 ;
-(void)saveRecordingBufferToEndFrom:(unsigned long long)arg1 toURL:(id)arg2 ;
-(void)updateMusicVolume:(float)arg1 ;
-(void)updateAlarmVolume:(float)arg1 ;
-(void)updateAlarmState:(long long)arg1 ;
-(void)updateTimerState:(long long)arg1 ;
-(void)pingpong:(/*^block*/id)arg1 ;
-(id<CSAudioStreamProvidingDelegate>)audioStreamProvidingDelegate;
-(void)setAudioStreamProvidingDelegate:(id<CSAudioStreamProvidingDelegate>)arg1 ;
-(NSHashTable *)audioSessionInfoObservers;
-(void)setAudioSessionInfoObservers:(NSHashTable *)arg1 ;
-(unsigned long long)xpcClientType;
-(void)setXpcClientType:(unsigned long long)arg1 ;
@end

