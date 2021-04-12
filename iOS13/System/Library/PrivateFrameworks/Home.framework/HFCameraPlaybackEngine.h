/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HMCameraClipManagerObserver.h>
#import <libobjc.A.dylib/HFCameraClipPlayerDelegate.h>
#import <libobjc.A.dylib/HFCameraLiveStreamControllerDelegate.h>

@protocol HFCameraLiveStreamControlling, HFCameraClipScrubbing, OS_dispatch_queue, HFCameraClipPlaying;
@class HMCameraProfile, HMCameraClipManager, HMCameraSource, NSError, HMHome, NSMapTable, NADelegateDispatcher, NSDate, NSObject, NSArray, HMCameraClip, AVPlayer, HFCameraPlaybackPosition, NSString;

@interface HFCameraPlaybackEngine : NSObject <HMCameraClipManagerObserver, HFCameraClipPlayerDelegate, HFCameraLiveStreamControllerDelegate> {

	BOOL _prefersAudioEnabled;
	BOOL _microphoneEnabled;
	BOOL _streamAudioEnabled;
	BOOL _userScrubbing;
	BOOL _pictureInPictureModeActive;
	BOOL _shouldBypassVideoFetchRequest;
	BOOL _wantsToPlay;
	BOOL _scrubbing;
	float _streamAudioVolume;
	HMCameraProfile* _cameraProfile;
	HMCameraClipManager* _clipManager;
	HMCameraSource* _liveCameraSource;
	unsigned long long _timeControlStatus;
	NSError* _playbackError;
	HMHome* _home;
	/*^block*/id _clipPlayerBuilder;
	id<HFCameraLiveStreamControlling> _liveStreamController;
	id<HFCameraClipScrubbing> _clipScrubber;
	NSMapTable* _observerStates;
	NADelegateDispatcher* _observerDispatcher;
	unsigned long long _playbackContentType;
	unsigned long long _engineMode;
	NSDate* _lastRequestedClipPlaybackDate;
	unsigned long long _scrubbingInProgressCount;
	NSObject*<OS_dispatch_queue> _clipQueue;
	long long _lastPlayerTimeControlStatus;
	id<HFCameraClipPlaying> _clipPlayer;
	unsigned long long _timelineState;

}

