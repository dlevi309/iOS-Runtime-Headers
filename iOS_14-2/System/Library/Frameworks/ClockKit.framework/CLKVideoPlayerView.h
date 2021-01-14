/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
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
-(AVQueuePlayer *)player;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CLKVideoPlayerViewDelegate>)delegate;
-(void)pause;
-(void)_pause;
-(void)_play;
-(void)play;
-(void)setDelegate:(id<CLKVideoPlayerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)_seekToTime:(SCD_Struct_CL6)arg1 ;
-(void)preroll;
-(BOOL)playing;
-(void)seekToTime:(SCD_Struct_CL6)arg1 ;
-(void)dealloc;
-(void)loadVideo:(id)arg1 ;
-(void)resetRequestState;
-(void)setPausedViewEnabled:(BOOL)arg1 ;
-(BOOL)isPlaybackReady;
-(void)queueVideo:(id)arg1 ;
-(void)expectPreroll;
-(void)setGravityResize:(long long)arg1 ;
-(void)_periodicTimeObserverChanged:(SCD_Struct_CL6)arg1 ;
-(void)_handleDidPlayToEndTime:(id)arg1 ;
-(void)_stopObservingPlayerItem;
-(void)_performNextRequest;
-(void)_observePlayerItem:(id)arg1 ;
-(void)_hidePausedView;
-(BOOL)_readyToPerformRequest;
-(void)_preroll;
-(id)_createPlayerItemForVideoURL:(id)arg1 ;
-(void)_showPausedView;
-(void)seekToTime:(SCD_Struct_CL6)arg1 tolerance:(SCD_Struct_CL6)arg2 ;
-(void)prepareNextQueuedVideo;
-(long long)gravityResize;
-(BOOL)pausedViewEnabled;
@end

