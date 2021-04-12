/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CLKVideoPlayerViewDelegate;
@class _CLKPlayerView, AVQueuePlayer, AVPlayerItem, NSURL, AVAsset, UIView, NSValue;

@interface CLKVideoPlayerView : UIView {

	_CLKPlayerView* _playerView;
	AVQueuePlayer* _player;
	AVPlayerItem* _playerItem;
	AVPlayerItem* _observedItem;
	AVPlayerItem* _queuedItem;
	NSURL* _assetURL;
	AVAsset* _asset;
	id _periodicTimeObserver;
	SCD_Struct_CL6 _willBeginPlayingTime;
	UIView* _pausedView;
	unsigned long long _servicingRequest;
	NSValue* _seekRequested;
	SCD_Struct_CL6 _seekWithTolerance;
	unsigned _playRequested : 1;
	unsigned _prerollRequested : 1;
	unsigned _isExpectingPreroll : 1;
	BOOL _pausedViewEnabled;
	BOOL _playing;
	id<CLKVideoPlayerViewDelegate> _delegate;
	long long _gravityResize;

}

@property (assign,nonatomic,__weak) id<CLKVideoPlayerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) AVQueuePlayer * player; 
@property (assign,nonatomic) long long gravityResize;                                     //@synthesize gravityResize=_gravityResize - In the implementation block
@property (assign,nonatomic) BOOL pausedViewEnabled;                                      //@synthesize pausedViewEnabled=_pausedViewEnabled - In the implementation block
@property (nonatomic,readonly) BOOL playing;                                              //@synthesize playing=_playing - In the implementation block
+(void)_prewarm;
-(void)dealloc;
-(id<CLKVideoPlayerViewDelegate>)delegate;
-(void)setDelegate:(id<CLKVideoPlayerViewDelegate>)arg1 ;
-(void)pause;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)playing;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)play;
-(void)layoutSubviews;
-(void)_pause;
-(AVQueuePlayer *)player;
-(void)seekToTime:(SCD_Struct_CL6)arg1 ;
-(void)_play;
-(void)_seekToTime:(SCD_Struct_CL6)arg1 ;
-(void)_preroll;
-(void)setGravityResize:(long long)arg1 ;
-(void)_periodicTimeObserverChanged:(SCD_Struct_CL6)arg1 ;
-(void)_handleDidPlayToEndTime:(id)arg1 ;
-(void)_stopObservingPlayerItem;
-(void)_performNextRequest;
-(void)_observePlayerItem:(id)arg1 ;
-(void)_hidePausedView;
-(BOOL)_readyToPerformRequest;
-(void)resetRequestState;
-(id)_createPlayerItemForVideoURL:(id)arg1 ;
-(void)_showPausedView;
-(void)seekToTime:(SCD_Struct_CL6)arg1 tolerance:(SCD_Struct_CL6)arg2 ;
-(void)loadVideo:(id)arg1 ;
-(void)prepareNextQueuedVideo;
-(BOOL)isPlaybackReady;
-(void)setPausedViewEnabled:(BOOL)arg1 ;
-(void)expectPreroll;
-(void)preroll;
-(void)queueVideo:(id)arg1 ;
-(long long)gravityResize;
-(BOOL)pausedViewEnabled;
@end

