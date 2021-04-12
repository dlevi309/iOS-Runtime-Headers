/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MFPlaybackStackControllerDelegate.h>
#import <libobjc.A.dylib/MPAVQueueControllerDelegate.h>
#import <libobjc.A.dylib/MPCAssetLoaderDelegate.h>
#import <libobjc.A.dylib/MPCPlaybackEngineImplementation.h>

@protocol MPAVQueueController, MFPlaybackStackControllerMFQueueManagement, MFAssetLoading;
@class MPCPlaybackEngine, MPAVItem, MPQueuePlayer, MPVideoView, AVPictureInPictureController, MPCItemBookmarker, MPCMediaFoundationTranslator, MPCErrorControllerImplementation, MPCExternalPlaybackControllerImplementation, MPCLeaseController, AVPlayerViewController, NSDictionary, NSString;

@interface _MPCPlaybackEngineMediaFoundationImplementation : NSObject <MFPlaybackStackControllerDelegate, MPAVQueueControllerDelegate, MPCAssetLoaderDelegate, MPCPlaybackEngineImplementation> {

	BOOL _wantsPictureInPicture;
	BOOL _automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds;
	BOOL _hasPlayedSuccessfully;
	BOOL _autoPlayWhenLikelyToKeepUp;
	MPCPlaybackEngine* _playbackEngine;
	id<MPAVQueueController> _queueController;
	MPAVItem* _currentItem;
	MPQueuePlayer* _queuePlayer;
	double _currentTime;
	MPVideoView* _videoView;
	long long _state;
	long long _stateBeforeInterruption;
	AVPictureInPictureController* _pictureInPictureController;
	long long _actionAtQueueEnd;
	id<MFPlaybackStackController><MFQueueManagement> _playbackStackController;
	MPCItemBookmarker* _bookmarker;
	MPCMediaFoundationTranslator* _translator;
	MPCErrorControllerImplementation* _errorController;
	MPCExternalPlaybackControllerImplementation* _externalPlaybackController;
	id<MFAssetLoading> _assetLoader;
	MPCLeaseController* _leaseController;
	unsigned long long _stateHandle;

}

