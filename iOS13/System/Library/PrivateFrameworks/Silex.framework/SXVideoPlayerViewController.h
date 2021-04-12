/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SXVideoPlaybackObserver.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegate_WebKitOnly.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegatePrivate.h>
#import <libobjc.A.dylib/SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SXVideoAdViewControllerProviding.h>

@protocol SXVideoPlayerViewControllerDelegate, SXVideoPlayerViewControllerDataSource, SXVideoAdProviding, SVVolumeReporting;
@class SXVideoPlaybackQueue, SXPlaybackCoordinator, AVPlayerViewController, SVLearnMoreButton, SXVideoAdSkipButton, SVAdPrivacyButton, UIActivityIndicatorView, SVKeyValueObserver, SXAutomaticFullscreenVideoPlaybackBehaviorManager, SXVideoVolumeObserver, UIGestureRecognizer, NSString, UIViewController;

@interface SXVideoPlayerViewController : UIViewController <SXVideoPlaybackObserver, AVPlayerViewControllerDelegate_WebKitOnly, AVPlayerViewControllerDelegatePrivate, SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate, UIGestureRecognizerDelegate, SXVideoAdViewControllerProviding> {

	BOOL _fullscreen;
	BOOL _playButtonTapped;
	id<SXVideoPlayerViewControllerDelegate> _delegate;
	id<SXVideoPlayerViewControllerDataSource> _dataSource;
	unsigned long long _mode;
	unsigned long long _fullscreenBehavior;
	SXVideoPlaybackQueue* _queue;
	SXPlaybackCoordinator* _coordinator;
	id<SXVideoAdProviding> _videoAd;
	AVPlayerViewController* _playerViewController;
	SVLearnMoreButton* _learnMoreButton;
	SXVideoAdSkipButton* _skipButton;
	SVAdPrivacyButton* _adPrivacyButton;
	UIActivityIndicatorView* _activityIndicatorView;
	SVKeyValueObserver* _videoBoundsObserver;
	SXAutomaticFullscreenVideoPlaybackBehaviorManager* _fullscreenBehaviorManager;
	id<SVVolumeReporting> _volumeReporter;
	SXVideoVolumeObserver* _volumeObserver;
	UIGestureRecognizer* _tapGesture;

}

