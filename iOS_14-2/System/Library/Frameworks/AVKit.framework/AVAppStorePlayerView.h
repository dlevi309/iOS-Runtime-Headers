/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol AVPlayerViewControllerDelegate;
@class NSString, UIView, AVPlayer, AVPlayerViewController, AVButton, AVLayoutView, AVStyleSheet, AVAppStorePlayerLayerView, NSMutableDictionary, AVObservationController;

@interface AVAppStorePlayerView : UIView {

	BOOL _showsPlaybackControls;
	BOOL _updatesNowPlayingInfoCenter;
	BOOL _showsMinimalPlaybackControlsWhenEmbeddedInline;
	BOOL _canPausePlaybackWhenExitingFullScreen;
	BOOL _allowsEnteringFullScreen;
	NSString* _videoGravity;
	UIView* _contentOverlayView;
	AVPlayer* _player;
	/*^block*/id _playButtonHandlerForLazyPlayerLoading;
	long long _preferredUnobscuredArea;
	id<AVPlayerViewControllerDelegate> _playerViewControllerDelegate;
	AVPlayerViewController* _playerViewController;
	AVButton* _prominentPlayButton;
	AVLayoutView* _prominentPlayButtonLayoutView;
	AVStyleSheet* _styleSheet;
	AVAppStorePlayerLayerView* _playerLayerView;
	NSMutableDictionary* _videoGravityForLayoutClassDictionary;
	AVObservationController* _observationController;

}

@property (nonatomic,retain) AVButton * prominentPlayButton;                                                      //@synthesize prominentPlayButton=_prominentPlayButton - In the implementation block
@property (nonatomic,retain) AVLayoutView * prominentPlayButtonLayoutView;                                        //@synthesize prominentPlayButtonLayoutView=_prominentPlayButtonLayoutView - In the implementation block
@property (nonatomic,retain) AVStyleSheet * styleSheet;                                                           //@synthesize styleSheet=_styleSheet - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * playerViewController;                                       //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,retain) AVAppStorePlayerLayerView * playerLayerView;                                         //@synthesize playerLayerView=_playerLayerView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * videoGravityForLayoutClassDictionary;                          //@synthesize videoGravityForLayoutClassDictionary=_videoGravityForLayoutClassDictionary - In the implementation block
@property (nonatomic,readonly) AVObservationController * observationController;                                   //@synthesize observationController=_observationController - In the implementation block
@property (assign,nonatomic) BOOL showsPlaybackControls;                                                          //@synthesize showsPlaybackControls=_showsPlaybackControls - In the implementation block
@property (assign,nonatomic) BOOL updatesNowPlayingInfoCenter;                                                    //@synthesize updatesNowPlayingInfoCenter=_updatesNowPlayingInfoCenter - In the implementation block
@property (assign,nonatomic) BOOL showsMinimalPlaybackControlsWhenEmbeddedInline;                                 //@synthesize showsMinimalPlaybackControlsWhenEmbeddedInline=_showsMinimalPlaybackControlsWhenEmbeddedInline - In the implementation block
@property (assign,nonatomic) BOOL canPausePlaybackWhenExitingFullScreen;                                          //@synthesize canPausePlaybackWhenExitingFullScreen=_canPausePlaybackWhenExitingFullScreen - In the implementation block
@property (assign,nonatomic) BOOL allowsEnteringFullScreen;                                                       //@synthesize allowsEnteringFullScreen=_allowsEnteringFullScreen - In the implementation block
@property (nonatomic,copy) NSString * videoGravity;                                                               //@synthesize videoGravity=_videoGravity - In the implementation block
@property (nonatomic,readonly) UIView * contentOverlayView;                                                       //@synthesize contentOverlayView=_contentOverlayView - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                                   //@synthesize player=_player - In the implementation block
@property (nonatomic,copy) id playButtonHandlerForLazyPlayerLoading;                                              //@synthesize playButtonHandlerForLazyPlayerLoading=_playButtonHandlerForLazyPlayerLoading - In the implementation block
@property (assign,nonatomic) long long preferredUnobscuredArea;                                                   //@synthesize preferredUnobscuredArea=_preferredUnobscuredArea - In the implementation block
@property (assign,nonatomic,__weak) id<AVPlayerViewControllerDelegate> playerViewControllerDelegate;              //@synthesize playerViewControllerDelegate=_playerViewControllerDelegate - In the implementation block
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)setVideoGravity:(NSString *)arg1 ;
-(NSString *)videoGravity;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(AVPlayerViewController *)playerViewController;
-(void)setAllowsEnteringFullScreen:(BOOL)arg1 ;
-(void)setShowsPlaybackControls:(BOOL)arg1 ;
-(void)setUpdatesNowPlayingInfoCenter:(BOOL)arg1 ;
-(void)setCanPausePlaybackWhenExitingFullScreen:(BOOL)arg1 ;
-(BOOL)showsPlaybackControls;
-(void)layoutSubviews;
-(UIView *)contentOverlayView;
-(void)setShowsMinimalPlaybackControlsWhenEmbeddedInline:(BOOL)arg1 ;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(AVAppStorePlayerLayerView *)playerLayerView;
-(void)setStyleSheet:(AVStyleSheet *)arg1 ;
-(void)setPreferredUnobscuredArea:(long long)arg1 ;
-(void)setPlayerViewControllerDelegate:(id<AVPlayerViewControllerDelegate>)arg1 ;
-(AVStyleSheet *)styleSheet;
-(void)setVideoGravity:(id)arg1 forLayoutClass:(unsigned long long)arg2 ;
-(void)setPlayButtonHandlerForLazyPlayerLoading:(id)arg1 ;
-(void)_makeActualVideoViewWithPlayerIfNeeded:(id)arg1 ;
-(void)_makePlayerLayerViewWithPlayer:(id)arg1 ;
-(void)_makePlayerViewControllerWithPlayer:(id)arg1 ;
-(void)_prominentPlayButtonTouchUpInside:(id)arg1 ;
-(AVButton *)prominentPlayButton;
-(BOOL)updatesNowPlayingInfoCenter;
-(BOOL)showsMinimalPlaybackControlsWhenEmbeddedInline;
-(BOOL)canPausePlaybackWhenExitingFullScreen;
-(BOOL)allowsEnteringFullScreen;
-(id)playButtonHandlerForLazyPlayerLoading;
-(long long)preferredUnobscuredArea;
-(id<AVPlayerViewControllerDelegate>)playerViewControllerDelegate;
-(void)setProminentPlayButton:(AVButton *)arg1 ;
-(AVLayoutView *)prominentPlayButtonLayoutView;
-(void)setProminentPlayButtonLayoutView:(AVLayoutView *)arg1 ;
-(void)setPlayerLayerView:(AVAppStorePlayerLayerView *)arg1 ;
-(NSMutableDictionary *)videoGravityForLayoutClassDictionary;
-(void)setVideoGravityForLayoutClassDictionary:(NSMutableDictionary *)arg1 ;
-(AVObservationController *)observationController;
-(void)dealloc;
@end

