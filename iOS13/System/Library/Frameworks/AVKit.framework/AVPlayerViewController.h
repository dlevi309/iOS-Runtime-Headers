/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <AVKit/AVPictureInPictureControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <AVKit/AVPlaybackControlsVisibilityControllerDelegate.h>
#import <AVKit/AVFullScreenViewControllerDelegate.h>
#import <AVKit/AVTransitionControllerDelegate.h>
#import <AVKit/AVPictureInPictureContentSource.h>
#import <AVKit/AVContentOverlayViewDelegate.h>

@protocol AVPlayerViewControllerDelegate;
@class UIWindow, NSDictionary, AVSecondScreenConnection, AVPictureInPictureController, UIPopoverPresentationController, AVTransitionController, AVPlaybackControlsVisibilityController, AVPlaybackControlsController, AVPlayerView, NSValue, AVPlayer, NSMutableDictionary, AVPlayerController, AVContentOverlayView, NSNumber, AVObservationController, AVBehaviorStorage, UIHoverGestureRecognizer, AVPlayerControllerVolumeAnimator, __AVPlayerLayerView, NSString, NSArray, UIView, UIViewController, AVPlayerViewControllerContentView, AVPresentationContext, AVFullScreenViewController, AVPlayerViewControllerCustomControlsView;

@interface AVPlayerViewController : UIViewController <AVPictureInPictureControllerDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, AVPlaybackControlsVisibilityControllerDelegate, AVFullScreenViewControllerDelegate, AVTransitionControllerDelegate, AVPictureInPictureContentSource, AVContentOverlayViewDelegate> {

	BOOL _playerShouldAutoplay;
	BOOL _showsPlaybackControls;
	BOOL _requiresLinearPlayback;
	long long _videoGravity;
	BOOL _allowsPictureInPicturePlayback;
	BOOL _hasClientSetVideoGravity;
	BOOL _canShowPictureInPictureButton;
	NSDictionary* _pixelBufferAttributes;
	AVSecondScreenConnection* _secondScreenConnection;
	AVPictureInPictureController* _pictureInPictureController;
	UIPopoverPresentationController* _mediaSelectionPopoverPresentationController;
	AVTransitionController* _transitionController;
	AVPlaybackControlsVisibilityController* _playbackControlsVisibilityController;
	AVPlaybackControlsController* _playbackControlsController;
	AVPlayerView* _playerViewControllerView;
	NSValue* _overrideLayoutMarginsWhenEmbeddedInline;
	CGAffineTransform _overrideTransformForProminentPlayButton;
	BOOL _canToggleVideoGravityWhenEmbeddedInline;
	BOOL _playbackControlsShouldControlSystemVolume;
	BOOL _updatesNowPlayingInfoCenter;
	BOOL _readyForDisplay;
	BOOL _entersFullScreenWhenPlaybackBegins;
	BOOL _exitsFullScreenWhenPlaybackEnds;
	BOOL _shouldUseNetworkingResourcesForLiveStreamingWhilePaused;
	BOOL __hasBegunObservation;
	BOOL _hasPerformedInitialSetup;
	BOOL _wasInitializedUsingWebKitSPI;
	BOOL _requiresImmediateAssetInspection;
	BOOL _showsTimecodes;
	BOOL _canPausePlaybackWhenExitingFullScreen;
	BOOL _playbackControlsIncludeVolumeControls;
	BOOL _canIncludePlaybackControlsWhenInline;
	BOOL _pictureInPictureActive;
	AVPlayer* _player;
	NSMutableDictionary* __targetVideoGravitiesForLayoutClass;
	AVPlayerController* _playerController;
	id<AVPlayerViewControllerDelegate> _delegate;
	AVContentOverlayView* __actualContentOverlayView;
	NSNumber* __defaultPlaybackRateStorage;
	/*^block*/id _finishPreparingForInteractiveDismissalHandler;
	/*^block*/id _interactiveDismissalCompletionHandler;
	AVObservationController* __observationController;
	AVBehaviorStorage* __behaviorStorage;
	long long __numberOfTrackedUserInteractions;
	UIHoverGestureRecognizer* _hoverGestureRecognizer;
	NSMutableDictionary* __localizedDiscoverabilityTitleForKeyCommandLocalizationKey;
	unsigned long long _overrideRouteSharingPolicy;
	AVPlayerControllerVolumeAnimator* _volumeAnimator;
	__AVPlayerLayerView* _playerLayerView;
	NSString* _overrideRoutingContextUID;
	NSArray* _customControlItems;
	NSString* _overrideParentApplicationDisplayIdentifier;
	CGSize _secondScreenConnectionDisplaySize;
	CGRect _videoBounds;

}