@property (nonatomic,retain) id<MFPlaybackStackController><MFQueueManagement> playbackStackController;                //@synthesize playbackStackController=_playbackStackController - In the implementation block
@property (nonatomic,retain) MPCItemBookmarker * bookmarker;                                                          //@synthesize bookmarker=_bookmarker - In the implementation block
@property (nonatomic,retain) MPCMediaFoundationTranslator * translator;                                               //@synthesize translator=_translator - In the implementation block
@property (nonatomic,retain) MPCErrorControllerImplementation * errorController;                                      //@synthesize errorController=_errorController - In the implementation block
@property (nonatomic,retain) MPCExternalPlaybackControllerImplementation * externalPlaybackController;                //@synthesize externalPlaybackController=_externalPlaybackController - In the implementation block
@property (nonatomic,retain) id<MFAssetLoading> assetLoader;                                                          //@synthesize assetLoader=_assetLoader - In the implementation block
@property (nonatomic,retain) MPCLeaseController * leaseController;                                                    //@synthesize leaseController=_leaseController - In the implementation block
@property (assign,nonatomic) unsigned long long stateHandle;                                                          //@synthesize stateHandle=_stateHandle - In the implementation block
@property (nonatomic,readonly) AVPlayerViewController * playerViewController; 
@property (nonatomic,readonly) NSDictionary * _stateDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;                                             //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,retain) id<MPAVQueueController> queueController;                                                 //@synthesize queueController=_queueController - In the implementation block
@property (nonatomic,readonly) MPAVItem * currentItem;                                                                //@synthesize currentItem=_currentItem - In the implementation block
@property (nonatomic,readonly) MPQueuePlayer * queuePlayer;                                                           //@synthesize queuePlayer=_queuePlayer - In the implementation block
@property (assign,nonatomic) double currentTime;                                                                      //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,readonly) long long state;                                                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long stateBeforeInterruption;                                                     //@synthesize stateBeforeInterruption=_stateBeforeInterruption - In the implementation block
@property (nonatomic,readonly) MPVideoView * videoView;                                                               //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,readonly) AVPictureInPictureController * pictureInPictureController;                             //@synthesize pictureInPictureController=_pictureInPictureController - In the implementation block
@property (assign,nonatomic) BOOL wantsPictureInPicture;                                                              //@synthesize wantsPictureInPicture=_wantsPictureInPicture - In the implementation block
@property (assign,nonatomic) BOOL automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds;              //@synthesize automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds=_automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds - In the implementation block
@property (assign,nonatomic) BOOL hasPlayedSuccessfully;                                                              //@synthesize hasPlayedSuccessfully=_hasPlayedSuccessfully - In the implementation block
@property (assign,nonatomic) BOOL autoPlayWhenLikelyToKeepUp;                                                         //@synthesize autoPlayWhenLikelyToKeepUp=_autoPlayWhenLikelyToKeepUp - In the implementation block
@property (assign,nonatomic) long long actionAtQueueEnd;                                                              //@synthesize actionAtQueueEnd=_actionAtQueueEnd - In the implementation block
+(id)describePlayer:(id)arg1 ;
-(long long)actionAtQueueEnd;
-(void)setStateHandle:(unsigned long long)arg1 ;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)pause;
-(void)setCurrentTime:(double)arg1 ;
-(BOOL)hasPlayedSuccessfully;
-(void)queueController:(id)arg1 didChangeActionAtQueueEnd:(long long)arg2 ;
-(AVPlayerViewController *)playerViewController;
-(void)reloadWithPlaybackContext:(id)arg1 identifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateAudioSession;
-(double)currentTime;
-(void)queueController:(id)arg1 didIncrementVersionForSegment:(id)arg2 ;
-(MPAVItem *)currentItem;
-(void)queueController:(id)arg1 didChangeShuffleType:(long long)arg2 ;
-(MPCMediaFoundationTranslator *)translator;
-(void)setTranslator:(MPCMediaFoundationTranslator *)arg1 ;
-(void)loadSessionWithQueueController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setActionAtQueueEnd:(long long)arg1 ;
-(id<MPAVQueueController>)queueController;
-(void)endPlayback;
-(void)queueControllerDidChangeContents:(id)arg1 ;
-(void)queueController:(id)arg1 failedToLoadItem:(id)arg2 ;
-(void)queueController:(id)arg1 didChangeContentsWithReplacementPlaybackContext:(id)arg2 ;
-(void)pauseWithFadeout:(float)arg1 ;
-(BOOL)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(BOOL)arg3 force:(BOOL)arg4 error:(id*)arg5 ;
-(void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1 ;
-(BOOL)autoPlayWhenLikelyToKeepUp;
-(MPQueuePlayer *)queuePlayer;
-(void)setWantsPictureInPicture:(BOOL)arg1 ;
-(void)beginUsingVideoLayer;
-(void)endUsingVideoLayer;
-(long long)state;
-(long long)stateBeforeInterruption;
-(BOOL)automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds;
-(void)setAutomaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds:(BOOL)arg1 ;
-(BOOL)wantsPictureInPicture;
-(AVPictureInPictureController *)pictureInPictureController;
-(MPVideoView *)videoView;
-(void)setHasPlayedSuccessfully:(BOOL)arg1 ;
-(unsigned long long)stateHandle;
-(MPCPlaybackEngine *)playbackEngine;
-(void)queueController:(id)arg1 didChangeRepeatType:(long long)arg2 ;
-(BOOL)becomeActiveWithError:(id*)arg1 ;
-(void)dealloc;
-(void)playWithOptions:(unsigned long long)arg1 ;
-(NSDictionary *)_stateDictionary;
-(void)_setupPlaybackStackWithPlaybackEngine:(id)arg1 queueController:(id)arg2 ;
-(MPCErrorControllerImplementation *)errorController;
-(id<MFPlaybackStackController><MFQueueManagement>)playbackStackController;
-(void)_resetPlaybackStack;
-(void)skipWithDirection:(long long)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateAudioSessionForItem:(id)arg1 ;
-(id)_MPAVItemForMFPlayerItem:(id)arg1 ;
-(void)endPlaybackWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pauseWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)playWithRate:(float)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(MPCItemBookmarker *)bookmarker;
-(void)beginScanningWithDirection:(long long)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)endScanningWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRate:(float)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPlaybackStackController:(id<MFPlaybackStackController><MFQueueManagement>)arg1 ;
-(void)_logTimeJumpForItem:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 userInitiated:(BOOL)arg4 timeStamp:(id)arg5 ;
-(void)currentItemWillChangeFromItem:(id)arg1 toItem:(id)arg2 timeStamp:(id)arg3 ;
-(void)itemIsReadyToPlay:(id)arg1 timeStamp:(id)arg2 ;
-(void)itemDidFailToLoad:(id)arg1 error:(id)arg2 timeStamp:(id)arg3 ;
-(void)itemDidFailToPlayToEnd:(id)arg1 error:(id)arg2 timeStamp:(id)arg3 ;
-(void)itemDidBecomeCurrent:(id)arg1 timeStamp:(id)arg2 ;
-(void)itemDidResignCurrent:(id)arg1 timeStamp:(id)arg2 ;
-(void)playbackDidStartForItem:(id)arg1 rate:(float)arg2 timeStamp:(id)arg3 ;
-(void)playbackDidStopForItem:(id)arg1 timeStamp:(id)arg2 ;
-(void)playbackWaitingToPlayForItem:(id)arg1 reason:(id)arg2 timeStamp:(id)arg3 ;
-(void)itemDidPlayToEnd:(id)arg1 timeStamp:(id)arg2 ;
-(void)playbackTimeDidChangeTo:(double)arg1 forItem:(id)arg2 reason:(long long)arg3 timeStamp:(id)arg4 ;
-(void)playbackRateDidChangeToRate:(float)arg1 forItem:(id)arg2 timeStamp:(id)arg3 ;
-(void)playbackIsLikelyToKeepUp:(BOOL)arg1 forItem:(id)arg2 timeStamp:(id)arg3 ;
-(void)playbackBufferStateDidChangeToState:(long long)arg1 forItem:(id)arg2 timeStamp:(id)arg3 ;
-(void)didReachEndOfQueueWithReason:(id)arg1 ;
-(void)interruptionDidBeginWithInterruptor:(id)arg1 timeStamp:(id)arg2 ;
-(void)interruptionDidFinishForInterruptor:(id)arg1 shouldResume:(BOOL)arg2 timeStamp:(id)arg3 ;
-(void)routeDidChange:(BOOL)arg1 metadata:(id)arg2 timeStamp:(id)arg3 ;
-(void)stateDidChangeFromState:(long long)arg1 toState:(long long)arg2 timeStamp:(id)arg3 ;
-(void)screenRecordingDidChange:(BOOL)arg1 timeStamp:(id)arg2 ;
-(void)userActionDidBegin:(id)arg1 ;
-(void)userActionDidEnd:(id)arg1 error:(id)arg2 ;
-(void)mediaServicesInterruptionDidBeginWithTimeStamp:(id)arg1 ;
-(void)mediaServicesInterruptionDidEndWithTimeStamp:(id)arg1 ;
-(void)playbackIsBlockedOnNonPlayableItem:(id)arg1 ;
-(void)assetLoadingDidStartForItem:(id)arg1 ;
-(void)assetLoadingDidCompleteForItem:(id)arg1 error:(id)arg2 ;
-(void)setQueueController:(id<MPAVQueueController>)arg1 ;
-(void)pauseWithFadeout:(double)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)togglePlaybackWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)skipWithDirectionShouldJumpToItemStart:(long long)arg1 ;
-(void)jumpToTime:(double)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)playbackDidReachQueueEndWithTimeStamp:(id)arg1 ;
-(void)firstVideoFrameWasRenderedForItem:(id)arg1 timeStamp:(id)arg2 ;
-(void)setBookmarker:(MPCItemBookmarker *)arg1 ;
-(void)setErrorController:(MPCErrorControllerImplementation *)arg1 ;
-(MPCExternalPlaybackControllerImplementation *)externalPlaybackController;
-(void)setExternalPlaybackController:(MPCExternalPlaybackControllerImplementation *)arg1 ;
-(id<MFAssetLoading>)assetLoader;
-(void)setAssetLoader:(id<MFAssetLoading>)arg1 ;
-(MPCLeaseController *)leaseController;
-(void)setLeaseController:(MPCLeaseController *)arg1 ;
@end

