/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <AVKit/AVPlayerViewController.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegate.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegatePrivate.h>
#import <libobjc.A.dylib/HFCameraPlaybackEngineObserver.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <libobjc.A.dylib/HUCameraPlayerAVBehaviorDelegate.h>
#import <libobjc.A.dylib/HUPresentationDelegate.h>
#import <libobjc.A.dylib/HUItemPresentationContainer.h>
#import <libobjc.A.dylib/HUPresentationDelegateHost.h>

@protocol HUPresentationDelegate, HUCameraPlayerViewControllerDelegate;
@class HFCameraItem, HUCameraPlayerAVBehavior, HUCameraPlayerConfiguration, HFItemManager, HFCameraPlaybackEngine, HUCameraStatusOverlayView, AVControlItem, NSArray, AVHomeLoadingButtonControlItem, HUCalendarScrubberContainerViewController, HUCameraPlayerAccessoryViewController, HUCameraPlayerFooterViewController, HUCameraPlayerLiveContentViewController, HUClipScrubberViewController, HUCameraMiniScrubberViewController, HUCameraPlayerPlaceholderContentViewController, NAUILayoutConstraintSet, NSLayoutConstraint, HUCameraRecordingPlayerView, AVPlayerLooper, AVQueuePlayer, UIAlertController, HULegibilityLabel, NSTimer, HMHome, HMCameraProfile, NSString, HFItem;

@interface HUCameraPlayerViewController : AVPlayerViewController <AVPlayerViewControllerDelegate, AVPlayerViewControllerDelegatePrivate, HFCameraPlaybackEngineObserver, HFItemManagerDelegate, HUCameraPlayerAVBehaviorDelegate, HUPresentationDelegate, HUItemPresentationContainer, HUPresentationDelegateHost> {

	BOOL _recordedClipInterfaceAvailable;
	BOOL _enteringFullScreen;
	BOOL _viewVisible;
	BOOL _viewDisappearing;
	BOOL _observingReadyForDisplay;
	BOOL _applicationIsActive;
	BOOL _shouldResumePlaying;
	id<HUPresentationDelegate> presentationDelegate;
	id<HUCameraPlayerViewControllerDelegate> _cameraDelegate;
	HFCameraItem* _cameraItem;
	HUCameraPlayerAVBehavior* _behavior;
	HUCameraPlayerConfiguration* _playerConfiguration;
	double _cornerRadius;
	HFItemManager* _itemManager;
	HFCameraPlaybackEngine* _playbackEngine;
	HUCameraStatusOverlayView* _cameraStatusView;
	AVControlItem* _microphoneControlItem;
	NSArray* _savedControlItems;
	AVHomeLoadingButtonControlItem* _nextControlItem;
	HUCalendarScrubberContainerViewController* _calendarContainerViewController;
	HUCameraPlayerAccessoryViewController* _accessoryViewController;
	HUCameraPlayerFooterViewController* _footerViewController;
	HUCameraPlayerLiveContentViewController* _liveContentViewController;
	HUClipScrubberViewController* _clipScrubberViewController;
	HUCameraMiniScrubberViewController* _miniScrubberViewController;
	HUCameraPlayerPlaceholderContentViewController* _placeholderContentViewController;
	NAUILayoutConstraintSet* _staticConstraintSet;
	NAUILayoutConstraintSet* _statusIndicatorConstraintSet;
	NAUILayoutConstraintSet* _scrubberConstraintSet;
	NAUILayoutConstraintSet* _calendarConstraintSet;
	NSLayoutConstraint* _cameraStatusViewTopConstraint;
	NSLayoutConstraint* _dayLabelTopConstraint;
	HUCameraRecordingPlayerView* _demoPlayerView;
	AVPlayerLooper* _looper;
	AVQueuePlayer* _demoModeQueuePlayer;
	UIAlertController* _airplaneAlertController;
	HULegibilityLabel* _dayLabel;
	HULegibilityLabel* _timeLabel;
	NSTimer* _liveTimer;

}