@property (nonatomic,readonly) UIView * iAdPrerollView; 
@property (assign,nonatomic) BOOL showsExitFullScreenButton; 
@property (getter=isPictureInPicturePossible,nonatomic,readonly) BOOL pictureInPicturePossible; 
@property (assign,nonatomic) BOOL playbackControlsShouldControlSystemVolume; 
@property (getter=isPictureInPictureSuspended,nonatomic,readonly) BOOL pictureInPictureSuspended; 
@property (nonatomic,readonly) BOOL pictureInPictureWasStartedWhenEnteringBackground; 
@property (assign,setter=_setInlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused:,nonatomic) BOOL _inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused; 
@property (nonatomic,retain) NSValue * overrideLayoutMarginsWhenEmbeddedInline; 
@property (assign,nonatomic) CGAffineTransform overrideTransformForProminentPlayButton; 
@property (assign,nonatomic) BOOL canToggleVideoGravityWhenEmbeddedInline; 
@property (nonatomic,readonly) AVPlaybackControlsVisibilityController * playbackControlsVisibilityController; 
@property (nonatomic,readonly) AVPlaybackControlsController * playbackControlsController; 
@property (nonatomic,readonly) AVTransitionController * _transitionController; 
@property (assign,nonatomic) BOOL canShowPictureInPictureButton; 
@property (nonatomic,readonly) BOOL hasCustomPlaybackControls; 
@property (nonatomic,readonly) BOOL canControlPlayback; 
@property (nonatomic,__weak,readonly) UIViewController * fullScreenViewController; 
@property (nonatomic,readonly) AVPlayerViewControllerContentView * contentView; 
@property (getter=isPresentingFullScreenFromInline,nonatomic,readonly) BOOL presentingFullScreenFromInline; 
@property (getter=isPresentedFullScreen,nonatomic,readonly) BOOL presentedFullScreen; 
@property (nonatomic,readonly) BOOL hasActiveTransition; 
@property (nonatomic,readonly) AVPresentationContext * presentationContext; 
@property (assign,nonatomic) long long preferredUnobscuredArea; 
@property (assign,nonatomic) BOOL entersFullScreenWhenTapped; 
@property (nonatomic,readonly) long long activeContentTransitionType; 
@property (getter=isContentTransitionInteractive,nonatomic,readonly) BOOL contentTransitionInteractive; 
@property (nonatomic,readonly) AVPlayer * contentTransitioningPlayer; 
@property (nonatomic,readonly) UIView * contentTransitioningOverlayView; 
@property (assign,nonatomic,__weak) id<AVPlayerViewControllerContentTransitioning_NewsOnly> contentTransitioningDelegate; 
@property (assign,getter=isStartNextContentTransitionButtonEnabled,nonatomic) BOOL startNextContentTransitionButtonEnabled; 
@property (assign,getter=isStartPreviousContentTransitionButtonEnabled,nonatomic) BOOL startPreviousContentTransitionButtonEnabled; 
@property (nonatomic,retain) UIView * customContentTransitioningInfoPanel; 
@property (nonatomic,readonly) NSArray * behaviors; 
@property (nonatomic,readonly) AVContentOverlayView * _actualContentOverlayView;                                                                                                 //@synthesize _actualContentOverlayView=__actualContentOverlayView - In the implementation block
@property (nonatomic,retain) NSNumber * _defaultPlaybackRateStorage;                                                                                                             //@synthesize _defaultPlaybackRateStorage=__defaultPlaybackRateStorage - In the implementation block
@property (nonatomic,readonly) AVFullScreenViewController * fullScreenViewController; 
@property (assign,nonatomic) BOOL shouldUseNetworkingResourcesForLiveStreamingWhilePaused;                                                                                       //@synthesize shouldUseNetworkingResourcesForLiveStreamingWhilePaused=_shouldUseNetworkingResourcesForLiveStreamingWhilePaused - In the implementation block
@property (nonatomic,copy) id finishPreparingForInteractiveDismissalHandler;                                                                                                     //@synthesize finishPreparingForInteractiveDismissalHandler=_finishPreparingForInteractiveDismissalHandler - In the implementation block
@property (nonatomic,copy) id interactiveDismissalCompletionHandler;                                                                                                             //@synthesize interactiveDismissalCompletionHandler=_interactiveDismissalCompletionHandler - In the implementation block
@property (nonatomic,readonly) AVObservationController * _observationController;                                                                                                 //@synthesize _observationController=__observationController - In the implementation block
@property (nonatomic,readonly) AVBehaviorStorage * _behaviorStorage;                                                                                                             //@synthesize _behaviorStorage=__behaviorStorage - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _targetVideoGravitiesForLayoutClass;                                                                                        //@synthesize _targetVideoGravitiesForLayoutClass=__targetVideoGravitiesForLayoutClass - In the implementation block
@property (assign,nonatomic) BOOL _hasBegunObservation;                                                                                                                          //@synthesize _hasBegunObservation=__hasBegunObservation - In the implementation block
@property (assign,setter=_setNumberOfTrackedUserInteractions:,nonatomic) long long _numberOfTrackedUserInteractions;                                                             //@synthesize _numberOfTrackedUserInteractions=__numberOfTrackedUserInteractions - In the implementation block
@property (nonatomic,retain) UIHoverGestureRecognizer * hoverGestureRecognizer;                                                                                                  //@synthesize hoverGestureRecognizer=_hoverGestureRecognizer - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _localizedDiscoverabilityTitleForKeyCommandLocalizationKey;                                                                 //@synthesize _localizedDiscoverabilityTitleForKeyCommandLocalizationKey=__localizedDiscoverabilityTitleForKeyCommandLocalizationKey - In the implementation block
@property (assign,nonatomic) unsigned long long overrideRouteSharingPolicy;                                                                                                      //@synthesize overrideRouteSharingPolicy=_overrideRouteSharingPolicy - In the implementation block
@property (assign,nonatomic) CGSize secondScreenConnectionDisplaySize;                                                                                                           //@synthesize secondScreenConnectionDisplaySize=_secondScreenConnectionDisplaySize - In the implementation block
@property (nonatomic,retain) AVPlayerControllerVolumeAnimator * volumeAnimator;                                                                                                  //@synthesize volumeAnimator=_volumeAnimator - In the implementation block
@property (nonatomic,retain) __AVPlayerLayerView * playerLayerView;                                                                                                              //@synthesize playerLayerView=_playerLayerView - In the implementation block
@property (assign,getter=isReadyForDisplay,nonatomic) BOOL readyForDisplay;                                                                                                      //@synthesize readyForDisplay=_readyForDisplay - In the implementation block
@property (assign,nonatomic) CGRect videoBounds;                                                                                                                                 //@synthesize videoBounds=_videoBounds - In the implementation block
@property (assign,nonatomic) BOOL hasPerformedInitialSetup;                                                                                                                      //@synthesize hasPerformedInitialSetup=_hasPerformedInitialSetup - In the implementation block
@property (assign,nonatomic) BOOL wasInitializedUsingWebKitSPI;                                                                                                                  //@synthesize wasInitializedUsingWebKitSPI=_wasInitializedUsingWebKitSPI - In the implementation block
@property (nonatomic,copy) NSString * overrideRoutingContextUID;                                                                                                                 //@synthesize overrideRoutingContextUID=_overrideRoutingContextUID - In the implementation block
@property (assign,nonatomic) BOOL requiresImmediateAssetInspection;                                                                                                              //@synthesize requiresImmediateAssetInspection=_requiresImmediateAssetInspection - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController;                                                                                                              //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic) BOOL canHidePlaybackControls; 
@property (assign,nonatomic) BOOL showsTimecodes;                                                                                                                                //@synthesize showsTimecodes=_showsTimecodes - In the implementation block
@property (assign,nonatomic) BOOL requiresLinearPlayback; 
@property (assign,nonatomic) BOOL allowsEnteringFullScreen; 
@property (assign,nonatomic) BOOL showsMinimalPlaybackControlsWhenEmbeddedInline; 
@property (assign,nonatomic) BOOL canPausePlaybackWhenExitingFullScreen;                                                                                                         //@synthesize canPausePlaybackWhenExitingFullScreen=_canPausePlaybackWhenExitingFullScreen - In the implementation block
@property (nonatomic,readonly) AVPlayerViewControllerCustomControlsView * customControlsView; 
@property (assign,nonatomic) BOOL playbackControlsIncludeTransportControls; 
@property (assign,nonatomic) BOOL playbackControlsIncludeDisplayModeControls; 
@property (assign,nonatomic) BOOL playbackControlsIncludeVolumeControls;                                                                                                         //@synthesize playbackControlsIncludeVolumeControls=_playbackControlsIncludeVolumeControls - In the implementation block
@property (nonatomic,readonly) CGSize videoDisplaySize; 
@property (nonatomic,readonly) double videoDisplayScale; 
@property (assign,nonatomic) BOOL volumeControlsCanShowSlider; 
@property (nonatomic,readonly) UIViewController * viewControllerForFullScreenPresentation; 
@property (nonatomic,copy) NSArray * customControlItems;                                                                                                                         //@synthesize customControlItems=_customControlItems - In the implementation block
@property (nonatomic,copy) NSString * overrideParentApplicationDisplayIdentifier;                                                                                                //@synthesize overrideParentApplicationDisplayIdentifier=_overrideParentApplicationDisplayIdentifier - In the implementation block
@property (assign,nonatomic) double defaultPlaybackRate; 
@property (assign,nonatomic) BOOL canIncludePlaybackControlsWhenInline;                                                                                                          //@synthesize canIncludePlaybackControlsWhenInline=_canIncludePlaybackControlsWhenInline - In the implementation block
@property (getter=isPictureInPictureActive,nonatomic,readonly) BOOL pictureInPictureActive;                                                                                      //@synthesize pictureInPictureActive=_pictureInPictureActive - In the implementation block
@property (nonatomic,copy) id playButtonHandlerForLazyPlayerLoading; 
@property (nonatomic,retain) AVPlayer * player;                                                                                                                                  //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) BOOL showsPlaybackControls; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (nonatomic,readonly) UIView * contentOverlayView; 
@property (assign,nonatomic) BOOL allowsPictureInPicturePlayback; 
@property (assign,nonatomic) BOOL updatesNowPlayingInfoCenter;                                                                                                                   //@synthesize updatesNowPlayingInfoCenter=_updatesNowPlayingInfoCenter - In the implementation block
@property (assign,nonatomic) BOOL entersFullScreenWhenPlaybackBegins;                                                                                                            //@synthesize entersFullScreenWhenPlaybackBegins=_entersFullScreenWhenPlaybackBegins - In the implementation block
@property (assign,nonatomic) BOOL exitsFullScreenWhenPlaybackEnds;                                                                                                               //@synthesize exitsFullScreenWhenPlaybackEnds=_exitsFullScreenWhenPlaybackEnds - In the implementation block
@property (nonatomic,copy) NSDictionary * pixelBufferAttributes; 
@property (assign,nonatomic,__weak) id<AVPlayerViewControllerDelegate> delegate;                                                                                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect avkit_videoRectInWindow; 
@property (nonatomic,readonly) BOOL avkit_isVisible; 
@property (nonatomic,readonly) UIWindow * avkit_window; 
+(id)keyPathsForValuesAffectingVideoDisplaySize;
+(id)keyPathsForValuesAffectingPixelBufferAttributes;
+(id)keyPathsForValuesAffectingVideoGravity;
+(id)keyPathsForValuesAffectingPictureInPicturePossible;
+(id)keyPathsForValuesAffectingPictureInPictureActive;
+(id)keyPathsForValuesAffectingPictureInPictureSuspended;
+(id)keyPathsForValuesAffectingPictureInPictureWasStartedWhenEnteringBackground;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<AVPlayerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AVPlayerViewControllerDelegate>)arg1 ;
-(void)setView:(id)arg1 ;
-(AVPlayerViewControllerContentView *)contentView;
-(void)loadView;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setHoverGestureRecognizer:(UIHoverGestureRecognizer *)arg1 ;
-(UIHoverGestureRecognizer *)hoverGestureRecognizer;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(BOOL)_requiresCustomPresentationController;
-(BOOL)canBecomeFirstResponder;
-(id)transitioningDelegate;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(long long)preferredWhitePointAdaptivityStyle;
-(void)removeBehavior:(id)arg1 ;
-(void)addBehavior:(id)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(long long)_preferredModalPresentationStyle;
-(AVTransitionController *)_transitionController;
-(BOOL)prefersStatusBarHidden;
-(BOOL)modalPresentationCapturesStatusBarAppearance;
-(id)keyCommands;
-(NSArray *)behaviors;
-(AVPresentationContext *)presentationContext;
-(BOOL)isPictureInPictureActive;
-(BOOL)isPictureInPictureActive;
-(void)_togglePictureInPicture;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(NSString *)videoGravity;
-(void)setVideoGravity:(NSString *)arg1 ;
-(void)togglePlayback:(id)arg1 ;
-(void)toggleMuted:(id)arg1 ;
-(BOOL)isPictureInPicturePossible;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(BOOL)isReadyForDisplay;
-(void)setReadyForDisplay:(BOOL)arg1 ;
-(NSDictionary *)pixelBufferAttributes;
-(void)setPixelBufferAttributes:(NSDictionary *)arg1 ;
-(id)initWithPlayerLayerView:(id)arg1 ;
-(void)setWebKitOverrideRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2 ;
-(void)enterFullScreenAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)exitFullScreenAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startPictureInPicture;
-(void)stopPictureInPicture;
-(BOOL)pictureInPictureWasStartedWhenEnteringBackground;
-(BOOL)showsPlaybackControls;
-(void)setShowsPlaybackControls:(BOOL)arg1 ;
-(void)setAllowsPictureInPicturePlayback:(BOOL)arg1 ;
-(void)setVideoBounds:(CGRect)arg1 ;
-(double)defaultPlaybackRate;
-(void)setDefaultPlaybackRate:(double)arg1 ;
-(CGRect)videoBounds;
-(__AVPlayerLayerView *)playerLayerView;
-(AVObservationController *)_observationController;
-(void)setUpdatesNowPlayingInfoCenter:(BOOL)arg1 ;
-(void)setShowsMinimalPlaybackControlsWhenEmbeddedInline:(BOOL)arg1 ;
-(void)setCanPausePlaybackWhenExitingFullScreen:(BOOL)arg1 ;
-(void)setAllowsEnteringFullScreen:(BOOL)arg1 ;
-(void)setPreferredUnobscuredArea:(long long)arg1 ;
-(void)setVideoGravity:(id)arg1 forLayoutClass:(unsigned long long)arg2 ;
-(void)setPlayButtonHandlerForLazyPlayerLoading:(id)arg1 ;
-(BOOL)updatesNowPlayingInfoCenter;
-(BOOL)showsMinimalPlaybackControlsWhenEmbeddedInline;
-(BOOL)canPausePlaybackWhenExitingFullScreen;
-(BOOL)allowsEnteringFullScreen;
-(UIView *)contentOverlayView;
-(id)playButtonHandlerForLazyPlayerLoading;
-(long long)preferredUnobscuredArea;
-(void)setPlayerLayerView:(__AVPlayerLayerView *)arg1 ;
-(BOOL)allowsPictureInPicturePlayback;
-(CGSize)videoDisplaySize;
-(BOOL)hasActiveTransition;
-(void)setOverrideParentApplicationDisplayIdentifier:(NSString *)arg1 ;
-(void)setRequiresLinearPlayback:(BOOL)arg1 ;
-(BOOL)requiresLinearPlayback;
-(NSString *)overrideParentApplicationDisplayIdentifier;
-(BOOL)avkit_isEffectivelyFullScreen;
-(void)contentOverlayViewDidAddOrRemoveSubview:(id)arg1 ;
-(id)avkit_makePlayerControllerIfNeeded:(id)arg1 ;
-(id)avkit_pictureInPictureViewController;
-(void)avkit_startRoutingVideoToPictureInPictureViewController:(id)arg1 ;
-(void)avkit_stopRoutingVideoToPictureInPictureViewController:(id)arg1 ;
-(CGRect)avkit_videoRectInWindow;
-(BOOL)avkit_isVisible;
-(UIWindow *)avkit_window;
-(void)transitionController:(id)arg1 willBeginPresentingViewController:(id)arg2 ;
-(void)transitionController:(id)arg1 willBeginDismissingViewController:(id)arg2 ;
-(id)transitionController:(id)arg1 targetViewForDismissingViewController:(id)arg2 ;
-(BOOL)transitionController:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3 ;
-(id)transitionControllerPresentedViewBackgroundColor:(id)arg1 ;
-(id)transitionControllerBackgroundViewBackgroundColor:(id)arg1 ;
-(BOOL)transitionControllerCanBeginInteractiveDismissalTransition:(id)arg1 ;
-(BOOL)transitionControllerCanBeginInteractivePresentationTransition:(id)arg1 ;
-(void)transitionControllerBeginInteractivePresentationTransition:(id)arg1 ;
-(void)transitionControllerBeginInteractiveDismissalTransition:(id)arg1 ;
-(void)transitionController:(id)arg1 prepareForFinishingInteractiveTransition:(/*^block*/id)arg2 ;
-(void)transitionController:(id)arg1 transitionWillComplete:(BOOL)arg2 ;
-(void)transitionController:(id)arg1 animationProgressDidChange:(float)arg2 ;
-(void)fullScreenViewControllerWillBeginFullScreenPresentation:(id)arg1 ;
-(void)fullScreenViewControllerWillEndFullScreenPresentation:(id)arg1 ;
-(id)viewForFullScreenViewController:(id)arg1 ;
-(id)playbackContainerViewForFullScreenViewController:(id)arg1 ;
-(void)fullScreenViewController:(id)arg1 viewWillTransitionToSize:(CGSize)arg2 coordinator:(id)arg3 ;
-(BOOL)prefersStatusBarHiddenForFullScreenViewController:(id)arg1 ;
-(long long)preferredStatusStyleForFullScreenViewController:(id)arg1 ;
-(id)keyCommandResponderForFullScreenViewController:(id)arg1 ;
-(void)playbackControlsVisibilityController:(id)arg1 updateStatusBarAppearanceUsingAnimator:(id)arg2 ;
-(void)playbackControlsVisibilityController:(id)arg1 animateAlongsideVisibilityAnimationsWithAnimationCoordinator:(id)arg2 appearingViews:(id)arg3 disappearingViews:(id)arg4 ;
-(void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1 ;
-(void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1 ;
-(void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2 ;
-(void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1 ;
-(void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1 ;
-(void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)setRequiresImmediateAssetInspection:(BOOL)arg1 ;
-(void)setCanIncludePlaybackControlsWhenInline:(BOOL)arg1 ;
-(NSMutableDictionary *)_targetVideoGravitiesForLayoutClass;
-(void)updateVideoBounds;
-(double)videoDisplayScale;
-(void)setShowsTimecodes:(BOOL)arg1 ;
-(id)interactiveContentOverlayView;
-(AVPlayerViewControllerCustomControlsView *)customControlsView;
-(BOOL)hasCustomPlaybackControls;
-(BOOL)canControlPlayback;
-(BOOL)canHidePlaybackControls;
-(void)setCanHidePlaybackControls:(BOOL)arg1 ;
-(BOOL)_inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
-(void)_setInlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused:(BOOL)arg1 ;
-(BOOL)playbackControlsIncludeTransportControls;
-(void)setPlaybackControlsIncludeTransportControls:(BOOL)arg1 ;
-(BOOL)playbackControlsIncludeDisplayModeControls;
-(void)setPlaybackControlsIncludeDisplayModeControls:(BOOL)arg1 ;
-(BOOL)playbackControlsIncludeVolumeControlsControls;
-(void)setPlaybackControlsIncludeVolumeControls:(BOOL)arg1 ;
-(BOOL)volumeControlsCanShowSlider;
-(void)setVolumeControlsCanShowSlider:(BOOL)arg1 ;
-(void)setEntersFullScreenWhenPlaybackBegins:(BOOL)arg1 ;
-(void)flashPlaybackControlsWithDuration:(double)arg1 ;
-(void)setShouldUseNetworkingResourcesForLiveStreamingWhilePaused:(BOOL)arg1 ;
-(void)setCustomControlItems:(NSArray *)arg1 ;
-(id)_activeViewControllerForContentView;
-(UIViewController *)viewControllerForFullScreenPresentation;
-(void)_ensureBehaviorStorage;
-(void)performInitialSetupIfNeededAndPossible;
-(void)performInitialSetup;
-(void)_handleExitFullScreenKeyCommand:(id)arg1 ;
-(void)_handlePlayPauseKeyCommand:(id)arg1 ;
-(void)_handleSkipBack15SecondsKeyCommand:(id)arg1 ;
-(void)_handleSkipAhead15SecondsKeyCommand:(id)arg1 ;
-(void)_handleShowNextFrameKeyCommand:(id)arg1 ;
-(void)_handleGoToBeginningKeyCommand:(id)arg1 ;
-(void)_handleShowPreviousFrameKeyCommand:(id)arg1 ;
-(void)_handleVolumeUpKeyPressedCommand:(id)arg1 ;
-(void)_handleVolumeUpKeyReleasedCommand:(id)arg1 ;
-(void)_handleVolumeDownKeyPressedCommand:(id)arg1 ;
-(void)_handleVolumeDownKeyReleasedCommand:(id)arg1 ;
-(void)_handleRewindKeyPressedCommand:(id)arg1 ;
-(void)_handleRewindKeyReleasedCommand:(id)arg1 ;
-(void)_handleFastForwardKeyPressedCommand:(id)arg1 ;
-(void)_handleFastForwardKeyReleasedCommand:(id)arg1 ;
-(void)_addObservers;
-(BOOL)_isUnsupportedContent;
-(void)_updateUnsupportedContentIndicatorView;
-(BOOL)_isAudioOnlyContent;
-(void)_updateAudioOnlyIndicatorView;
-(void)_updateExternalPlaybackIndicatorView;
-(void)_updatePlaybackControlsController;
-(BOOL)_shouldShowPictureInPictureButton;
-(void)_handleDoubleTapGesture:(id)arg1 ;
-(void)_handleSingleTapGesture:(id)arg1 ;
-(void)_handleDoubleDoubleTapGesture:(id)arg1 ;
-(void)_handleUserInteractionObservationRecognizer:(id)arg1 ;
-(void)_beginTrackingUserInteraction;
-(void)_endTrackingUserInteraction;
-(BOOL)_isTrackingUserInteraction;
-(BOOL)_isTrackingUserInteractionWithInteractiveView;
-(void)_mediaSelectionDoneButtonTapped:(id)arg1 ;
-(void)_notifyOfMetricsCollectionEvent:(long long)arg1 ;
-(BOOL)_delegateRespondsTo:(SEL)arg1 ;
-(void)_contentViewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_handleHoverGestureRecognizer:(id)arg1 ;
-(void)_loadObservationControllerIfNeeded;
-(void)_updateContentOverlayViewSuperview;
-(void)showFullScreenPresentationFromView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enterFullScreenWithCompletion:(/*^block*/id)arg1 ;
-(void)exitFullScreenWithCompletion:(/*^block*/id)arg1 ;
-(UIViewController *)fullScreenViewController;
-(id)_transitionControllerIfLoaded;
-(id)_avkitPreferredTransitioningDelegate;
-(BOOL)_isDescendantOfRootViewController;
-(void)_transitionFromFullScreenWithReason:(long long)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_canEnterFullScreen;
-(void)_transitionToFullScreenAnimated:(BOOL)arg1 interactive:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_transitionFromFullScreenAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_transitionFromFullScreenAnimated:(BOOL)arg1 interactive:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_isTransitioningToOrFromFullScreen;
-(BOOL)_modalPresentationStyleIsFullScreen;
-(BOOL)entersFullScreenWhenPlaybackBegins;
-(BOOL)exitsFullScreenWhenPlaybackEnds;
-(void)setExitsFullScreenWhenPlaybackEnds:(BOOL)arg1 ;
-(AVContentOverlayView *)_actualContentOverlayView;
-(NSNumber *)_defaultPlaybackRateStorage;
-(void)set_defaultPlaybackRateStorage:(NSNumber *)arg1 ;
-(BOOL)shouldUseNetworkingResourcesForLiveStreamingWhilePaused;
-(id)finishPreparingForInteractiveDismissalHandler;
-(void)setFinishPreparingForInteractiveDismissalHandler:(id)arg1 ;
-(id)interactiveDismissalCompletionHandler;
-(void)setInteractiveDismissalCompletionHandler:(id)arg1 ;
-(AVBehaviorStorage *)_behaviorStorage;
-(BOOL)_hasBegunObservation;
-(void)set_hasBegunObservation:(BOOL)arg1 ;
-(long long)_numberOfTrackedUserInteractions;
-(void)_setNumberOfTrackedUserInteractions:(long long)arg1 ;
-(NSMutableDictionary *)_localizedDiscoverabilityTitleForKeyCommandLocalizationKey;
-(unsigned long long)overrideRouteSharingPolicy;
-(void)setOverrideRouteSharingPolicy:(unsigned long long)arg1 ;
-(CGSize)secondScreenConnectionDisplaySize;
-(void)setSecondScreenConnectionDisplaySize:(CGSize)arg1 ;
-(AVPlayerControllerVolumeAnimator *)volumeAnimator;
-(void)setVolumeAnimator:(AVPlayerControllerVolumeAnimator *)arg1 ;
-(BOOL)hasPerformedInitialSetup;
-(void)setHasPerformedInitialSetup:(BOOL)arg1 ;
-(BOOL)wasInitializedUsingWebKitSPI;
-(void)setWasInitializedUsingWebKitSPI:(BOOL)arg1 ;
-(NSString *)overrideRoutingContextUID;
-(void)setOverrideRoutingContextUID:(NSString *)arg1 ;
-(BOOL)requiresImmediateAssetInspection;
-(BOOL)showsTimecodes;
-(BOOL)playbackControlsIncludeVolumeControls;
-(NSArray *)customControlItems;
-(BOOL)canIncludePlaybackControlsWhenInline;
-(AVPlaybackControlsController *)playbackControlsController;
-(AVPlaybackControlsVisibilityController *)playbackControlsVisibilityController;
-(BOOL)isPresentingFullScreenFromInline;
-(BOOL)entersFullScreenWhenTapped;
-(BOOL)isPresentedFullScreen;
-(BOOL)canToggleVideoGravityWhenEmbeddedInline;
-(BOOL)canShowPictureInPictureButton;
-(void)doneButtonTapped:(id)arg1 ;
-(UIView *)iAdPrerollView;
-(void)setPlaybackControlsShouldControlSystemVolume:(BOOL)arg1 ;
-(BOOL)isPictureInPictureSuspended;
-(BOOL)showsExitFullScreenButton;
-(void)setShowsExitFullScreenButton:(BOOL)arg1 ;
-(BOOL)playbackControlsShouldControlSystemVolume;
-(void)setOverrideTransformForProminentPlayButton:(CGAffineTransform)arg1 ;
-(void)setOverrideLayoutMarginsWhenEmbeddedInline:(NSValue *)arg1 ;
-(CGAffineTransform)overrideTransformForProminentPlayButton;
-(NSValue *)overrideLayoutMarginsWhenEmbeddedInline;
-(void)setCanToggleVideoGravityWhenEmbeddedInline:(BOOL)arg1 ;
-(void)setCanShowPictureInPictureButton:(BOOL)arg1 ;
-(void)activeContentViewDidChange;
-(void)videoGravityButtonTapped:(id)arg1 ;
-(void)mediaSelectionButtonTapped:(id)arg1 ;
-(void)fullScreenButtonTapped:(id)arg1 ;
-(void)pictureInPictureButtonTapped:(id)arg1 ;
-(void)prepareForFinishingInteractiveTransition:(/*^block*/id)arg1 ;
-(void)enterAutoplayPhase;
-(void)exitAutoplayPhase;
-(void)flashAutoplayControls;
-(void)setEntersFullScreenWhenTapped:(BOOL)arg1 ;
-(id<AVPlayerViewControllerContentTransitioning_NewsOnly>)contentTransitioningDelegate;
-(void)setContentTransitioningDelegate:(id<AVPlayerViewControllerContentTransitioning_NewsOnly>)arg1 ;
-(void)setVideoGravityForTransitioningContent:(id)arg1 ;
-(void)startContentTransition:(long long)arg1 ;
-(UIView *)contentTransitioningOverlayView;
-(long long)activeContentTransitionType;
-(BOOL)isContentTransitionInteractive;
-(void)setStartNextContentTransitionButtonEnabled:(BOOL)arg1 ;
-(void)setStartPreviousContentTransitionButtonEnabled:(BOOL)arg1 ;
-(void)setCustomContentTransitioningInfoPanel:(UIView *)arg1 ;
-(AVPlayer *)contentTransitioningPlayer;
-(BOOL)isStartNextContentTransitionButtonEnabled;
-(BOOL)isStartPreviousContentTransitionButtonEnabled;
-(UIView *)customContentTransitioningInfoPanel;
-(id)_newsWidgetPlayerBehaviorContext;
-(id)_newsWidgetPlayerLegacyBehavior;
@end

