/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CHHapticServerInterface.h>

@class AVHapticServer, NSXPCConnection, AVServerWrapper, NSString;

@interface AVHapticServerInstance : NSObject <NSXPCListenerDelegate, CHHapticServerInterface> {

	AVHapticServer* _master;
	NSXPCConnection* _connection;
	unsigned long long _clientID;
	shared_ptr<HapticSession>* _hapticSession;
	shared_ptr<opaqueCMSession>* _clientSession;
	AVServerWrapper* _listenerWrapper;
	BOOL _clientSuspended;
	BOOL _wasPrewarmedAndSuspended;
	BOOL _wasRunningAndSuspended;
	BOOL _clientInterrupted;
	BOOL _runningInBackground;
	BOOL _prewarmIncludesAudio;
	BOOL _runIncludesAudio;

}

@property (readonly) AVHapticServer * master;                       //@synthesize master=_master - In the implementation block
@property (readonly) unsigned long long clientID;                   //@synthesize clientID=_clientID - In the implementation block
@property (assign) BOOL clientSuspended;                            //@synthesize clientSuspended=_clientSuspended - In the implementation block
@property (assign) BOOL wasPrewarmedAndSuspended;                   //@synthesize wasPrewarmedAndSuspended=_wasPrewarmedAndSuspended - In the implementation block
@property (assign) BOOL clientInterrupted;                          //@synthesize clientInterrupted=_clientInterrupted - In the implementation block
@property (assign) BOOL wasRunningAndSuspended;                     //@synthesize wasRunningAndSuspended=_wasRunningAndSuspended - In the implementation block
@property (assign) BOOL runningInBackground;                        //@synthesize runningInBackground=_runningInBackground - In the implementation block
@property (assign) BOOL prewarmIncludesAudio;                       //@synthesize prewarmIncludesAudio=_prewarmIncludesAudio - In the implementation block
@property (assign) BOOL runIncludesAudio;                           //@synthesize runIncludesAudio=_runIncludesAudio - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)clientID;
-(void)stopPrewarm;
-(AVHapticServer *)master;
-(void)prewarm:(/*^block*/id)arg1 ;
-(void)stopRunning;
-(void)loadHapticEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)startRunning:(/*^block*/id)arg1 ;
-(void)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)referenceCustomAudioEvent:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)stopRunning:(/*^block*/id)arg1 ;
-(void)releaseCustomAudioEvent:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(id)getAsyncDelegateForMethod:(SEL)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)getSyncDelegateForMethod:(SEL)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)removeChannel:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestChannels:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)releaseChannels;
-(void)setPlayerBehavior:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)configureWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)allocateClientResources:(/*^block*/id)arg1 ;
-(void)queryCapabilities:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)releaseClientResources;
-(void)getHapticLatency:(/*^block*/id)arg1 ;
-(void)loadHapticSequenceFromData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setChannelEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)loadHapticSequenceFromEvents:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)loadVibePattern:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setSequenceEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 channelIndex:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)prepareHapticSequence:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)detachSequence:(unsigned long long)arg1 ;
-(void)debugExpectNotifyOnFinishAfter:(double)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)clientSuspended;
-(void)notifyClientOnStopWithReason:(long long)arg1 error:(id)arg2 ;
-(void)handleClientRouteChange:(id)arg1 ;
-(void)handleClientApplicationStateChange:(id)arg1 ;
-(void)muteClientForRingerSwitch:(BOOL)arg1 ;
-(BOOL)runIncludesAudio;
-(void)fadeClientForSessionInterruption:(BOOL)arg1 fadeTime:(float)arg2 fadeLevel:(float)arg3 stopAfterFade:(BOOL)arg4 ;
-(void)unmuteClientAfterSessionInterruption:(float)arg1 ;
-(void)handleClientSessionInterruptionCommand:(unsigned)arg1 dictionary:(id)arg2 ;
-(id)initWithMaster:(id)arg1 id:(unsigned long long)arg2 connection:(id)arg3 outError:(id*)arg4 ;
-(void)handleConnectionError;
-(BOOL)setupAudioSessionFromID:(unsigned)arg1 isShared:(BOOL)arg2 error:(id*)arg3 ;
-(void)setClientSuspended:(BOOL)arg1 ;
-(BOOL)clientInterrupted;
-(BOOL)wasPrewarmedAndSuspended;
-(void)setWasPrewarmedAndSuspended:(BOOL)arg1 ;
-(void)setClientInterrupted:(BOOL)arg1 ;
-(BOOL)runningInBackground;
-(void)setRunningInBackground:(BOOL)arg1 ;
-(BOOL)prewarmIncludesAudio;
-(void)setPrewarmIncludesAudio:(BOOL)arg1 ;
-(void)setRunIncludesAudio:(BOOL)arg1 ;
-(BOOL)wasRunningAndSuspended;
-(void)setWasRunningAndSuspended:(BOOL)arg1 ;
-(void)dealloc;
@end

