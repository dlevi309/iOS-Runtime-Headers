/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUViewModel.h>
#import <libobjc.A.dylib/ISChangeObserver.h>
#import <libobjc.A.dylib/PXVideoScrubberControllerTarget.h>

@protocol PUDisplayAsset;
@class ISLivePhotoPlayer, PUMediaProvider, ISWrappedAVPlayer, NSArray, NSMutableSet, PHLivePhoto, PUBrowsingIrisPlayerChange, NSString;

@interface PUBrowsingIrisPlayer : PUViewModel <ISChangeObserver, PXVideoScrubberControllerTarget> {

	SCD_Struct_PU13 _isValid;
	id _videoPeriodicObserver;
	BOOL _livePhotoLoadingAllowed;
	BOOL _isLivePhotoPlaybackAllowed;
	BOOL _activated;
	BOOL _playing;
	BOOL _appIsInBackground;
	int _livePhotoRequestID;
	ISLivePhotoPlayer* _player;
	/*^block*/id durationChangeHandler;
	/*^block*/id statusChangeHandler;
	/*^block*/id playerItemChangeHandler;
	id<PUDisplayAsset> _asset;
	PUMediaProvider* _mediaProvider;
	ISWrappedAVPlayer* _videoPlayer;
	long long _loadingTarget;
	NSArray* _currentlyDisplayedTimes;
	NSMutableSet* _livePhotoLoadingDisablingReasons;
	NSMutableSet* _livePhotoPlaybackDisablingReasons;
	long long __currentUnloadRequestId;
	PHLivePhoto* _livePhoto;
	long long _livePhotoRequestState;
	/*^block*/id _seekCompletionHandler;
	SCD_Struct_PH4 _scrubbingPhotoTime;
	SCD_Struct_PU19 _vitalityTransform;

}

