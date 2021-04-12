/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingVideoPlayerChangeObserver.h>

@protocol OS_dispatch_queue;
@class PUPlayPauseBarItemsControllerChange, PUBrowsingViewModel, NSObject, NSHashTable, PUBrowsingVideoPlayer, ISWrappedAVPlayer, NSString;

@interface PUPlayPauseBarItemsController : NSObject <PUBrowsingViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver> {

	BOOL __isPerformingChanges;
	BOOL __isUpdating;
	BOOL __needsUpdateVideoPlayer;
	BOOL __needsUpdatePlayPauseState;
	BOOL __needsUpdateAVPlayer;
	BOOL __needsUpdateCurrentPlaybackTimeAndDuration;
	PUPlayPauseBarItemsControllerChange* __currentChange;
	PUBrowsingViewModel* _viewModel;
	long long _playPauseState;
	NSObject*<OS_dispatch_queue> __observerQueue;
	NSHashTable* __changeObservers;
	PUBrowsingVideoPlayer* __videoPlayer;
	ISWrappedAVPlayer* __avPlayer;
	id __timeObservationToken;
	SCD_Struct_PH4 _currentPlaybackTime;
	SCD_Struct_PH4 _playbackDuration;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _observerQueue;                                                                      //@synthesize _observerQueue=__observerQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * _changeObservers;                                                                                   //@synthesize _changeObservers=__changeObservers - In the implementation block
@property (assign,setter=_setPerformingChanges:,nonatomic) BOOL _isPerformingChanges;                                                            //@synthesize _isPerformingChanges=__isPerformingChanges - In the implementation block
@property (assign,setter=_setUpdating:,nonatomic) BOOL _isUpdating;                                                                              //@synthesize _isUpdating=__isUpdating - In the implementation block
@property (assign,setter=_setNeedsUpdateVideoPlayer:,nonatomic) BOOL _needsUpdateVideoPlayer;                                                    //@synthesize _needsUpdateVideoPlayer=__needsUpdateVideoPlayer - In the implementation block
@property (assign,setter=_setNeedsUpdatePlayPauseState:,nonatomic) BOOL _needsUpdatePlayPauseState;                                              //@synthesize _needsUpdatePlayPauseState=__needsUpdatePlayPauseState - In the implementation block
@property (assign,setter=_setNeedsUpdateAVPlayer:,nonatomic) BOOL _needsUpdateAVPlayer;                                                          //@synthesize _needsUpdateAVPlayer=__needsUpdateAVPlayer - In the implementation block
@property (assign,setter=_setNeedsUpdateCurrentPlaybackTimeAndDuration:,nonatomic) BOOL _needsUpdateCurrentPlaybackTimeAndDuration;              //@synthesize _needsUpdateCurrentPlaybackTimeAndDuration=__needsUpdateCurrentPlaybackTimeAndDuration - In the implementation block
@property (setter=_setVideoPlayer:,nonatomic,retain) PUBrowsingVideoPlayer * _videoPlayer;                                                       //@synthesize _videoPlayer=__videoPlayer - In the implementation block
@property (assign,setter=_setPlayPauseState:,nonatomic) long long playPauseState;                                                                //@synthesize playPauseState=_playPauseState - In the implementation block
@property (setter=_setAVPlayer:,nonatomic,retain) ISWrappedAVPlayer * _avPlayer;                                                                 //@synthesize _avPlayer=__avPlayer - In the implementation block
@property (setter=_setTimeObservationToken:,nonatomic,retain) id _timeObservationToken;                                                          //@synthesize _timeObservationToken=__timeObservationToken - In the implementation block
@property (assign,setter=_setCurrentPlaybackTime:,nonatomic) SCD_Struct_PH4 currentPlaybackTime;                                                 //@synthesize currentPlaybackTime=_currentPlaybackTime - In the implementation block
@property (assign,setter=_setPlaybackDuration:,nonatomic) SCD_Struct_PH4 playbackDuration;                                                       //@synthesize playbackDuration=_playbackDuration - In the implementation block
@property (nonatomic,readonly) PUPlayPauseBarItemsControllerChange * _currentChange;                                                             //@synthesize _currentChange=__currentChange - In the implementation block
@property (nonatomic,retain) PUBrowsingViewModel * viewModel;                                                                                    //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerChangeObserver:(id)arg1 ;
-(SCD_Struct_PH4)playbackDuration;
-(void)_updateAVPlayerIfNeeded;
-(void)_assertInsideChangeBlock;
-(void)_setUpdating:(BOOL)arg1 ;
-(void)_setPerformingChanges:(BOOL)arg1 ;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(BOOL)_isPerformingChanges;
-(BOOL)_isUpdating;
-(void)unregisterChangeObserver:(id)arg1 ;
-(long long)playPauseState;
-(BOOL)_needsUpdateCurrentPlaybackTimeAndDuration;
-(id)init;
-(void)_setNeedsUpdateVideoPlayer:(BOOL)arg1 ;
-(void)_setCurrentPlaybackTime:(SCD_Struct_PH4)arg1 ;
-(PUPlayPauseBarItemsControllerChange *)_currentChange;
-(NSObject*<OS_dispatch_queue>)_observerQueue;
-(void)_updatePlayPauseStateIfNeeded;
-(void)_startObservingAVPlayer;
-(PUBrowsingViewModel *)viewModel;
-(void)_updateIfNeeded;
-(void)_setTimeObservationToken:(id)arg1 ;
-(void)_setNeedsUpdatePlayPauseState:(BOOL)arg1 ;
-(void)_invalidatePlayPauseState;
-(void)_setVideoPlayer:(id)arg1 ;
-(void)_performChanges:(/*^block*/id)arg1 ;
-(NSHashTable *)_changeObservers;
-(void)_setNeedsUpdateAVPlayer:(BOOL)arg1 ;
-(void)_setPlaybackDuration:(SCD_Struct_PH4)arg1 ;
-(void)setViewModel:(PUBrowsingViewModel *)arg1 ;
-(void)_invalidateAVPlayer;
-(void)_invalidateVideoPlayer;
-(void)_handleVideoPlayer:(id)arg1 didChange:(id)arg2 ;
-(void)_stopObservingAVPlayer;
-(BOOL)_needsUpdate;
-(id)_timeObservationToken;
-(void)_assertInsideUpdate;
-(SCD_Struct_PH4)currentPlaybackTime;
-(void)_setAVPlayer:(id)arg1 ;
-(ISWrappedAVPlayer *)_avPlayer;
-(void)_setNeedsUpdate;
-(PUBrowsingVideoPlayer *)_videoPlayer;
-(BOOL)_needsUpdateAVPlayer;
-(void)_updateCurrentPlaybackTimeAndDurationIfNeeded;
-(BOOL)_needsUpdatePlayPauseState;
-(void)_publishChanges;
-(void)_setPlayPauseState:(long long)arg1 ;
-(void)_setNeedsUpdateCurrentPlaybackTimeAndDuration:(BOOL)arg1 ;
-(void)_handleViewModel:(id)arg1 didChange:(id)arg2 ;
-(void)_invalidateCurrentPlaybackTimeAndDuration;
-(void)_updateVideoPlayerIfNeeded;
-(BOOL)_needsUpdateVideoPlayer;
@end

