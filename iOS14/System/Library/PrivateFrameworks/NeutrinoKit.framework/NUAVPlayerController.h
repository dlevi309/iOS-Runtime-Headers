/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _appliesPerFrameHDRDisplayMetadata;
	BOOL _loopsVideo;
	BOOL _currentlySeeking;
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
@property (nonatomic,readonly) BOOL currentlySeeking;                                       //@synthesize currentlySeeking=_currentlySeeking - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                     //@synthesize muted=_muted - In the implementation block
@property (nonatomic,readonly) SCD_Struct_NU0 currentTime; 
-(AVPlayer *)player;
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(id<NUAVPlayerControllerDelegate>)delegate;
-(void)pause;
-(void)playerItemDidReachEnd:(id)arg1 ;
-(void)play;
-(AVAudioMix *)audioMix;
-(void)setDelegate:(id<NUAVPlayerControllerDelegate>)arg1 ;
-(SCD_Struct_NU0)currentTime;
-(void)step:(long long)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(AVVideoComposition *)videoComposition;
-(BOOL)isMuted;
-(AVAsset *)videoAsset;
-(void)dealloc;
-(void)_removeTimeObserver;
-(void)seekForward;
-(void)_setRate:(float)arg1 ;
-(BOOL)prepareWithAVAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 loopsVideo:(BOOL)arg4 ;
-(id)_playerItemsWithVideoAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 loopsVideo:(BOOL)arg4 ;
-(id)_playerItemWithVideoAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 ;
-(id)_loopingPlayerItemWithVideoAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 ;
-(void)updateVideoComposition:(id)arg1 ;
-(void)updateAudioMix:(id)arg1 ;
-(void)updateAppliesPerFrameHDRDisplayMetadata:(BOOL)arg1 ;
-(void)setLoopsVideo:(BOOL)arg1 ;
-(void)seekBack;
-(void)seek:(SCD_Struct_NU0)arg1 toleranceBefore:(SCD_Struct_NU0)arg2 toleranceAfter:(SCD_Struct_NU0)arg3 ;
-(void)seek:(SCD_Struct_NU0)arg1 toleranceBefore:(SCD_Struct_NU0)arg2 toleranceAfter:(SCD_Struct_NU0)arg3 forceSeek:(BOOL)arg4 ;
-(void)addPlaybackRateObserver:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_notifyPlaybackRateChange:(float)arg1 ;
-(void)addPlaybackTimeObserver:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_notifyPlaybackTimeChange:(SCD_Struct_NU0)arg1 ;
-(void)addPlayerStatusObserver:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_notifyPlayerStatusChange:(long long)arg1 ;
-(void)addExternalPlaybackObserver:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_notifyExternalPlaybackChange:(BOOL)arg1 ;
-(void)_addTimeObserver;
-(SCD_Struct_NU0)_effectiveTimeForTime:(SCD_Struct_NU0)arg1 ;
-(void)_removePlayerKVO;
-(void)_addPlayerKVO;
-(void)_removePlayerItemKVO:(id)arg1 ;
-(void)_removePlayerItemKVO:(id)arg1 removeFromArray:(BOOL)arg2 ;
-(void)_addPlayerItemKVO:(id)arg1 ;
-(BOOL)loopsVideo;
-(BOOL)currentlySeeking;
@end

