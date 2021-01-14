/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/ISChangeObserver.h>
#import <libobjc.A.dylib/AVPlayerItemOutputPullDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/ISWrappedAVPlayerDelegate.h>

@protocol OS_dispatch_queue, PXVideoSessionDelegate;
@class NSTimer, ISWrappedAVPlayer, NSObject, NSMutableArray, ISWrappedAVAudioSession, NSMutableDictionary, NSMutableSet, PXDisplayLink, NSString, AVPlayerItemVideoOutput, AVPlayerItem, PXNumberAnimator, PXVideoContentProvider, NSError;

@interface PXVideoSession : PXObservable <ISChangeObserver, AVPlayerItemOutputPullDelegate, PXChangeObserver, ISWrappedAVPlayerDelegate> {

	id _playerTimeObservationToken;
	NSTimer* _playerTimeAdvancementTimer;
	long long _tokenCounter;
	ISWrappedAVPlayer* _videoPlayer;
	void* _updateQueueIdentifier;
	NSObject*<OS_dispatch_queue> _audioSessionQueue;
	NSObject*<OS_dispatch_queue> _videoWorkQueue;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _updateQueue;
	NSMutableArray* _mainQueue_videoViewQueue;
	ISWrappedAVAudioSession* _audioSessionQueue_audioSession;
	NSMutableDictionary* _stateQueue_presentationStatesByContext;
	NSMutableSet* _stateQueue_pixelBufferOutputTokens;
	NSMutableSet* _stateQueue_pixelBufferPausedOutputTokens;
	PXDisplayLink* _stateQueue_displayLink;
	id _stateQueue_playbackTimeRangeEndBoundaryObserver;
	long long _stateQueue_playState;
	NSString* _stateQueue_audioSessionCategory;
	unsigned long long _stateQueue_audioSessionCategoryOptions;
	NSString* _stateQueue_audioSessionMode;
	unsigned long long _stateQueue_audioSessionRouteSharingPolicy;
	BOOL _stateQueue_isUpdatingAudioSession;
	BOOL _stateQueue_buffering;
	long long _stateQueue_desiredPlayState;
	AVPlayerItemVideoOutput* _stateQueue_videoOutput;
	SCD_Struct_PX8 _stateQueue_videoDuration;
	AVPlayerItem* _stateQueue_currentPlayerItem;
	BOOL _stateQueue_isPlayerTimeAdvancing;
	long long _stateQueue_audioStatus;
	AVPlayerItem* _stateQueue_playerItem;
	BOOL _stateQueue_isPlayable;
	BOOL _stateQueue_isStalled;
	BOOL _stateQueue_isLoopingEnabled;
	SCD_Struct_PX9 _stateQueue_playbackTimeRange;
	float _stateQueue_volume;
	BOOL _stateQueue_shouldFadeVolumeChange;
	BOOL _stateQueue_seekToBeginningAtEnd;
	BOOL _stateQueue_isAtEnd;
	BOOL _stateQueue_isAtBeginning;
	CGAffineTransform _stateQueue_preferredTransform;
	CVBufferRef _stateQueue_currentPixelBuffer;
	BOOL _stateQueue_readyForSeeking;
	SCD_Struct_PX8 _stateQueue_currentTime;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateQueue_updateFlags;
	long long _updateQueue_pendingPlayerItemSeekCount;
	BOOL _updateQueue_didFinishInitializingAudioSession;
	SCD_Struct_PX8 _updateQueue_lastPlayerTime;
	long long _updateQueue_playRequestIntervalSignpost;
	PXNumberAnimator* _mainQueue_volumeAnimator;
	BOOL _allowsExternalPlayback;
	BOOL _isUpdatingAudioSession;
	id<PXVideoSessionDelegate> _delegate;
	PXVideoContentProvider* _contentProvider;
	NSError* _error;
	SCD_Struct_PX8 _currentTime;

}

