/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreHaptics/CoreHaptics-Structs.h>
@class NSObject, AVAudioSession, AVHapticPlayer;

@interface CHHapticEngine : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	AVAudioSession* _avAudioSession;
	unsigned _audioSessionID;
	BOOL _sessionIsShared;
	AVHapticPlayer* _player;
	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _stoppedHandler;
	/*^block*/id _resetHandler;
	BOOL _autoShutdownEnabled;
	/*^block*/id _clientFinishedHandler;
	map<unsigned long, std::__1::shared_ptr<AudioResource>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<AudioResource> > > >* _resourceEntries;
	BOOL _running;
	unsigned long long _currentPlayerBehavior;
	BOOL _muteHapticsWhileRecordingAudio;

}

@property (readonly) AVAudioSession * avAudioSession;                                            //@synthesize avAudioSession=_avAudioSession - In the implementation block
@property (readonly) unsigned audioSessionID;                                                    //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (readonly) BOOL sessionIsShared;                                                       //@synthesize sessionIsShared=_sessionIsShared - In the implementation block
@property (copy) id clientFinishedHandler;                                                       //@synthesize clientFinishedHandler=_clientFinishedHandler - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> timer;                                          //@synthesize timer=_timer - In the implementation block
@property (readonly) AVHapticPlayer * player;                                                    //@synthesize player=_player - In the implementation block
@property (assign) BOOL running;                                                                 //@synthesize running=_running - In the implementation block
@property (assign) unsigned long long currentPlayerBehavior;                                     //@synthesize currentPlayerBehavior=_currentPlayerBehavior - In the implementation block
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
+(BOOL)supports1stPartyHaptics;
+(id)capabilitiesForHardware;
+(void)dispatchOnGlobal:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)running;
-(double)currentTime;
-(id)initWithAudioSession:(id)arg1 sessionIsShared:(BOOL)arg2 error:(id*)arg3 ;
-(void)setStoppedHandler:(id)arg1 ;
-(void)setResetHandler:(id)arg1 ;
-(void)stopWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)prewarmWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopPrewarm;
-(void)notifyWhenPlayersFinished:(/*^block*/id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setHapticsOnly:(BOOL)arg1 ;
-(void)setMuteHapticsWhileRecordingAudio:(BOOL)arg1 ;
-(id)createPrivilegedPlayerWithPlayable:(id)arg1 error:(id*)arg2 ;
-(BOOL)hapticsOnly;
-(void)setRunning:(BOOL)arg1 ;
-(BOOL)startAndReturnError:(id*)arg1 ;
-(void)setHighPriority:(BOOL)arg1 ;
-(BOOL)highPriority;
-(AVHapticPlayer *)player;
-(id)createAdvancedPlayerWithRingtonePattern:(id)arg1 error:(id*)arg2 ;
-(id)createAdvancedPlayerWithRingtoneData:(id)arg1 error:(id*)arg2 ;
-(id)initWithAudioSessionID:(unsigned)arg1 error:(id*)arg2 ;
-(void)handleConnectionError;
-(id)initAndReturnError:(id*)arg1 ;
-(void)setAutoShutdownEnabled:(BOOL)arg1 ;
-(BOOL)isAutoShutdownEnabled;
-(id)createPlayerWithPattern:(id)arg1 error:(id*)arg2 ;
-(unsigned)audioSessionID;
-(id)resetHandler;
-(void)dispatchOnLocal:(/*^block*/id)arg1 ;
-(void)setMetricsTestModeEnabled;
-(id)getMetricsForPlayer:(id)arg1 ;
-(BOOL)resourceIsRegistered:(unsigned long long)arg1 ;
-(double)getDurationForResource:(unsigned long long)arg1 ;
-(unsigned long long)doRegisterAudioResource:(id)arg1 options:(id)arg2 fromPattern:(BOOL)arg3 error:(id*)arg4 ;
-(id)getAvailableChannel:(id*)arg1 ;
-(void)releaseChannel:(id)arg1 ;
-(BOOL)doUnregisterAudioResource:(unsigned long long)arg1 fromPattern:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)checkEngineState:(id*)arg1 ;
-(BOOL)notifyPlayerStarted:(id)arg1 atTime:(double)arg2 ;
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
-(unsigned)getSessionIDFromAVAudioSession:(id)arg1 ;
-(id)createHapticPlayer;
-(BOOL)finishInit:(id*)arg1 ;
-(void)handleMediaServerRecovery:(id)arg1 ;
-(BOOL)sessionIsShared;
-(id)stoppedHandler;
-(void)startIdleTimerWithHandler:(/*^block*/id)arg1 ;
-(id)clientFinishedHandler;
-(void)setClientFinishedHandler:(id)arg1 ;
-(void)doStopWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)beginIdleTimer;
-(BOOL)doStopEngineAndWait:(id*)arg1 ;
-(void)stopAndWait;
-(void)disconnectAudioSession:(id)arg1 ;
-(void)doUnregisterAllAudioResources;
-(void)connectAudioSession:(id)arg1 ;
-(BOOL)doInit:(unsigned)arg1 sessionIsShared:(BOOL)arg2 error:(id*)arg3 ;
-(void)setFollowAudioRoute:(BOOL)arg1 ;
-(void)doStartWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)doStartEngineAndWait:(id*)arg1 ;
-(void)setActivateAudioSessionOnStart:(BOOL)arg1 ;
-(BOOL)doPlayPatternFromDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)playsHapticsOnly;
-(void)setPlaysHapticsOnly:(BOOL)arg1 ;
-(BOOL)isMutedForAudio;
-(void)setIsMutedForAudio:(BOOL)arg1 ;
-(BOOL)isMutedForHaptics;
-(void)setIsMutedForHaptics:(BOOL)arg1 ;
-(BOOL)followAudioRoute;
-(BOOL)activateAudioSessionOnStart;
-(BOOL)muteAudioOnRingerOff;
-(void)setMuteAudioOnRingerOff:(BOOL)arg1 ;
-(void)dispatchOnMain:(/*^block*/id)arg1 ;
-(void)dispatchSyncOnLocal:(/*^block*/id)arg1 ;
-(long long)getReporterIDFromAVAudioSession:(id)arg1 ;
-(id)initWithAudioSession:(id)arg1 error:(id*)arg2 ;
-(id)createPlayerWithEvent:(id)arg1 error:(id*)arg2 ;
-(id)createAdvancedPlayerWithPattern:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)registerAudioResource:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)unregisterAudioResource:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)playPatternFromURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)playPatternFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)audioIsMuted;
-(void)setAudioIsMuted:(BOOL)arg1 ;
-(BOOL)hapticsIsMuted;
-(void)setHapticsIsMuted:(BOOL)arg1 ;
@end

