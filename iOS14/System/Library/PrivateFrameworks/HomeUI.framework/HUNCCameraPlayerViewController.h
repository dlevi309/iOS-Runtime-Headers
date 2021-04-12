/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <AVKit/AVPlayerViewController.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegate.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegatePrivate.h>
#import <libobjc.A.dylib/HFCameraPlaybackEngineObserver.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <libobjc.A.dylib/HUCameraPlayerAVBehaviorDelegate.h>

@class HFItemManager, HFCameraItem, HFCameraPlaybackEngine, HUCameraPlayerAVBehavior, HUCameraPlayerLiveContentViewController, HUNCCameraScrubberViewController, HUCameraPlayerAccessoryViewController, HUNCCameraPlayerPlaceholderContentViewController, HUCameraBlurViewController, NAUILayoutConstraintSet, HMCameraClip, NSUUID, HMCameraProfile, NSDate, NSString;

@interface HUNCCameraPlayerViewController : AVPlayerViewController <AVPlayerViewControllerDelegate, AVPlayerViewControllerDelegatePrivate, HFCameraPlaybackEngineObserver, HFItemManagerDelegate, HUCameraPlayerAVBehaviorDelegate> {

	BOOL _hu_playbackControlsAreVisible;
	unsigned long long _numberOfAssociatedAccessoriesDisplayed;
	HFItemManager* _itemManager;
	HFCameraItem* _cameraItem;
	HFCameraPlaybackEngine* _playbackEngine;
	HUCameraPlayerAVBehavior* _behavior;
	HUCameraPlayerLiveContentViewController* _liveContentViewController;
	HUNCCameraScrubberViewController* _miniScrubberViewController;
	HUCameraPlayerAccessoryViewController* _accessoryViewController;
	HUNCCameraPlayerPlaceholderContentViewController* _placeholderContentViewController;
	HUCameraBlurViewController* _blurViewController;
	NAUILayoutConstraintSet* _staticConstraintSet;
	NAUILayoutConstraintSet* _scrubberConstraintSet;
	HMCameraClip* _currentClip;
	NSUUID* _notificationUUID;
	NSUUID* _clipUUID;
	HMCameraProfile* _cameraProfile;
	NSDate* _playbackStartDateFromSignificantEvent;

}

