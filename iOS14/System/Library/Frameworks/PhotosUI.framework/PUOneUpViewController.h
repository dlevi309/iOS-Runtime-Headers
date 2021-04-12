/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PUViewControllerSpecChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>
#import <libobjc.A.dylib/PUTilingViewTileSource.h>
#import <libobjc.A.dylib/PUTilingViewTileTransitionDelegate.h>
#import <libobjc.A.dylib/PUTilingViewScrollDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/PUOneUpTilingLayoutDelegate.h>
#import <libobjc.A.dylib/PUInteractiveDismissalControllerDelegate.h>
#import <libobjc.A.dylib/PUBarsControllerDelegate.h>
#import <libobjc.A.dylib/PUOneUpBarsControllerDelegate.h>
#import <libobjc.A.dylib/PUUserTransformTileViewControllerDelegate.h>
#import <libobjc.A.dylib/PUPlayButtonTileViewControllerDelegate.h>
#import <libobjc.A.dylib/PUDoubleTapZoomControllerDelegate.h>
#import <libobjc.A.dylib/PUAccessoryVisibilityInteractionControllerDelegate.h>
#import <libobjc.A.dylib/PHAirPlayControllerContentProvider.h>
#import <libobjc.A.dylib/PUTilingViewTileUseDelegate.h>
#import <libobjc.A.dylib/PUAccessoryTileViewControllerDelegate.h>
#import <libobjc.A.dylib/PUOneUpAccessoryViewControllersManagerDelegate.h>
#import <libobjc.A.dylib/PUOverOneUpPresentationSessionDelegate.h>
#import <libobjc.A.dylib/PUOverOneUpPresentationSessionViewController.h>
#import <libobjc.A.dylib/PUOneUpGestureRecognizerCoordinatorDelegate.h>
#import <libobjc.A.dylib/PUOneUpAssetTransitionViewController.h>
#import <libobjc.A.dylib/PUAssetDisplayDescriptorNavigator.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PXDiagnosticsEnvironment.h>
#import <libobjc.A.dylib/PUIrisImageTileViewControllerDelegate.h>
#import <libobjc.A.dylib/PXPurgeableController.h>
#import <libobjc.A.dylib/PXContextualNotificationDelegate.h>
#import <libobjc.A.dylib/PUOneUpSuggestionsControllerDelegate.h>
#import <libobjc.A.dylib/PUPreviewActionControllerDelegate.h>
#import <libobjc.A.dylib/PUAssetActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXForcedDismissableViewController.h>
#import <libobjc.A.dylib/PXGestureProviderDelegate.h>
#import <libobjc.A.dylib/PULivePhotoVideoOverlayTileViewControllerDelegate.h>
#import <libobjc.A.dylib/PXUIKeyCommandDelegate.h>
#import <libobjc.A.dylib/PUBrowsingSessionKeyCommandDelegate.h>
#import <libobjc.A.dylib/PUTilingViewControllerTransitionEndPoint.h>

@protocol PUOneUpEventTracker;
@class NSString, PUPreviewActionController, PUBrowsingSession, PUOneUpViewControllerSpec, PUTilingView, PUOneUpBarsController, PUInteractiveSwipeDismissalController, PUInteractivePinchDismissalController, PUDoubleTapZoomController, PUOneUpGestureRecognizerCoordinator, PUBrowsingBackgroundTileViewController, PUReviewScreenScrubberBarTileViewController, PUReviewScreenControlBarTileViewController, PUReviewScreenTopBarTileViewController, PUReviewScreenBarsModel, NSTimer, NSArray, PUOverOneUpPresentationSession, PUAssetDisplayDescriptorNavigationRequest, PUParallaxComputer, PUOneUpAccessoryViewControllersManager, PUAccessoryVisibilityInteractionController, PULoadingIndicatorController, PUAggregateDictionaryTracer, PXUserEventTracker, PUOneUpSuggestionsController, NSUserActivity, CEKBadgeTextView, PUBrowsingOneUpVisibilityHelper, NSMutableSet, UIScrollView, UIViewController;

@interface PUOneUpViewController : UIViewController <PUViewControllerSpecChangeObserver, PUBrowsingViewModelChangeObserver, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewScrollDelegate, UIScrollViewDelegate, PUOneUpTilingLayoutDelegate, PUInteractiveDismissalControllerDelegate, PUBarsControllerDelegate, PUOneUpBarsControllerDelegate, PUUserTransformTileViewControllerDelegate, PUPlayButtonTileViewControllerDelegate, PUDoubleTapZoomControllerDelegate, PUAccessoryVisibilityInteractionControllerDelegate, PHAirPlayControllerContentProvider, PUTilingViewTileUseDelegate, PUAccessoryTileViewControllerDelegate, PUOneUpAccessoryViewControllersManagerDelegate, PUOverOneUpPresentationSessionDelegate, PUOverOneUpPresentationSessionViewController, PUOneUpGestureRecognizerCoordinatorDelegate, PUOneUpAssetTransitionViewController, PUAssetDisplayDescriptorNavigator, PXSettingsKeyObserver, PXDiagnosticsEnvironment, PUIrisImageTileViewControllerDelegate, PXPurgeableController, PXContextualNotificationDelegate, PUOneUpSuggestionsControllerDelegate, PUPreviewActionControllerDelegate, PUAssetActionPerformerDelegate, PXForcedDismissableViewController, PXGestureProviderDelegate, PULivePhotoVideoOverlayTileViewControllerDelegate, PXUIKeyCommandDelegate, PUBrowsingSessionKeyCommandDelegate, PUTilingViewControllerTransitionEndPoint> {

