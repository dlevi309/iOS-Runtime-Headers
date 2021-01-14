/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSAudioSessionProviding.h>
#import <libobjc.A.dylib/CSFallbackAudioSessionReleaseProviding.h>
#import <libobjc.A.dylib/CSAudioStreamProviding.h>
#import <libobjc.A.dylib/CSAudioAlertProviding.h>
#import <libobjc.A.dylib/CSAudioSessionInfoProviding.h>
#import <libobjc.A.dylib/CSAudioMeterProviding.h>
#import <libobjc.A.dylib/CSAudioMetricProviding.h>
#import <libobjc.A.dylib/CSAudioTimeConversionProviding.h>
#import <libobjc.A.dylib/CSTriggerInfoProviding.h>

@protocol CSAudioSessionProvidingDelegate, CSAudioStreamProvidingDelegate, CSAudioAlertProvidingDelegate, CSXPCClientDelegate, OS_xpc_object;
@class NSString, NSObject, CSAudioStream, NSMutableSet, NSHashTable;

@interface CSXPCClient : NSObject <CSAudioSessionProviding, CSFallbackAudioSessionReleaseProviding, CSAudioStreamProviding, CSAudioAlertProviding, CSAudioSessionInfoProviding, CSAudioMeterProviding, CSAudioMetricProviding, CSAudioTimeConversionProviding, CSTriggerInfoProviding> {

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
+(id)createPrepareAudioStreamMessageWithRequest:(id)arg1 ;
+(id)createStartAudioStreamMessageWithOption:(id)arg1 ;
+(id)createStopAudioStreamMessage;
+(id)createAudioStreamMessageWithRequest:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)disconnect;
-(BOOL)isRecording;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)prepareAudioStream:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleSessionProvidingDelegateBeginInterruptionWithContext:(id)arg1 ;
-(BOOL)fallbackDeactivateAudioSession:(unsigned long long)arg1 error:(id*)arg2 ;
-(id<CSAudioSessionProvidingDelegate>)audioSessionProvidingDelegate;
-(unsigned)audioSessionID;
-(void)registerObserver:(id)arg1 ;
-(NSString *)UUID;
-(id)audioChunkToEndFrom:(unsigned long long)arg1 ;
-(unsigned long long)xpcClientType;
-(id)recordRoute;
-(BOOL)activateAudioSessionWithReason:(unsigned long long)arg1 dynamicAttribute:(unsigned long long)arg2 bundleID:(id)arg3 error:(id*)arg4 ;
-(void)_handleSessionProvidingDelegateBeginInterruption:(id)arg1 ;
-(id<CSXPCClientDelegate>)delegate;
-(BOOL)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 ;
-(id)recordDeviceInfo;
-(id<CSAudioStreamProvidingDelegate>)audioStreamProvidingDelegate;
-(unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 ;
-(id)audioChunkToEndFrom:(unsigned long long)arg1 channelIdx:(unsigned long long)arg2 ;
-(void)_handleSessionProvidingDelegateDidSetAudioSession:(id)arg1 ;
-(void)_handleSessionProvidingDelegateMessageBody:(id)arg1 ;
-(void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3 ;
-(void)_handleSessionProvidingDelegateWillSetAudioSession:(id)arg1 ;
-(void)stopAudioStream:(id)arg1 option:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 ;
-(void)connect;
-(BOOL)prepareAudioStreamSync:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)alertStartTime;
-(void)cancelAudioStreamHold:(id)arg1 ;
-(id)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(BOOL)prepareAudioProviderWithContext:(id)arg1 clientType:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_handleSessionInfoProvidingDelegateMediaServicesWereResetNotification:(id)arg1 ;
-(BOOL)isNarrowBand;
-(void)setAudioStreamProvidingDelegate:(id<CSAudioStreamProvidingDelegate>)arg1 ;
-(void)setDuckOthersOption:(BOOL)arg1 ;
-(id)holdAudioStreamWithDescription:(id)arg1 timeout:(double)arg2 ;
-(void)configureAlertBehavior:(id)arg1 ;
-(void)updateMeters;
-(void)setAudioSessionInfoObservers:(NSHashTable *)arg1 ;
-(void)startAudioStream:(id)arg1 option:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleSessionInfoProvidingDelegateMediaServicesWereLostNotification:(id)arg1 ;
-(void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleAlertProvidingDelegateDidFinishAlertPlayback:(id)arg1 ;
-(void)setXpcClientType:(unsigned long long)arg1 ;
-(void)setAudioSessionProvidingDelegate:(id<CSAudioSessionProvidingDelegate>)arg1 ;
-(void)setDelegate:(id<CSXPCClientDelegate>)arg1 ;
-(void)sendXPCClientType;
-(void)_handleStreamProvidingDelegateHardwareConfigChange:(id)arg1 ;
-(void)triggerInfoForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enableSmartRoutingConsideration:(BOOL)arg1 ;
-(void)_handleListenerError:(id)arg1 ;
-(void)_handleSessionProvidingDelegateStreamHandleIdInvalidation:(id)arg1 ;
-(void)_handleStreamProvidingDelegateDidStopUnexpectly:(id)arg1 ;
-(BOOL)_sendMessageAndReplySync:(id)arg1 connection:(id)arg2 error:(id*)arg3 ;
-(void)pingpong:(/*^block*/id)arg1 ;
-(BOOL)duckOthersOption;
-(BOOL)prewarmAudioSessionWithError:(id*)arg1 ;
-(void)_handleSessionProvidingDelegateEndInterruption:(id)arg1 ;
-(void)_handleListenerDisconnectedError:(id)arg1 ;
-(NSHashTable *)audioSessionInfoObservers;
-(void)setAudioStream:(CSAudioStream *)arg1 ;
-(BOOL)setCurrentContext:(id)arg1 error:(id*)arg2 ;
-(void)setAudioAlertProvidingDelegate:(id<CSAudioAlertProvidingDelegate>)arg1 ;
-(void)_handleAlertProvidingDelegateMessageBody:(id)arg1 ;
-(void)_handleStreamProvidingDelegateChunkForTVAvailable:(id)arg1 ;
-(BOOL)deactivateAudioSession:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)_handleStreamProvidingDelegateChunkAvailable:(id)arg1 ;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(void)enableMiniDucking:(BOOL)arg1 ;
-(void)_handleSessionProvidingDelegateDidChangeContext:(id)arg1 ;
-(void)_handleListenerMessage:(id)arg1 ;
-(BOOL)playRecordStartingAlertAndResetEndpointer;
-(void)_handleStreamProvidingDelegateMessageBody:(id)arg1 ;
-(void)_handleSessionInfoProvidingDelegateInterruptionNotification:(id)arg1 ;
-(void)setAudioAlertDelegate:(id)arg1 ;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(id)_decodeError:(id)arg1 ;
-(void)setAudioSessionDelegate:(id)arg1 ;
-(NSMutableSet *)activationAssertions;
-(id)audioMetric;
-(BOOL)playAlertSoundForType:(long long)arg1 ;
-(id)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 error:(id*)arg3 ;
-(void)_handleListenerEvent:(id)arg1 ;
-(id<CSAudioAlertProvidingDelegate>)audioAlertProvidingDelegate;
-(void)_handleSessionInfoProvidingDelegateRouteChangeNotification:(id)arg1 ;
-(void)_handleSessionInfoProvidingDelegateMessageBody:(id)arg1 ;
-(void)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setActivationAssertions:(NSMutableSet *)arg1 ;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(id)playbackRoute;
-(id)recordSettings;
-(void)dealloc;
-(void)saveRecordingBufferToEndFrom:(unsigned long long)arg1 toURL:(id)arg2 ;
-(CSAudioStream *)audioStream;
@end

