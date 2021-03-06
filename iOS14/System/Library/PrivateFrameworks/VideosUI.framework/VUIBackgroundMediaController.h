/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class TVPPlayer, AVPlayerViewController, VUIMediaInfo, NSString, TVImageProxy, _TVImageView, UIViewController, NSDate, NSTimer, TVPStateMachine, TVPPlaylist, TVPVideoView;

@interface VUIBackgroundMediaController : UIViewController {

	BOOL _foreground;
	BOOL _playbackEnabled;
	BOOL _stopPlayerWhenViewDisappears;
	BOOL _clearPreviousImageBeforeLoading;
	BOOL _animateImageChange;
	BOOL _popWhenPlayerStops;
	BOOL _mutePlaybackInBackground;
	BOOL _stopWhenAnotherMediaControllerStarts;
	BOOL _playerReadyToBePlayed;
	BOOL _shouldAnimateOverlayView;
	BOOL _automaticPlaybackStart;
	BOOL _automaticPlaybackStop;
	BOOL _shouldPlayAfterAppBecomesActive;
	BOOL _didWeCreatePlayer;
	BOOL _observingPictureInPictureActive;
	BOOL _showsVideoControls;
	TVPPlayer* _player;
	AVPlayerViewController* _avPlayerViewController;
	VUIMediaInfo* _mediaInfo;
	unsigned long long _state;
	NSString* _name;
	TVImageProxy* _currentImageProxy;
	_TVImageView* _proxyImageView;
	_TVImageView* _alphaProxyImageView;
	TVImageProxy* _alphaImageProxy;
	UIViewController* _playbackContainerController;
	NSDate* _playbackLoadingStartDate;
	NSTimer* _playbackLoadingTimer;
	TVPStateMachine* _stateMachine;
	TVPPlaylist* _pendingPlaylist;
	TVImageProxy* _pendingImageProxy;
	unsigned long long _imageAnimationOptions;
	double _imageAnimationDuration;
	double _imageTransitionInterval;
	TVPVideoView* _secondaryVideoView;
	NSTimer* _pauseStateTimeoutTimer;
	unsigned long long _vpafPlaybackStartReason;
	unsigned long long _vpafPlaybackStopReason;
	NSString* _titleForLogging;
	unsigned long long _deactivationReasons;

}

