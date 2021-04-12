/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
*/


@protocol NUAVPlayerControllerDelegate;
#import <NeutrinoKit/NeutrinoKit-Structs.h>
@class NUObservatory, NSMutableArray, AVPlayer, AVAsset, AVVideoComposition, AVAudioMix;

@interface NUAVPlayerController : NSObject {

	id _playerTimeObserver;
	NUObservatory* _observatory;
	struct {
		BOOL registeredPlayer;
	}  _playerControllerKVOFlags;
	NSMutableArray* _playerItemObservations;
	BOOL _currentlySeeking;
	BOOL _loopsVideo;
	BOOL _muted;
	AVPlayer* _player;
	double _updateInterval;
	AVAsset* _videoAsset;
	AVVideoComposition* _videoComposition;
	AVAudioMix* _audioMix;
	id<NUAVPlayerControllerDelegate> _delegate;

}

@property (nonatomic,retain) AVPlayer * player;                                             //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) double updateInterval;                                         //@synthesize updateInterval=_updateInterval - In the implementation block
@property (nonatomic,readonly) AVAsset * videoAsset;                                        //@synthesize videoAsset=_videoAsset - In the implementation block
@property (nonatomic,readonly) AVVideoComposition * videoComposition;                       //@synthesize videoComposition=_videoComposition - In the implementation block
@property (nonatomic,readonly) AVAudioMix * audioMix;                                       //@synthesize audioMix=_audioMix - In the implementation block
@property (assign,nonatomic,__weak) id<NUAVPlayerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL loopsVideo;                                               //@synthesize loopsVideo=_loopsVideo - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                     //@synthesize muted=_muted - In the implementation block
@property (nonatomic,readonly) SCD_Struct_NU0 currentTime; 
-(id)init;
-(void)dealloc;
-(id<NUAVPlayerControllerDelegate>)delegate;
-(void)setDelegate:(id<NUAVPlayerControllerDelegate>)arg1 ;
-(void)pause;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 ;
-(void)play;
-(SCD_Struct_NU0)currentTime;
-(void)setUpdateInterval:(double)arg1 ;
-(double)updateInterval;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVVideoComposition *)videoComposition;
-(AVAudioMix *)audioMix;
-(AVAsset *)videoAsset;
-(void)playerItemDidReachEnd:(id)arg1 ;
-(void)step:(long long)arg1 ;
-(void)_removeTimeObserver;
-(void)_setRate:(float)arg1 ;
-(BOOL)prepareWithAVAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 loopsVideo:(BOOL)arg4 ;
-(id)_playerItemsWithVideoAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 loopsVideo:(BOOL)arg4 ;
-(id)_playerItemWithVideoAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 ;
-(id)_loopingPlayerItemWithVideoAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 ;
-(void)updateVideoComposition:(id)arg1 ;
-(void)updateAudioMix:(id)arg1 ;
-(void)setLoopsVideo:(BOOL)arg1 ;
-(void)seekForward;
-(void)seekBack;
-(void)seek:(SCD_Struct_NU0)arg1 exact:(BOOL)arg2 ;
-(void)addPlaybackRateObserver:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_notifyPlaybackRateChange:(float)arg1 ;
-(void)addPlaybackTimeObserver:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_notifyPlaybackTimeChange:(SCD_Struct_NU0)arg1 ;
-(void)addPlayerStatusObserver:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_notifyPlayerStatusChange:(long long)arg1 ;
-(void)_addTimeObserver;
-(SCD_Struct_NU0)_effectiveTimeForTime:(SCD_Struct_NU0)arg1 ;
-(void)_removePlayerKVO;
-(void)_addPlayerKVO;
-(void)_removePlayerItemKVO:(id)arg1 ;
-(void)_removePlayerItemKVO:(id)arg1 removeFromArray:(BOOL)arg2 ;
-(void)_addPlayerItemKVO:(id)arg1 ;
-(BOOL)loopsVideo;
@end

