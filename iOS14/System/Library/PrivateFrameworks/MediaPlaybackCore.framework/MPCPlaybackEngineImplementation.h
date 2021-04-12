/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class MPCPlaybackEngine, MPAVItem, MPQueuePlayer, MPVideoView, AVPictureInPictureController;


@protocol MPCPlaybackEngineImplementation <NSObject>
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine; 
@property (nonatomic,retain) id<MPAVQueueController> queueController; 
@property (nonatomic,readonly) MPAVItem * currentItem; 
@property (nonatomic,readonly) MPQueuePlayer * queuePlayer; 
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) long long stateBeforeInterruption; 
@property (nonatomic,readonly) MPVideoView * videoView; 
@property (nonatomic,readonly) AVPictureInPictureController * pictureInPictureController; 
@property (assign,nonatomic) BOOL wantsPictureInPicture; 
@property (assign,nonatomic) BOOL automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds; 
@property (assign,nonatomic) BOOL hasPlayedSuccessfully; 
@property (assign,nonatomic) BOOL autoPlayWhenLikelyToKeepUp; 
@property (assign,nonatomic) long long actionAtQueueEnd; 
@optional
-(void)pause;
-(void)setCurrentTime:(double)arg1;
-(void)play;
-(void)endPlayback;
-(void)beginSeek:(int)arg1;
-(void)pauseWithFadeout:(float)arg1;
-(void)togglePlayback;
-(BOOL)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(BOOL)arg3 force:(BOOL)arg4 error:(id*)arg5;
-(BOOL)setRate:(float)arg1 completion:(/*^block*/id)arg2;
-(void)beginUsingVideoLayer;
-(void)endUsingVideoLayer;
-(void)endSeek;
-(void)playWithOptions:(unsigned long long)arg1;
-(void)skipWithDirection:(long long)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)endPlaybackWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)pauseWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)playWithRate:(float)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)beginScanningWithDirection:(long long)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)endScanningWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setRate:(float)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)pauseWithFadeout:(double)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)togglePlaybackWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)skipWithDirectionShouldJumpToItemStart:(long long)arg1;
-(void)jumpToTime:(double)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(long long)actionAtQueueEnd;
-(id)initWithPlaybackEngine:(id)arg1;
-(BOOL)hasPlayedSuccessfully;
-(void)reloadWithPlaybackContext:(id)arg1 identifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)updateAudioSession;
-(double)currentTime;
-(MPAVItem *)currentItem;
-(void)loadSessionWithQueueController:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setActionAtQueueEnd:(long long)arg1;
-(id<MPAVQueueController>)queueController;
-(void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1;
-(BOOL)autoPlayWhenLikelyToKeepUp;
-(MPQueuePlayer *)queuePlayer;
-(void)setWantsPictureInPicture:(BOOL)arg1;
-(long long)state;
-(long long)stateBeforeInterruption;
-(BOOL)automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds;
-(void)setAutomaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds:(BOOL)arg1;
-(BOOL)wantsPictureInPicture;
-(AVPictureInPictureController *)pictureInPictureController;
-(MPVideoView *)videoView;
-(void)setHasPlayedSuccessfully:(BOOL)arg1;
-(MPCPlaybackEngine *)playbackEngine;
-(BOOL)becomeActiveWithError:(id*)arg1;
-(void)setQueueController:(id)arg1;

@end

