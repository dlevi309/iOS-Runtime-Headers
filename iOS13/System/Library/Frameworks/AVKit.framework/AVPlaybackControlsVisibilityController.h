/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol AVPlaybackControlsVisibilityControllerDelegate;
@class UIViewPropertyAnimator, AVObservationController, NSMapTable, NSTimer, AVPlayerController;

@interface AVPlaybackControlsVisibilityController : NSObject {

	UIViewPropertyAnimator* _visibilityAnimator;
	AVObservationController* _keyValueObservationController;
	NSMapTable* _itemsAndItemInfos;
	long long _numberOfUserInteractionsBeingTracked;
	double _animationDuration;
	BOOL _visibilityNeedsUpdate;
	BOOL _prefersRegularItemsVisible;
	double _prefersItemsVisibleTimerInterval;
	double _prefersItemsVisibleTimerIntervalForQuicklyHiding;
	double _prefersItemsVisibleTimerIntervalForFlashingControls;
	NSTimer* _prefersRegularItemsVisibleTimer;
	BOOL _prefersItemsShownForVolumeChangeVisible;
	double _prefersItemsShownForVolumeChangeVisibleTimerInterval;
	NSTimer* _prefersItemsShownForVolumeChangeVisibleTimer;
	BOOL _hidesItemQuicklyWhenPlaybackBegins;
	BOOL _popoverPresented;
	BOOL _pictureInPictureActive;
	BOOL _scrubbing;
	BOOL _transitionInProgress;
	BOOL _playbackWasPausedAndVisibilityNotToggledAfterPausing;
	BOOL _loadingIndicatorWasShownAndVisibilityNotToggledAfterLoadingIndicatorShown;
	BOOL _isFlashingControlsVisible;
	BOOL _statusBarAppearanceNeedsUpdate;
	id<AVPlaybackControlsVisibilityControllerDelegate> _delegate;
	BOOL _canHideItems;
	BOOL _showsItemsWhileWaitingToPlay;
	BOOL _showsItemsWhenPaused;
	AVPlayerController* _playerController;

}

@property (assign) double animationDuration; 
@property (assign) double hideItemsTimerInterval; 
@property (assign) double hideItemsQuicklyTimerInterval; 
@property (assign) double volumeChangeHidePlaybackControlTimerInterval; 
@property (assign,nonatomic) BOOL showsItemsWhenPaused;                                                //@synthesize showsItemsWhenPaused=_showsItemsWhenPaused - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController;                                    //@synthesize playerController=_playerController - In the implementation block
@property (__weak) id<AVPlaybackControlsVisibilityControllerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL showsItemPreferingStatusBarVisible; 
@property (assign,nonatomic) BOOL canHideItems;                                                        //@synthesize canHideItems=_canHideItems - In the implementation block
@property (assign,getter=isPictureInPictureActive,nonatomic) BOOL pictureInPictureActive;              //@synthesize pictureInPictureActive=_pictureInPictureActive - In the implementation block
@property (assign,getter=isPopoverPresented,nonatomic) BOOL popoverPresented;                          //@synthesize popoverPresented=_popoverPresented - In the implementation block
@property (assign,nonatomic) BOOL showsItemsWhileWaitingToPlay;                                        //@synthesize showsItemsWhileWaitingToPlay=_showsItemsWhileWaitingToPlay - In the implementation block
-(id)init;
-(void)dealloc;
-(id<AVPlaybackControlsVisibilityControllerDelegate>)delegate;
-(void)setDelegate:(id<AVPlaybackControlsVisibilityControllerDelegate>)arg1 ;
-(double)animationDuration;
-(void)setAnimationDuration:(double)arg1 ;
-(BOOL)isPictureInPictureActive;
-(void)toggleVisibility;
-(void)setPictureInPictureActive:(BOOL)arg1 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)flashPlaybackControlsWithDuration:(double)arg1 ;
-(void)activeAudioRouteOrSystemVolumeDidChange;
-(void)startHidingItemQuicklyWhenPlaybackBegins;
-(void)stopHidingItemQuicklyWhenPlaybackBegins;
-(BOOL)showsItemPreferingStatusBarVisible;
-(BOOL)isHidingItemsForTransition;
-(void)beginHidingItemsForTransition;
-(void)endHidingItemsForTransition;
-(void)endHidingItemsForTransitionAndShowImmediately:(BOOL)arg1 ;
-(void)startControllingVisibilityOfItem:(id)arg1 visibilityBehaviorOptions:(long long)arg2 ;
-(void)stopControllingVisibilityOfItem:(id)arg1 ;
-(long long)visibilityBehaviorOptionsOfItem:(id)arg1 ;
-(void)beginTrackingUserInteraction;
-(void)endTrackingUserInteraction;
-(void)didMoveOffScreen;
-(void)_startControllingVisibilityIfNeeded;
-(void)_updateVisibilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setVisibilityNeedsUpdate;
-(void)_updateControlItemVisibilityIfNeeded;
-(void)_performForEachItem:(/*^block*/id)arg1 ;
-(id)_itemsPassingTest:(/*^block*/id)arg1 ;
-(BOOL)_hasItemsThatCanBeShown;
-(BOOL)_hasItemsThatCanBeHidden;
-(void)_showItemsShownForVolumeChange;
-(void)_showItemsShownForVolumeChangeAndHideAfterDelay;
-(void)_startTimerToHideItemsShownForVolumeChange;
-(void)_stopTimerToHideItemsShownForVolumeChange;
-(void)_hideItemsShownForVolumeChange;
-(void)_showRegularItems;
-(void)_showRegularItemsAndHideAfterDelay;
-(void)_showRegularItemsAndHideAfterDelayIfPlaying:(BOOL)arg1 ;
-(void)_startTimerToHideRegularItems;
-(void)_startTimerToHideRegularItemsAfterDelay:(double)arg1 ifPlaying:(BOOL)arg2 ;
-(void)_stopTimerToHideRegularControls;
-(void)_hideRegularItems;
-(void)_stopInitiallyHidingItems;
-(void)_stopInitiallyHidingItemsThatAreShownForVolumeChanges;
-(BOOL)_userIsInteractingWithItems;
-(BOOL)canHideItems;
-(void)setCanHideItems:(BOOL)arg1 ;
-(BOOL)isPopoverPresented;
-(void)setPopoverPresented:(BOOL)arg1 ;
-(BOOL)showsItemsWhileWaitingToPlay;
-(void)setShowsItemsWhileWaitingToPlay:(BOOL)arg1 ;
-(BOOL)showsItemsWhenPaused;
-(void)setShowsItemsWhenPaused:(BOOL)arg1 ;
-(double)hideItemsTimerInterval;
-(void)setHideItemsTimerInterval:(double)arg1 ;
-(double)hideItemsQuicklyTimerInterval;
-(void)setHideItemsQuicklyTimerInterval:(double)arg1 ;
-(double)volumeChangeHidePlaybackControlTimerInterval;
-(void)setVolumeChangeHidePlaybackControlTimerInterval:(double)arg1 ;
-(void)beginShowingItemsDueToIndirectUserInteraction;
-(void)endShowingItemsDueToIndirectUserInteraction;
@end

