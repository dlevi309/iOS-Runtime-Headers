/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPVolumeControllerDelegate.h>
#import <libobjc.A.dylib/MPVideoControllerProtocol.h>
#import <libobjc.A.dylib/MPSwipableViewDelegate.h>
#import <libobjc.A.dylib/MPVideoOverlayDelegate.h>
#import <libobjc.A.dylib/MPTransportControlsTarget.h>
#import <UIKit/UIAlertViewDelegate.h>

@class MPAVItem, MPAVController, MPVideoBackgroundView, UIColor, UIImage, MPSwipableView, MPVideoPlaybackOverlayView, NSString, UIView, UIAlertView, UIWindow, UINavigationController, MPVideoContainerView, UITapGestureRecognizer, MPInlineVideoFullscreenViewController, MPWeakTimer, UIActivityIndicatorView, UIPinchGestureRecognizer, MPTVOutWindow, NSSet, MPVolumeController, _UIHostedWindow, MPVideoView;

@interface MPInlineVideoController : NSObject <MPVolumeControllerDelegate, MPVideoControllerProtocol, MPSwipableViewDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget, UIAlertViewDelegate> {

	id _delegate;
	MPAVItem* _item;
	MPAVController* _player;
	unsigned long long _activeOverlayUserEvents;
	BOOL _automaticallyHandleTransportControls;
	BOOL _allowsDetailScrubbing;
	BOOL _allowsWirelessPlayback;
	BOOL _alwaysAllowHidingControlsOverlay;
	long long _artworkImageStyle;
	BOOL _attemptAutoPlayWhenControlsHidden;
	MPVideoBackgroundView* _backgroundView;
	UIColor* _backstopColor;
	BOOL _canAnimateControlsOverlay;
	BOOL _canShowControlsOverlay;
	BOOL _controlsOverlayVisible;
	unsigned long long _desiredParts;
	unsigned long long _disabledParts;
	BOOL _disableAutoRotation;
	BOOL _disableControlsAutohide;
	BOOL _displayPlaybackErrorAlerts;
	BOOL _inlinePlaybackUsesTVOut;
	long long _itemTypeOverride;
	BOOL _needsTVWindowSetup;
	BOOL _needsTVWindowTeardown;
	UIImage* _posterImage;
	long long _scaleMode;
	BOOL _TVOutEnabled;
	BOOL _TVOutEnabledMaster;
	BOOL _useHostedWindowWhenFullscreen;
	MPSwipableView* _view;
	MPVideoPlaybackOverlayView* _videoOverlayView;
	unsigned long long _visibleParts;
	BOOL _navigationBarHidden;
	NSString* _playbackErrorDescription;
	long long _videoOverlayStyle;
	UIView* _advertisementView;
	UIAlertView* _alertSheet;
	UIWindow* _alternateTracksWindow;
	unsigned long long _backgroundTaskId;
	BOOL _batteryMonitoringWasEnabled;
	UINavigationController* _chaptersContainerController;
	MPVideoContainerView* _containerView;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	MPInlineVideoFullscreenViewController* _fullscreenViewController;
	BOOL _fullscreenViewSizeIsExternallyManaged;
	UIWindow* _fullscreenWindow;
	BOOL _hasShownFirstVideoFrame;
	MPWeakTimer* _idleTimer;
	BOOL _inCloneMirrorMode;
	BOOL _isAnimatingOverlay;
	BOOL _isTransitioningFromFullscreen;
	BOOL _isTransitioningToFullscreen;
	UIActivityIndicatorView* _loadingIndicator;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	long long _scaleModeOverride;
	BOOL _scheduledLoadingIndicator;
	UIView* _subtitlesView;
	BOOL _swallowNextTapGesture;
	UITapGestureRecognizer* _tapGestureRecognizer;
	MPTVOutWindow* _tvOutWindow;
	UIView* _videoBackgroundView;
	NSSet* _viewsToFade;
	BOOL _wantsOverlayVisibleWhenItemIsAvailable;
	BOOL _wasPlaying;
	UIWindow* _windowForDisablingAutorotation;
	UIWindow* _windowForFullscreenTransition;
	BOOL _shouldDestroyVideoSnapshot;
	MPVolumeController* _volumeController;

}

