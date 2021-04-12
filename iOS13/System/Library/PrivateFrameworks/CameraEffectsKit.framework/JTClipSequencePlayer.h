/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol JTClipSequencePlaybackDelegate, JTAVPlayerViewer, JTCompositionClipsDataSource;
#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class NSString, NSObject, JTComposition, AVPlayer, JTClipSequencePlayerRequest, NSMutableArray;

@interface JTClipSequencePlayer : NSObject {

	BOOL _wasAudioMuted;
	BOOL _wasPlaying;
	BOOL _restoringPlayerStateAfterCompositionUpdate;
	NSString* _displayName;
	id<JTClipSequencePlaybackDelegate> _playbackDelegate;
	NSObject*<JTAVPlayerViewer> _playerView;
	id<JTCompositionClipsDataSource> _clipsDataSource;
	JTComposition* _composition;
	AVPlayer* _player;
	id _playerProVideoPeriodicObserver;
	id _playerPlaybackTimePeriodicObserver;
	JTClipSequencePlayerRequest* _pendingRequest;
	NSMutableArray* _requestQueue;
	SCD_Struct_JT6 _playbackTimeChangedObserverInterval;
	SCD_Struct_JT6 _wasCurrentTime;
	SCD_Struct_JT6 _cachedCurrentTimeForCompositionUpdate;

}