@property (nonatomic,retain) ISWrappedAVPlayer * videoPlayer;                                            //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,readonly) NSMutableSet * livePhotoLoadingDisablingReasons;                          //@synthesize livePhotoLoadingDisablingReasons=_livePhotoLoadingDisablingReasons - In the implementation block
@property (nonatomic,readonly) NSMutableSet * livePhotoPlaybackDisablingReasons;                         //@synthesize livePhotoPlaybackDisablingReasons=_livePhotoPlaybackDisablingReasons - In the implementation block
@property (assign,nonatomic) long long _currentUnloadRequestId;                                          //@synthesize _currentUnloadRequestId=__currentUnloadRequestId - In the implementation block
@property (nonatomic,retain) PHLivePhoto * livePhoto;                                                    //@synthesize livePhoto=_livePhoto - In the implementation block
@property (assign,getter=isLivePhotoLoadingAllowed,nonatomic) BOOL livePhotoLoadingAllowed;              //@synthesize livePhotoLoadingAllowed=_livePhotoLoadingAllowed - In the implementation block
@property (assign,nonatomic) long long livePhotoRequestState;                                            //@synthesize livePhotoRequestState=_livePhotoRequestState - In the implementation block
@property (assign,nonatomic) int livePhotoRequestID;                                                     //@synthesize livePhotoRequestID=_livePhotoRequestID - In the implementation block
@property (nonatomic,copy) NSArray * currentlyDisplayedTimes;                                            //@synthesize currentlyDisplayedTimes=_currentlyDisplayedTimes - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                                              //@synthesize playing=_playing - In the implementation block
@property (nonatomic,copy) id seekCompletionHandler;                                                     //@synthesize seekCompletionHandler=_seekCompletionHandler - In the implementation block
@property (nonatomic,readonly) PUBrowsingIrisPlayerChange * currentChange; 
@property (assign,nonatomic) BOOL isLivePhotoPlaybackAllowed;                                            //@synthesize isLivePhotoPlaybackAllowed=_isLivePhotoPlaybackAllowed - In the implementation block
@property (assign,nonatomic) BOOL appIsInBackground;                                                     //@synthesize appIsInBackground=_appIsInBackground - In the implementation block
@property (assign,nonatomic) SCD_Struct_PU19 vitalityTransform;                                          //@synthesize vitalityTransform=_vitalityTransform - In the implementation block
@property (nonatomic,retain) id<PUDisplayAsset> asset;                                                   //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PUMediaProvider * mediaProvider;                                          //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) ISLivePhotoPlayer * player;                                               //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) long long loadingTarget;                                                    //@synthesize loadingTarget=_loadingTarget - In the implementation block
@property (assign,getter=isActivated,nonatomic) BOOL activated;                                          //@synthesize activated=_activated - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PH4 scrubbingPhotoTime;                                        //@synthesize scrubbingPhotoTime=_scrubbingPhotoTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PH4 currentPhotoTime; 
@property (nonatomic,readonly) SCD_Struct_PH4 currentVideoDuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id durationChangeHandler; 
@property (nonatomic,copy) id statusChangeHandler; 
@property (nonatomic,copy) id playerItemChangeHandler; 
+(id)new;
-(ISLivePhotoPlayer *)player;
-(void)registerChangeObserver:(id)arg1 ;
-(PUBrowsingIrisPlayerChange *)currentChange;
-(CGSize)_targetSize;
-(void)setAsset:(id<PUDisplayAsset>)arg1 ;
-(PUMediaProvider *)mediaProvider;
-(void)setLivePhoto:(PHLivePhoto *)arg1 ;
-(BOOL)isPlaying;
-(PHLivePhoto *)livePhoto;
-(void)unregisterChangeObserver:(id)arg1 ;
-(id)init;
-(id<PUDisplayAsset>)asset;
-(void)didPerformChanges;
-(void)setPlaying:(BOOL)arg1 ;
-(void)_updateVitalityTransform;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(void)unloadLivePhoto;
-(void)setLoadingTarget:(long long)arg1 ;
-(void)setLivePhotoLoadingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(float)playRate;
-(void)_updateIfNeeded;
-(void)setActivated:(BOOL)arg1 ;
-(void)setVitalityTransform:(SCD_Struct_PU19)arg1 ;
-(void)setVideoPlayer:(ISWrappedAVPlayer *)arg1 ;
-(long long)playerStatus;
-(long long)loadingTarget;
-(ISWrappedAVPlayer *)videoPlayer;
-(id)durationChangeHandler;
-(id)statusChangeHandler;
-(id)playerItemChangeHandler;
-(SCD_Struct_PH4)playerCurrentTime;
-(SCD_Struct_PH4)currentItemDuration;
-(void)videoScrubberController:(id)arg1 seekToTime:(SCD_Struct_PH4)arg2 toleranceBefore:(SCD_Struct_PH4)arg3 toleranceAfter:(SCD_Struct_PH4)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setDurationChangeHandler:(id)arg1 ;
-(void)setStatusChangeHandler:(id)arg1 ;
-(void)setPlayerItemChangeHandler:(id)arg1 ;
-(void)playPreviewHintWhenReady;
-(void)setLivePhotoPlaybackDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)setIsLivePhotoPlaybackAllowed:(BOOL)arg1 ;
-(void)setScrubbingPhotoTime:(SCD_Struct_PH4)arg1 completion:(/*^block*/id)arg2 ;
-(SCD_Struct_PH4)currentPhotoTime;
-(SCD_Struct_PH4)currentVideoDuration;
-(void)setCurrentlyDisplayedTimes:(NSArray *)arg1 ;
-(void)setLivePhotoLoadingAllowed:(BOOL)arg1 ;
-(id)_playerCreateIfNeeded:(BOOL)arg1 ;
-(id)playerCreateIfNeeded;
-(void)_handleLivePhotoResult:(id)arg1 info:(id)arg2 requestID:(int)arg3 ;
-(void)_cancelAllRequests;
-(BOOL)isContentLoadingRequestInProgress;
-(void)_invalidateLivePhoto;
-(void)_invalidatePlaying;
-(void)_updateLivePhotoIfNeeded;
-(void)_invalidatePlayerContent;
-(void)_updatePlayerContentIfNeeded;
-(void)_handleLoadedVitalityTransform:(SCD_Struct_PU19)arg1 forAsset:(id)arg2 ;
-(void)_invalidatePlayerItemLoadingTarget;
-(void)_updatePlayerItemLoadingTargetIfNeeded;
-(void)_invalidatePlayerItemScrubbingPhotoTime;
-(void)_updatePlayerItemScrubbingPhotoTimeIfNeeded;
-(void)_handlePeriodicObserverWithTime:(SCD_Struct_PH4)arg1 ;
-(void)_updatePlayingIfNeeded;
-(void)_handlePlaybackStyleChanged;
-(BOOL)isLivePhotoLoadingAllowed;
-(BOOL)isLivePhotoPlaybackAllowed;
-(SCD_Struct_PH4)scrubbingPhotoTime;
-(NSArray *)currentlyDisplayedTimes;
-(NSMutableSet *)livePhotoLoadingDisablingReasons;
-(NSMutableSet *)livePhotoPlaybackDisablingReasons;
-(long long)_currentUnloadRequestId;
-(void)set_currentUnloadRequestId:(long long)arg1 ;
-(long long)livePhotoRequestState;
-(void)setLivePhotoRequestState:(long long)arg1 ;
-(int)livePhotoRequestID;
-(void)setLivePhotoRequestID:(int)arg1 ;
-(void)setSeekCompletionHandler:(id)arg1 ;
-(BOOL)appIsInBackground;
-(void)setAppIsInBackground:(BOOL)arg1 ;
-(BOOL)isActivated;
-(long long)_contentMode;
-(id)debugDetailedDescription;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_PH4)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)_needsUpdate;
-(void)removeTimeObserver:(id)arg1 ;
-(void)cancelPendingSeeks;
-(SCD_Struct_PU19)vitalityTransform;
-(id)newViewModelChange;
-(id)seekCompletionHandler;
-(id)playerItem;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