@property (nonatomic,retain) HMHome * home;                                                                    //@synthesize home=_home - In the implementation block
@property (nonatomic,copy,readonly) id clipPlayerBuilder;                                                      //@synthesize clipPlayerBuilder=_clipPlayerBuilder - In the implementation block
@property (nonatomic,readonly) id<HFCameraLiveStreamControlling> liveStreamController;                         //@synthesize liveStreamController=_liveStreamController - In the implementation block
@property (nonatomic,readonly) id<HFCameraClipScrubbing> clipScrubber;                                         //@synthesize clipScrubber=_clipScrubber - In the implementation block
@property (nonatomic,readonly) NSMapTable * observerStates;                                                    //@synthesize observerStates=_observerStates - In the implementation block
@property (nonatomic,readonly) NADelegateDispatcher * observerDispatcher;                                      //@synthesize observerDispatcher=_observerDispatcher - In the implementation block
@property (assign,nonatomic) unsigned long long playbackContentType;                                           //@synthesize playbackContentType=_playbackContentType - In the implementation block
@property (assign,nonatomic) unsigned long long engineMode;                                                    //@synthesize engineMode=_engineMode - In the implementation block
@property (nonatomic,copy) NSDate * lastRequestedClipPlaybackDate;                                             //@synthesize lastRequestedClipPlaybackDate=_lastRequestedClipPlaybackDate - In the implementation block
@property (assign,nonatomic) BOOL wantsToPlay;                                                                 //@synthesize wantsToPlay=_wantsToPlay - In the implementation block
@property (assign,nonatomic) unsigned long long timeControlStatus;                                             //@synthesize timeControlStatus=_timeControlStatus - In the implementation block
@property (nonatomic,retain) NSError * playbackError;                                                          //@synthesize playbackError=_playbackError - In the implementation block
@property (nonatomic,retain) HMCameraSource * liveCameraSource;                                                //@synthesize liveCameraSource=_liveCameraSource - In the implementation block
@property (assign,nonatomic) unsigned long long scrubbingInProgressCount;                                      //@synthesize scrubbingInProgressCount=_scrubbingInProgressCount - In the implementation block
@property (assign,getter=isScrubbing,nonatomic) BOOL scrubbing;                                                //@synthesize scrubbing=_scrubbing - In the implementation block
@property (nonatomic,retain) HMCameraProfile * cameraProfile;                                                  //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clipQueue;                                           //@synthesize clipQueue=_clipQueue - In the implementation block
@property (assign,nonatomic) long long lastPlayerTimeControlStatus;                                            //@synthesize lastPlayerTimeControlStatus=_lastPlayerTimeControlStatus - In the implementation block
@property (nonatomic,readonly) id<HFCameraClipPlaying> clipPlayer;                                             //@synthesize clipPlayer=_clipPlayer - In the implementation block
@property (nonatomic,copy,readonly) NSArray * observers; 
@property (assign,nonatomic) unsigned long long timelineState;                                                 //@synthesize timelineState=_timelineState - In the implementation block
@property (assign,getter=isUserScrubbing,nonatomic) BOOL userScrubbing;                                        //@synthesize userScrubbing=_userScrubbing - In the implementation block
@property (nonatomic,retain) HMCameraClipManager * clipManager;                                                //@synthesize clipManager=_clipManager - In the implementation block
@property (nonatomic,readonly) HMCameraClip * currentClip; 
@property (nonatomic,readonly) AVPlayer * player; 
@property (assign,getter=isMicrophoneEnabled,nonatomic) BOOL microphoneEnabled;                                //@synthesize microphoneEnabled=_microphoneEnabled - In the implementation block
@property (assign,getter=isStreamAudioEnabled,nonatomic) BOOL streamAudioEnabled;                              //@synthesize streamAudioEnabled=_streamAudioEnabled - In the implementation block
@property (assign,nonatomic) float streamAudioVolume;                                                          //@synthesize streamAudioVolume=_streamAudioVolume - In the implementation block
@property (assign,nonatomic) BOOL prefersAudioEnabled;                                                         //@synthesize prefersAudioEnabled=_prefersAudioEnabled - In the implementation block
@property (assign,getter=isPictureInPictureModeActive,nonatomic) BOOL pictureInPictureModeActive;              //@synthesize pictureInPictureModeActive=_pictureInPictureModeActive - In the implementation block
@property (assign,nonatomic) BOOL shouldBypassVideoFetchRequest;                                               //@synthesize shouldBypassVideoFetchRequest=_shouldBypassVideoFetchRequest - In the implementation block
@property (nonatomic,retain) HFCameraPlaybackPosition * playbackPosition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)pause;
-(void)removeObserver:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(HMHome *)home;
-(void)play;
-(NSArray *)observers;
-(void)setHome:(HMHome *)arg1 ;
-(AVPlayer *)player;
-(unsigned long long)timeControlStatus;
-(BOOL)isScrubbing;
-(void)setPlaybackPosition:(HFCameraPlaybackPosition *)arg1 ;
-(void)beginScrubbing;
-(void)endScrubbing;
-(NSError *)playbackError;
-(HFCameraPlaybackPosition *)playbackPosition;
-(BOOL)isLiveStreaming;
-(HMCameraProfile *)cameraProfile;
-(void)setScrubbing:(BOOL)arg1 ;
-(void)setMicrophoneEnabled:(BOOL)arg1 ;
-(BOOL)isMicrophoneEnabled;
-(void)setTimeControlStatus:(unsigned long long)arg1 ;
-(unsigned long long)engineMode;
-(HMCameraClipManager *)clipManager;
-(void)setClipManager:(HMCameraClipManager *)arg1 ;
-(void)clipManager:(id)arg1 didUpdateClips:(id)arg2 ;
-(void)clipManager:(id)arg1 didRemoveClipsWithUUIDs:(id)arg2 ;
-(void)setCameraProfile:(HMCameraProfile *)arg1 ;
-(void)clipPlayer:(id)arg1 didUpdateError:(id)arg2 isFatal:(BOOL)arg3 ;
-(void)clipPlayer:(id)arg1 didUpdateTimeControlStatus:(long long)arg2 ;
-(void)clipPlayer:(id)arg1 didUpdateMuted:(BOOL)arg2 ;
-(void)clipPlayerDidPlayToEndTime:(id)arg1 ;
-(id)clipPlayerBuilder;
-(id<HFCameraClipScrubbing>)clipScrubber;
-(id<HFCameraLiveStreamControlling>)liveStreamController;
-(void)_setupLiveStreamController:(id)arg1 ;
-(BOOL)prefersAudioEnabled;
-(void)setStreamAudioEnabled:(BOOL)arg1 ;
-(void)setStreamAudioVolume:(float)arg1 ;
-(void)_updateStateForRequestedPlaybackPosition:(id)arg1 notifyObservers:(BOOL)arg2 ;
-(HMCameraSource *)liveCameraSource;
-(NSMapTable *)observerStates;
-(void)_setupTimeObservationForObserver:(id)arg1 ;
-(id<HFCameraClipPlaying>)clipPlayer;
-(void)_setupClipPlayerWithClipManager:(id)arg1 ;
-(NADelegateDispatcher *)observerDispatcher;
-(unsigned long long)playbackContentType;
-(NSDate *)lastRequestedClipPlaybackDate;
-(void)setWantsToPlay:(BOOL)arg1 ;
-(unsigned long long)scrubbingInProgressCount;
-(void)setScrubbingInProgressCount:(unsigned long long)arg1 ;
-(void)_setPlayerVolume:(float)arg1 notifyObservers:(BOOL)arg2 ;
-(void)_setMicrophoneEnabled:(BOOL)arg1 notifyObservers:(BOOL)arg2 ;
-(void)_setStreamAudioEnabled:(BOOL)arg1 notifyObservers:(BOOL)arg2 ;
-(void)setLastRequestedClipPlaybackDate:(NSDate *)arg1 ;
-(HMCameraClip *)currentClip;
-(void)_updatePlaybackStateNotifyingObservers:(BOOL)arg1 ;
-(BOOL)wantsToPlay;
-(id)_derivedPlaybackError;
-(void)_updatePlaybackStateNotifyingObservers:(BOOL)arg1 rebuildClipPlayerIfNeeded:(BOOL)arg2 ;
-(BOOL)isPictureInPictureModeActive;
-(unsigned long long)_derivedTimeControlStatus;
-(void)setPlaybackError:(NSError *)arg1 ;
-(BOOL)isStreamAudioEnabled;
-(void)setPlaybackContentType:(unsigned long long)arg1 ;
-(long long)lastPlayerTimeControlStatus;
-(void)setLastPlayerTimeControlStatus:(long long)arg1 ;
-(void)setPrefersAudioEnabled:(BOOL)arg1 ;
-(void)setLiveCameraSource:(HMCameraSource *)arg1 ;
-(void)streamControllerStateDidUpdate:(id)arg1 ;
-(void)updateLiveStreamForCameraProfile:(id)arg1 ;
-(void)updatePlaybackPositionToDate:(id)arg1 usingClip:(id)arg2 ;
-(void)addObserver:(id)arg1 withOptions:(id)arg2 ;
-(void)modifyPlaybackFromSender:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)timelineState;
-(void)setShouldBypassVideoFetchRequest:(BOOL)arg1 ;
-(float)streamAudioVolume;
-(BOOL)isUserScrubbing;
-(void)setUserScrubbing:(BOOL)arg1 ;
-(void)setPictureInPictureModeActive:(BOOL)arg1 ;
-(BOOL)shouldBypassVideoFetchRequest;
-(void)setEngineMode:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)clipQueue;
-(void)setClipQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTimelineState:(unsigned long long)arg1 ;
@end

