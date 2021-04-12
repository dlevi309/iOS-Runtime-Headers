/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIViewController.h>

@class TVPPlayer, AVPlayerViewController, VUIMediaInfo, NSString, TVImageProxy, _TVImageView, UIViewController, NSDate, NSTimer, TVPStateMachine, TVPPlaylist;

@interface VUIBackgroundMediaController : UIViewController {

	BOOL _foreground;
	BOOL _playbackEnabled;
	BOOL _stopPlayerWhenViewDisappears;
	BOOL _clearPreviousImageBeforeLoading;
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
@property (assign,nonatomic) BOOL popWhenPlayerStops;                                                                                  //@synthesize popWhenPlayerStops=_popWhenPlayerStops - In the implementation block
@property (assign,nonatomic) BOOL mutePlaybackInBackground;                                                                            //@synthesize mutePlaybackInBackground=_mutePlaybackInBackground - In the implementation block
@property (assign,getter=shouldStopWhenAnotherMediaControllerStarts,nonatomic) BOOL stopWhenAnotherMediaControllerStarts;              //@synthesize stopWhenAnotherMediaControllerStarts=_stopWhenAnotherMediaControllerStarts - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)pause;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)play;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)deactivationReasons;
-(void)viewDidLayoutSubviews;
-(void)setForeground:(BOOL)arg1 ;
-(BOOL)isForeground;
-(TVPStateMachine *)stateMachine;
-(void)setStateMachine:(TVPStateMachine *)arg1 ;
-(void)setDeactivationReasons:(unsigned long long)arg1 ;
-(void)_applicationWillAddDeactivationReason:(id)arg1 ;
-(BOOL)isBackgrounded;
-(void)_applicationDidRemoveDeactivationReason:(id)arg1 ;
-(TVPPlayer *)player;
-(void)setPlayer:(TVPPlayer *)arg1 ;
-(BOOL)_canPause;
-(AVPlayerViewController *)avPlayerViewController;
-(void)_playbackStateChanged:(id)arg1 ;
-(void)_handleApplicationDidBecomeActiveNotification:(id)arg1 ;
-(void)setPlaybackEnabled:(BOOL)arg1 ;
-(VUIMediaInfo *)mediaInfo;
-(BOOL)isPlaybackEnabled;
-(void)_handleApplicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_handleApplicationWillResignActiveNotification:(id)arg1 ;
-(void)setMediaInfo:(VUIMediaInfo *)arg1 ;
-(void)setShowsVideoControls:(BOOL)arg1 ;
-(void)transitionToForeground:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateMediaInfo;
-(void)_registerStateMachineHandlers;
-(void)setAutomaticPlaybackStart:(BOOL)arg1 ;
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
-(BOOL)isPlayerReadyToBePlayed;
-(NSTimer *)playbackLoadingTimer;
-(void)setPlaybackLoadingTimer:(NSTimer *)arg1 ;
-(void)setPlaybackLoadingStartDate:(NSDate *)arg1 ;
-(BOOL)_shouldPausePlaybackDueToDeactivationReasons;
-(void)setShouldPlayAfterAppBecomesActive:(BOOL)arg1 ;
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
-(void)setPlaybackContainerController:(UIViewController *)arg1 ;
-(BOOL)didWeCreatePlayer;
-(void)_removeOverlayView:(id)arg1 animated:(BOOL)arg2 ;
-(UIViewController *)playbackContainerController;
-(unsigned long long)vpafPlaybackStartReason;
-(BOOL)shouldStopWhenAnotherMediaControllerStarts;
-(BOOL)showsVideoControls;
-(NSTimer *)pauseStateTimeoutTimer;
-(void)setPauseStateTimeoutTimer:(NSTimer *)arg1 ;
-(unsigned long long)vpafPlaybackStopReason;
-(void)setDidWeCreatePlayer:(BOOL)arg1 ;
-(void)_registerPlayerNotifications;
-(void)_delayLoadImage:(id)arg1 ;
-(void)setPendingImageProxy:(TVImageProxy *)arg1 ;
-(TVPPlaylist *)pendingPlaylist;
-(void)_swapActiveMedia:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(TVImageProxy *)pendingImageProxy;
-(NSDate *)playbackLoadingStartDate;
-(BOOL)popWhenPlayerStops;
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
-(void)_addAlphaProxyImageViewIfNeeded;
-(void)setAlphaProxyImageView:(_TVImageView *)arg1 ;
-(BOOL)mutePlaybackInBackground;
-(void)_addPlaybackViewControllerForPlayback;
-(void)_updatePlayerMuteStateForBackgroundPlaybackWithReason:(id)arg1 ;
-(void)setMutePlaybackInBackground:(BOOL)arg1 ;
@end