@property (nonatomic,retain) id<JTCompositionClipsDataSource> clipsDataSource;                        //@synthesize clipsDataSource=_clipsDataSource - In the implementation block
@property (nonatomic,retain) JTComposition * composition;                                             //@synthesize composition=_composition - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                       //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) id playerProVideoPeriodicObserver;                                       //@synthesize playerProVideoPeriodicObserver=_playerProVideoPeriodicObserver - In the implementation block
@property (nonatomic,retain) id playerPlaybackTimePeriodicObserver;                                   //@synthesize playerPlaybackTimePeriodicObserver=_playerPlaybackTimePeriodicObserver - In the implementation block
@property (nonatomic,retain) JTClipSequencePlayerRequest * pendingRequest;                            //@synthesize pendingRequest=_pendingRequest - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestQueue;                                           //@synthesize requestQueue=_requestQueue - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 wasCurrentTime;                                           //@synthesize wasCurrentTime=_wasCurrentTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 cachedCurrentTimeForCompositionUpdate;                    //@synthesize cachedCurrentTimeForCompositionUpdate=_cachedCurrentTimeForCompositionUpdate - In the implementation block
@property (assign,nonatomic) BOOL wasAudioMuted;                                                      //@synthesize wasAudioMuted=_wasAudioMuted - In the implementation block
@property (assign,nonatomic) BOOL wasPlaying;                                                         //@synthesize wasPlaying=_wasPlaying - In the implementation block
@property (assign,nonatomic) BOOL restoringPlayerStateAfterCompositionUpdate;                         //@synthesize restoringPlayerStateAfterCompositionUpdate=_restoringPlayerStateAfterCompositionUpdate - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                    //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic,__weak) id<JTClipSequencePlaybackDelegate> playbackDelegate;              //@synthesize playbackDelegate=_playbackDelegate - In the implementation block
@property (nonatomic,readonly) NSObject*<JTAVPlayerViewer> playerView;                                //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,readonly) CGSize renderSize; 
@property (assign,nonatomic) SCD_Struct_JT6 playbackTimeChangedObserverInterval;                      //@synthesize playbackTimeChangedObserverInterval=_playbackTimeChangedObserverInterval - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(int)duration;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)enqueueRequest:(id)arg1 ;
-(void)teardown;
-(int)currentTime;
-(void)setPendingRequest:(JTClipSequencePlayerRequest *)arg1 ;
-(JTClipSequencePlayerRequest *)pendingRequest;
-(BOOL)isPlaying;
-(NSMutableArray *)requestQueue;
-(void)setRequestQueue:(NSMutableArray *)arg1 ;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(BOOL)play:(/*^block*/id)arg1 ;
-(BOOL)pause:(/*^block*/id)arg1 ;
-(CGSize)renderSize;
-(JTComposition *)composition;
-(id<JTClipSequencePlaybackDelegate>)playbackDelegate;
-(void)setPlaybackDelegate:(id<JTClipSequencePlaybackDelegate>)arg1 ;
-(void)destroyPlayer;
-(void)setComposition:(JTComposition *)arg1 ;
-(NSObject*<JTAVPlayerViewer>)playerView;
-(id)removeAllRequests;
-(void)createPlayer;
-(BOOL)isAudioMuted;
-(void)warnTooManyLiveCompositors:(id)arg1 ;
-(void)clearQueuedRequests;
-(void)executeRequestCompletionBlock:(id)arg1 success:(BOOL)arg2 wasCancelled:(BOOL)arg3 error:(id)arg4 ;
-(BOOL)isRequestOfTypeQueued:(unsigned long long)arg1 ;
-(void)setCachedCurrentTimeForCompositionUpdate:(SCD_Struct_JT6)arg1 ;
-(void)handleUpdateCompositionCompleted:(BOOL)arg1 wasCancelled:(BOOL)arg2 error:(id)arg3 ;
-(void)handleClipCompositionUpdateTimedOut;
-(void)completePendingRequest:(BOOL)arg1 wasCancelled:(BOOL)arg2 error:(id)arg3 ;
-(void)executeNextRequest;
-(void)checkPendingRequestForTimeOut;
-(void)completeRequest:(id)arg1 success:(BOOL)arg2 wasCancelled:(BOOL)arg3 error:(id)arg4 ;
-(id)requestWithBlock:(/*^block*/id)arg1 ofType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isRequestOfTypePendingOrQueued:(unsigned long long)arg1 ;
-(void)throttleRequestWithCompletionBlock:(/*^block*/id)arg1 ofType:(unsigned long long)arg2 ;
-(void)doPlay;
-(void)setupPlaybackTimeChangedObserver;
-(void)setPlaybackTimeChangedObserverInterval:(SCD_Struct_JT6)arg1 ;
-(void)removeCompositorCompletionBlock;
-(void)doPause;
-(void)configureCompositorCompletionBlock;
-(id<JTCompositionClipsDataSource>)clipsDataSource;
-(void)cancelQueuedRequestOfType:(unsigned long long)arg1 ;
-(void)handleSeekCompleted:(BOOL)arg1 ;
-(void)seek:(int)arg1 cancelQueuedRequest:(BOOL)arg2 tolerance:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)doMuteAudio:(BOOL)arg1 ;
-(void)handleChangeAudioMutedCompleted;
-(BOOL)updateComposition:(/*^block*/id)arg1 ;
-(void)doUpdateComposition;
-(void)setWasPlaying:(BOOL)arg1 ;
-(void)setWasCurrentTime:(SCD_Struct_JT6)arg1 ;
-(void)setWasAudioMuted:(BOOL)arg1 ;
-(SCD_Struct_JT6)wasCurrentTime;
-(BOOL)wasAudioMuted;
-(BOOL)setAudioMuted:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)removeRequestOfType:(unsigned long long)arg1 ;
-(void)setRestoringPlayerStateAfterCompositionUpdate:(BOOL)arg1 ;
-(BOOL)wasPlaying;
-(void)appendRequests:(id)arg1 ;
-(id)firstQueuedRequestOfType:(unsigned long long)arg1 ;
-(void)seek:(int)arg1 tolerance:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)dispatchBlockWhenDone:(/*^block*/id)arg1 ;
-(void)cancelQueuedCompositionUpdateRequestFromClip:(id)arg1 ;
-(void)doClipCompositionUpdate:(id)arg1 ;
-(void)handleUpdateCompositionForClipCompleted:(BOOL)arg1 ;
-(void)updateLiveTransformForClip:(id)arg1 ;
-(void)handleCompositionRefreshCompleted:(BOOL)arg1 ;
-(SCD_Struct_JT6)cachedCurrentTimeForCompositionUpdate;
-(void)handlePlaybackBegan;
-(void)handlePlaybackPaused;
-(void)handleReadyForDisplay:(BOOL)arg1 ;
-(void)setPlayerProVideoPeriodicObserver:(id)arg1 ;
-(id)playerPlaybackTimePeriodicObserver;
-(SCD_Struct_JT6)playbackTimeChangedObserverInterval;
-(BOOL)restoringPlayerStateAfterCompositionUpdate;
-(void)setPlayerPlaybackTimePeriodicObserver:(id)arg1 ;
-(id)playerProVideoPeriodicObserver;
-(id)initWithClipsDataSource:(id)arg1 seekPosition:(int)arg2 audioMuted:(BOOL)arg3 ;
-(void)resetPlaybackTimeChangedObserverInterval;
-(void)setPlayerView:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)notifyPlayerViewSizeChanged;
-(BOOL)updateCompositionForClip:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)liveTransformForClip:(id)arg1 ;
-(void)setClipsDataSource:(id<JTCompositionClipsDataSource>)arg1 ;
@end

