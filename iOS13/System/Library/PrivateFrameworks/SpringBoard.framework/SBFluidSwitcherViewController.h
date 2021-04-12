/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBFluidSwitcherPageContentViewProviderDelegate.h>
#import <libobjc.A.dylib/SBChainableModifierDelegate.h>
#import <libobjc.A.dylib/SBAppSwitcherSnapshotImageCacheDelegate.h>
#import <libobjc.A.dylib/BSUIScrollViewDelegate.h>
#import <libobjc.A.dylib/SBFluidSwitcherItemContainerDelegate.h>
#import <libobjc.A.dylib/SBIconViewObserver.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBSearchGestureObserver.h>
#import <libobjc.A.dylib/SBChainableModifierDelegate.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/PTSettingsKeyPathObserver.h>
#import <libobjc.A.dylib/SBFluidSwitcherScrollProvidingDelegate.h>
#import <libobjc.A.dylib/SBHistorianSwitcherModifierDelegate.h>
#import <libobjc.A.dylib/SBSwitcherLiveContentOverlayCoordinatorDelegate.h>
#import <libobjc.A.dylib/SBAppSwitcherReusableSnapshotViewDelegate.h>
#import <libobjc.A.dylib/SBSwitcherContentViewControlling.h>
#import <libobjc.A.dylib/SBTetheredSwitcherContentViewControlling.h>

@protocol SBSwitcherLiveContentOverlayCoordinating, BSInvalidatable, SBTetheredSwitcherContentViewControlling, SBSwitcherContentViewControllerDelegate, SBSwitcherContentViewControllerDataSource, SBFluidSwitcherScrollProviding;
@class SBBestAppSuggestion, SBLayoutStateTransitionCoordinator, SBSceneManager, NSMutableDictionary, SBFluidSwitcherPageContentViewProvider, SBAppSwitcherSnapshotImageCache, SBAppSwitcherSnapshotLockoutViewControllerProvider, SBAppSwitcherSettings, UIApplicationSceneDeactivationAssertion, NSString, SBWorkspaceApplicationSceneTransitionContext, UINotificationFeedbackGenerator, UITapGestureRecognizer, UIView, SBFluidSwitcherModifierTimelineController, NSArray, UIPanGestureRecognizer, SBFluidSwitcherContentView, SBAppSwitcherScrollView, SBFluidSwitcherLayoutContext, NSMutableArray, SBFluidSwitcherButton, SBFluidSwitcherTitledButton, SBSwitcherModifier, SBFloatingDockBehaviorAssertion, SBFloatingDockWindowLevelAssertion, SBFHomeGrabberSettings, SBViewMorphAnimator, UILabel, BSAnimationSettings;

@interface SBFluidSwitcherViewController : UIViewController <SBFluidSwitcherPageContentViewProviderDelegate, SBChainableModifierDelegate, SBAppSwitcherSnapshotImageCacheDelegate, BSUIScrollViewDelegate, SBFluidSwitcherItemContainerDelegate, SBIconViewObserver, BSDescriptionProviding, UIGestureRecognizerDelegate, SBSearchGestureObserver, SBChainableModifierDelegate, PTSettingsKeyObserver, PTSettingsKeyPathObserver, SBFluidSwitcherScrollProvidingDelegate, SBHistorianSwitcherModifierDelegate, SBSwitcherLiveContentOverlayCoordinatorDelegate, SBAppSwitcherReusableSnapshotViewDelegate, SBSwitcherContentViewControlling, SBTetheredSwitcherContentViewControlling> {

