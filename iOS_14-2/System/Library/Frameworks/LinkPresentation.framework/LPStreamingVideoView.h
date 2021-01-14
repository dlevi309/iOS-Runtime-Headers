/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPVideoView.h>

@class AVQueuePlayer, AVPlayerLooper, AVPlayerLayer;

@interface LPStreamingVideoView : LPVideoView {

	AVQueuePlayer* _player;
	AVPlayerLooper* _looper;
	AVPlayerLayer* _playerLayer;
	/*^block*/id _readyForDisplayCallback;
	BOOL _hasCreatedVideoPlayerView;
	BOOL _isWaitingToRetryAfterFailingToPlay;
	unsigned _playbackRetryCountWithoutSuccess;
	BOOL _desiredPlayingState;
	float _desiredVolume;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setVolume:(double)arg1 ;
-(id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5 ;
-(void)destroyPlayer;
-(void)createPlayerItemAdjustedForLoopingWithAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetToPlaceholderView;
-(void)didFailToPlay;
-(void)createPlayerIfNeeded;
-(void)layoutComponentView;
-(void)fullScreenVideoDidPresent;
-(void)fullScreenVideoWillDismiss;
-(void)beginLoadingMediaForPreroll;
-(BOOL)releaseDecodingResourcesIfInactive;
-(BOOL)usesSharedAudioSession;
-(BOOL)shouldShowMuteButton;
-(id)createFullScreenVideoViewController;
-(BOOL)usesCustomFullScreenImplementation;
-(id)createVideoPlayerView;
-(void)prepareForDisplayWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(BOOL)shouldAutoPlay;
-(void)setMuted:(BOOL)arg1 ;
-(double)volume;
-(BOOL)isMuted;
-(void)dealloc;
@end

