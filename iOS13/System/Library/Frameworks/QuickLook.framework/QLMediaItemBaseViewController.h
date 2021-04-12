/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLScrollableContentItemViewController.h>
#import <libobjc.A.dylib/QLToolbarButtonAction.h>

@class NSObject, AVPlayer, UIView, AVPlayerLayer, NSError, AVAsset, NSString;

@interface QLMediaItemBaseViewController : QLScrollableContentItemViewController <QLToolbarButtonAction> {

	NSObject* _playbackTimeObserver;
	BOOL _playing;
	BOOL _mediaWasPausedOnResignActive;
	/*^block*/id _previewItemLoadingBlock;
	CGSize _imageSize;
	BOOL _playable;
	BOOL _visualTracksEnabled;
	BOOL _isFullScreen;
	BOOL _isVisible;
	AVPlayer* _player;
	UIView* _playerView;
	AVPlayerLayer* _playerLayer;
	NSError* _error;
	double _elapsedTime;
	double _remainingTime;
	long long _playingStatus;
	double _mediaVolume;
	AVAsset* _mediaAsset;
	double _mediaDuration;

}

@property (nonatomic,retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) double mediaDuration;                            //@synthesize mediaDuration=_mediaDuration - In the implementation block
@property (assign,nonatomic) double elapsedTime;                              //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) double remainingTime;                            //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                               //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) UIView * playerView;                           //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,readonly) AVPlayerLayer * playerLayer;                   //@synthesize playerLayer=_playerLayer - In the implementation block
@property (assign,nonatomic) double currentPlaybackHeadPosition; 
@property (nonatomic,readonly) long long playingStatus;                       //@synthesize playingStatus=_playingStatus - In the implementation block
@property (nonatomic,readonly) BOOL playable;                                 //@synthesize playable=_playable - In the implementation block
@property (nonatomic,readonly) BOOL endOfMediaReached; 
@property (nonatomic,readonly) BOOL visualTracksEnabled;                      //@synthesize visualTracksEnabled=_visualTracksEnabled - In the implementation block
@property (nonatomic,readonly) double mediaVolume;                            //@synthesize mediaVolume=_mediaVolume - In the implementation block
@property (nonatomic,readonly) AVAsset * mediaAsset;                          //@synthesize mediaAsset=_mediaAsset - In the implementation block
@property (nonatomic,readonly) BOOL isFullScreen;                             //@synthesize isFullScreen=_isFullScreen - In the implementation block
@property (nonatomic,readonly) BOOL isVisible;                                //@synthesize isVisible=_isVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSError *)error;
-(BOOL)pause;
-(void)stop;
-(void)setError:(NSError *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isVisible;
-(BOOL)play;
-(CGSize)imageSize;
-(double)elapsedTime;
-(double)remainingTime;
-(void)setRemainingTime:(double)arg1 ;
-(BOOL)isFullScreen;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayerLayer *)playerLayer;
-(void)setMediaVolume:(double)arg1 ;
-(double)mediaVolume;
-(void)setElapsedTime:(double)arg1 ;
-(void)togglePlayback;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)hostApplicationDidEnterBackground:(id)arg1 ;
-(void)hostApplicationDidBecomeActive;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)previewIsAppearingWithProgress:(double)arg1 ;
-(id)toolbarButtonsForTraitCollection:(id)arg1 ;
-(void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)playable;
-(void)setupPlayerWithMediaAsset:(id)arg1 ;
-(void)didChangePlayingStatus;
-(double)mediaDuration;
-(long long)playingStatus;
-(BOOL)_assetIsDecodable:(id)arg1 ;
-(id)setupPlayerViewWithPlayer:(id)arg1 ;
-(void)playerItemDidReachEnd:(id)arg1 ;
-(void)observePlayingTime:(SCD_Struct_QL15)arg1 ;
-(void)_updatePlayingStatus;
-(void)_updateExternalPlayback;
-(void)didReachEndOfMedia;
-(BOOL)shouldDisplayPlayButtonInNavigationBar;
-(BOOL)endOfMediaReached;
-(void)setCurrentPlaybackHeadPosition:(double)arg1 ;
-(void)resetToBeginning;
-(double)currentPlaybackHeadPosition;
-(UIView *)playerView;
-(BOOL)visualTracksEnabled;
-(AVAsset *)mediaAsset;
-(void)setMediaDuration:(double)arg1 ;
@end

