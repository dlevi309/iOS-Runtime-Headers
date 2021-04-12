/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUViewModel.h>
#import <libobjc.A.dylib/ISChangeObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXVideoSessionDelegate.h>
#import <libobjc.A.dylib/PXActivityCoordinatorItem.h>

@protocol PUDisplayAsset;
@class PXUpdater, NSHashTable, PUMediaProvider, PXVideoSession, AVPlayerItem, NSError, NSMutableSet, PXActivityCoordinator, PUBrowsingVideoPlayerChange, ISWrappedAVPlayer, NSString;

@interface PUBrowsingVideoPlayer : PUViewModel <ISChangeObserver, PXChangeObserver, PXVideoSessionDelegate, PXActivityCoordinatorItem> {

	PXUpdater* _updater;
	SCD_Struct_PH4 _pendingSeekTime;
	/*^block*/id _pendingSeekCompletionHandler;
	void* _videoSessionPresenter;
	BOOL _isPlayingAllowed;
	BOOL _alwaysRespectsMuteSwitch;
	BOOL _isMuted;
	BOOL _isPlayerLoadingAllowed;
	BOOL _isActivated;
	BOOL _shouldPreloadVideoContent;
	BOOL __isUpdatingAudioSession;
	BOOL _shouldLoadVideoSession;
	BOOL _shouldRegisterForPlayback;
	BOOL _shouldFadeNextVolumeChange;
	float _volume;
	unsigned long long _activityCoordinatorQueuePosition;
	NSHashTable* _timeObservers;
	NSHashTable* _videoOutputs;
	id<PUDisplayAsset> _asset;
	PUMediaProvider* _mediaProvider;
	long long _desiredPlayState;
	long long _audioStatus;
	PXVideoSession* _videoSession;
	AVPlayerItem* _playerItem;
	NSError* _error;
	NSMutableSet* __playerLoadingDisablingReasons;
	NSMutableSet* __playingDisablingReasons;
	unsigned long long _nextPlayerLoadingEnabledUpdateID;
	PXActivityCoordinator* _playbackCoordinator;
	SCD_Struct_PH4 _desiredSeekTime;

}