@property (nonatomic,retain) SXVideoPlaybackQueue * queue;                                                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) SXPlaybackCoordinator * coordinator;                                                          //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) id<SXVideoAdProviding> videoAd;                                                               //@synthesize videoAd=_videoAd - In the implementation block
@property (assign,nonatomic) BOOL playButtonTapped;                                                                        //@synthesize playButtonTapped=_playButtonTapped - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * playerViewController;                                                //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,retain) SVLearnMoreButton * learnMoreButton;                                                          //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (nonatomic,retain) SXVideoAdSkipButton * skipButton;                                                             //@synthesize skipButton=_skipButton - In the implementation block
@property (nonatomic,retain) SVAdPrivacyButton * adPrivacyButton;                                                          //@synthesize adPrivacyButton=_adPrivacyButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;                                              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * videoBoundsObserver;                                                     //@synthesize videoBoundsObserver=_videoBoundsObserver - In the implementation block
@property (nonatomic,readonly) SXAutomaticFullscreenVideoPlaybackBehaviorManager * fullscreenBehaviorManager;              //@synthesize fullscreenBehaviorManager=_fullscreenBehaviorManager - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                                      //@synthesize mode=_mode - In the implementation block
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen;                                                          //@synthesize fullscreen=_fullscreen - In the implementation block
@property (nonatomic,readonly) id<SVVolumeReporting> volumeReporter;                                                       //@synthesize volumeReporter=_volumeReporter - In the implementation block
@property (nonatomic,retain) SXVideoVolumeObserver * volumeObserver;                                                       //@synthesize volumeObserver=_volumeObserver - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * tapGesture;                                                           //@synthesize tapGesture=_tapGesture - In the implementation block
@property (assign,nonatomic,__weak) id<SXVideoPlayerViewControllerDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SXVideoPlayerViewControllerDataSource> dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (assign,nonatomic) unsigned long long fullscreenBehavior;                                                        //@synthesize fullscreenBehavior=_fullscreenBehavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * viewControllerForModalPresentation; 
-(void)dealloc;
-(void)setQueue:(SXVideoPlaybackQueue *)arg1 ;
-(SXVideoPlaybackQueue *)queue;
-(id<SXVideoPlayerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SXVideoPlayerViewControllerDelegate>)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(void)pause;
-(void)finished;
-(unsigned long long)mode;
-(id<SXVideoPlayerViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<SXVideoPlayerViewControllerDataSource>)arg1 ;
-(void)loadView;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(BOOL)isPlaying;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(BOOL)isFullscreen;
-(void)setCoordinator:(SXPlaybackCoordinator *)arg1 ;
-(SXPlaybackCoordinator *)coordinator;
-(void)tapped;
-(void)advance;
-(void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2 ;
-(void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2 ;
-(BOOL)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2 ;
-(void)setFullscreen:(BOOL)arg1 ;
-(AVPlayerViewController *)playerViewController;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(void)playerViewController:(id)arg1 willTransitionToVisibilityOfPlaybackControls:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)playerViewController:(id)arg1 metricsCollectionEventOccured:(long long)arg2 ;
-(SVLearnMoreButton *)learnMoreButton;
-(void)setLearnMoreButton:(SVLearnMoreButton *)arg1 ;
-(id<SXVideoAdProviding>)videoAd;
-(void)setSkipButton:(SXVideoAdSkipButton *)arg1 ;
-(SXVideoAdSkipButton *)skipButton;
-(void)setVideoAd:(id<SXVideoAdProviding>)arg1 ;
-(UIGestureRecognizer *)tapGesture;
-(UIViewController *)viewControllerForModalPresentation;
-(void)setVolumeObserver:(SXVideoVolumeObserver *)arg1 ;
-(SXVideoVolumeObserver *)volumeObserver;
-(id<SVVolumeReporting>)volumeReporter;
-(void)playbackCoordinatorStartedPlayback:(id)arg1 ;
-(void)playbackCoordinatorResumedPlayback:(id)arg1 ;
-(void)playbackCoordinatorPausedPlayback:(id)arg1 ;
-(void)playbackCoordinatorFinishedPlayback:(id)arg1 ;
-(void)playbackCoordinator:(id)arg1 playbackFailedWithError:(id)arg2 ;
-(void)playbackCoordinator:(id)arg1 timeElapsed:(double)arg2 duration:(double)arg3 ;
-(void)playbackCoordinatorStateChanged:(id)arg1 ;
-(void)fullscreenBehaviorManagerRequiresFullscreenPlayback:(id)arg1 ;
-(void)playWithButtonTapped:(BOOL)arg1 ;
-(BOOL)playButtonTapped;
-(id)initWithVolumeReporter:(id)arg1 ;
-(void)setFullscreenBehavior:(unsigned long long)arg1 ;
-(void)enterFullscreenWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)learnMoreButtonTapped:(id)arg1 ;
-(void)adSkipButtonTapped:(id)arg1 ;
-(void)adPrivacyButtonTapped:(id)arg1 ;
-(SVAdPrivacyButton *)adPrivacyButton;
-(void)setupQueueIfNeeded;
-(void)setPlayButtonTapped:(BOOL)arg1 ;
-(void)startPlaybackForCoordinatorIfAllowed:(id)arg1 ;
-(SXAutomaticFullscreenVideoPlaybackBehaviorManager *)fullscreenBehaviorManager;
-(void)refreshControlsForPlaybackCoordinator:(id)arg1 ;
-(void)updateSkipButtonWithThreshold:(unsigned long long)arg1 time:(double)arg2 ;
-(BOOL)playbackAllowedForPlaybackCoordinator:(id)arg1 ;
-(void)transitionToCoordinator:(id)arg1 ;
-(void)exitFullscreenWithCompletionBlock:(/*^block*/id)arg1 ;
-(unsigned long long)fullscreenBehavior;
-(void)setAdPrivacyButton:(SVAdPrivacyButton *)arg1 ;
-(SVKeyValueObserver *)videoBoundsObserver;
-(void)setVideoBoundsObserver:(SVKeyValueObserver *)arg1 ;
@end

