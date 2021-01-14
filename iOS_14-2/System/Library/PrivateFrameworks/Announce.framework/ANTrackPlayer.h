/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>

@protocol ANTrackPlayerDelegate, OS_dispatch_queue;
@class NSObject, NSURL, NSMutableArray, AVAudioSession, ANAudioSessionManager, NSString;

@interface ANTrackPlayer : NSObject <AVAudioPlayerDelegate> {

	BOOL _readyToPlay;
	id<ANTrackPlayerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _playbackState;
	double _silenceBetweenEachTrack;
	NSURL* _audioFileAtStart;
	double _trimStartTone;
	NSURL* _audioFileTransition;
	double _trimTransitionTone;
	double _previousSkipGoesToPreviousTrackDelta;
	NSMutableArray* _players;
	NSObject*<OS_dispatch_queue> _workQueue;
	double _interruptionStart;
	unsigned long long _options;
	AVAudioSession* _audioSession;
	ANAudioSessionManager* _audioSessionManager;

}

@property (assign) unsigned long long playbackState;                                     //@synthesize playbackState=_playbackState - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;                               //@synthesize workQueue=_workQueue - In the implementation block
@property (assign) double interruptionStart;                                             //@synthesize interruptionStart=_interruptionStart - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                               //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) AVAudioSession * audioSession;                            //@synthesize audioSession=_audioSession - In the implementation block
@property (nonatomic,readonly) ANAudioSessionManager * audioSessionManager;              //@synthesize audioSessionManager=_audioSessionManager - In the implementation block
@property (assign,nonatomic) BOOL readyToPlay;                                           //@synthesize readyToPlay=_readyToPlay - In the implementation block
@property (nonatomic,readonly) int numberActivePlayers; 
@property (__weak) id<ANTrackPlayerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (__weak) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSString * whatIsPlaying; 
@property (assign) double silenceBetweenEachTrack;                                       //@synthesize silenceBetweenEachTrack=_silenceBetweenEachTrack - In the implementation block
@property (nonatomic,retain) NSURL * audioFileAtStart;                                   //@synthesize audioFileAtStart=_audioFileAtStart - In the implementation block
@property (assign) double trimStartTone;                                                 //@synthesize trimStartTone=_trimStartTone - In the implementation block
@property (nonatomic,retain) NSURL * audioFileTransition;                                //@synthesize audioFileTransition=_audioFileTransition - In the implementation block
@property (assign) double trimTransitionTone;                                            //@synthesize trimTransitionTone=_trimTransitionTone - In the implementation block
@property (assign) double previousSkipGoesToPreviousTrackDelta;                          //@synthesize previousSkipGoesToPreviousTrackDelta=_previousSkipGoesToPreviousTrackDelta - In the implementation block
@property (nonatomic,readonly) NSMutableArray * players;                                 //@synthesize players=_players - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)machTimeToSeconds:(unsigned long long)arg1 ;
+(unsigned long long)secondsToMachTime:(double)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPlaybackState:(unsigned long long)arg1 ;
-(void)next;
-(void)previous;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)_registerForNotifications;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)end;
-(NSMutableArray *)players;
-(id<ANTrackPlayerDelegate>)delegate;
-(unsigned long long)playbackState;
-(unsigned long long)options;
-(void)playWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stop;
-(id)prepareToPlay;
-(void)setDelegate:(id<ANTrackPlayerDelegate>)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_callDelegateWithBlock:(/*^block*/id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AVAudioSession *)audioSession;
-(id)initWithOptions:(unsigned long long)arg1 audioSession:(id)arg2 ;
-(double)previousSkipGoesToPreviousTrackDelta;
-(BOOL)playInternalSync;
-(NSString *)whatIsPlaying;
-(void)stopInternalSync;
-(void)nextInternalSync;
-(void)previousInternalSync;
-(void)handleInterruptionDelay:(double)arg1 ;
-(int)numberActivePlayers;
-(id)startNextPlaybackOnDidFinish:(id)arg1 ;
-(double)_trackTrimTime:(long long)arg1 ;
-(double)silenceBetweenEachTrack;
-(double)trimStartTone;
-(double)trimTransitionTone;
-(BOOL)addingNewPlayer:(id)arg1 ;
-(void)setSilenceBetweenEachTrack:(double)arg1 ;
-(void)setAudioFileAtStart:(NSURL *)arg1 ;
-(void)setTrimStartTone:(double)arg1 ;
-(void)setAudioFileTransition:(NSURL *)arg1 ;
-(void)setTrimTransitionTone:(double)arg1 ;
-(void)setPreviousSkipGoesToPreviousTrackDelta:(double)arg1 ;
-(BOOL)add:(id)arg1 announcementID:(id)arg2 ;
-(void)_configureSharedAudioSession;
-(BOOL)_insertAudioBetween;
-(BOOL)_add:(id)arg1 announcementID:(id)arg2 trackType:(long long)arg3 ;
-(BOOL)_addURL:(id)arg1 announcementID:(id)arg2 trackType:(long long)arg3 ;
-(NSURL *)audioFileAtStart;
-(NSURL *)audioFileTransition;
-(ANAudioSessionManager *)audioSessionManager;
-(void)setReadyToPlay:(BOOL)arg1 ;
-(BOOL)_playSync;
-(BOOL)readyToPlay;
-(void)_stopSync;
-(void)audioSessionInterruptionHandler:(id)arg1 ;
-(void)audioSessionMediaServicesLostHandler:(id)arg1 ;
-(void)audioSessionMediaServicesResetHandler:(id)arg1 ;
-(void)setInterruptionStart:(double)arg1 ;
-(double)interruptionStart;
-(void)_resumePlaybackAfterInterruptionAtTimeInterval:(double)arg1 ;
-(void)_deregisterForNotifications;
@end