	SBLayoutStateTransitionCoordinator* _layoutStateTransitionCoordinator;
	SBSceneManager* _sceneManager;
	id<SBSwitcherLiveContentOverlayCoordinating> _liveContentOverlayCoordinator;
	NSMutableDictionary* _liveContentOverlays;
	NSMutableDictionary* _appLayoutToHeaderItemController;
	NSRange _visibleItemRange;
	CGPoint _scrollViewLastContentOffset;
	BOOL _scrollViewLastScrolledForward;
	SBFluidSwitcherPageContentViewProvider* _pageContentViewProvider;
	SBAppSwitcherSnapshotImageCache* _snapshotCache;
	SBAppSwitcherSnapshotLockoutViewControllerProvider* _lockoutVCProvider;
	SBAppSwitcherSettings* _settings;
	UIApplicationSceneDeactivationAssertion* _transitionBeginResignActiveAssertion;
	UIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	NSString* _fluidSwitcherAssertionReason;
	NSString* _tapticEngineEmptySwitcherReason;
	NSString* _tapticEngineForcePressPreviewReason;
	NSString* _tapticEngineForcePressCommitReason;
	SBWorkspaceApplicationSceneTransitionContext* _pendingTransitionContext;
	UINotificationFeedbackGenerator* _emptySwitcherFeedbackGenerator;
	UINotificationFeedbackGenerator* _flyInFeedbackGenerator;
	UINotificationFeedbackGenerator* _reduceMotionFeedbackGenerator;
	id<BSInvalidatable> _deferOrientationUpdatesAssertion;
	UITapGestureRecognizer* _dismissTapGestureRecognizer;
	UIView* _crossfadeSnapshotView;
	UIView* _hitTestBlockerView;
	BOOL _currentWallpaperRequiredForSwitcher;
	long long _currentWallpaperStyle;
	BOOL _currentHomeScreenContentRequired;
	long long _currentBackdropBlurType;
	long long _currentKeyboardSuppressionMode;
	SBFluidSwitcherModifierTimelineController* _modifierTimelineController;
	NSArray* _cachedAdjustedAppLayouts;
	/*^block*/id _activeTransitionSubcompletionGenerator;
	BOOL _currentlyRequestingTethering;
	unsigned long long _ignoreNotifyTetheredControllerReasonCount;
	BOOL _isTetheree;
	NSString* _debugName;
	BOOL _isShowingModifierTimeline;
	id<BSInvalidatable> _stateCaptureInvalidatable;
	UIPanGestureRecognizer* _borrowableScrollViewPanGestureRecognizer;
	SBFluidSwitcherContentView* _stashedContentView;
	BOOL _liveContentRasterizationDisabled;
	id<SBTetheredSwitcherContentViewControlling> _tetheredViewController;
	id<SBSwitcherContentViewControllerDelegate> _delegate;
	id<SBSwitcherContentViewControllerDataSource> _dataSource;
	SBBestAppSuggestion* _bestAppSuggestion;
	long long _contentOrientation;
	SBAppSwitcherScrollView* _scrollView;
	SBFluidSwitcherContentView* _contentView;
	SBFluidSwitcherLayoutContext* _layoutContext;
	NSMutableDictionary* _visibleItemContainers;
	NSMutableArray* _hiddenRecycledItemContainers;
	SBFluidSwitcherButton* _plusButton;
	SBFluidSwitcherTitledButton* _reopenClosedWindowsButton;
	SBSwitcherModifier*<SBFluidSwitcherScrollProviding> _rootModifier;
	SBSwitcherModifier* _reduceMotionModifier;
	NSMutableDictionary* _hiddenIconViews;
	SBFloatingDockBehaviorAssertion* _inAppFloatingDockBehaviorAssertion;
	SBFloatingDockBehaviorAssertion* _transientOverlayFloatingDockBehaviorAssertion;
	SBFloatingDockBehaviorAssertion* _switcherFloatingDockBehaviorAssertion;
	SBFloatingDockWindowLevelAssertion* _switcherFloatingDockWindowLevelAssertion;
	SBFloatingDockWindowLevelAssertion* _transientOverlayFloatingDockWindowLevelAssertion;
	SBFHomeGrabberSettings* _grabberSettings;
	SBViewMorphAnimator* _morphToPiPAnimator;
	UILabel* _modifierStackDebugLabel;
	id<BSInvalidatable> _wallpaperRequireAssertion;

}