@property (nonatomic,readonly) PUBrowsingVideoPlayerChange * currentChange; 
@property (nonatomic,retain) PXVideoSession * videoSession;                                                                        //@synthesize videoSession=_videoSession - In the implementation block
@property (setter=_setPlayerItem:,nonatomic,retain) AVPlayerItem * playerItem;                                                     //@synthesize playerItem=_playerItem - In the implementation block
@property (setter=_setError:,nonatomic,retain) NSError * error;                                                                    //@synthesize error=_error - In the implementation block
@property (assign,setter=_setPlayerLoadingAllowed:,nonatomic) BOOL isPlayerLoadingAllowed;                                         //@synthesize isPlayerLoadingAllowed=_isPlayerLoadingAllowed - In the implementation block
@property (setter=_setPlayerLoadingDisablingReasons:,nonatomic,retain) NSMutableSet * _playerLoadingDisablingReasons;              //@synthesize _playerLoadingDisablingReasons=__playerLoadingDisablingReasons - In the implementation block
@property (assign,setter=_setPlayingAllowed:,nonatomic) BOOL isPlayingAllowed;                                                     //@synthesize isPlayingAllowed=_isPlayingAllowed - In the implementation block
@property (setter=_setPlayingDisablingReasons:,nonatomic,retain) NSMutableSet * _playingDisablingReasons;                          //@synthesize _playingDisablingReasons=__playingDisablingReasons - In the implementation block
@property (assign,setter=_setUpdatingAudioSession:,nonatomic) BOOL _isUpdatingAudioSession;                                        //@synthesize _isUpdatingAudioSession=__isUpdatingAudioSession - In the implementation block
@property (assign,setter=_setAudioStatus:,nonatomic) long long audioStatus;                                                        //@synthesize audioStatus=_audioStatus - In the implementation block
@property (assign,nonatomic) unsigned long long nextPlayerLoadingEnabledUpdateID;                                                  //@synthesize nextPlayerLoadingEnabledUpdateID=_nextPlayerLoadingEnabledUpdateID - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadVideoSession;                                                                          //@synthesize shouldLoadVideoSession=_shouldLoadVideoSession - In the implementation block
@property (nonatomic,readonly) NSHashTable * timeObservers;                                                                        //@synthesize timeObservers=_timeObservers - In the implementation block
@property (nonatomic,readonly) NSHashTable * videoOutputs;                                                                         //@synthesize videoOutputs=_videoOutputs - In the implementation block
@property (nonatomic,readonly) PXActivityCoordinator * playbackCoordinator;                                                        //@synthesize playbackCoordinator=_playbackCoordinator - In the implementation block
@property (assign,nonatomic) BOOL shouldRegisterForPlayback;                                                                       //@synthesize shouldRegisterForPlayback=_shouldRegisterForPlayback - In the implementation block
@property (assign,nonatomic) BOOL shouldFadeNextVolumeChange;                                                                      //@synthesize shouldFadeNextVolumeChange=_shouldFadeNextVolumeChange - In the implementation block
@property (nonatomic,retain) id<PUDisplayAsset> asset;                                                                             //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PUMediaProvider * mediaProvider;                                                                    //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (assign,nonatomic) long long desiredPlayState;                                                                           //@synthesize desiredPlayState=_desiredPlayState - In the implementation block
@property (nonatomic,readonly) BOOL isPlaybackDesired; 
@property (nonatomic,readonly) long long playState; 
@property (nonatomic,readonly) BOOL isStalled; 
@property (assign,nonatomic) BOOL alwaysRespectsMuteSwitch;                                                                        //@synthesize alwaysRespectsMuteSwitch=_alwaysRespectsMuteSwitch - In the implementation block
@property (nonatomic,readonly) BOOL isPlayable; 
@property (assign,nonatomic) float volume;                                                                                         //@synthesize volume=_volume - In the implementation block
@property (assign,setter=setMuted:,nonatomic) BOOL isMuted;                                                                        //@synthesize isMuted=_isMuted - In the implementation block
@property (nonatomic,readonly) ISWrappedAVPlayer * avPlayer; 
@property (nonatomic,readonly) BOOL isAtBeginning; 
@property (nonatomic,readonly) BOOL isAtEnd; 
@property (nonatomic,readonly) SCD_Struct_PH4 currentTime; 
@property (nonatomic,readonly) SCD_Struct_PH4 duration; 
@property (assign,nonatomic) SCD_Struct_PH4 desiredSeekTime;                                                                       //@synthesize desiredSeekTime=_desiredSeekTime - In the implementation block
@property (assign,setter=setActivated:,nonatomic) BOOL isActivated;                                                                //@synthesize isActivated=_isActivated - In the implementation block
@property (assign,nonatomic) BOOL shouldPreloadVideoContent;                                                                       //@synthesize shouldPreloadVideoContent=_shouldPreloadVideoContent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long activityCoordinatorQueuePosition;                                                  //@synthesize activityCoordinatorQueuePosition=_activityCoordinatorQueuePosition - In the implementation block
-(void)registerChangeObserver:(id)arg1 ;
-(PUBrowsingVideoPlayerChange *)currentChange;
-(BOOL)isPlayable;
-(void)setAsset:(id<PUDisplayAsset>)arg1 ;
-(PUMediaProvider *)mediaProvider;
-(void)_handleShouldReloadAssetMediaNotification:(id)arg1 ;
-(void)_handleSceneWillDeactivateNotification:(id)arg1 ;
-(void)setVolume:(float)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 ;
-(id)init;
-(id<PUDisplayAsset>)asset;
-(void)didPerformChanges;
-(long long)playState;
-(void)assetContentDidChange;
-(void)invalidateExistingPlayer;
-(void)setPlayerLoadingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(void)rewindExistingPlayer;
-(void)setDesiredPlayState:(long long)arg1 ;
-(long long)desiredPlayState;
-(void)setActivated:(BOOL)arg1 ;
-(void)_setError:(id)arg1 ;
-(NSError *)error;
-(BOOL)isStalled;
-(SCD_Struct_PH4)currentTime;
-(NSString *)description;
-(long long)audioStatus;
-(BOOL)isActivated;
-(BOOL)isAtBeginning;
-(unsigned long long)activityCoordinatorQueuePosition;
-(void)setActivityCoordinatorQueuePosition:(unsigned long long)arg1 ;
-(void)videoSessionDidPlayToEnd:(id)arg1 ;
-(void)videoSessionAudioSessionOutputVolumeDidChange:(id)arg1 fromVolume:(float)arg2 toVolume:(float)arg3 ;
-(BOOL)isPlaybackDesired;
-(void)setAlwaysRespectsMuteSwitch:(BOOL)arg1 ;
-(void)setShouldLoadVideoSession:(BOOL)arg1 ;
-(void)setShouldPreloadVideoContent:(BOOL)arg1 ;
-(void)setPlayingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)setDesiredSeekTime:(SCD_Struct_PH4)arg1 ;
-(void)registerTimeObserver:(id)arg1 ;
-(void)unregisterTimeObserver:(id)arg1 ;
-(void)registerVideoOutput:(id)arg1 ;
-(void)unregisterVideoOutput:(id)arg1 ;
-(void)_handleSceneDidActivateNotification:(id)arg1 ;
-(void)_setAudioStatus:(long long)arg1 ;
-(void)_setPlayerLoadingAllowed:(BOOL)arg1 ;
-(void)_setPlayingAllowed:(BOOL)arg1 ;
-(void)setVideoSession:(PXVideoSession *)arg1 ;
-(NSHashTable *)timeObservers;
-(NSHashTable *)videoOutputs;
-(void)_updateVideoSession;
-(BOOL)isPlayingAllowed;
-(void)_updatePlayerLoadingAllowedWithUpdateID:(unsigned long long)arg1 ;
-(void)_updateShouldRegisterForPlayback;
-(void)setShouldRegisterForPlayback:(BOOL)arg1 ;
-(long long)_videoSessionDesiredPlayState;
-(void)_updateVideoSessionDesiredPlayState;
-(void)_updatePlayerVolume;
-(PXVideoSession *)videoSession;
-(void)_performPendingSeekIfNeeded;
-(void)_setVideoSessionVolume:(id)arg1 ;
-(BOOL)alwaysRespectsMuteSwitch;
-(BOOL)isPlayerLoadingAllowed;
-(SCD_Struct_PH4)desiredSeekTime;
-(BOOL)shouldPreloadVideoContent;
-(NSMutableSet *)_playerLoadingDisablingReasons;
-(NSMutableSet *)_playingDisablingReasons;
-(void)_setPlayerLoadingDisablingReasons:(id)arg1 ;
-(void)_setPlayingDisablingReasons:(id)arg1 ;
-(BOOL)_isUpdatingAudioSession;
-(void)_setUpdatingAudioSession:(BOOL)arg1 ;
-(unsigned long long)nextPlayerLoadingEnabledUpdateID;
-(void)setNextPlayerLoadingEnabledUpdateID:(unsigned long long)arg1 ;
-(PXActivityCoordinator *)playbackCoordinator;
-(BOOL)shouldLoadVideoSession;
-(BOOL)shouldRegisterForPlayback;
-(BOOL)shouldFadeNextVolumeChange;
-(void)setShouldFadeNextVolumeChange:(BOOL)arg1 ;
-(void)seekToTime:(SCD_Struct_PH4)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setMuted:(BOOL)arg1 ;
-(void)seekToTime:(SCD_Struct_PH4)arg1 toleranceBefore:(SCD_Struct_PH4)arg2 toleranceAfter:(SCD_Struct_PH4)arg3 completionHandler:(/*^block*/id)arg4 ;
-(ISWrappedAVPlayer *)avPlayer;
-(float)volume;
-(id)newViewModelChange;
-(BOOL)isMuted;
-(SCD_Struct_PH4)duration;
-(void)_setPlayerItem:(id)arg1 ;
-(void)_updateAudioSessionCategory;
-(AVPlayerItem *)playerItem;
-(BOOL)isAtEnd;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