@property (nonatomic,retain) AVPlayerItem * playerItem; 
@property (assign,getter=isBuffering,nonatomic) BOOL buffering; 
@property (assign,setter=setAtBeginning:,nonatomic) BOOL isAtBeginning; 
@property (assign,setter=setAtEnd:,nonatomic) BOOL isAtEnd; 
@property (assign,setter=setStalled:,nonatomic) BOOL isStalled; 
@property (assign,nonatomic) SCD_Struct_PX8 currentTime;                                               //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) long long audioStatus; 
@property (assign,setter=setUpdatingAudioSession:,nonatomic) BOOL isUpdatingAudioSession;              //@synthesize isUpdatingAudioSession=_isUpdatingAudioSession - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX8 videoDuration; 
@property (assign,nonatomic) CVBufferRef currentPixelBuffer; 
@property (assign,nonatomic) CGAffineTransform preferredTransform; 
@property (nonatomic,retain) PXDisplayLink * displayLink; 
@property (nonatomic,readonly) ISWrappedAVPlayer * videoPlayer; 
@property (assign,nonatomic,__weak) id<PXVideoSessionDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PXVideoContentProvider * contentProvider;                               //@synthesize contentProvider=_contentProvider - In the implementation block
@property (nonatomic,readonly) long long playState; 
@property (nonatomic,readonly) float volume; 
@property (nonatomic,copy,readonly) NSString * audioSessionCategory; 
@property (nonatomic,readonly) NSString * audioSessionMode; 
@property (nonatomic,readonly) unsigned long long audioSessionRouteSharingPolicy; 
@property (nonatomic,readonly) unsigned long long audioSessionCategoryOptions; 
@property (nonatomic,readonly) NSError * error;                                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * debugDetailedDescription; 
@property (nonatomic,readonly) NSString * statusDescription; 
@property (nonatomic,readonly) BOOL isPlayable; 
@property (nonatomic,readonly) long long desiredPlayState; 
@property (nonatomic,readonly) BOOL preventsSleepDuringVideoPlayback; 
@property (nonatomic,readonly) BOOL allowsExternalPlayback;                                            //@synthesize allowsExternalPlayback=_allowsExternalPlayback - In the implementation block
@property (getter=isLoopingEnabled,nonatomic,readonly) BOOL loopingEnabled; 
@property (nonatomic,readonly) SCD_Struct_PX9 playbackTimeRange; 
@property (nonatomic,readonly) BOOL seekToBeginningAtEnd; 
@property (nonatomic,readonly) BOOL isReadyForSeeking; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPlayable;
-(void)cancelLoading;
-(NSString *)audioSessionCategory;
-(void)setPlayable:(BOOL)arg1 ;
-(PXDisplayLink *)displayLink;
-(void)setDisplayLink:(PXDisplayLink *)arg1 ;
-(id)videoOutput;
-(BOOL)allowsExternalPlayback;
-(id)init;
-(id<PXVideoSessionDelegate>)delegate;
-(BOOL)isLoopingEnabled;
-(void)didPerformChanges;
-(long long)playState;
-(void)setCurrentTime:(SCD_Struct_PX8)arg1 ;
-(CGAffineTransform)preferredTransform;
-(void)setDesiredPlayState:(long long)arg1 ;
-(void)setVideoDuration:(SCD_Struct_PX8)arg1 ;
-(SCD_Struct_PX8)videoDuration;
-(long long)desiredPlayState;
-(void)_performChanges:(/*^block*/id)arg1 ;
-(NSError *)error;
-(BOOL)isStalled;
-(void)setDelegate:(id<PXVideoSessionDelegate>)arg1 ;
-(ISWrappedAVPlayer *)videoPlayer;
-(void)setAllowsExternalPlayback:(BOOL)arg1 ;
-(void)outputMediaDataWillChange:(id)arg1 ;
-(SCD_Struct_PX8)currentTime;
-(PXVideoContentProvider *)contentProvider;
-(void)setPreventsSleepDuringVideoPlayback:(BOOL)arg1 ;
-(void)avPlayer:(id)arg1 itemDidPlayToEnd:(id)arg2 ;
-(long long)audioStatus;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(BOOL)isAtBeginning;
-(void)_updatePlayerVolume;
-(void)setVolume:(float)arg1 withFade:(BOOL)arg2 ;
-(BOOL)isReadyForSeeking;
-(void)performChanges:(/*^block*/id)arg1 withPresentationContext:(long long)arg2 presenter:(void*)arg3 ;
-(void)setSeekToBeginningAtEnd:(BOOL)arg1 ;
-(void)setPlaybackTimeRange:(SCD_Struct_PX9)arg1 ;
-(void)loadIfNeededWithPriority:(long long)arg1 ;
-(void)setAudioSessionCategory:(id)arg1 mode:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
-(void)enterPresentationContext:(long long)arg1 presenter:(void*)arg2 ;
-(void)leavePresentationContext:(long long)arg1 presenter:(void*)arg2 ;
-(void)seekToTime:(SCD_Struct_PX8)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setAtEnd:(BOOL)arg1 ;
-(void)seekToTime:(SCD_Struct_PX8)arg1 toleranceBefore:(SCD_Struct_PX8)arg2 toleranceAfter:(SCD_Struct_PX8)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSString *)debugDetailedDescription;
-(void)setLoopingEnabled:(BOOL)arg1 ;
-(void)_updatePlayerItem;
-(CVBufferRef)currentPixelBuffer;
-(id)mutableChangeObject;
-(void)setStalled:(BOOL)arg1 ;
-(id)initWithContentProvider:(id)arg1 ;
-(id)initWithContentProvider:(id)arg1 videoPlayer:(id)arg2 ;
-(id)_stateQueue_newPresentationStateFromCurrentWithPresenter:(void*)arg1 ;
-(id)performFinalCleanup;
-(void)prewarmVideoView;
-(void)_mainQueue_actuallyPrewarmVideoView;
-(id)dequeueVideoView;
-(void)recycleVideoView:(id)arg1 ;
-(void)requestPixelBufferOutputWithRequestIdentifier:(id)arg1 ;
-(void)cancelPixelBufferOutputWithRequestIdentifier:(id)arg1 ;
-(void)_audioSessionQueue_updateAudioSessionWithCategory:(id)arg1 mode:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
-(unsigned long long)audioSessionCategoryOptions;
-(NSString *)audioSessionMode;
-(unsigned long long)audioSessionRouteSharingPolicy;
-(void)_handleContentLoadingResult:(id)arg1 ;
-(void)_updateFromCurrentPresentationState;
-(void)_audioSessionQueue_initializeAudioSession;
-(void)_didFinishInitializingAudioSession;
-(id)playbackTimeRangeEndBoundaryObserver;
-(void)setPlaybackTimeRangeEndBoundaryObserver:(id)arg1 ;
-(id)_newVideoView;
-(void)_updateVideoOutput;
-(void)_addOutput:(id)arg1 toPlayerItem:(id)arg2 ;
-(void)_updateCurrentPixelBuffer;
-(void)_updateDisplayLinkState;
-(void)setCurrentPixelBuffer:(CVBufferRef)arg1 ;
-(BOOL)isBuffering;
-(void)_videoWorkQueue_updateCurrentPixelBufferWithVideoOutput:(id)arg1 outputTime:(double)arg2 ;
-(void)_updateDuration;
-(BOOL)_isAVPlayerPlayStateOutOfSync;
-(id)currentPlayerItem;
-(void)setCurrentPlayerItem:(id)arg1 ;
-(void)setUpdatingAudioSession:(BOOL)arg1 ;
-(BOOL)preventsSleepDuringVideoPlayback;
-(SCD_Struct_PX9)playbackTimeRange;
-(BOOL)seekToBeginningAtEnd;
-(BOOL)isPlayerTimeAdvancing;
-(void)setPlayerTimeAdvancing:(BOOL)arg1 ;
-(void)setAudioStatus:(long long)arg1 ;
-(void)setBuffering:(BOOL)arg1 ;
-(void)setIsReadyForSeeking:(BOOL)arg1 ;
-(void)setPlayState:(long long)arg1 ;
-(void)setAtBeginning:(BOOL)arg1 ;
-(unsigned long long)pixelBufferOutputTokenCount;
-(void)_avPlayerTimeDidChange:(SCD_Struct_PX8)arg1 ;
-(void)_handlePreferredTransformDidLoad;
-(void)_handlePlayerTimeAdvancementTimer:(id)arg1 ;
-(void)_updatePlayability;
-(void)_handlePlayabilityDidLoadForAsset:(id)arg1 ;
-(void)_setPlayabilityFromAsset:(id)arg1 ;
-(void)_updateAudioStatus;
-(void)_updateRotationTransform;
-(void)_updateAtBeginningOrEnd;
-(void)_updateAtBeginningOrEndWithPlayerItemDuration:(SCD_Struct_PX8)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)_updateBuffering;
-(void)_updateStalled;
-(void)_updatePlayerItemInPlayer;
-(void)_updateVolumeAnimator;
-(void)_updateReadyForSeeking;
-(void)_updatePlayState;
-(void)_updateAVPlayerPlayState;
-(void)setVideoOutput:(id)arg1 ;
-(void)_removeAllVideoOutputs;
-(void)_updateQueue_seekToPlaybackTimeRangeStartIfNeeded;
-(void)_handlePlayerItemSeekDidFinish;
-(void)_updateQueue_decrementPendingPlayerItemSeekCount;
-(void)_handleDidReachPlaybackTimeRangeEnd;
-(void)_logPlaybackState;
-(id)_playbackStateDescription;
-(void)_loadAssetTracksIfNeeded;
-(void)_handleAssetTracksDidLoadForAsset:(id)arg1 ;
-(void)_handleAudioSessionOutputVolumeDidChangeFromVolume:(float)arg1 toVolume:(float)arg2 ;
-(BOOL)_isOnUpdateQueue;
-(void)_assertOnUpdateQueue;
-(void)_performBlockOnUpdateQueue:(/*^block*/id)arg1 ;
-(BOOL)isUpdatingAudioSession;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(CGImageRef)generateSnapshotImage;
-(float)volume;
-(NSString *)statusDescription;
-(void)performChanges:(/*^block*/id)arg1 ;
-(AVPlayerItem *)playerItem;
-(BOOL)isAtEnd;
-(void)_handleDisplayLink:(id)arg1 ;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