@property (nonatomic,retain) NSMutableDictionary * visibleItemContainers;                                                        //@synthesize visibleItemContainers=_visibleItemContainers - In the implementation block
@property (nonatomic,retain) NSMutableArray * hiddenRecycledItemContainers;                                                      //@synthesize hiddenRecycledItemContainers=_hiddenRecycledItemContainers - In the implementation block
@property (nonatomic,retain) SBAppSwitcherScrollView * scrollView;                                                               //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) SBFluidSwitcherContentView * contentView;                                                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) SBFluidSwitcherButton * plusButton;                                                                 //@synthesize plusButton=_plusButton - In the implementation block
@property (nonatomic,retain) SBFluidSwitcherTitledButton * reopenClosedWindowsButton;                                            //@synthesize reopenClosedWindowsButton=_reopenClosedWindowsButton - In the implementation block
@property (nonatomic,retain) SBFluidSwitcherLayoutContext * layoutContext;                                                       //@synthesize layoutContext=_layoutContext - In the implementation block
@property (nonatomic,retain) SBSwitcherModifier*<SBFluidSwitcherScrollProviding> rootModifier;                                   //@synthesize rootModifier=_rootModifier - In the implementation block
@property (nonatomic,retain) SBSwitcherModifier * reduceMotionModifier;                                                          //@synthesize reduceMotionModifier=_reduceMotionModifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * hiddenIconViews;                                                              //@synthesize hiddenIconViews=_hiddenIconViews - In the implementation block
@property (nonatomic,retain) SBFloatingDockBehaviorAssertion * inAppFloatingDockBehaviorAssertion;                               //@synthesize inAppFloatingDockBehaviorAssertion=_inAppFloatingDockBehaviorAssertion - In the implementation block
@property (nonatomic,retain) SBFloatingDockBehaviorAssertion * transientOverlayFloatingDockBehaviorAssertion;                    //@synthesize transientOverlayFloatingDockBehaviorAssertion=_transientOverlayFloatingDockBehaviorAssertion - In the implementation block
@property (nonatomic,retain) SBFloatingDockBehaviorAssertion * switcherFloatingDockBehaviorAssertion;                            //@synthesize switcherFloatingDockBehaviorAssertion=_switcherFloatingDockBehaviorAssertion - In the implementation block
@property (nonatomic,retain) SBFloatingDockWindowLevelAssertion * switcherFloatingDockWindowLevelAssertion;                      //@synthesize switcherFloatingDockWindowLevelAssertion=_switcherFloatingDockWindowLevelAssertion - In the implementation block
@property (nonatomic,retain) SBFloatingDockWindowLevelAssertion * transientOverlayFloatingDockWindowLevelAssertion;              //@synthesize transientOverlayFloatingDockWindowLevelAssertion=_transientOverlayFloatingDockWindowLevelAssertion - In the implementation block
@property (nonatomic,retain) SBFHomeGrabberSettings * grabberSettings;                                                           //@synthesize grabberSettings=_grabberSettings - In the implementation block
@property (assign,nonatomic,__weak) SBViewMorphAnimator * morphToPiPAnimator;                                                    //@synthesize morphToPiPAnimator=_morphToPiPAnimator - In the implementation block
@property (nonatomic,retain) UILabel * modifierStackDebugLabel;                                                                  //@synthesize modifierStackDebugLabel=_modifierStackDebugLabel - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> wallpaperRequireAssertion;                                                      //@synthesize wallpaperRequireAssertion=_wallpaperRequireAssertion - In the implementation block
@property (nonatomic,readonly) NSArray * appLayouts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canInterruptActiveTransition; 
@property (nonatomic,copy,readonly) BSAnimationSettings * defaultTransitionAnimationSettings; 
@property (assign,nonatomic,__weak) id<SBSwitcherContentViewControllerDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBSwitcherContentViewControllerDataSource> dataSource;                                    //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) SBBestAppSuggestion * bestAppSuggestion;                                                            //@synthesize bestAppSuggestion=_bestAppSuggestion - In the implementation block
@property (assign,getter=isShowingModifierTimeline,nonatomic) BOOL showModifierTimeline; 
@property (assign,nonatomic) long long contentOrientation;                                                                       //@synthesize contentOrientation=_contentOrientation - In the implementation block
@property (assign,getter=isLiveContentRasterizationDisabled,nonatomic) BOOL liveContentRasterizationDisabled;                    //@synthesize liveContentRasterizationDisabled=_liveContentRasterizationDisabled - In the implementation block
@property (nonatomic,readonly) id<SBTetheredSwitcherContentViewControlling> tetheredViewController;                              //@synthesize tetheredViewController=_tetheredViewController - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id<SBSwitcherContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBSwitcherContentViewControllerDelegate>)arg1 ;
-(CGSize)contentSize;
-(id<SBSwitcherContentViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<SBSwitcherContentViewControllerDataSource>)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isScrolling;
-(SBFluidSwitcherContentView *)contentView;
-(void)setContentView:(SBFluidSwitcherContentView *)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)isUserInteractionEnabled;
-(double)displayCornerRadius;
-(SBAppSwitcherScrollView *)scrollView;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)setScrollView:(SBAppSwitcherScrollView *)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(CGPoint)arg2 translation:(CGPoint)arg3 startPoint:(CGPoint)arg4 locationInView:(CGPoint)arg5 horizontalVelocity:(inout double*)arg6 verticalVelocity:(inout double*)arg7 ;
-(BOOL)hasHomeButton;
-(void)scrollViewDidScroll:(id)arg1 withContext:(SCD_Struct_SB18)arg2 ;
-(CGPoint)scrollViewContentOffset;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(BOOL)isReduceMotionEnabled;
-(SBBestAppSuggestion *)bestAppSuggestion;
-(SBFluidSwitcherLayoutContext *)layoutContext;
-(void)setLayoutContext:(SBFluidSwitcherLayoutContext *)arg1 ;
-(SBFluidSwitcherButton *)plusButton;
-(void)setPlusButton:(SBFluidSwitcherButton *)arg1 ;
-(void)_updateLiveContentRasterization;
-(void)setContentOrientation:(long long)arg1 ;
-(long long)contentOrientation;
-(void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2 ;
-(void)searchGesture:(id)arg1 startedShowing:(BOOL)arg2 ;
-(void)iconViewWasRecycled:(id)arg1 ;
-(double)minimumHomeScreenScale;
-(BOOL)isShowingSpotlightOrTodayView;
-(id)medusaSettings;
-(id)handleGestureDidBegin:(id)arg1 ;
-(id)handleGestureDidEnd:(id)arg1 ;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(NSArray *)appLayouts;
-(id)switcherSettings;
-(double)switcherCardScale;
-(CGRect)switcherViewBounds;
-(BOOL)isRTLEnabled;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(CGRect)containerViewBounds;
-(void)_resetLastScrollViewState;
-(void)_updateModifierTimelinePresence;
-(void)reduceMotionStatusDidChange:(id)arg1 ;
-(void)folderExpansionAnimationWillBegin:(id)arg1 ;
-(void)folderScrolledEnoughToClipSwitcherIconView:(id)arg1 ;
-(id)initWithRootModifier:(id)arg1 liveContentOverlayCoordinator:(id)arg2 debugName:(id)arg3 ;
-(void)_updateSnapshotCacheReloadingForActiveInterfaceOrientationChange;
-(void)_setupContentAndTransientViews;
-(void)_rebuildCachedAdjustedAppLayouts;
-(void)_updateHeaderItemsLabelColor;
-(void)_handleDismissTapGesture:(id)arg1 ;
-(NSMutableDictionary *)visibleItemContainers;
-(unsigned long long)numberOfAppLayouts;
-(double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreen;
-(double)floatingDockHeight;
-(double)floatingDockViewTopMargin;
-(BOOL)isFloatingDockFullyPresented;
-(id)_itemContainerForAppLayoutIfExists:(id)arg1 ;
-(CGRect)iconImageFrameForAppLayout:(id)arg1 ;
-(id)iconViewForAppLayout:(id)arg1 ;
-(CGRect)_frameForFloatingAppLayoutInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2 ;
-(SBViewMorphAnimator *)morphToPiPAnimator;
-(id)_dispatchEventAndReturnAction:(id)arg1 ;
-(void)_updateLayoutForInterfaceOrientation:(long long)arg1 ;
-(double)snapshotScale;
-(void)acquiredViewController:(id)arg1 forTransientOverlayAppLayout:(id)arg2 ;
-(void)relinquishTransientOverlayViewController:(id)arg1 ;
-(id)_unadjustedAppLayouts;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(BOOL)shouldRubberbandHomeGrabberView;
-(void)_updateAppStatusBarAndHomeGrabberVisibilityAnimated:(BOOL)arg1 ;
-(BSAnimationSettings *)defaultTransitionAnimationSettings;
-(SBSwitcherModifier*<SBFluidSwitcherScrollProviding>)rootModifier;
-(void)performTransitionWithContext:(id)arg1 animated:(BOOL)arg2 alongsideAnimationHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleModifierAction:(id)arg1 ;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1 ;
-(void)_setupLiveContentOverlayForAppLayout:(id)arg1 itemContainer:(id)arg2 overlay:(id)arg3 ;
-(BOOL)areLiveContentOverlayUpdatesSuspended;
-(void)setLiveContentOverlayUpdatesSuspended:(BOOL)arg1 ;
-(void)_configureApplicationAndTransientOverlayDockBehaviorAssertionsForContext:(id)arg1 ;
-(BOOL)_isLayoutStateSwitcher:(id)arg1 allowTransitions:(BOOL)arg2 ;
-(void)_updateVisibleItemsLayoutAndStyleWithBehaviorMode:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setTetheredContentView:(id)arg1 ;
-(void)_updateScrollViewScrollEnabled;
-(void)_performWithoutNotifyingTetheredViewController:(/*^block*/id)arg1 ;
-(void)_ensureCardSubviewOrdering;
-(BOOL)_isScrollingConsideringTetheredSwitcher:(BOOL)arg1 ;
-(void)_dispatchEventAndHandleAction:(id)arg1 ;
-(id)_itemContainerAtLocation:(CGPoint)arg1 ;
-(void)_scrollToAppLayout:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setupMorphToPiPIfNeededForTransitionContext:(id)arg1 ;
-(id)_transitionEventForTransitionWithContext:(id)arg1 identifier:(id)arg2 phase:(unsigned long long)arg3 animated:(BOOL)arg4 ;
-(void)_prepareForCrossfadeIfNeeded;
-(id)_rotationAnimationSettingsForTransitionContext:(id)arg1 ;
-(void)tetheredViewController:(id)arg1 didPerformTransitionWithMode:(long long)arg2 ;
-(void)_performCrossfadeIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)setMorphToPiPAnimator:(SBViewMorphAnimator *)arg1 ;
-(void)_cancelInProcessAnimations;
-(void)_makeAppLayoutVisibleForTransitionWithContext:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(double)_delayForTransitionWithContext:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setScrollViewContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isPerformingMatchMoveToIconView;
-(void)_temporarilyHideMatchMovedZoomDownAnimationViewAnimated:(BOOL)arg1 ;
-(void)_updateVisibleItems;
-(SBFloatingDockBehaviorAssertion *)inAppFloatingDockBehaviorAssertion;
-(void)setInAppFloatingDockBehaviorAssertion:(SBFloatingDockBehaviorAssertion *)arg1 ;
-(id)_appLayoutForWorkspaceTransientOverlay:(id)arg1 ;
-(id)_activeTransientOverlayPresentedAppLayout;
-(void)_updateLayoutWithBehaviorMode:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateStyleWithBehaviorMode:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateScrollViewSizeAndSpacing;
-(void)_layoutVisibleItemsWithBehaviorMode:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_layoutAppLayout:(id)arg1 behaviorMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateContentViewPassesTouchesThrough;
-(BOOL)_appLayoutWantsToBeKeptInViewHierarchy:(id)arg1 ;
-(BOOL)_removeVisibleItemContainerForAppLayout:(id)arg1 ;
-(void)_addVisibleItemContainerForAppLayout:(id)arg1 ;
-(void)_unblurItemContainer:(id)arg1 ;
-(BOOL)_allowsHeaderItemsForAppLayout:(id)arg1 ;
-(BOOL)_shouldItemContainersUseDarkLabels;
-(void)_applyStyleToItemContainer:(id)arg1 withMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateWallpaperStyle;
-(void)_updateHomeScreenContentRequirement;
-(void)_updateBackdropType;
-(void)_applyStyleToVisibleItemContainersWithMode:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updatePlusButtonStyleWithMode:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateReopenClosedWindowsButtonWithMode:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)_appLayoutForItemContainerIfExists:(id)arg1 ;
-(void)_applyStyleToLiveContentOverlay:(id)arg1 forItemContainer:(id)arg2 ;
-(void)setTetheredScrollViewContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(long long)switcherInterfaceOrientation;
-(CGRect)_frameForItemWithRole:(long long)arg1 inMainAppLayout:(id)arg2 interfaceOrientation:(long long)arg3 ;
-(CGRect)_frameForInlineAppExposeItemAspectFill:(BOOL)arg1 ;
-(long long)homeScreenInterfaceOrientation;
-(id)handleGestureDidUpdate:(id)arg1 ;
-(id)_createWorkspaceTransientOverlayForAppLayout:(id)arg1 ;
-(void)_updateStatusBarAndHomeGrabberVisibilityForAppLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)_acquireResignActiveAssertionWithReason:(long long)arg1 ;
-(void)_acquireKeyboardSuppressionAssertionForMode:(long long)arg1 ;
-(void)_handlePlusButtonTapped:(id)arg1 ;
-(void)handleReopenClosedWindowsButtonTapped:(id)arg1 ;
-(void)_updateReopenClosedWindowsButtonText;
-(long long)numberOfHiddenAppLayoutsForBundleIdentifier:(id)arg1 ;
-(void)_updateAppExposeAccessoryButtonsExtendedTouchRegions;
-(void)prepareToReopenClosedWindowsWithCompletion:(/*^block*/id)arg1 ;
-(id<BSInvalidatable>)wallpaperRequireAssertion;
-(void)setWallpaperRequireAssertion:(id<BSInvalidatable>)arg1 ;
-(/*^block*/id)_sceneDeactivationPredicateMatchingAppLayouts;
-(BOOL)_shouldInterruptPresentationAndDismiss;
-(SBFloatingDockBehaviorAssertion *)switcherFloatingDockBehaviorAssertion;
-(void)setSwitcherFloatingDockBehaviorAssertion:(SBFloatingDockBehaviorAssertion *)arg1 ;
-(void)_updateFloatingDockBehaviorAssertion;
-(void)_updateTetheredScrolling;
-(void)_updateSpringBoardStatusBarAssertionAnimated:(BOOL)arg1 ;
-(void)_updateAsynchronousSurfaceRetentionAssertion;
-(void)_updateResignActiveAssertion;
-(void)_updateKeyboardSuppressionAssertion;
-(void)_updateFloatingDockWindowLevelAssertion;
-(void)_updatePlusButtonPresence;
-(void)_updateReopenClosedWindowsButtonPresence;
-(void)_updateHomeScreenCursorInteractions;
-(void)_performModifierAction:(id)arg1 ;
-(void)_performModifierPerformTransitionAction:(id)arg1 ;
-(void)_performModifierCompletionAction:(id)arg1 ;
-(void)_performModifierReachabilityAction:(id)arg1 ;
-(void)_performModifierHapticAction:(id)arg1 ;
-(void)_performModifierInjectVelocityAction:(id)arg1 ;
-(void)_performModifierEmitStudyLogAction:(id)arg1 ;
-(void)_performModifierEmitSBEventAction:(id)arg1 ;
-(void)_performModifierUpdateLayoutAction:(id)arg1 ;
-(void)_performModifierScrollToAppLayoutAction:(id)arg1 ;
-(void)_performModifierIconOverlayVisibilityUpdateAction:(id)arg1 ;
-(void)_performModifierIconViewVisibilityUpdateAction:(id)arg1 ;
-(void)_performModifierMatchMoveToIconViewAction:(id)arg1 ;
-(void)_performModifierTimerEventAction:(id)arg1 ;
-(void)_performModifierInvalidateAdjustedAppLayoutsAction:(id)arg1 ;
-(void)_performModifierDosidoScaleAnimationAction:(id)arg1 ;
-(void)_performBlurItemContainerAction:(id)arg1 ;
-(void)_performActivatePlusButtonSwitcherModifierAction:(id)arg1 ;
-(void)_performModifierInvalidateReopenButtonTextAction:(id)arg1 ;
-(void)_performModifierGroupAction:(id)arg1 ;
-(void)_warmupEmptyAppSwitcherHaptic;
-(void)_actuateEmptyAppSwitcherHaptic;
-(void)_coolDownEmptyAppSwitcherHaptic;
-(id)activatingDisplayItemForAppLayout:(id)arg1 ;
-(id)iconLeafIdentifierForDisplayItem:(id)arg1 ;
-(CGSize)defaultHomeScreenIconSize;
-(void)_performContentViewScaleAnimationForDosido;
-(void)_blurItemContainerWithAnimation:(id)arg1 ;
-(void)_updateModifierStackDebugLabel;
-(BOOL)hasItemContainerAtLocationInContentView:(CGPoint)arg1 ;
-(long long)orientationForPageViewFromProvider:(id)arg1 ;
-(CGSize)sizeForAppLayout:(id)arg1 fromProvider:(id)arg2 ;
-(id)containerViewControllerForPageViewFromProvider:(id)arg1 ;
-(id)viewControllerForTransientOverlayAppLayout:(id)arg1 fromProvider:(id)arg2 ;
-(id)delegateForForSnapshotPageViewFromProvider:(id)arg1 ;
-(id)appLayoutsForImageCache:(id)arg1 ;
-(NSRange)visibleAppLayoutRangeForImageCache:(id)arg1 ;
-(BOOL)biasForwardForImageCache:(id)arg1 ;
-(id)highPriorityAppLayoutsForImageCache:(id)arg1 ;
-(long long)orientationForSnapshotOfAppLayout:(id)arg1 inImageCache:(id)arg2 ;
-(double)scaleForDownscaledSnapshotsForImageCache:(id)arg1 ;
-(id)appLayoutsForWhichToGenerateFullSizeSnapshotsInImageCache:(id)arg1 ;
-(id)defaultAppLayoutsForImageCache:(id)arg1 ;
-(CGSize)snapshotSizeForItemWithRole:(long long)arg1 inAppLayout:(id)arg2 interfaceOrientation:(long long)arg3 inImageCache:(id)arg4 ;
-(void)killContainer:(id)arg1 forReason:(long long)arg2 ;
-(BOOL)canSelectContainer:(id)arg1 numberOfTaps:(long long)arg2 ;
-(void)didSelectContainer:(id)arg1 ;
-(CGRect)frameForPageViewOfContainer:(id)arg1 fullyPresented:(BOOL)arg2 ;
-(void)scrollViewKillingProgressUpdated:(double)arg1 ofContainer:(id)arg2 ;
-(BOOL)shouldUseBackgroundWallpaperTreatmentForItemContainer:(id)arg1 ;
-(CGPoint)scrollProvidingModifier:(id)arg1 contentOffsetVelocityConsideringNextContentOffset:(CGPoint)arg2 ;
-(CGPoint)scrollProvidingModifier:(id)arg1 convertScrollViewPointToContainerViewCoordinateSpace:(CGPoint)arg2 ;
-(void)historianModifier:(id)arg1 didRecordEntry:(id)arg2 ;
-(void)addLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2 animated:(BOOL)arg3 ;
-(void)removeLiveContentOverlayForAppLayout:(id)arg1 animated:(BOOL)arg2 ;
-(id)parentViewControllerForContentOverlay;
-(CGRect)layoutFrameForItemWithRole:(long long)arg1 inAppLayout:(id)arg2 interfaceOrientation:(long long)arg3 forSnapshotView:(id)arg4 ;
-(BOOL)canInterruptActiveTransition;
-(double)snapshotScaleForSceneHandle:(id)arg1 ;
-(BOOL)shouldAddAppLayoutToFront:(id)arg1 forTransitionWithContext:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(BOOL)isWindowVisible;
-(void)respondToInAppStatusBarRequestedHiddenUpdateAnimated:(BOOL)arg1 ;
-(BOOL)isStatusBarHiddenForAppLayout:(id)arg1 ;
-(BOOL)shouldAnimateInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 ;
-(id)prepareAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 ;
-(id)noteModelDidMutateForInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 willAnimate:(BOOL)arg3 ;
-(void)performAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)dispatchAndReturnTetheredInsertionEventWithID:(id)arg1 phase:(unsigned long long)arg2 ;
-(BOOL)shouldAnimateRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 ;
-(id)prepareAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 ;
-(id)noteModelDidMutateForRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 animated:(BOOL)arg3 ;
-(void)performAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)dispatchAndReturnTetheredRemovalEventWithID:(id)arg1 phase:(unsigned long long)arg2 ;
-(void)handleModifierAction:(id)arg1 ;
-(void)noteAppLayoutsDidChange;
-(id)enterAppExposeForBundleID:(id)arg1 ;
-(void)setBestAppSuggestion:(SBBestAppSuggestion *)arg1 ;
-(BOOL)isShowingModifierTimeline;
-(void)setShowModifierTimeline:(BOOL)arg1 ;
-(BOOL)isLiveContentRasterizationDisabled;
-(void)setLiveContentRasterizationDisabled:(BOOL)arg1 ;
-(void)beginTetheringWithViewController:(id)arg1 asTetheree:(BOOL)arg2 ;
-(void)endTetheringWithViewController:(id)arg1 ;
-(void)dispatchAndHandleTetheredRemovalEvent:(id)arg1 ;
-(id)borrowScrollViewPanGestureRecognizer;
-(void)returnScrollViewPanGestureRecognizer:(id)arg1 ;
-(id<SBTetheredSwitcherContentViewControlling>)tetheredViewController;
-(unsigned long long)numberOfTetheredAppLayouts;
-(CGSize)tetheredScrollViewContentSize;
-(double)distanceToTetheredLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreen;
-(BOOL)isFloatingDockGesturePossible;
-(BOOL)homeScreenHasOpenFolder;
-(BOOL)homeScreenHasOpenFolderInLocation:(id)arg1 ;
-(BOOL)isHomeScreenSidebarVisible;
-(BOOL)isAppLayoutVisibleInSwitcherBounds:(id)arg1 ;
-(id)homeGestureSettings;
-(id)entityRemovalSettings;
-(long long)numberOfVisibleCards;
-(BOOL)isDevicePad;
-(BOOL)isStudyLogEnabled;
-(CGRect)homeScreenIconFrameForAppLayout:(id)arg1 ;
-(double)homeScreenIconScaleForAppLayout:(id)arg1 ;
-(double)homeScreenIconCornerRadiusForAppLayout:(id)arg1 ;
-(id)homeScreenIconLocationForAppLayout:(id)arg1 ;
-(BOOL)itemContainerForAppLayoutOverlapsFloatingDock:(id)arg1 ;
-(BOOL)isAppLayoutHigherPriorityInTetheredSwitcher:(id)arg1 ;
-(CGRect)floatingApplicationFrameInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2 ;
-(double)switcherWindowLevel;
-(double)floatingDockWindowLevel;
-(CGPoint)morphToPiPTargetCenter;
-(double)morphToPiPTargetScale;
-(double)morphToPiPSourceAlpha;
-(id)switcherWindow;
-(void)gestureHandlingModifierRequestsUpdate:(id)arg1 ;
-(CGPoint)gestureHandlingModifier:(id)arg1 averageVelocityOverDuration:(double)arg2 ;
-(void)_setContentViewAlpha:(double)arg1 withMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_configureTransitionRequestForGestureBegin:(id)arg1 ;
-(id)_appLayoutForItemContainerAtLocation:(CGPoint)arg1 ;
-(id)_transitionEventForTransitionToLayoutState:(id)arg1 identifier:(id)arg2 phase:(unsigned long long)arg3 animated:(BOOL)arg4 ;
-(void)_updateModifierStackDebugLabelPresence;
-(void)setVisibleItemContainers:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)hiddenRecycledItemContainers;
-(void)setHiddenRecycledItemContainers:(NSMutableArray *)arg1 ;
-(SBFluidSwitcherTitledButton *)reopenClosedWindowsButton;
-(void)setReopenClosedWindowsButton:(SBFluidSwitcherTitledButton *)arg1 ;
-(void)setRootModifier:(SBSwitcherModifier*<SBFluidSwitcherScrollProviding>)arg1 ;
-(SBSwitcherModifier *)reduceMotionModifier;
-(void)setReduceMotionModifier:(SBSwitcherModifier *)arg1 ;
-(NSMutableDictionary *)hiddenIconViews;
-(void)setHiddenIconViews:(NSMutableDictionary *)arg1 ;
-(SBFloatingDockBehaviorAssertion *)transientOverlayFloatingDockBehaviorAssertion;
-(void)setTransientOverlayFloatingDockBehaviorAssertion:(SBFloatingDockBehaviorAssertion *)arg1 ;
-(SBFloatingDockWindowLevelAssertion *)switcherFloatingDockWindowLevelAssertion;
-(void)setSwitcherFloatingDockWindowLevelAssertion:(SBFloatingDockWindowLevelAssertion *)arg1 ;
-(SBFloatingDockWindowLevelAssertion *)transientOverlayFloatingDockWindowLevelAssertion;
-(void)setTransientOverlayFloatingDockWindowLevelAssertion:(SBFloatingDockWindowLevelAssertion *)arg1 ;
-(SBFHomeGrabberSettings *)grabberSettings;
-(void)setGrabberSettings:(SBFHomeGrabberSettings *)arg1 ;
-(UILabel *)modifierStackDebugLabel;
-(void)setModifierStackDebugLabel:(UILabel *)arg1 ;
-(BOOL)shouldMorphToPiPForTransitionContext:(id)arg1 ;
-(id)_iconViewForDisplayItem:(id)arg1 isVisible:(BOOL*)arg2 ;
-(CGRect)_iconImageFrameForIconView:(id)arg1 ;
-(id)_iconForApplicationSceneEntity:(id)arg1 ;
-(id)_floatingDockIconLocationForTransitionSource:(long long)arg1 ;
@end