	SCD_Struct_PU17 _needsUpdateFlags;
	NSString* _scrubbingIdentifier;
	PUPreviewActionController* _previewActionController;
	BOOL __needsUpdateSpec;
	BOOL __needsUpdateBarsController;
	BOOL __needsUpdatePreloadInsets;
	BOOL __needsUpdateLayout;
	BOOL __needsUpdateEditMode;
	BOOL __needsUpdatePreferredContentSize;
	BOOL __needsUpdateAudioState;
	BOOL __needsUpdateVideoPlayer;
	BOOL __isPresentedForSecondScreen;
	BOOL __prefersCompactLayoutForSplitScreen;
	BOOL __isIrisPlaying;
	BOOL __shouldDisableTransitionsUntilAppeared;
	BOOL __suppressColorSettings;
	BOOL __shouldShowAccessoryAfterUnlock;
	BOOL __didPlayCurrentLivePhoto;
	BOOL __prefersHomeIndicatorHidden;
	BOOL _isPresentedForPreview;
	BOOL _appearanceTransitionAnimationsDisabled;
	BOOL _allowsPreviewActions;
	int _appearState;
	PUBrowsingSession* _browsingSession;
	/*^block*/id _unlockDeviceStatus;
	/*^block*/id _unlockDeviceHandler;
	unsigned long long __options;
	PUOneUpViewControllerSpec* __spec;
	PUTilingView* __tilingView;
	PUOneUpBarsController* __barsController;
	PUInteractiveSwipeDismissalController* __interactiveSwipeDismissalController;
	PUInteractivePinchDismissalController* __interactivePinchDismissalController;
	PUDoubleTapZoomController* __doubleTapZoomController;
	PUOneUpGestureRecognizerCoordinator* __gestureRecognizerCoordinator;
	PUBrowsingBackgroundTileViewController* __backgroundTileViewController;
	PUReviewScreenScrubberBarTileViewController* __reviewScreenScrubberBarTileViewController;
	PUReviewScreenControlBarTileViewController* __reviewScreenControlBarTileViewController;
	PUReviewScreenTopBarTileViewController* __reviewScreenTopBarTileViewController;
	PUReviewScreenBarsModel* __reviewScreenBarsModel;
	long long __windowInterfaceOrientation;
	PUOneUpViewController* __secondScreenBrowser;
	PUOneUpViewController* __mainOneUpForSecondScreenBrowser;
	NSTimer* __chromeAutoHideTimer;
	NSArray* __hiddenTilesController;
	NSArray* __tileKindsToHide;
	PUOverOneUpPresentationSession* __overOneUpPresentationSession;
	unsigned long long __initialActivity;
	PUAssetDisplayDescriptorNavigationRequest* __currentNavigationRequest;
	double __preloadInsetsBasedOffViewWidth;
	PUParallaxComputer* __parallaxComputer;
	PUOneUpAccessoryViewControllersManager* __accessoryViewControllersManager;
	PUAccessoryVisibilityInteractionController* __accessoryVisibilityInteractionController;
	PULoadingIndicatorController* _loadingIndicatorController;
	PUAggregateDictionaryTracer* _aggregateDictionaryTracer;
	PXUserEventTracker* _userEventTracker;
	id<PUOneUpEventTracker> _eventTracker;
	PUOneUpSuggestionsController* _suggestionController;
	NSUserActivity* _siriActionActivity;
	CEKBadgeTextView* _originalBadgeView;
	PUBrowsingOneUpVisibilityHelper* _browsingOneUpVisibilityHelper;
	NSMutableSet* _activeVideoTileControllers;
	CGSize __layoutReferenceSize;
	CGSize __pendingViewTransitionSize;
	UIEdgeInsets __layoutSafeAreaInsets;

}