@property (nonatomic,readonly) UIView * advertisementView;                                   //@synthesize advertisementView=_advertisementView - In the implementation block
@property (assign,nonatomic) BOOL automaticallyHandleTransportControls;                      //@synthesize automaticallyHandleTransportControls=_automaticallyHandleTransportControls - In the implementation block
@property (nonatomic,readonly) UIView * fullscreenView; 
@property (nonatomic,copy) NSString * playbackErrorDescription;                              //@synthesize playbackErrorDescription=_playbackErrorDescription - In the implementation block
@property (assign,nonatomic) BOOL navigationBarHidden;                                       //@synthesize navigationBarHidden=_navigationBarHidden - In the implementation block
@property (nonatomic,readonly) UIView * subtitlesView;                                       //@synthesize subtitlesView=_subtitlesView - In the implementation block
@property (assign,nonatomic) long long videoOverlayStyle;                                    //@synthesize videoOverlayStyle=_videoOverlayStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPAVItem * item;                                                //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,retain) MPAVController * player;                                        //@synthesize player=_player - In the implementation block
@property (nonatomic,retain,readonly) UIView * view; 
@property (assign,nonatomic) BOOL allowsDetailScrubbing;                                     //@synthesize allowsDetailScrubbing=_allowsDetailScrubbing - In the implementation block
@property (assign,nonatomic) BOOL allowsWirelessPlayback;                                    //@synthesize allowsWirelessPlayback=_allowsWirelessPlayback - In the implementation block
@property (assign,nonatomic) BOOL alwaysAllowHidingControlsOverlay;                          //@synthesize alwaysAllowHidingControlsOverlay=_alwaysAllowHidingControlsOverlay - In the implementation block
@property (assign,nonatomic) long long artworkImageStyle;                                    //@synthesize artworkImageStyle=_artworkImageStyle - In the implementation block
@property (assign,nonatomic) BOOL attemptAutoPlayWhenControlsHidden;                         //@synthesize attemptAutoPlayWhenControlsHidden=_attemptAutoPlayWhenControlsHidden - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                                      //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIColor * backstopColor;                                        //@synthesize backstopColor=_backstopColor - In the implementation block
@property (assign,nonatomic) BOOL canAnimateControlsOverlay;                                 //@synthesize canAnimateControlsOverlay=_canAnimateControlsOverlay - In the implementation block
@property (nonatomic,readonly) BOOL canChangeScaleMode; 
@property (assign,nonatomic) BOOL canShowControlsOverlay;                                    //@synthesize canShowControlsOverlay=_canShowControlsOverlay - In the implementation block
@property (assign,nonatomic) BOOL controlsOverlayVisible;                                    //@synthesize controlsOverlayVisible=_controlsOverlayVisible - In the implementation block
@property (assign,nonatomic) unsigned long long desiredParts;                                //@synthesize desiredParts=_desiredParts - In the implementation block
@property (assign,nonatomic) BOOL disableAutoRotation;                                       //@synthesize disableAutoRotation=_disableAutoRotation - In the implementation block
@property (assign,nonatomic) BOOL disableControlsAutohide; 
@property (assign,nonatomic) unsigned long long disabledParts;                               //@synthesize disabledParts=_disabledParts - In the implementation block
@property (assign,nonatomic) BOOL displayPlaybackErrorAlerts;                                //@synthesize displayPlaybackErrorAlerts=_displayPlaybackErrorAlerts - In the implementation block
@property (nonatomic,readonly) _UIHostedWindow * hostedWindow; 
@property (nonatomic,readonly) unsigned hostedWindowContextID; 
@property (assign,nonatomic) BOOL inlinePlaybackUsesTVOut;                                   //@synthesize inlinePlaybackUsesTVOut=_inlinePlaybackUsesTVOut - In the implementation block
@property (assign,nonatomic) long long itemTypeOverride;                                     //@synthesize itemTypeOverride=_itemTypeOverride - In the implementation block
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen; 
@property (nonatomic,retain) UIImage * posterImage;                                          //@synthesize posterImage=_posterImage - In the implementation block
@property (assign,nonatomic) long long scaleMode;                                            //@synthesize scaleMode=_scaleMode - In the implementation block
@property (assign,nonatomic) BOOL TVOutEnabled;                                              //@synthesize TVOutEnabled=_TVOutEnabled - In the implementation block
@property (nonatomic,readonly) BOOL viewControllerWillRequestExit; 
@property (nonatomic,retain,readonly) UIView*<MPVideoOverlay> videoOverlayView; 
@property (nonatomic,retain,readonly) MPVideoView * videoView; 
@property (assign,nonatomic) unsigned long long visibleParts;                                //@synthesize visibleParts=_visibleParts - In the implementation block
@property (assign,nonatomic) BOOL autoPlayWhenLikelyToKeepUp; 
-(id)init;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(MPAVItem *)item;
-(void)setItem:(MPAVItem *)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(UIView *)view;
-(UIView *)backgroundView;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(BOOL)isFullscreen;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
-(MPAVController *)player;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPVideoView *)videoView;
-(void)exitFullscreen;
-(UIImage *)posterImage;
-(void)setFullscreen:(BOOL)arg1 ;
-(void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setInlinePlaybackUsesTVOut:(BOOL)arg1 ;
-(BOOL)inlinePlaybackUsesTVOut;
-(void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1 ;
-(BOOL)autoPlayWhenLikelyToKeepUp;
-(void)_firstVideoFrameDisplayed:(id)arg1 ;
-(void)_isExternalPlaybackActiveDidChange:(id)arg1 ;
-(void)_sizeDidChange:(id)arg1 ;
-(void)swipableView:(id)arg1 didMoveToSuperview:(id)arg2 ;
-(void)swipableView:(id)arg1 willMoveToWindow:(id)arg2 ;
-(void)swipableViewHadActivity:(id)arg1 ;
-(BOOL)canHideOverlay:(BOOL)arg1 ;
-(void)displayVideoView;
-(void)prepareToDisplayVideo;
-(void)setControlsNeedLayout;
-(void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 ;
-(void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3 ;
-(void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(void)setScaleModeOverride:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setUseHostedWindowWhenFullscreen:(BOOL)arg1 ;
-(void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(void)setOwnsStatusBar:(BOOL)arg1 ;
-(BOOL)allowsDetailScrubbing;
-(void)setAllowsDetailScrubbing:(BOOL)arg1 ;
-(BOOL)allowsWirelessPlayback;
-(void)setAllowsWirelessPlayback:(BOOL)arg1 ;
-(BOOL)alwaysAllowHidingControlsOverlay;
-(void)setAlwaysAllowHidingControlsOverlay:(BOOL)arg1 ;
-(long long)artworkImageStyle;
-(void)setArtworkImageStyle:(long long)arg1 ;
-(BOOL)attemptAutoPlayWhenControlsHidden;
-(void)setAttemptAutoPlayWhenControlsHidden:(BOOL)arg1 ;
-(UIColor *)backstopColor;
-(void)setBackstopColor:(UIColor *)arg1 ;
-(BOOL)canAnimateControlsOverlay;
-(void)setCanAnimateControlsOverlay:(BOOL)arg1 ;
-(BOOL)canChangeScaleMode;
-(BOOL)canShowControlsOverlay;
-(void)setCanShowControlsOverlay:(BOOL)arg1 ;
-(BOOL)controlsOverlayVisible;
-(void)setControlsOverlayVisible:(BOOL)arg1 ;
-(unsigned long long)desiredParts;
-(void)setDesiredParts:(unsigned long long)arg1 ;
-(BOOL)disableAutoRotation;
-(void)setDisableAutoRotation:(BOOL)arg1 ;
-(BOOL)disableControlsAutohide;
-(void)setDisableControlsAutohide:(BOOL)arg1 ;
-(unsigned long long)disabledParts;
-(void)setDisabledParts:(unsigned long long)arg1 ;
-(BOOL)displayPlaybackErrorAlerts;
-(void)setDisplayPlaybackErrorAlerts:(BOOL)arg1 ;
-(_UIHostedWindow *)hostedWindow;
-(unsigned)hostedWindowContextID;
-(long long)itemTypeOverride;
-(void)setItemTypeOverride:(long long)arg1 ;
-(void)setPosterImage:(UIImage *)arg1 ;
-(long long)scaleMode;
-(void)setScaleMode:(long long)arg1 ;
-(BOOL)TVOutEnabled;
-(void)setTVOutEnabled:(BOOL)arg1 ;
-(BOOL)viewControllerWillRequestExit;
-(UIView*<MPVideoOverlay>)videoOverlayView;
-(unsigned long long)visibleParts;
-(void)setVisibleParts:(unsigned long long)arg1 ;
-(void)clearWeakReferencesToObject:(id)arg1 ;
-(void)noteIgnoredChangeTypes:(unsigned long long)arg1 ;
-(void)setOrientation:(long long)arg1 animate:(BOOL)arg2 ;
-(long long)_itemTypeWithActualTypePreference;
-(void)_updateAlwaysPlayWheneverPossible;
-(BOOL)canShowQTAudioOnlyUI;
-(void)_showStillFrameIfNotAlreadyPlaying;
-(void)_scheduleLoadingIndicatorIfNeeded;
-(BOOL)_canEnableAirPlayVideoRoutes;
-(void)_hideLoadingIndicator;
-(void)_updateIdleTimerDisabledFromPlaybackState:(long long)arg1 ;
-(void)_updateProgressControlForItem:(id)arg1 ;
-(void)_playbackStateChanged:(id)arg1 ;
-(BOOL)navigationBarHidden;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)_durationAvailable:(id)arg1 ;
-(void)_effectiveScaleModeDidChange:(id)arg1 ;
-(BOOL)automaticallyHandleTransportControls;
-(void)setAutomaticallyHandleTransportControls:(BOOL)arg1 ;
-(BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2 ;
-(void)overlayTappedBackButton:(id)arg1 ;
-(void)overlayTappedFullscreenButton:(id)arg1 ;
-(void)overlay:(id)arg1 didBeginUserEvent:(unsigned long long)arg2 ;
-(void)overlay:(id)arg1 didCancelUserEvent:(unsigned long long)arg2 ;
-(void)overlay:(id)arg1 didEndUserEvent:(unsigned long long)arg2 ;
-(void)fullscreenOverlayWillHideAnimated:(BOOL)arg1 ;
-(void)fullscreenOverlayWillShowAnimated:(BOOL)arg1 ;
-(void)fullscreenOverlayDidHide;
-(void)fullscreenOverlayDidShow;
-(UIView *)fullscreenView;
-(void)setPlaybackErrorDescription:(NSString *)arg1 ;
-(void)setVideoOverlayStyle:(long long)arg1 ;
-(void)setVideoSnapshotEnabled:(BOOL)arg1 ;
-(void)_applicationResumedEventsOnly:(id)arg1 ;
-(void)_applicationSuspended:(id)arg1 ;
-(void)_applicationDidFinishSuspensionSnapshot:(id)arg1 ;
-(void)_availableRoutesChanged:(id)arg1 ;
-(void)_batteryStateDidChange:(id)arg1 ;
-(void)_bufferingStateChanged:(id)arg1 ;
-(void)_itemTypeAvailable:(id)arg1 ;
-(void)_playbackError:(id)arg1 ;
-(void)_scaleModeDidChange:(id)arg1 ;
-(void)_timedImageMetadataAvailable:(id)arg1 ;
-(void)_validityChanged:(id)arg1 ;
-(void)_cancelOverlayIdleTimer;
-(void)_delayedShowLoadingIndicator;
-(void)_destroyVideoOverlayView;
-(void)_destroyVideoSnapshotView;
-(void)_doneWithChapters:(id)arg1 ;
-(long long)_effectiveItemType;
-(void)_enableAirPlayVideoRoutesIfNecessary;
-(void)_flipFromChaptersDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_flipToChaptersDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_hideOverlayAnimated:(BOOL)arg1 ;
-(void)_hideOverlayDidEnd;
-(BOOL)_isAnimatingFullscreenTransition;
-(void)_overlayIdleTimerFired:(id)arg1 ;
-(BOOL)_overlayViewIsVisible;
-(void)_postScaleModeDidChange;
-(void)_postViewControllerRequestsExitWithReason:(long long)arg1 ;
-(void)_registerForPlayerNotifications;
-(void)_resetOverlayIdleTimer;
-(void)_resetOverlayIdleTimer:(double)arg1 ;
-(void)_setupSubviews;
-(void)_setupTVOutWindow;
-(BOOL)_shouldShowDestinationPlaceholder;
-(void)_showOverlayAnimated:(BOOL)arg1 ;
-(void)_showOverlayAnimated:(BOOL)arg1 quickHide:(BOOL)arg2 ;
-(void)_showOverlayDidEnd:(BOOL)arg1 ;
-(void)_showVideoSnapshotView;
-(void)_tearDownTVOutWindow;
-(void)_transitionFromFullscreenAnimated:(BOOL)arg1 ;
-(void)_transitionFromFullscreenAnimated:(BOOL)arg1 fromDoneButton:(BOOL)arg2 ;
-(void)_transitionFromFullscreenDidEnd;
-(void)_transitionToFullscreenAnimated:(BOOL)arg1 ;
-(void)_transitionToFullscreenDidEnd;
-(void)_unregisterForPlayerNotifications;
-(void)_updateBackgroundViewConfiguration:(BOOL)arg1 ;
-(void)_updateBackgroundViewInformation;
-(void)_updateDisableAirPlayMirroringDuringPlayback;
-(void)_updateDoubleTapGestureRecognizer;
-(void)_updateTVOutEnabled;
-(BOOL)_useInlineControls;
-(void)_viewWasTapped:(id)arg1 ;
-(void)_viewWasPinched:(id)arg1 ;
-(UIView *)advertisementView;
-(long long)videoOverlayStyle;
-(NSString *)playbackErrorDescription;
-(UIView *)subtitlesView;
@end

