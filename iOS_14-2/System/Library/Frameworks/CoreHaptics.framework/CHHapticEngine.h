/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreHaptics/CoreHaptics-Structs.h>
@class NSObject, AVAudioSession, AVHapticPlayer, HapticServerConfig;

@interface CHHapticEngine : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	AVAudioSession* _avAudioSession;
	unsigned _audioSessionID;
	BOOL _sessionIsShared;
	BOOL _sessionIsConstantVolume;
	map<unsigned long, NSURL *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, NSURL *> > >* _publicAudioResources;
	AVHapticPlayer* _player;
	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _stoppedHandler;
	/*^block*/id _resetHandler;
	BOOL _autoShutdownEnabled;
	/*^block*/id _clientFinishedHandler;
	BOOL _running;
	unsigned long long _currentPlayerBehavior;
	BOOL _muteHapticsWhileRecordingAudio;
	HapticServerConfig* _serverConfig;

}

@property (readonly) AVAudioSession * avAudioSession;                                            //@synthesize avAudioSession=_avAudioSession - In the implementation block
@property (readonly) unsigned audioSessionID;                                                    //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (readonly) BOOL sessionIsShared;                                                       //@synthesize sessionIsShared=_sessionIsShared - In the implementation block
@property (readonly) BOOL sessionIsConstantVolume;                                               //@synthesize sessionIsConstantVolume=_sessionIsConstantVolume - In the implementation block
@property (copy) id clientFinishedHandler;                                                       //@synthesize clientFinishedHandler=_clientFinishedHandler - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> timer;                                          //@synthesize timer=_timer - In the implementation block
@property (readonly) AVHapticPlayer * player;                                                    //@synthesize player=_player - In the implementation block
@property (assign) BOOL running;                                                                 //@synthesize running=_running - In the implementation block
@property (assign) unsigned long long currentPlayerBehavior;                                     //@synthesize currentPlayerBehavior=_currentPlayerBehavior - In the implementation block
@property (readonly) HapticServerConfig * serverConfig;                                          //@synthesize serverConfig=_serverConfig - In the implementation block
@property (assign,nonatomic) BOOL hapticsOnly; 
@property (assign,nonatomic) BOOL audioIsMuted; 
@property (assign,nonatomic) BOOL hapticsIsMuted; 
@property (assign,nonatomic) BOOL muteHapticsWhileRecordingAudio; 
@property (assign,nonatomic) BOOL followAudioRoute; 
@property (assign,nonatomic) BOOL activateAudioSessionOnStart; 
@property (assign,nonatomic) BOOL muteAudioOnRingerOff; 
@property (assign,nonatomic) BOOL highPriority; 
@property (readonly) double currentTime; 
@property (copy) id stoppedHandler;                                                              //@synthesize stoppedHandler=_stoppedHandler - In the implementation block
@property (copy) id resetHandler;                                                                //@synthesize resetHandler=_resetHandler - In the implementation block
@property (assign,nonatomic) BOOL playsHapticsOnly; 
@property (assign,nonatomic) BOOL isMutedForAudio; 
@property (assign,nonatomic) BOOL isMutedForHaptics; 
@property (assign,getter=isAutoShutdownEnabled,nonatomic) BOOL autoShutdownEnabled; 
+(void)initialize;
+(BOOL)doUnregisterAudioResource:(unsigned long long)arg1 fromPattern:(BOOL)arg2 player:(id)arg3 error:(id*)arg4 ;
+(id)capabilitiesForHardware;
+(void)dispatchOnGlobal:(/*^block*/id)arg1 ;
+(unsigned long long)doRegisterAudioResource:(id)arg1 options:(id)arg2 fromPattern:(BOOL)arg3 player:(id)arg4 error:(id*)arg5 ;
+(void)lazyInitResourceMap;
+(BOOL)supports1stPartyHaptics;
+(BOOL)resourceIsRegistered:(unsigned long long)arg1 ;
-(AVHapticPlayer *)player;
-(void)setRunning:(BOOL)arg1 ;
-(BOOL)running;
-(NSObject*<OS_dispatch_source>)timer;
-(unsigned)audioSessionID;
-(BOOL)startAndReturnError:(id*)arg1 ;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)init;
-(void)setResetHandler:(id)arg1 ;
-(id)initWithAudioSession:(id)arg1 sessionIsShared:(BOOL)arg2 error:(id*)arg3 ;
-(void)stopPrewarm;
-(void)setStoppedHandler:(id)arg1 ;
-(void)setHapticsOnly:(BOOL)arg1 ;
-(void)prewarmWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)notifyWhenPlayersFinished:(/*^block*/id)arg1 ;
-(void)setMuteHapticsWhileRecordingAudio:(BOOL)arg1 ;
-(id)createPrivilegedPlayerWithPlayable:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)registerAudioResource:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(HapticServerConfig *)serverConfig;
-(double)currentTime;
-(void)stopWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)createAdvancedPlayerWithRingtonePattern:(id)arg1 error:(id*)arg2 ;
-(id)createAdvancedPlayerWithRingtoneData:(id)arg1 error:(id*)arg2 ;
-(void)setAutoShutdownEnabled:(BOOL)arg1 ;
-(id)initWithAudioSessionID:(unsigned)arg1 error:(id*)arg2 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)handleConnectionError;
-(BOOL)isAutoShutdownEnabled;
-(id)createOptionsFromAudioSessionID:(unsigned)arg1 shared:(BOOL)arg2 ;
-(BOOL)doInitWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)initAndReturnError:(id*)arg1 ;
-(void)dispatchOnLocal:(/*^block*/id)arg1 ;
-(BOOL)highPriority;
-(void)setMetricsTestModeEnabled;
-(id)getMetricsForPlayer:(id)arg1 ;
-(double)getDurationForResource:(unsigned long long)arg1 ;
-(BOOL)doReferenceAudioResourceByID:(unsigned long long)arg1 ;
-(id)getAvailableChannel:(id*)arg1 ;
-(void)releaseChannel:(id)arg1 ;
-(BOOL)checkEngineStateOnStart:(id*)arg1 ;
-(BOOL)notifyPlayerStarted:(id)arg1 atTime:(double)arg2 ;
-(BOOL)checkEngineRunning:(id*)arg1 ;
-(void)notifyPlayerStopped:(id)arg1 atTime:(double)arg2 ;
-(BOOL)muteHapticsWhileRecordingAudio;
-(void)updatePlayerDuration:(id)arg1 atTime:(double)arg2 ;
-(unsigned long long)currentPlayerBehavior;
-(void)setCurrentPlayerBehavior:(unsigned long long)arg1 ;
-(BOOL)isBehaviorSet:(unsigned long long)arg1 ;
-(void)toggleBehavior:(unsigned long long)arg1 set:(BOOL)arg2 ;
-(void)updateEngineBehavior;
-(void)handleFinish:(id)arg1 ;
-(void)cancelIdleTimer;
-(AVAudioSession *)avAudioSession;
-(BOOL)sessionIsConstantVolume;
-(unsigned)getSessionIDFromAVAudioSession:(id)arg1 ;
-(BOOL)sessionIsShared;
-(id)createHapticPlayerWithOptions:(id)arg1 ;
-(BOOL)setupUnsharedAudioSessionAndReturnError:(id*)arg1 ;
-(BOOL)finishInit:(id*)arg1 ;
-(id)resetHandler;
-(void)handleMediaServerRecovery:(id)arg1 ;
-(void)setFollowAudioRoute:(BOOL)arg1 ;
-(id)stoppedHandler;
-(void)startIdleTimerWithHandler:(/*^block*/id)arg1 ;
-(id)clientFinishedHandler;
-(void)beginIdleTimer;
-(void)setClientFinishedHandler:(id)arg1 ;
-(void)doStopWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)doStopEngineAndWait:(id*)arg1 ;
-(void)disconnectAudioSession:(id)arg1 ;
-(void)doUnregisterAllPublicAudioResources;
-(void)connectAudioSession:(id)arg1 ;
-(BOOL)doInit:(unsigned)arg1 sessionIsShared:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)playsHapticsOnly;
-(void)doStartWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)doStartEngineAndWait:(id*)arg1 ;
-(void)setActivateAudioSessionOnStart:(BOOL)arg1 ;
-(void)setPlaysHapticsOnly:(BOOL)arg1 ;
-(_map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned long, NSURL *>, std::__1::__tree_node<std::__1::__value_type<unsigned long, NSURL *>, void *> *, long> >*)doFindPublicAudioResourceID:(unsigned long long)arg1 ;
-(unsigned long long)idForPublicAudioResourceURL:(id)arg1 ;
-(void)addPublicAudioResourceID:(unsigned long long)arg1 withURL:(id)arg2 ;
-(BOOL)audioIsMuted;
-(BOOL)hasPublicAudioResourceID:(unsigned long long)arg1 ;
-(void)removePublicAudioResourceID:(unsigned long long)arg1 ;
-(BOOL)doPlayPatternFromDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)hapticsIsMuted;
-(id)createPlayerWithPattern:(id)arg1 error:(id*)arg2 ;
-(BOOL)isMutedForAudio;
-(void)setIsMutedForAudio:(BOOL)arg1 ;
-(BOOL)isMutedForHaptics;
-(BOOL)followAudioRoute;
-(void)setIsMutedForHaptics:(BOOL)arg1 ;
-(BOOL)activateAudioSessionOnStart;
-(BOOL)muteAudioOnRingerOff;
-(void)setMuteAudioOnRingerOff:(BOOL)arg1 ;
-(void)dispatchSyncOnLocal:(/*^block*/id)arg1 ;
-(long long)getReporterIDFromAVAudioSession:(id)arg1 ;
-(id)initWithAudioSession:(id)arg1 error:(id*)arg2 ;
-(void)setAudioIsMuted:(BOOL)arg1 ;
-(id)createPlayerWithEvent:(id)arg1 error:(id*)arg2 ;
-(id)createAdvancedPlayerWithPattern:(id)arg1 error:(id*)arg2 ;
-(BOOL)unregisterAudioResource:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)playPatternFromURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)playPatternFromData:(id)arg1 error:(id*)arg2 ;
-(void)setHapticsIsMuted:(BOOL)arg1 ;
-(BOOL)hapticsOnly;
-(void)stopAndWait;
-(void)setHighPriority:(BOOL)arg1 ;
-(BOOL)resourceIsRegistered:(unsigned long long)arg1 ;
-(void)dealloc;
@end

