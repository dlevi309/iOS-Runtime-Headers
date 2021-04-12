/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(void)setPlaying:(BOOL)arg1 ;
-(id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5 ;
-(BOOL)shouldAutoPlay;
-(void)destroyPlayer;
-(void)createPlayerItemAdjustedForLoopingWithAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetToPlaceholderView;
-(void)didFailToPlay;
-(void)createPlayerIfNeeded;
-(void)layoutComponentView;
-(void)fullScreenVideoDidPresent;
-(void)fullScreenVideoWillDismiss;
-(BOOL)releaseDecodingResourcesIfInactive;
-(BOOL)usesSharedAudioSession;
-(BOOL)shouldShowMuteButton;
-(id)createFullScreenVideoViewController;
-(BOOL)usesCustomFullScreenImplementation;
-(id)createVideoPlayerView;
-(void)prepareForDisplayWithCompletionHandler:(/*^block*/id)arg1 ;
@end