@property (nonatomic,retain) HFItemManager * itemManager;                                                                      //@synthesize itemManager=_itemManager - In the implementation block
@property (nonatomic,retain) HFCameraItem * cameraItem;                                                                        //@synthesize cameraItem=_cameraItem - In the implementation block
@property (nonatomic,retain) HFCameraPlaybackEngine * playbackEngine;                                                          //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,retain) HUCameraPlayerAVBehavior * behavior;                                                              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,retain) HUCameraPlayerLiveContentViewController * liveContentViewController;                              //@synthesize liveContentViewController=_liveContentViewController - In the implementation block
@property (nonatomic,retain) HUNCCameraScrubberViewController * miniScrubberViewController;                                    //@synthesize miniScrubberViewController=_miniScrubberViewController - In the implementation block
@property (nonatomic,retain) HUCameraPlayerAccessoryViewController * accessoryViewController;                                  //@synthesize accessoryViewController=_accessoryViewController - In the implementation block
@property (nonatomic,retain) HUNCCameraPlayerPlaceholderContentViewController * placeholderContentViewController;              //@synthesize placeholderContentViewController=_placeholderContentViewController - In the implementation block
@property (nonatomic,retain) HUCameraBlurViewController * blurViewController;                                                  //@synthesize blurViewController=_blurViewController - In the implementation block
@property (nonatomic,retain) NAUILayoutConstraintSet * staticConstraintSet;                                                    //@synthesize staticConstraintSet=_staticConstraintSet - In the implementation block
@property (nonatomic,retain) NAUILayoutConstraintSet * scrubberConstraintSet;                                                  //@synthesize scrubberConstraintSet=_scrubberConstraintSet - In the implementation block
@property (assign,nonatomic,__weak) HMCameraClip * currentClip;                                                                //@synthesize currentClip=_currentClip - In the implementation block
@property (nonatomic,retain) NSUUID * notificationUUID;                                                                        //@synthesize notificationUUID=_notificationUUID - In the implementation block
@property (nonatomic,retain) NSUUID * clipUUID;                                                                                //@synthesize clipUUID=_clipUUID - In the implementation block
@property (nonatomic,retain) HMCameraProfile * cameraProfile;                                                                  //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,retain) NSDate * playbackStartDateFromSignificantEvent;                                                   //@synthesize playbackStartDateFromSignificantEvent=_playbackStartDateFromSignificantEvent - In the implementation block
@property (assign,nonatomic) BOOL hu_playbackControlsAreVisible;                                                               //@synthesize hu_playbackControlsAreVisible=_hu_playbackControlsAreVisible - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfAssociatedAccessoriesDisplayed;                                        //@synthesize numberOfAssociatedAccessoriesDisplayed=_numberOfAssociatedAccessoriesDisplayed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(void)viewWillLayoutSubviews;
-(void)setBehavior:(HUCameraPlayerAVBehavior *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(HUCameraPlayerAVBehavior *)behavior;
-(void)playbackControlsDidChangePlayerVolume:(float)arg1 ;
-(void)playbackControlsDidToggleMuted:(BOOL)arg1 ;
-(void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)arg1 ;
-(NSUUID *)notificationUUID;
-(HMCameraProfile *)cameraProfile;
-(void)playerViewController:(id)arg1 willTransitionToVisibilityOfPlaybackControls:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(HFCameraItem *)cameraItem;
-(void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdateScrubbingStatus:(BOOL)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdateLiveCameraSource:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdateEvents:(id)arg2 ;
-(void)setNotificationUUID:(NSUUID *)arg1 ;
-(HMCameraClip *)currentClip;
-(HFItemManager *)itemManager;
-(NSUUID *)clipUUID;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setItemManager:(HFItemManager *)arg1 ;
-(void)setCameraProfile:(HMCameraProfile *)arg1 ;
-(void)setPlaybackEngine:(HFCameraPlaybackEngine *)arg1 ;
-(HUCameraPlayerAccessoryViewController *)accessoryViewController;
-(HFCameraPlaybackEngine *)playbackEngine;
-(void)setAccessoryViewController:(HUCameraPlayerAccessoryViewController *)arg1 ;
-(void)dealloc;
-(id)home;
-(void)setCameraItem:(HFCameraItem *)arg1 ;
-(void)_setupPlaybackEngine;
-(void)_updatedRecordedClipInterfaceAvailabilityAnimated:(BOOL)arg1 ;
-(HUNCCameraPlayerPlaceholderContentViewController *)placeholderContentViewController;
-(HUCameraBlurViewController *)blurViewController;
-(void)_updateStateForPlaybackPosition:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setupConstraintSets;
-(BOOL)_shouldAutoPlayOnViewAppearance;
-(NAUILayoutConstraintSet *)scrubberConstraintSet;
-(void)setStaticConstraintSet:(NAUILayoutConstraintSet *)arg1 ;
-(void)setScrubberConstraintSet:(NAUILayoutConstraintSet *)arg1 ;
-(NAUILayoutConstraintSet *)staticConstraintSet;
-(HUCameraPlayerLiveContentViewController *)liveContentViewController;
-(void)_updateLivePreviewAspectRatio;
-(void)_updatePlayerVolumeSliderState;
-(void)_updateCameraStatus;
-(BOOL)hu_playbackControlsAreVisible;
-(void)setHu_playbackControlsAreVisible:(BOOL)arg1 ;
-(void)_updateStateForScrubbingStatus:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)currentScrubberResolutionForBehavior:(id)arg1 ;
-(void)setLiveContentViewController:(HUCameraPlayerLiveContentViewController *)arg1 ;
-(void)setPlaceholderContentViewController:(HUNCCameraPlayerPlaceholderContentViewController *)arg1 ;
-(void)setBlurViewController:(HUCameraBlurViewController *)arg1 ;
-(void)loadCameraClip;
-(void)toggleMicrophoneState;
-(void)updateMicrophone;
-(unsigned long long)numberOfAssociatedAccessoriesDisplayed;
-(HUNCCameraScrubberViewController *)miniScrubberViewController;
-(void)setMiniScrubberViewController:(HUNCCameraScrubberViewController *)arg1 ;
-(void)miniScrubberDidToggleLive:(id)arg1 ;
-(NSDate *)playbackStartDateFromSignificantEvent;
-(void)setPlaybackStartDateFromSignificantEvent:(NSDate *)arg1 ;
-(void)setCurrentClip:(HMCameraClip *)arg1 ;
-(void)reloadForCurrentClip;
-(void)addPlaybackEngineObservation;
-(void)updateMicrophoneVisibility;
-(BOOL)shouldDisplayMicrophoneControl;
-(id)initWithCameraProfile:(id)arg1 notificationUUID:(id)arg2 clipUUID:(id)arg3 imageURL:(id)arg4 ;
-(void)reloadAfterNotificationUpdate;
-(void)setNumberOfAssociatedAccessoriesDisplayed:(unsigned long long)arg1 ;
-(void)setClipUUID:(NSUUID *)arg1 ;
@end