@property (nonatomic,retain) TVImageProxy * currentImageProxy;                                                                         //@synthesize currentImageProxy=_currentImageProxy - In the implementation block
@property (nonatomic,retain) _TVImageView * proxyImageView;                                                                            //@synthesize proxyImageView=_proxyImageView - In the implementation block
@property (nonatomic,retain) _TVImageView * alphaProxyImageView;                                                                       //@synthesize alphaProxyImageView=_alphaProxyImageView - In the implementation block
@property (nonatomic,retain) TVImageProxy * alphaImageProxy;                                                                           //@synthesize alphaImageProxy=_alphaImageProxy - In the implementation block
@property (nonatomic,retain) UIViewController * playbackContainerController;                                                           //@synthesize playbackContainerController=_playbackContainerController - In the implementation block
@property (nonatomic,retain) NSDate * playbackLoadingStartDate;                                                                        //@synthesize playbackLoadingStartDate=_playbackLoadingStartDate - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * playbackLoadingTimer;                                                                    //@synthesize playbackLoadingTimer=_playbackLoadingTimer - In the implementation block
@property (nonatomic,retain) TVPStateMachine * stateMachine;                                                                           //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) TVPPlaylist * pendingPlaylist;                                                                            //@synthesize pendingPlaylist=_pendingPlaylist - In the implementation block
@property (nonatomic,retain) TVImageProxy * pendingImageProxy;                                                                         //@synthesize pendingImageProxy=_pendingImageProxy - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                                                 //@synthesize state=_state - In the implementation block
@property (assign,getter=isPlayerReadyToBePlayed,nonatomic) BOOL playerReadyToBePlayed;                                                //@synthesize playerReadyToBePlayed=_playerReadyToBePlayed - In the implementation block
@property (assign,nonatomic) unsigned long long imageAnimationOptions;                                                                 //@synthesize imageAnimationOptions=_imageAnimationOptions - In the implementation block
@property (assign,nonatomic) double imageAnimationDuration;                                                                            //@synthesize imageAnimationDuration=_imageAnimationDuration - In the implementation block
@property (assign,nonatomic) double imageTransitionInterval;                                                                           //@synthesize imageTransitionInterval=_imageTransitionInterval - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateOverlayView;                                                                            //@synthesize shouldAnimateOverlayView=_shouldAnimateOverlayView - In the implementation block
@property (nonatomic,retain) TVPVideoView * secondaryVideoView;                                                                        //@synthesize secondaryVideoView=_secondaryVideoView - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * pauseStateTimeoutTimer;                                                                  //@synthesize pauseStateTimeoutTimer=_pauseStateTimeoutTimer - In the implementation block
@property (assign,getter=isAutomaticPlaybackStart,nonatomic) BOOL automaticPlaybackStart;                                              //@synthesize automaticPlaybackStart=_automaticPlaybackStart - In the implementation block
@property (assign,nonatomic) unsigned long long vpafPlaybackStartReason;                                                               //@synthesize vpafPlaybackStartReason=_vpafPlaybackStartReason - In the implementation block
@property (assign,getter=isAutomaticPlaybackStop,nonatomic) BOOL automaticPlaybackStop;                                                //@synthesize automaticPlaybackStop=_automaticPlaybackStop - In the implementation block
@property (assign,nonatomic) unsigned long long vpafPlaybackStopReason;                                                                //@synthesize vpafPlaybackStopReason=_vpafPlaybackStopReason - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayAfterAppBecomesActive;                                                                     //@synthesize shouldPlayAfterAppBecomesActive=_shouldPlayAfterAppBecomesActive - In the implementation block
@property (getter=isBackgrounded,nonatomic,readonly) BOOL backgrounded; 
@property (assign,nonatomic) BOOL didWeCreatePlayer;                                                                                   //@synthesize didWeCreatePlayer=_didWeCreatePlayer - In the implementation block
@property (assign,nonatomic) BOOL observingPictureInPictureActive;                                                                     //@synthesize observingPictureInPictureActive=_observingPictureInPictureActive - In the implementation block
@property (nonatomic,copy) NSString * titleForLogging;                                                                                 //@synthesize titleForLogging=_titleForLogging - In the implementation block
@property (assign,nonatomic) unsigned long long deactivationReasons;                                                                   //@synthesize deactivationReasons=_deactivationReasons - In the implementation block
@property (assign,nonatomic) BOOL showsVideoControls;                                                                                  //@synthesize showsVideoControls=_showsVideoControls - In the implementation block
@property (nonatomic,retain) TVPPlayer * player;                                                                                       //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * avPlayerViewController;                                                          //@synthesize avPlayerViewController=_avPlayerViewController - In the implementation block
@property (nonatomic,copy) VUIMediaInfo * mediaInfo;                                                                                   //@synthesize mediaInfo=_mediaInfo - In the implementation block
@property (assign,getter=isForeground,nonatomic) BOOL foreground;                                                                      //@synthesize foreground=_foreground - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                                                   //@synthesize name=_name - In the implementation block
@property (assign,getter=isPlaybackEnabled,nonatomic) BOOL playbackEnabled;                                                            //@synthesize playbackEnabled=_playbackEnabled - In the implementation block
@property (assign,getter=shouldStopPlayerWhenViewDisappears,nonatomic) BOOL stopPlayerWhenViewDisappears;                              //@synthesize stopPlayerWhenViewDisappears=_stopPlayerWhenViewDisappears - In the implementation block
@property (assign,nonatomic) BOOL clearPreviousImageBeforeLoading;                                                                     //@synthesize clearPreviousImageBeforeLoading=_clearPreviousImageBeforeLoading - In the implementation block
@property (assign,nonatomic) BOOL animateImageChange;                                                                                  //@synthesize animateImageChange=_animateImageChange - In the implementation block
@property (assign,nonatomic) BOOL popWhenPlayerStops;                                                                                  //@synthesize popWhenPlayerStops=_popWhenPlayerStops - In the implementation block
@property (assign,nonatomic) BOOL mutePlaybackInBackground;                                                                            //@synthesize mutePlaybackInBackground=_mutePlaybackInBackground - In the implementation block
@property (assign,getter=shouldStopWhenAnotherMediaControllerStarts,nonatomic) BOOL stopWhenAnotherMediaControllerStarts;              //@synthesize stopWhenAnotherMediaControllerStarts=_stopWhenAnotherMediaControllerStarts - In the implementation block
-(TVPPlayer *)player;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)setPlayer:(TVPPlayer *)arg1 ;
-(void)setForeground:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)pause;
-(void)setStateMachine:(TVPStateMachine *)arg1 ;
-(void)play;
-(void)_applicationWillAddDeactivationReason:(id)arg1 ;
-(void)stop;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(BOOL)isForeground;
-(void)_applicationDidRemoveDeactivationReason:(id)arg1 ;
-(AVPlayerViewController *)avPlayerViewController;
-(BOOL)isBackgrounded;
-(TVPStateMachine *)stateMachine;
-(void)viewDidLoad;
-(void)setState:(unsigned long long)arg1 ;
-(void)_handleApplicationDidBecomeActiveNotification:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(unsigned long long)deactivationReasons;
-(void)setDeactivationReasons:(unsigned long long)arg1 ;
-(BOOL)_canPause;
-(void)viewDidLayoutSubviews;
-(void)_playbackStateChanged:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setPlaybackEnabled:(BOOL)arg1 ;
-(void)_handleApplicationWillResignActiveNotification:(id)arg1 ;
-(void)setAutomaticPlaybackStart:(BOOL)arg1 ;
-(void)_registerStateMachineHandlers;
-(TVImageProxy *)alphaImageProxy;
-(void)setAlphaImageProxy:(TVImageProxy *)arg1 ;
-(BOOL)isAutomaticPlaybackStart;
-(BOOL)isAutomaticPlaybackStop;
-(void)setAutomaticPlaybackStop:(BOOL)arg1 ;
-(void)setAvPlayerViewController:(AVPlayerViewController *)arg1 ;
-(void)_cleanUpEverything;
-(void)_registerForApplicationStateNotifications;
-(void)_stateDidChangeFromState:(id)arg1 toState:(id)arg2 onEvent:(id)arg3 context:(id)arg4 userInfo:(id)arg5 ;
-(void)_addProxyImageView;
-(BOOL)shouldStopPlayerWhenViewDisappears;
-(void)_updateAVPlayerViewControllerWithAVPlayerForPlayer:(id)arg1 ;
-(void)setVpafPlaybackStartReason:(unsigned long long)arg1 ;
-(void)setVpafPlaybackStopReason:(unsigned long long)arg1 ;
-(void)_setImageProxies:(id)arg1 ;
-(void)_updateMediaInfo;
-(BOOL)isPlayerReadyToBePlayed;
-(NSTimer *)playbackLoadingTimer;
-(void)setPlaybackLoadingTimer:(NSTimer *)arg1 ;
-(void)setPlaybackLoadingStartDate:(NSDate *)arg1 ;
-(void)_updateCurrentPlaybackViewFrameForPlaybackInBackground:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_handleApplicationDidEnterBackgroundNotification:(id)arg1 ;
-(BOOL)_shouldPausePlaybackDueToDeactivationReasons;
-(void)setShouldPlayAfterAppBecomesActive:(BOOL)arg1 ;
-(VUIMediaInfo *)mediaInfo;
-(BOOL)shouldPlayAfterAppBecomesActive;
-(void)_mediaControllerStartedPlayback:(id)arg1 ;
-(void)_addOverlayViewAnimatedIfNeeded:(BOOL)arg1 dismissAfter:(double)arg2 ;
-(void)_addContentViewIfNeeded;
-(NSString *)titleForLogging;
-(void)setTitleForLogging:(NSString *)arg1 ;
-(void)setPlayerReadyToBePlayed:(BOOL)arg1 ;
-(void)_setPlaylist:(id)arg1 ;
-(TVImageProxy *)currentImageProxy;
-(BOOL)clearPreviousImageBeforeLoading;
-(_TVImageView *)proxyImageView;
-(void)setCurrentImageProxy:(TVImageProxy *)arg1 ;
-(void)setPendingPlaylist:(TVPPlaylist *)arg1 ;
-(void)_cleanUpEverythingPlaybackRelated;
-(void)_unregisterPlayerNotifications;
-(void)_removePlaybackViewController;
-(TVPVideoView *)secondaryVideoView;
-(void)setSecondaryVideoView:(TVPVideoView *)arg1 ;
-(void)setPlaybackContainerController:(UIViewController *)arg1 ;
-(BOOL)didWeCreatePlayer;
-(void)_removeOverlayView:(id)arg1 animated:(BOOL)arg2 ;
-(UIViewController *)playbackContainerController;
-(unsigned long long)vpafPlaybackStartReason;
-(BOOL)shouldStopWhenAnotherMediaControllerStarts;
-(BOOL)showsVideoControls;
-(BOOL)_hasSecondaryView;
-(CGRect)_playbackContainerViewFrame:(BOOL)arg1 hasSecondaryVideoView:(BOOL)arg2 ;
-(CGRect)_secondaryVideoViewFrame:(BOOL)arg1 ;
-(BOOL)_shouldShowSecondaryView;
-(NSTimer *)pauseStateTimeoutTimer;
-(void)setPauseStateTimeoutTimer:(NSTimer *)arg1 ;
-(unsigned long long)vpafPlaybackStopReason;
-(void)setDidWeCreatePlayer:(BOOL)arg1 ;
-(void)_registerPlayerNotifications;
-(void)_addPlaybackViewControllerForPlayback:(BOOL)arg1 ;
-(void)_delayLoadImage:(id)arg1 ;
-(BOOL)isPlaybackEnabled;
-(void)setPendingImageProxy:(TVImageProxy *)arg1 ;
-(TVPPlaylist *)pendingPlaylist;
-(void)_swapActiveMedia:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(TVImageProxy *)pendingImageProxy;
-(NSDate *)playbackLoadingStartDate;
-(BOOL)popWhenPlayerStops;
-(void)setShowsVideoControls:(BOOL)arg1 ;
-(void)transitionToForeground:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setMediaInfo:(VUIMediaInfo *)arg1 ;
-(void)_removeProxyImageView;
-(void)setStopPlayerWhenViewDisappears:(BOOL)arg1 ;
-(void)setClearPreviousImageBeforeLoading:(BOOL)arg1 ;
-(void)setPopWhenPlayerStops:(BOOL)arg1 ;
-(void)setStopWhenAnotherMediaControllerStarts:(BOOL)arg1 ;
-(void)setProxyImageView:(_TVImageView *)arg1 ;
-(unsigned long long)imageAnimationOptions;
-(void)setImageAnimationOptions:(unsigned long long)arg1 ;
-(double)imageAnimationDuration;
-(void)setImageAnimationDuration:(double)arg1 ;
-(double)imageTransitionInterval;
-(void)setImageTransitionInterval:(double)arg1 ;
-(BOOL)shouldAnimateOverlayView;
-(void)setShouldAnimateOverlayView:(BOOL)arg1 ;
-(BOOL)observingPictureInPictureActive;
-(void)setObservingPictureInPictureActive:(BOOL)arg1 ;
-(_TVImageView *)alphaProxyImageView;
-(void)showAlphaImage:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setAlphaImageProxy:(id)arg1 ;
-(BOOL)animateImageChange;
-(void)loadAlphaImageProxy;
-(void)_addAlphaProxyImageViewIfNeeded;
-(void)setAlphaProxyImageView:(_TVImageView *)arg1 ;
-(BOOL)mutePlaybackInBackground;
-(void)_didPlayMediaItemToEnd:(id)arg1 ;
-(void)_updatePlayerMuteStateForBackgroundPlaybackWithReason:(id)arg1 ;
-(void)setAnimateImageChange:(BOOL)arg1 ;
-(void)setMutePlaybackInBackground:(BOOL)arg1 ;
@end