@property (nonatomic,readonly) unsigned long long _options;                                                                                                                               //@synthesize _options=__options - In the implementation block
@property (assign,setter=_setNeedsUpdateSpec:,nonatomic) BOOL _needsUpdateSpec;                                                                                                           //@synthesize _needsUpdateSpec=__needsUpdateSpec - In the implementation block
@property (assign,setter=_setNeedsUpdateBarsController:,nonatomic) BOOL _needsUpdateBarsController;                                                                                       //@synthesize _needsUpdateBarsController=__needsUpdateBarsController - In the implementation block
@property (assign,setter=_setNeedsUpdatePreloadInsets:,nonatomic) BOOL _needsUpdatePreloadInsets;                                                                                         //@synthesize _needsUpdatePreloadInsets=__needsUpdatePreloadInsets - In the implementation block
@property (assign,setter=_setNeedsUpdateLayout:,nonatomic) BOOL _needsUpdateLayout;                                                                                                       //@synthesize _needsUpdateLayout=__needsUpdateLayout - In the implementation block
@property (assign,setter=_setNeedsUpdateEditMode:,nonatomic) BOOL _needsUpdateEditMode;                                                                                                   //@synthesize _needsUpdateEditMode=__needsUpdateEditMode - In the implementation block
@property (assign,setter=_setNeedsUpdatePreferredContentSize:,nonatomic) BOOL _needsUpdatePreferredContentSize;                                                                           //@synthesize _needsUpdatePreferredContentSize=__needsUpdatePreferredContentSize - In the implementation block
@property (assign,setter=_setNeedsUpdateAudioState:,nonatomic) BOOL _needsUpdateAudioState;                                                                                               //@synthesize _needsUpdateAudioState=__needsUpdateAudioState - In the implementation block
@property (assign,setter=_setNeedsUpdateVideoPlayer:,nonatomic) BOOL _needsUpdateVideoPlayer;                                                                                             //@synthesize _needsUpdateVideoPlayer=__needsUpdateVideoPlayer - In the implementation block
@property (nonatomic,readonly) PUOneUpViewControllerSpec * _spec;                                                                                                                         //@synthesize _spec=__spec - In the implementation block
@property (assign,setter=_setLayoutReferenceSize:,nonatomic) CGSize _layoutReferenceSize;                                                                                                 //@synthesize _layoutReferenceSize=__layoutReferenceSize - In the implementation block
@property (assign,setter=_setLayoutSafeAreaInsets:,nonatomic) UIEdgeInsets _layoutSafeAreaInsets;                                                                                         //@synthesize _layoutSafeAreaInsets=__layoutSafeAreaInsets - In the implementation block
@property (assign,nonatomic) int appearState;                                                                                                                                             //@synthesize appearState=_appearState - In the implementation block
@property (setter=_setTilingView:,nonatomic,retain) PUTilingView * _tilingView;                                                                                                           //@synthesize _tilingView=__tilingView - In the implementation block
@property (nonatomic,readonly) PUOneUpBarsController * _barsController;                                                                                                                   //@synthesize _barsController=__barsController - In the implementation block
@property (nonatomic,readonly) PUInteractiveSwipeDismissalController * _interactiveSwipeDismissalController;                                                                              //@synthesize _interactiveSwipeDismissalController=__interactiveSwipeDismissalController - In the implementation block
@property (nonatomic,readonly) PUInteractivePinchDismissalController * _interactivePinchDismissalController;                                                                              //@synthesize _interactivePinchDismissalController=__interactivePinchDismissalController - In the implementation block
@property (nonatomic,readonly) PUDoubleTapZoomController * _doubleTapZoomController;                                                                                                      //@synthesize _doubleTapZoomController=__doubleTapZoomController - In the implementation block
@property (nonatomic,readonly) PUOneUpGestureRecognizerCoordinator * _gestureRecognizerCoordinator;                                                                                       //@synthesize _gestureRecognizerCoordinator=__gestureRecognizerCoordinator - In the implementation block
@property (setter=_setBackgroundTileViewController:,nonatomic,retain) PUBrowsingBackgroundTileViewController * _backgroundTileViewController;                                             //@synthesize _backgroundTileViewController=__backgroundTileViewController - In the implementation block
@property (setter=_setReviewScreenScrubberBarTileViewController:,nonatomic,retain) PUReviewScreenScrubberBarTileViewController * _reviewScreenScrubberBarTileViewController;              //@synthesize _reviewScreenScrubberBarTileViewController=__reviewScreenScrubberBarTileViewController - In the implementation block
@property (setter=_setReviewScreenControlBarTileViewController:,nonatomic,retain) PUReviewScreenControlBarTileViewController * _reviewScreenControlBarTileViewController;                 //@synthesize _reviewScreenControlBarTileViewController=__reviewScreenControlBarTileViewController - In the implementation block
@property (setter=_setReviewScreenTopBarTileViewController:,nonatomic,retain) PUReviewScreenTopBarTileViewController * _reviewScreenTopBarTileViewController;                             //@synthesize _reviewScreenTopBarTileViewController=__reviewScreenTopBarTileViewController - In the implementation block
@property (setter=_setReviewScreenBarsModel:,nonatomic,retain) PUReviewScreenBarsModel * _reviewScreenBarsModel;                                                                          //@synthesize _reviewScreenBarsModel=__reviewScreenBarsModel - In the implementation block
@property (assign,setter=_setWindowInterfaceOrientation:,nonatomic) long long _windowInterfaceOrientation;                                                                                //@synthesize _windowInterfaceOrientation=__windowInterfaceOrientation - In the implementation block
@property (setter=_setSecondScreenBrowser:,nonatomic,retain) PUOneUpViewController * _secondScreenBrowser;                                                                                //@synthesize _secondScreenBrowser=__secondScreenBrowser - In the implementation block
@property (assign,setter=_setMainOneUpForSecondScreenBrowser:,nonatomic,__weak) PUOneUpViewController * _mainOneUpForSecondScreenBrowser;                                                 //@synthesize _mainOneUpForSecondScreenBrowser=__mainOneUpForSecondScreenBrowser - In the implementation block
@property (nonatomic,readonly) BOOL _isPresentedForSecondScreen;                                                                                                                          //@synthesize _isPresentedForSecondScreen=__isPresentedForSecondScreen - In the implementation block
@property (nonatomic,readonly) BOOL _prefersCompactLayoutForSplitScreen;                                                                                                                  //@synthesize _prefersCompactLayoutForSplitScreen=__prefersCompactLayoutForSplitScreen - In the implementation block
@property (setter=_setChromeAutoHideTimer:,nonatomic,retain) NSTimer * _chromeAutoHideTimer;                                                                                              //@synthesize _chromeAutoHideTimer=__chromeAutoHideTimer - In the implementation block
@property (setter=_setHiddenTilesController:,nonatomic,retain) NSArray * _hiddenTilesController;                                                                                          //@synthesize _hiddenTilesController=__hiddenTilesController - In the implementation block
@property (setter=_setTileKindsToHide:,nonatomic,retain) NSArray * _tileKindsToHide;                                                                                                      //@synthesize _tileKindsToHide=__tileKindsToHide - In the implementation block
@property (setter=_setOverOneUpPresentationSession:,nonatomic,retain) PUOverOneUpPresentationSession * _overOneUpPresentationSession;                                                     //@synthesize _overOneUpPresentationSession=__overOneUpPresentationSession - In the implementation block
@property (assign,setter=_setInitialActivity:,nonatomic) unsigned long long _initialActivity;                                                                                             //@synthesize _initialActivity=__initialActivity - In the implementation block
@property (setter=_setCurrentNavigationRequest:,nonatomic,retain) PUAssetDisplayDescriptorNavigationRequest * _currentNavigationRequest;                                                  //@synthesize _currentNavigationRequest=__currentNavigationRequest - In the implementation block
@property (assign,setter=_setPendingViewTransitionSize:,nonatomic) CGSize _pendingViewTransitionSize;                                                                                     //@synthesize _pendingViewTransitionSize=__pendingViewTransitionSize - In the implementation block
@property (assign,setter=_setPreloadInsetsBasedOffViewWidth:,nonatomic) double _preloadInsetsBasedOffViewWidth;                                                                           //@synthesize _preloadInsetsBasedOffViewWidth=__preloadInsetsBasedOffViewWidth - In the implementation block
@property (assign,setter=_setIrisPlaying:,nonatomic) BOOL _isIrisPlaying;                                                                                                                 //@synthesize _isIrisPlaying=__isIrisPlaying - In the implementation block
@property (assign,setter=_setShouldDisableTransitionsUntilAppeared:,nonatomic) BOOL _shouldDisableTransitionsUntilAppeared;                                                               //@synthesize _shouldDisableTransitionsUntilAppeared=__shouldDisableTransitionsUntilAppeared - In the implementation block
@property (nonatomic,readonly) PUParallaxComputer * _parallaxComputer;                                                                                                                    //@synthesize _parallaxComputer=__parallaxComputer - In the implementation block
@property (assign,setter=_setSuppressBackdropColorSettings:,nonatomic) BOOL _suppressColorSettings;                                                                                       //@synthesize _suppressColorSettings=__suppressColorSettings - In the implementation block
@property (nonatomic,readonly) PUOneUpAccessoryViewControllersManager * _accessoryViewControllersManager;                                                                                 //@synthesize _accessoryViewControllersManager=__accessoryViewControllersManager - In the implementation block
@property (nonatomic,readonly) PUAccessoryVisibilityInteractionController * _accessoryVisibilityInteractionController;                                                                    //@synthesize _accessoryVisibilityInteractionController=__accessoryVisibilityInteractionController - In the implementation block
@property (assign,setter=_setShouldShowAccessoryAfterUnlock:,nonatomic) BOOL _shouldShowAccessoryAfterUnlock;                                                                             //@synthesize _shouldShowAccessoryAfterUnlock=__shouldShowAccessoryAfterUnlock - In the implementation block
@property (nonatomic,readonly) PULoadingIndicatorController * loadingIndicatorController;                                                                                                 //@synthesize loadingIndicatorController=_loadingIndicatorController - In the implementation block
@property (nonatomic,readonly) PUAggregateDictionaryTracer * aggregateDictionaryTracer;                                                                                                   //@synthesize aggregateDictionaryTracer=_aggregateDictionaryTracer - In the implementation block
@property (nonatomic,readonly) PXUserEventTracker * userEventTracker;                                                                                                                     //@synthesize userEventTracker=_userEventTracker - In the implementation block
@property (nonatomic,readonly) id<PUOneUpEventTracker> eventTracker;                                                                                                                      //@synthesize eventTracker=_eventTracker - In the implementation block
@property (nonatomic,readonly) PUOneUpSuggestionsController * suggestionController;                                                                                                       //@synthesize suggestionController=_suggestionController - In the implementation block
@property (assign,setter=_setDidPlayCurrentLivePhoto:,nonatomic) BOOL _didPlayCurrentLivePhoto;                                                                                           //@synthesize _didPlayCurrentLivePhoto=__didPlayCurrentLivePhoto - In the implementation block
@property (nonatomic,retain) NSUserActivity * siriActionActivity;                                                                                                                         //@synthesize siriActionActivity=_siriActionActivity - In the implementation block
@property (nonatomic,retain) CEKBadgeTextView * originalBadgeView;                                                                                                                        //@synthesize originalBadgeView=_originalBadgeView - In the implementation block
@property (assign,setter=_setPrefersHomeIndicatorHidden:,nonatomic) BOOL _prefersHomeIndicatorHidden;                                                                                     //@synthesize _prefersHomeIndicatorHidden=__prefersHomeIndicatorHidden - In the implementation block
@property (nonatomic,retain) PUBrowsingOneUpVisibilityHelper * browsingOneUpVisibilityHelper;                                                                                             //@synthesize browsingOneUpVisibilityHelper=_browsingOneUpVisibilityHelper - In the implementation block
@property (nonatomic,readonly) NSMutableSet * activeVideoTileControllers;                                                                                                                 //@synthesize activeVideoTileControllers=_activeVideoTileControllers - In the implementation block
@property (nonatomic,readonly) BOOL videoTilesCanPlayVideo; 
@property (assign,setter=setPresentedForPreview:,nonatomic) BOOL isPresentedForPreview;                                                                                                   //@synthesize isPresentedForPreview=_isPresentedForPreview - In the implementation block
@property (assign,nonatomic) BOOL appearanceTransitionAnimationsDisabled;                                                                                                                 //@synthesize appearanceTransitionAnimationsDisabled=_appearanceTransitionAnimationsDisabled - In the implementation block
@property (assign,setter=setAllowsPreviewActions:,nonatomic) BOOL allowsPreviewActions;                                                                                                   //@synthesize allowsPreviewActions=_allowsPreviewActions - In the implementation block
@property (nonatomic,readonly) UIScrollView * ppt_mainScrollView; 
@property (nonatomic,readonly) PUOneUpBarsController * ppt_barsController; 
@property (nonatomic,readonly) PUOverOneUpPresentationSession * ppt_overOneUpPresentationSession; 
@property (nonatomic,readonly) PUPreviewActionController * previewActionController;                                                                                                       //@synthesize previewActionController=_previewActionController - In the implementation block
@property (nonatomic,readonly) UIViewController * ppt_currentAccessoryViewController; 
@property (nonatomic,readonly) PUBrowsingSession * browsingSession;                                                                                                                       //@synthesize browsingSession=_browsingSession - In the implementation block
@property (nonatomic,copy) id unlockDeviceStatus;                                                                                                                                         //@synthesize unlockDeviceStatus=_unlockDeviceStatus - In the implementation block
@property (nonatomic,copy) id unlockDeviceHandler;                                                                                                                                        //@synthesize unlockDeviceHandler=_unlockDeviceHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(double)layout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2 ;
-(id<PUOneUpEventTracker>)eventTracker;
-(BOOL)prefersStatusBarHidden;
-(BOOL)_needsUpdateLayout;
-(PUOneUpViewControllerSpec *)_spec;
-(void)viewWillLayoutSubviews;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(CGRect)contextualNotification:(id)arg1 containingFrameInCoordinateSpace:(id)arg2 ;
-(void)contextualNotificationWasTapped:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(double)px_imageModulationIntensity;
-(void)_beginShowingOriginal;
-(void)_endShowingOriginal;
-(CGRect)_currentAssetRect;
-(void)_setSecondScreenBrowser:(id)arg1 ;
-(void)_updateActiveVideoTilesCanDisplayVideo;
-(BOOL)videoTilesCanPlayVideo;
-(id)_assetReferenceAtIndexPath:(id)arg1 layout:(id)arg2 ;
-(id)_assetViewModelAtIndexPath:(id)arg1 layout:(id)arg2 ;
-(id)_videoPlayerAtIndexPath:(id)arg1 layout:(id)arg2 ;
-(BOOL)_isLayoutAffectedBySpecChange:(id)arg1 ;
-(void)createPreviewActionControllerForManagerIfNeeded:(id)arg1 withPresentingViewController:(id)arg2 ;
-(BOOL)_canAdvertiseKeyCommands;
-(void)_setSuppressBackdropColorSettings:(BOOL)arg1 ;
-(void)presentErrorFromLoadingIndicator:(id)arg1 ;
-(void)presentErrorFromVideoPlaybackAttempt:(id)arg1 ;
-(void)_fixAssetViewModelTileTransformIfNecessary:(id)arg1 ;
-(BOOL)_isSecondScreenBrowserVisible;
-(void)_unhideOverlays;
-(id)pu_debugRows;
-(id)_currentContentTileController;
-(id)_contentTileControllerForAssetReference:(id)arg1 ;
-(id)_trailingContentTileController;
-(id)_leadingContentTileController;
-(id)_currentPlaceholderSnapshotViewForTileController:(id)arg1 ;
-(NSArray *)_tileKindsToHide;
-(CGRect)_currentFrameForTileController:(id)arg1 ;
-(BOOL)_canAttemptNavigationToAssetDisplayDescriptor:(id)arg1 ;
-(void)_performNavigationToAssetDisplayDescriptor:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_notifyTileIsReadyWithTimeOut:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg1 ;
-(UIScrollView *)ppt_mainScrollView;
-(PUOneUpBarsController *)ppt_barsController;
-(void)ppt_toggleAccessoryView;
-(UIViewController *)ppt_currentAccessoryViewController;
-(void)ppt_playCurrentLivePhotoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)ppt_notifyWhenFullQualityIsDisplayedWithTimeout:(double)arg1 handler:(/*^block*/id)arg2 ;
-(id)pu_debugCurrentAsset;
-(id)pu_debugCurrentViewModel;
-(id)_assetDisplayDescriptorForAsset:(id)arg1 ;
-(BOOL)_needsUpdateSpec;
-(void)_setNeedsUpdateSpec:(BOOL)arg1 ;
-(BOOL)_needsUpdateBarsController;
-(void)_setNeedsUpdateBarsController:(BOOL)arg1 ;
-(BOOL)_needsUpdatePreloadInsets;
-(void)_setNeedsUpdatePreloadInsets:(BOOL)arg1 ;
-(BOOL)_needsUpdateEditMode;
-(void)_setNeedsUpdateEditMode:(BOOL)arg1 ;
-(BOOL)_needsUpdatePreferredContentSize;
-(void)_setNeedsUpdatePreferredContentSize:(BOOL)arg1 ;
-(id)unlockDeviceHandler;
-(BOOL)_needsUpdateAudioState;
-(void)_setNeedsUpdateAudioState:(BOOL)arg1 ;
-(PUOneUpBarsController *)_barsController;
-(PUInteractiveSwipeDismissalController *)_interactiveSwipeDismissalController;
-(PUInteractivePinchDismissalController *)_interactivePinchDismissalController;
-(PUOneUpGestureRecognizerCoordinator *)_gestureRecognizerCoordinator;
-(PUBrowsingBackgroundTileViewController *)_backgroundTileViewController;
-(id)keyCommands;
-(void)_setBackgroundTileViewController:(id)arg1 ;
-(PUReviewScreenScrubberBarTileViewController *)_reviewScreenScrubberBarTileViewController;
-(void)_setReviewScreenScrubberBarTileViewController:(id)arg1 ;
-(PUReviewScreenControlBarTileViewController *)_reviewScreenControlBarTileViewController;
-(PUReviewScreenTopBarTileViewController *)_reviewScreenTopBarTileViewController;
-(unsigned long long)_options;
-(void)_setReviewScreenControlBarTileViewController:(id)arg1 ;
-(void)_setReviewScreenTopBarTileViewController:(id)arg1 ;
-(void)_setReviewScreenBarsModel:(id)arg1 ;
-(PUOneUpViewController *)_secondScreenBrowser;
-(PUOneUpViewController *)_mainOneUpForSecondScreenBrowser;
-(void)_setMainOneUpForSecondScreenBrowser:(id)arg1 ;
-(id)tilingViewControllerTransitionTilingViewHostView:(id)arg1 ;
-(BOOL)_prefersCompactLayoutForSplitScreen;
-(NSTimer *)_chromeAutoHideTimer;
-(void)_setChromeAutoHideTimer:(id)arg1 ;
-(NSArray *)_hiddenTilesController;
-(void)_setHiddenTilesController:(id)arg1 ;
-(void)_setTileKindsToHide:(id)arg1 ;
-(PUOverOneUpPresentationSession *)_overOneUpPresentationSession;
-(unsigned long long)_initialActivity;
-(void)_setOverOneUpPresentationSession:(id)arg1 ;
-(void)_setInitialActivity:(unsigned long long)arg1 ;
-(PUAssetDisplayDescriptorNavigationRequest *)_currentNavigationRequest;
-(void)_setCurrentNavigationRequest:(id)arg1 ;
-(double)_preloadInsetsBasedOffViewWidth;
-(void)_setPreloadInsetsBasedOffViewWidth:(double)arg1 ;
-(BOOL)_suppressColorSettings;
-(BOOL)_shouldDisableTransitionsUntilAppeared;
-(void)_setShouldDisableTransitionsUntilAppeared:(BOOL)arg1 ;
-(PUAccessoryVisibilityInteractionController *)_accessoryVisibilityInteractionController;
-(BOOL)_shouldShowAccessoryAfterUnlock;
-(void)_setShouldShowAccessoryAfterUnlock:(BOOL)arg1 ;
-(CEKBadgeTextView *)originalBadgeView;
-(PULoadingIndicatorController *)loadingIndicatorController;
-(PUAggregateDictionaryTracer *)aggregateDictionaryTracer;
-(PUOneUpSuggestionsController *)suggestionController;
-(BOOL)_didPlayCurrentLivePhoto;
-(void)setOriginalBadgeView:(CEKBadgeTextView *)arg1 ;
-(BOOL)_prefersHomeIndicatorHidden;
-(PUBrowsingOneUpVisibilityHelper *)browsingOneUpVisibilityHelper;
-(NSMutableSet *)activeVideoTileControllers;
-(void)setBrowsingOneUpVisibilityHelper:(PUBrowsingOneUpVisibilityHelper *)arg1 ;
-(BOOL)appearanceTransitionAnimationsDisabled;
-(BOOL)allowsPreviewActions;
-(PUPreviewActionController *)previewActionController;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)_setNeedsUpdateVideoPlayer:(BOOL)arg1 ;
-(id)initWithBrowsingSession:(id)arg1 options:(unsigned long long)arg2 initialActivity:(unsigned long long)arg3 ;
-(PUBrowsingSession *)browsingSession;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updateUserActivity;
-(id)tilingView:(id)arg1 tileTransitionCoordinatorForLayoutInvalidationContext:(id)arg2 ;
-(BOOL)contextualNotification:(id)arg1 shouldPassthroughPoint:(CGPoint)arg2 inCoordinateSpace:(id)arg3 ;
-(BOOL)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setLayoutReferenceSize:(CGSize)arg1 ;
-(BOOL)tilingViewCanBypass20069585Check:(id)arg1 ;
-(id)tilingView:(id)arg1 tileTransitionCoordinatorForChangeFromFrame:(CGRect)arg2 toFrame:(CGRect)arg3 duration:(double)arg4 ;
-(void)_updateIfNeeded;
-(void)tilingViewControllerTransition:(id)arg1 abandonTilingView:(id)arg2 toEndPoint:(id)arg3 ;
-(PUTilingView *)_tilingView;
-(id)_currentAssetViewModel;
-(void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(/*^block*/id)arg2 ;
-(void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(/*^block*/id)arg2 options:(unsigned long long)arg3 ;
-(void)oneUpAssetTransition:(id)arg1 animateTransitionWithContext:(id)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(id)interactiveDismissalControllerViewHostingGestureRecognizers:(id)arg1 ;
-(id)interactiveDismissalControllerViewController:(id)arg1 ;
-(BOOL)interactiveDismissalController:(id)arg1 canBeginDismissalAtLocationFromProvider:(id)arg2 ;
-(id)interactiveDismissalControllerDesignatedTileController:(id)arg1 ;
-(id)interactiveDismissalControllerTilingView:(id)arg1 ;
-(void)oneUpAssetTransitionWillBegin:(id)arg1 ;
-(void)oneUpAssetTransitionDidEnd:(id)arg1 ;
-(id)createAssetTransitionInfo;
-(void)setUnlockDeviceStatus:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)irisImageTileViewControllerDidBeginHinting:(id)arg1 ;
-(void)irisImageTileViewControllerDidEndVitality:(id)arg1 ;
-(void)_setWindowInterfaceOrientation:(long long)arg1 ;
-(BOOL)pu_wantsTabBarVisible;
-(BOOL)pu_wantsNavigationBarVisible;
-(void)irisImageTileViewControllerDidEndPlaying:(id)arg1 ;
-(void)irisImageTileViewControllerDidBeginPlaying:(id)arg1 ;
-(id)irisImageTileViewControllerViewHostingGestureRecognizers:(id)arg1 ;
-(id)irisImageTileViewController:(id)arg1 delegateForGestureRecognizer:(id)arg2 ;
-(id)doubleTapZoomControllerTilingView:(id)arg1 ;
-(id)doubleTapZoomController:(id)arg1 delegateForGestureRecognizer:(id)arg2 ;
-(id)doubleTapZoomControllerViewHostingGestureRecognizers:(id)arg1 ;
-(BOOL)doubleTapZoomController:(id)arg1 canDoubleTapBeginAtLocationFromProvider:(id)arg2 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id)barsControllerViewHostingGestureRecognizers:(id)arg1 ;
-(void)barsControllerContentGuideInsetsDidChange:(id)arg1 ;
-(id)barsControllerViewController:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(id)tilingViewControllerTransition:(id)arg1 tilingViewToTransferToEndPoint:(id)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)contentViewControllerForAirPlayController:(id)arg1 ;
-(void)airPlayControllerScreenAvailabilityChanged:(id)arg1 ;
-(long long)preferredAnimationForContextualNotification:(id)arg1 ;
-(id)tilingView:(id)arg1 tileTransitionCoordinatorForReattachedTileControllers:(id)arg2 context:(id)arg3 ;
-(BOOL)wantsContentVisibleAfterUnregisteringWithAirPlayController:(id)arg1 ;
-(CGPoint)tilingView:(id)arg1 initialVisibleOriginWithLayout:(id)arg2 ;
-(void)keyCommandDidRequestToBePerformed:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)setPresentedForPreview:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_setLayoutSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(BOOL)pu_wantsToolbarVisible;
-(void)setUnlockDeviceHandler:(id)arg1 ;
-(void)_setPendingViewTransitionSize:(CGSize)arg1 ;
-(void)_invalidateVideoPlayer;
-(void)tilingViewControllerTransition:(id)arg1 adoptTilingView:(id)arg2 fromEndPoint:(id)arg3 isCancelingTransition:(BOOL)arg4 animationSetupCompletionHandler:(/*^block*/id)arg5 ;
-(void)_updateSpecIfNeeded;
-(id)tilingView:(id)arg1 dataSourceConverterForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 ;
-(PUReviewScreenBarsModel *)_reviewScreenBarsModel;
-(void)_updateLayout:(id)arg1 ;
-(id)unlockDeviceStatus;
-(void)_handleTouchGesture:(id)arg1 ;
-(CGSize)_layoutReferenceSize;
-(unsigned long long)routingOptionsForDestination:(id)arg1 ;
-(id)tilingView:(id)arg1 tileControllerWithIndexPath:(id)arg2 kind:(id)arg3 dataSource:(id)arg4 ;
-(UIEdgeInsets)_layoutSafeAreaInsets;
-(void)setAppearState:(int)arg1 ;
-(CGSize)_pendingViewTransitionSize;
-(void)_arrowKey:(id)arg1 ;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(PUParallaxComputer *)_parallaxComputer;
-(void)browsingSession:(id)arg1 didExecuteActionPerformer:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)browsingSessionDidDismissOneUp:(id)arg1 ;
-(long long)pu_preferredBarStyle;
-(BOOL)_needsUpdate;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)px_determinesPreferredStatusBarHidden;
-(PXUserEventTracker *)userEventTracker;
-(NSUserActivity *)siriActionActivity;
-(BOOL)oneUpAccessoryViewControllersManagerRequestAccessoryDismissal:(id)arg1 ;
-(BOOL)oneUpAccessoryViewControllersManager:(id)arg1 preventRevealInMomentActionForAssetReference:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)assetActionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(id)px_endPointForTransition:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(long long)_windowInterfaceOrientation;
-(double)px_HDRFocus;
-(id)preferredContainerViewForContextualNotification:(id)arg1 ;
-(id)accessoryTileViewControllerViewHostingGestureRecognizers:(id)arg1 ;
-(BOOL)accessoryTileViewControllerWillHideToolbarWhenShowingAccessoryView:(id)arg1 ;
-(id)accessoryTileViewControllerAccessoryViewController:(id)arg1 ;
-(id)accessoryTileViewControllerHostViewController:(id)arg1 ;
-(void)oneUpBarsControllerDidTapTitle:(id)arg1 ;
-(id)overOneUpPresentationSessionCreateIfNeeded:(BOOL)arg1 ;
-(void)oneUpBarsController:(id)arg1 willExecuteActionPerformer:(id)arg2 ;
-(void)oneUpBarsControllerToggleCommentsVisibility:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)accessoryVisibilityInteractionController:(id)arg1 canBeginAtLocationFromProvider:(id)arg2 ;
-(void)accessoryVisibilityInteractionController:(id)arg1 setAccessoryVisible:(BOOL)arg2 changeReason:(long long)arg3 ;
-(void)accessoryVisibilityInteractionControllerDidEnd:(id)arg1 ;
-(void)_didEndTransition;
-(id)accessoryVisibilityInteractionControllerViewHostingGestureRecognizers:(id)arg1 ;
-(BOOL)accessoryVisibilityInteractionController:(id)arg1 isLocationFromProviderInAccessoryContent:(id)arg2 ;
-(void)oneUpBarsController:(id)arg1 didTapPlayPauseButton:(BOOL)arg2 ;
-(void)oneUpBarsControllerDidEndShowingOriginal:(id)arg1 ;
-(void)oneUpBarsControllerDidBeginShowingOriginal:(id)arg1 ;
-(void)oneUpBarsControllerDidChangeShowingPlayPauseButton:(id)arg1 ;
-(void)setSiriActionActivity:(NSUserActivity *)arg1 ;
-(BOOL)oneUpBarsController:(id)arg1 canShowCommentsForAsset:(id)arg2 ;
-(BOOL)oneUpBarsController:(id)arg1 shouldHideToolbarWhenShowingAccessoryViewForAssetReference:(id)arg2 ;
-(BOOL)oneUpBarsController:(id)arg1 shouldTapBeginAtLocationFromProvider:(id)arg2 ;
-(long long)preferredStatusBarUpdateAnimation;
-(void)_setTilingView:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)barsController:(id)arg1 delegateForGestureRecognizer:(id)arg2 ;
-(BOOL)oneUpBarsController:(id)arg1 shouldEnableShowOriginalForAsset:(id)arg2 ;
-(BOOL)oneUpBarsController:(id)arg1 canShowOriginalForAsset:(id)arg2 ;
-(void)oneUpBarsControllerToggleDetailsVisibility:(id)arg1 ;
-(PUDoubleTapZoomController *)_doubleTapZoomController;
-(BOOL)oneUpGestureRecgonizerCoordinator:(id)arg1 shouldAllowIrisGestureAtLocationFromProvider:(id)arg2 ;
-(id)oneUpGestureRecognizerCoordinatorViewHostingTouchingGesture:(id)arg1 ;
-(id)tilingView:(id)arg1 tileTransitionCoordinatorForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 withContext:(id)arg4 ;
-(void)loadView;
-(PUOverOneUpPresentationSession *)ppt_overOneUpPresentationSession;
-(void)setAppearanceTransitionAnimationsDisabled:(BOOL)arg1 ;
-(void)setAllowsPreviewActions:(BOOL)arg1 ;
-(id)contentScrollView;
-(id)initWithBrowsingSession:(id)arg1 options:(unsigned long long)arg2 initialActivity:(unsigned long long)arg3 presentationOrigin:(long long)arg4 ;
-(void)_setNeedsUpdate;
-(void)_updateLayoutIfNeeded;
-(void)_updatePreferredContentSizeIfNeeded;
-(BOOL)_isPresentedForSecondScreen;
-(void)oneUpSuggestionsController:(id)arg1 didSelectSuggestion:(id)arg2 forAssetReference:(id)arg3 ;
-(id)viewControllerForOneUpSuggestionsController:(id)arg1 ;
-(CGRect)oneUpSuggestionsController:(id)arg1 frameForAssetReference:(id)arg2 inCoordinateSpace:(id)arg3 ;
-(BOOL)oneUpSuggestionsController:(id)arg1 canShowSuggestion:(id)arg2 forAssetReference:(id)arg3 ;
-(PUOneUpAccessoryViewControllersManager *)_accessoryViewControllersManager;
-(CGImageRef)livePhotoVideoPlaybackTileViewControllerCurrentGainMapImage:(id)arg1 outGainMapAvailable:(BOOL*)arg2 outGainMapValue:(float*)arg3 ;
-(id)livePhotoVideoPlaybackTileViewControllerCurrentImage:(id)arg1 ;
-(void)livePhotoVideoPlaybackTileViewControllerDidEndPlaying:(id)arg1 ;
-(void)livePhotoVideoPlaybackTileViewControllerWillBeginPlaying:(id)arg1 ;
-(id)livePhotoVideoPlaybackTileViewControllerDisplayTileTransform:(id)arg1 ;
-(BOOL)layout:(id)arg1 disableInitialZoomToFillForItemAtIndexPath:(id)arg2 ;
-(id)layout:(id)arg1 modelTileTransformForItemAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)layout:(id)arg1 shouldScaleToFitSafeInsetsForItemAtIndexPath:(id)arg2 ;
-(BOOL)layout:(id)arg1 shouldShowVideoPlaceholderForItemAtIndexPath:(id)arg2 ;
-(BOOL)layout:(id)arg1 shouldShowAccessoryForItemAtIndexPath:(id)arg2 ;
-(CGPoint)layout:(id)arg1 contentOffsetForItemAtIndexPath:(id)arg2 ;
-(double)alphaForReviewScreenBarsInLayout:(id)arg1 ;
-(CGPoint)layout:(id)arg1 accessoryOffsetForItemAtIndexPath:(id)arg2 ;
-(double)layout:(id)arg1 minimumVisibleAccessoryHeightForItemAtIndexPath:(id)arg2 ;
-(double)layout:(id)arg1 minimumVisibleContentHeightForItemAtIndexPath:(id)arg2 ;
-(CGSize)layout:(id)arg1 badgeSizeForItemAtIndexPath:(id)arg2 contentWidth:(double)arg3 ;
-(int)appearState;
-(CGSize)layout:(id)arg1 assetExplorerReviewScreenBadgeSizeForItemAtIndexPath:(id)arg2 ;
-(CGSize)layout:(id)arg1 loadingIndicatorSizeForItemAtIndexPath:(id)arg2 ;
-(BOOL)layout:(id)arg1 shouldShowBufferingIndicatorForItemAtIndexPath:(id)arg2 ;
-(BOOL)layoutShouldShowReviewScreenScrubberBar:(id)arg1 ;
-(BOOL)layout:(id)arg1 shouldMoveProgressIndicatorForItemAtIndexPath:(id)arg2 ;
-(BOOL)layout:(id)arg1 shouldShowPlayButtonForItemAtIndexPath:(id)arg2 ;
-(CGPoint)tilingView:(id)arg1 targetVisibleOriginForProposedVisibleOrigin:(CGPoint)arg2 withLayout:(id)arg3 ;
-(BOOL)isPresentedForPreview;
-(BOOL)livePhotoVideoPlaybackTileViewControllerCanBeginPlaying:(id)arg1 ;
-(void)purgeIfPossible;
-(CGRect)gestureProviderCurrentAssetRect:(id)arg1 ;
-(void)gestureProvider:(id)arg1 didTriggerEvent:(long long)arg2 ;
-(BOOL)previewActionControllerPreventRevealInMomentAction:(id)arg1 ;
-(id)tilingView:(id)arg1 scrollInfoWithLayout:(id)arg2 ;
-(void)navigateToAssetDisplayDescriptor:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)overOneUpPresentationSessionTilingView:(id)arg1 ;
-(id)overOneUpPresentationSessionCurrentTileController:(id)arg1 ;
-(id)overOneUpPresentationSessionBrowserViewModel:(id)arg1 ;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(id)overOneUpPresentationSessionViewController:(id)arg1 ;
-(BOOL)overOneUpPresentationSessionPresentingViewControllerIsReady:(id)arg1 ;
-(void)overOneUpPresentationSession:(id)arg1 didPresent:(id)arg2 ;
-(void)overOneUpPresentationSessionDidFinish:(id)arg1 ;
-(id)_newOneUpLayout;
-(void)_setNeedsUpdateLayout:(BOOL)arg1 ;
-(void)_setAccessoryVisible:(BOOL)arg1 ;
-(BOOL)playButtonTileViewControllerShouldShowPauseButton:(id)arg1 ;
-(void)playButtonTileViewControllerDidTapButton:(id)arg1 ;
-(double)playButtonTileViewController:(id)arg1 delayForButtonAnimation:(BOOL)arg2 ;
-(BOOL)_isIrisPlaying;
-(void)userTransformTileViewController:(id)arg1 didChangeModelTileTransform:(id)arg2 ;
-(void)userTransformTileViewController:(id)arg1 didChangeIsUserInteracting:(BOOL)arg2 ;
-(BOOL)userTransformTileViewController:(id)arg1 shouldReceiveTouchAtLocationFromProvider:(id)arg2 ;
-(void)_hideOverlays;
-(BOOL)oneUpBarsController:(id)arg1 isAccessoryAvailableForAssetReference:(id)arg2 ;
-(void)viewControllerSpec:(id)arg1 didChange:(id)arg2 ;
-(id)initWithBrowsingSession:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_updatePrefersHomeIndicatorHidden;
-(void)_setPrefersHomeIndicatorHidden:(BOOL)arg1 ;
-(void)_setIrisPlaying:(BOOL)arg1 ;
-(void)_updateLayoutReferenceSize;
-(void)_updateWindowInterfaceOrientation;
-(void)_presentDetailsIndicator;
-(void)_setDidPlayCurrentLivePhoto:(BOOL)arg1 ;
-(void)_invalidatePreloadInsets;
-(void)_updatePreloadInsetsIfNeeded;
-(void)_invalidateSpec;
-(void)_invalidateAudioState;
-(void)dealloc;
-(void)_updateAudioStateIfNeeded;
-(void)_invalidatePreferredContentSize;
-(void)_invalidateBarsControllers;
-(void)_updateBarsControllerIfNeeded;
-(BOOL)_isDrivingScrubbing;
-(void)_updateViewModelWithCurrentScrollPosition;
-(void)_updateReviewScreenBars;
-(void)_invalidateLayout;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_updateBackgroundTileViewController;
-(void)_invalidateEditMode;
-(void)_updateEditModeIfNeeded;
-(void)_invalidateSuggestionController;
-(void)_updateSuggestionControllerIfNeeded;
-(void)_scheduleTimedChromeAutoHide;
-(void)_cancelTimedChromeAutoHide;
-(void)_chromeAutoHideTimerFired:(id)arg1 ;
-(void)_hideChromeOnPlayButtonTapWithItemIsNowPlaying:(BOOL)arg1 buttonIsOverlayed:(BOOL)arg2 ;
-(void)_configureAdoptedTileController:(id)arg1 ;
-(void)_abandonTileController:(id)arg1 ;
-(void)_browsingVideoPlayerDidPlayToEndTime:(id)arg1 ;
-(BOOL)_isAccessoryVisible;
-(BOOL)_shouldMakeChromeVisibleWhenVideoPlayerPlaysToEndTime:(id)arg1 ;
-(BOOL)_isLocationFromProviderInAccessoryArea:(id)arg1 ;
-(BOOL)_isLocationFromProviderOverControl:(id)arg1 ;
-(void)_presentAlertForUnplayableAssetReference:(id)arg1 ;
-(void)_toggleAccessoryVisibility;
-(void)_updateVideoPlayerIfNeeded;
-(void)_toggleDetailsVisibility;
-(void)_toggleCommentsVisibility;
-(long long)_accessoryContentKindForCurrentAsset;
-(BOOL)_shouldUseGlobalAccessoryViewVisibility;
-(id)_currentAccessoryViewController;
-(BOOL)_requireUnlockedDeviceForAccessoryView;
-(BOOL)_needsUpdateVideoPlayer;
-(void)_willBeginTransition;
-(id)initWithBrowsingSession:(id)arg1 ;
@end

