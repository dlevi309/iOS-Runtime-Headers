/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@protocol OS_dispatch_queue, OKVideoControllerDelegate, OS_dispatch_semaphore;
#import <OpusKit/OpusKit-Structs.h>
@class NSObject, AVPlayerLayer, AVPlayer, AVPlayerItem;

@interface OKVideoPlayerController : NSObject {

	NSObject*<OS_dispatch_queue> _videoPlayerControllerSerialQueue;
	id _timeObserver;
	struct {
		unsigned delegateDidStartPlayingItem : 1;
		unsigned delegateDidFinishPlayingItem : 1;
		unsigned delegateDidFailToPlayItem : 1;
		unsigned delegateIsReadyToPlay : 1;
		unsigned delegateStateDidChange : 1;
		unsigned delegateBufferingStateDidChange : 1;
	}  _delegateFlags;
	BOOL _isReady;
	AVPlayerLayer* _playerLayer;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;
	unsigned long long _state;
	unsigned long long _bufferingState;
	id<OKVideoControllerDelegate> _delegate;
	NSObject*<OS_dispatch_semaphore> _seekToTimeSemaphore;
	unsigned long long _readyState;

}

@property (nonatomic,retain) AVPlayer * player;                                                 //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) AVPlayerItem * playerItem;                                         //@synthesize playerItem=_playerItem - In the implementation block
@property (assign,nonatomic) BOOL isReady;                                                      //@synthesize isReady=_isReady - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> seekToTimeSemaphore;              //@synthesize seekToTimeSemaphore=_seekToTimeSemaphore - In the implementation block
@property (assign,nonatomic) unsigned long long readyState;                                     //@synthesize readyState=_readyState - In the implementation block
@property (nonatomic,retain,readonly) AVPlayerLayer * playerLayer;                              //@synthesize playerLayer=_playerLayer - In the implementation block
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) float volume; 
@property (nonatomic,readonly) unsigned long long state;                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned long long bufferingState;                               //@synthesize bufferingState=_bufferingState - In the implementation block
@property (assign,nonatomic) id<OKVideoControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_setState:(unsigned long long)arg1 ;
-(void)setVolume:(float)arg1 ;
-(id<OKVideoControllerDelegate>)delegate;
-(void)pause;
-(void)setCurrentTime:(double)arg1 ;
-(void)play;
-(void)setIsReady:(BOOL)arg1 ;
-(void)stop;
-(void)setDelegate:(id<OKVideoControllerDelegate>)arg1 ;
-(double)currentTime;
-(id)description;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(BOOL)isReady;
-(unsigned long long)readyState;
-(unsigned long long)state;
-(unsigned long long)bufferingState;
-(id)_playerKeysToObserve;
-(id)initWithPlayerLayer:(id)arg1 ;
-(float)volume;
-(double)duration;
-(AVPlayerItem *)playerItem;
-(void)dealloc;
-(AVPlayerLayer *)playerLayer;
-(void)setReadyState:(unsigned long long)arg1 ;
-(void)_setupPlayer;
-(void)_playerItemDidReachEndNotification:(id)arg1 ;
-(void)_playerItemFailedToPlayToEndNotification:(id)arg1 ;
-(void)playPlayerItem:(id)arg1 ;
-(void)_resetPlayer;
-(void)_resetPlayerItem;
-(void)_cancelSeeking;
-(id)_playerItemKeysToObserve;
-(void)_updateBufferingStateWithState:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)seekToTimeSemaphore;
-(void)setSeekToTimeSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

