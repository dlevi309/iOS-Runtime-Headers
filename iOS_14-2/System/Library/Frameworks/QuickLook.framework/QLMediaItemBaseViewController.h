/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(AVPlayer *)player;
-(CGSize)imageSize;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(BOOL)isFullScreen;
-(void)setElapsedTime:(double)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)remainingTime;
-(void)setRemainingTime:(double)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)pause;
-(BOOL)_assetIsDecodable:(id)arg1 ;
-(id)setupPlayerViewWithPlayer:(id)arg1 ;
-(void)playerItemDidReachEnd:(id)arg1 ;
-(void)observePlayingTime:(SCD_Struct_QL15)arg1 ;
-(void)_updatePlayingStatus;
-(void)_updateExternalPlayback;
-(void)setMediaVolume:(double)arg1 ;
-(void)didReachEndOfMedia;
-(BOOL)shouldDisplayPlayButtonInNavigationBar;
-(void)setupPlayerWithMediaAsset:(id)arg1 ;
-(BOOL)play;
-(double)mediaDuration;
-(void)setError:(NSError *)arg1 ;
-(void)stop;
-(UIView *)playerView;
-(NSError *)error;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(double)elapsedTime;
-(void)setMediaDuration:(double)arg1 ;
-(BOOL)isVisible;
-(BOOL)endOfMediaReached;
-(void)setCurrentPlaybackHeadPosition:(double)arg1 ;
-(void)resetToBeginning;
-(double)currentPlaybackHeadPosition;
-(BOOL)visualTracksEnabled;
-(double)mediaVolume;
-(AVAsset *)mediaAsset;
-(BOOL)togglePlayback;
-(void)previewIsAppearingWithProgress:(double)arg1 ;
-(void)hostApplicationDidEnterBackground:(id)arg1 ;
-(void)hostApplicationDidBecomeActive;
-(BOOL)playable;
-(void)didChangePlayingStatus;
-(long long)playingStatus;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)toolbarButtonsForTraitCollection:(id)arg1 ;
-(void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(AVPlayerLayer *)playerLayer;
@end