@property (nonatomic,retain) HFItemManager * itemManager;                                                                    //@synthesize itemManager=_itemManager - In the implementation block
@property (nonatomic,retain) HFCameraItem * cameraItem;                                                                      //@synthesize cameraItem=_cameraItem - In the implementation block
@property (nonatomic,retain) HFCameraPlaybackEngine * playbackEngine;                                                        //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,retain) HUCameraPlayerConfiguration * playerConfiguration;                                              //@synthesize playerConfiguration=_playerConfiguration - In the implementation block
@property (nonatomic,retain) HUCameraStatusOverlayView * cameraStatusView;                                                   //@synthesize cameraStatusView=_cameraStatusView - In the implementation block
@property (nonatomic,retain) HUCameraPlayerAVBehavior * behavior;                                                            //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,retain) AVControlItem * microphoneControlItem;                                                          //@synthesize microphoneControlItem=_microphoneControlItem - In the implementation block
@property (nonatomic,retain) NSArray * savedControlItems;                                                                    //@synthesize savedControlItems=_savedControlItems - In the implementation block
@property (nonatomic,retain) AVHomeLoadingButtonControlItem * nextControlItem;                                               //@synthesize nextControlItem=_nextControlItem - In the implementation block
@property (nonatomic,retain) HUCalendarScrubberContainerViewController * calendarContainerViewController;                    //@synthesize calendarContainerViewController=_calendarContainerViewController - In the implementation block
@property (nonatomic,retain) HUCameraPlayerAccessoryViewController * accessoryViewController;                                //@synthesize accessoryViewController=_accessoryViewController - In the implementation block
@property (nonatomic,retain) HUCameraPlayerFooterViewController * footerViewController;                                      //@synthesize footerViewController=_footerViewController - In the implementation block
@property (nonatomic,retain) HUCameraPlayerLiveContentViewController * liveContentViewController;                            //@synthesize liveContentViewController=_liveContentViewController - In the implementation block
@property (nonatomic,readonly) UIViewController*<HUCameraPlayerScrubbing> activeScrubberViewController; 
@property (nonatomic,retain) HUClipScrubberViewController * clipScrubberViewController;                                      //@synthesize clipScrubberViewController=_clipScrubberViewController - In the implementation block
@property (nonatomic,retain) HUCameraMiniScrubberViewController * miniScrubberViewController;                                //@synthesize miniScrubberViewController=_miniScrubberViewController - In the implementation block
@property (nonatomic,retain) HUCameraPlayerPlaceholderContentViewController * placeholderContentViewController;              //@synthesize placeholderContentViewController=_placeholderContentViewController - In the implementation block
@property (assign,nonatomic) BOOL recordedClipInterfaceAvailable;                                                            //@synthesize recordedClipInterfaceAvailable=_recordedClipInterfaceAvailable - In the implementation block
@property (assign,getter=isEnteringFullScreen,nonatomic) BOOL enteringFullScreen;                                            //@synthesize enteringFullScreen=_enteringFullScreen - In the implementation block
@property (assign,getter=isViewVisible,nonatomic) BOOL viewVisible;                                                          //@synthesize viewVisible=_viewVisible - In the implementation block
@property (assign,getter=isViewDisappearing,nonatomic) BOOL viewDisappearing;                                                //@synthesize viewDisappearing=_viewDisappearing - In the implementation block
@property (assign,getter=isObservingReadyForDisplay,nonatomic) BOOL observingReadyForDisplay;                                //@synthesize observingReadyForDisplay=_observingReadyForDisplay - In the implementation block
@property (assign,nonatomic) BOOL applicationIsActive;                                                                       //@synthesize applicationIsActive=_applicationIsActive - In the implementation block
@property (nonatomic,retain) NAUILayoutConstraintSet * staticConstraintSet;                                                  //@synthesize staticConstraintSet=_staticConstraintSet - In the implementation block
@property (nonatomic,retain) NAUILayoutConstraintSet * statusIndicatorConstraintSet;                                         //@synthesize statusIndicatorConstraintSet=_statusIndicatorConstraintSet - In the implementation block
@property (nonatomic,retain) NAUILayoutConstraintSet * scrubberConstraintSet;                                                //@synthesize scrubberConstraintSet=_scrubberConstraintSet - In the implementation block
@property (nonatomic,retain) NAUILayoutConstraintSet * calendarConstraintSet;                                                //@synthesize calendarConstraintSet=_calendarConstraintSet - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * cameraStatusViewTopConstraint;                                             //@synthesize cameraStatusViewTopConstraint=_cameraStatusViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * dayLabelTopConstraint;                                                     //@synthesize dayLabelTopConstraint=_dayLabelTopConstraint - In the implementation block
@property (nonatomic,retain) HUCameraRecordingPlayerView * demoPlayerView;                                                   //@synthesize demoPlayerView=_demoPlayerView - In the implementation block
@property (nonatomic,retain) AVPlayerLooper * looper;                                                                        //@synthesize looper=_looper - In the implementation block
@property (assign,nonatomic,__weak) AVQueuePlayer * demoModeQueuePlayer;                                                     //@synthesize demoModeQueuePlayer=_demoModeQueuePlayer - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * airplaneAlertController;                                             //@synthesize airplaneAlertController=_airplaneAlertController - In the implementation block
@property (assign,nonatomic) BOOL shouldResumePlaying;                                                                       //@synthesize shouldResumePlaying=_shouldResumePlaying - In the implementation block
@property (nonatomic,retain) HULegibilityLabel * dayLabel;                                                                   //@synthesize dayLabel=_dayLabel - In the implementation block
@property (nonatomic,retain) HULegibilityLabel * timeLabel;                                                                  //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) NSTimer * liveTimer;                                                                            //@synthesize liveTimer=_liveTimer - In the implementation block
@property (assign,nonatomic,__weak) id<HUCameraPlayerViewControllerDelegate> cameraDelegate;                                 //@synthesize cameraDelegate=_cameraDelegate - In the implementation block
@property (nonatomic,readonly) HMHome * home; 
@property (nonatomic,readonly) HMCameraProfile * cameraProfile; 
@property (assign,nonatomic) double cornerRadius;                                                                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HFItem * hu_presentedItem; 
@property (assign,nonatomic,__weak) id<HUPresentationDelegate> presentationDelegate; 
+(id)_legibilityLabelFactory;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(HMHome *)home;
-(void)setCornerRadius:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(HUCameraPlayerAccessoryViewController *)accessoryViewController;
-(void)setAccessoryViewController:(HUCameraPlayerAccessoryViewController *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(double)cornerRadius;
-(HUCameraPlayerAVBehavior *)behavior;
-(void)setBehavior:(HUCameraPlayerAVBehavior *)arg1 ;
-(void)updateViewConstraints;
-(void)setPresentationDelegate:(id<HUPresentationDelegate>)arg1 ;
-(void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2 ;
-(void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2 ;
-(void)playerViewControllerWillStartPictureInPicture:(id)arg1 ;
-(void)playerViewControllerDidStartPictureInPicture:(id)arg1 ;
-(void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2 ;
-(void)playerViewControllerWillStopPictureInPicture:(id)arg1 ;
-(void)playerViewControllerDidStopPictureInPicture:(id)arg1 ;
-(BOOL)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg1 ;
-(void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2 ;
-(id<HUPresentationDelegate>)presentationDelegate;
-(HMCameraProfile *)cameraProfile;
-(void)setCameraDelegate:(id<HUCameraPlayerViewControllerDelegate>)arg1 ;
-(id<HUCameraPlayerViewControllerDelegate>)cameraDelegate;
-(void)playbackControlsDidChangePlayerVolume:(float)arg1 ;
-(void)playbackControlsDidToggleMuted:(BOOL)arg1 ;
-(void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)arg1 ;
-(void)playerViewController:(id)arg1 willTransitionToVisibilityOfPlaybackControls:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)_presentDetailsViewController;
-(void)setTimeLabel:(HULegibilityLabel *)arg1 ;
-(HULegibilityLabel *)timeLabel;
-(HUCameraPlayerFooterViewController *)footerViewController;
-(HFItemManager *)itemManager;
-(void)setItemManager:(HFItemManager *)arg1 ;
-(HFCameraPlaybackEngine *)playbackEngine;
-(void)setPlaybackEngine:(HFCameraPlaybackEngine *)arg1 ;
-(AVPlayerLooper *)looper;
-(void)setLooper:(AVPlayerLooper *)arg1 ;
-(void)setViewVisible:(BOOL)arg1 ;
-(BOOL)isViewVisible;
-(void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdateScrubbingStatus:(BOOL)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdateLiveCameraSource:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdateClipPlayer:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdateClips:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didRemoveClips:(id)arg2 ;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(void)_updateIdleTimer;
-(BOOL)isViewDisappearing;
-(void)setViewDisappearing:(BOOL)arg1 ;
-(void)_handleApplicationDidBecomeActive;
-(void)_handleApplicationWillResignActive;
-(HULegibilityLabel *)dayLabel;
-(id)finishPresentation:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCameraItem:(HFCameraItem *)arg1 ;
-(HFCameraItem *)cameraItem;
-(HFItem *)hu_presentedItem;
-(void)_setupPlaybackEngine;
-(HUCameraPlayerConfiguration *)playerConfiguration;
-(void)_updatedRecordedClipInterfaceAvailabilityAnimated:(BOOL)arg1 ;
-(BOOL)_homeHasSingleCameraProfile;
-(HUCameraStatusOverlayView *)cameraStatusView;
-(void)setPlayerConfiguration:(HUCameraPlayerConfiguration *)arg1 ;
-(void)_removePlaybackHistoryUI;
-(void)_reloadClipsWithUpdate:(BOOL)arg1 ;
-(HUCameraRecordingPlayerView *)demoPlayerView;
-(AVQueuePlayer *)demoModeQueuePlayer;
-(void)_configureFooterViewController;
-(void)_configureCalendarContainerViewControllerIfNeeded;
-(HUCameraPlayerPlaceholderContentViewController *)placeholderContentViewController;
-(void)setCameraStatusView:(HUCameraStatusOverlayView *)arg1 ;
-(void)showCameraPicker;
-(id)_settingsImage;
-(void)_updatePlaceholderContent;
-(void)_updateStateForPlaybackPosition:(id)arg1 animated:(BOOL)arg2 ;
-(void)setMicrophoneControlItem:(AVControlItem *)arg1 ;
-(void)_updateMicrophoneButtonState;
-(AVControlItem *)microphoneControlItem;
-(void)_setupConstraintSets;
-(void)setDemoModeQueuePlayer:(AVQueuePlayer *)arg1 ;
-(void)setDemoPlayerView:(HUCameraRecordingPlayerView *)arg1 ;
-(BOOL)hasRecordedClips;
-(NSLayoutConstraint *)dayLabelTopConstraint;
-(BOOL)isObservingReadyForDisplay;
-(void)setObservingReadyForDisplay:(BOOL)arg1 ;
-(BOOL)_shouldAutoPlayOnViewAppearance;
-(void)toggleDemoModeLiveStreamVideo:(BOOL)arg1 ;
-(HUClipScrubberViewController *)clipScrubberViewController;
-(HUCalendarScrubberContainerViewController *)calendarContainerViewController;
-(UIAlertController *)airplaneAlertController;
-(void)setAirplaneAlertController:(UIAlertController *)arg1 ;
-(BOOL)recordedClipInterfaceAvailable;
-(void)setRecordedClipInterfaceAvailable:(BOOL)arg1 ;
-(void)_configureClipScrubberViewControllerIfNeeded;
-(HUCameraMiniScrubberViewController *)miniScrubberViewController;
-(void)setMiniScrubberViewController:(HUCameraMiniScrubberViewController *)arg1 ;
-(NAUILayoutConstraintSet *)scrubberConstraintSet;
-(NAUILayoutConstraintSet *)calendarConstraintSet;
-(UIViewController*<HUCameraPlayerScrubbing>)activeScrubberViewController;
-(void)setStaticConstraintSet:(NAUILayoutConstraintSet *)arg1 ;
-(void)setCameraStatusViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)cameraStatusViewTopConstraint;
-(void)setStatusIndicatorConstraintSet:(NAUILayoutConstraintSet *)arg1 ;
-(void)setScrubberConstraintSet:(NAUILayoutConstraintSet *)arg1 ;
-(void)setCalendarConstraintSet:(NAUILayoutConstraintSet *)arg1 ;
-(void)_addFooterConstraints;
-(NAUILayoutConstraintSet *)statusIndicatorConstraintSet;
-(NAUILayoutConstraintSet *)staticConstraintSet;
-(double)_cameraStatusViewConstantForTraitCollection;
-(void)_displayPlaybackUIWithUpdate:(BOOL)arg1 ;
-(void)_updateIndicatorColor;
-(BOOL)shouldResumePlaying;
-(BOOL)supportsRecordedClips;
-(HUCameraPlayerLiveContentViewController *)liveContentViewController;
-(void)_updateLivePreviewAspectRatio;
-(void)_displayAirplaneModeAlert;
-(void)_updatePlayerVolumeSliderState;
-(BOOL)_shouldDisableLiveStreamAfterCameraStatusChange;
-(BOOL)applicationIsActive;
-(id)_microphoneGlyphForState:(BOOL)arg1 ;
-(void)setClipScrubberViewController:(HUClipScrubberViewController *)arg1 ;
-(void)_presentNearbyAccessoriesViewController;
-(AVHomeLoadingButtonControlItem *)nextControlItem;
-(void)setSavedControlItems:(NSArray *)arg1 ;
-(void)_dismissEditInterface;
-(void)setDayLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateTimeLabelWithDate:(id)arg1 showingTime:(BOOL)arg2 ;
-(void)_updateDayLabelWithDate:(id)arg1 ;
-(void)setCalendarContainerViewController:(HUCalendarScrubberContainerViewController *)arg1 ;
-(void)setDayLabel:(HULegibilityLabel *)arg1 ;
-(void)_displayAudioControlsIfAvailable;
-(NSArray *)savedControlItems;
-(void)_configureClipScrubberViewController;
-(void)pauseEngineIfNeeded;
-(void)_presentInternalViewController:(id)arg1 ;
-(void)_updateCameraStatus;
-(void)_updateCanShowOverlayState;
-(BOOL)isEnteringFullScreen;
-(id)_imageConfigurationForScrubberType;
-(void)setApplicationIsActive:(BOOL)arg1 ;
-(void)setShouldResumePlaying:(BOOL)arg1 ;
-(void)setEnteringFullScreen:(BOOL)arg1 ;
-(void)_updateStateForScrubbingStatus:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)startLiveTimer;
-(void)cancelLiveTimer;
-(NSTimer *)liveTimer;
-(void)setLiveTimer:(NSTimer *)arg1 ;
-(void)_cleanUpIdleTimerState;
-(double)currentScrubberResolutionForBehavior:(id)arg1 ;
-(void)pictureInPictureDidToggleMicrophone;
-(id)initWithCameraPlayerConfiguration:(id)arg1 ;
-(long long)_imageScaleForScrubberType;
-(void)setNextControlItem:(AVHomeLoadingButtonControlItem *)arg1 ;
-(void)setFooterViewController:(HUCameraPlayerFooterViewController *)arg1 ;
-(void)setLiveContentViewController:(HUCameraPlayerLiveContentViewController *)arg1 ;
-(void)setPlaceholderContentViewController:(HUCameraPlayerPlaceholderContentViewController *)arg1 ;
@end

