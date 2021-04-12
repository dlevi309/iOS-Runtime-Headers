/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
#import <libobjc.A.dylib/SBHistorianSwitcherModifierDelegate.h>
#import <libobjc.A.dylib/SBSwitcherLiveContentOverlayCoordinatorDelegate.h>
#import <libobjc.A.dylib/SBAppSwitcherReusableSnapshotViewDelegate.h>
#import <libobjc.A.dylib/SBC2GroupCompletionDelegate.h>
#import <libobjc.A.dylib/SBSwitcherContentViewControlling.h>

@protocol SBSwitcherLiveContentOverlayCoordinating, BSInvalidatable, SBSwitcherContentViewControllerDelegate, SBSwitcherContentViewControllerDataSource;
@class SBBestAppSuggestion, SBLayoutStateTransitionCoordinator, SBSceneManager, NSMutableDictionary, SBFluidSwitcherPageContentViewProvider, SBAppSwitcherSnapshotImageCache, SBAppSwitcherSnapshotLockoutViewControllerProvider, SBAppSwitcherSettings, UIApplicationSceneDeactivationAssertion, NSSet, NSDictionary, SBSwitcherKeyboardSuppressionMode, NSString, SBWorkspaceApplicationSceneTransitionContext, UINotificationFeedbackGenerator, UITapGestureRecognizer, UIView, SBFluidSwitcherModifierTimelineController, NSArray, NSPointerArray, UIPanGestureRecognizer, SBFluidSwitcherContentView, SBHomeScreenBackdropViewBase, SBSwitcherAccessoryLayoutElement, SBAppSwitcherScrollView, SBFluidSwitcherLayoutContext, NSMutableArray, SBScrollSwitcherModifierEvent, SBFluidSwitcherButton, SBFluidSwitcherTitledButton, SBSwitcherModifier, SBFloatingDockBehaviorAssertion, SBFloatingDockWindowLevelAssertion, SBFHomeGrabberSettings, SBViewMorphAnimator, UILabel, BSAnimationSettings;

@interface SBFluidSwitcherViewController : UIViewController <SBFluidSwitcherPageContentViewProviderDelegate, SBChainableModifierDelegate, SBAppSwitcherSnapshotImageCacheDelegate, BSUIScrollViewDelegate, SBFluidSwitcherItemContainerDelegate, SBIconViewObserver, BSDescriptionProviding, UIGestureRecognizerDelegate, SBSearchGestureObserver, SBChainableModifierDelegate, PTSettingsKeyObserver, PTSettingsKeyPathObserver, SBHistorianSwitcherModifierDelegate, SBSwitcherLiveContentOverlayCoordinatorDelegate, SBAppSwitcherReusableSnapshotViewDelegate, SBC2GroupCompletionDelegate, SBSwitcherContentViewControlling> {

	SBLayoutStateTransitionCoordinator* _layoutStateTransitionCoordinator;
	SBSceneManager* _sceneManager;
	id<SBSwitcherLiveContentOverlayCoordinating> _liveContentOverlayCoordinator;
	NSMutableDictionary* _liveContentOverlays;
	NSMutableDictionary* _appLayoutToHeaderItemController;
	CGPoint _scrollViewLastContentOffset;
	BOOL _scrollViewLastScrolledForward;
	SBFluidSwitcherPageContentViewProvider* _pageContentViewProvider;
	SBAppSwitcherSnapshotImageCache* _snapshotCache;
	SBAppSwitcherSnapshotLockoutViewControllerProvider* _lockoutVCProvider;
	SBAppSwitcherSettings* _settings;
	UIApplicationSceneDeactivationAssertion* _transitionBeginResignActiveAssertion;
	UIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	NSSet* _resignActiveAssertions;
	NSDictionary* _lastAppLayoutsToResignActive;
	SBSwitcherKeyboardSuppressionMode* _lastKeyboardSuppressionMode;
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
	long long _currentHomeScreenBackdropBlurType;
	long long _currentSwitcherBackdropBlurType;
	SBFluidSwitcherModifierTimelineController* _modifierTimelineController;
	NSArray* _cachedAdjustedAppLayouts;
	unsigned long long _appLayoutsGenerationCount;
	/*^block*/id _activeTransitionSubcompletionGenerator;
	NSString* _debugName;
	BOOL _isShowingModifierTimeline;
	id<BSInvalidatable> _stateCaptureInvalidatable;
	NSPointerArray* _outstandingAnimations;
	UIPanGestureRecognizer* _borrowableScrollViewPanGestureRecognizer;
	SBFluidSwitcherContentView* _stashedContentView;
	SBHomeScreenBackdropViewBase* _backdropView;
	SBSwitcherAccessoryLayoutElement* _backdropLayoutElement;
	UIView* _dimmingView;
	SBSwitcherAccessoryLayoutElement* _dimmingViewLayoutElement;
	SBSwitcherAccessoryLayoutElement* _genericAccessoryLayoutElement;
	BOOL _liveContentRasterizationDisabled;
	id<SBSwitcherContentViewControllerDelegate> _delegate;
	id<SBSwitcherContentViewControllerDataSource> _dataSource;
	SBBestAppSuggestion* _bestAppSuggestion;
	long long _contentOrientation;
	SBAppSwitcherScrollView* _scrollView;
	SBFluidSwitcherContentView* _contentView;
	SBFluidSwitcherLayoutContext* _layoutContext;
	NSMutableDictionary* _visibleItemContainers;
	NSMutableArray* _hiddenRecycledItemContainers;
	SBScrollSwitcherModifierEvent* _currentScrollEvent;
	SBFluidSwitcherButton* _plusButton;
	SBFluidSwitcherTitledButton* _reopenClosedWindowsButton;
	SBSwitcherModifier* _rootModifier;
	SBSwitcherModifier* _reduceMotionModifier;
	NSMutableDictionary* _hiddenIconViews;
	NSMutableDictionary* _hiddenIconViewContainers;
	unsigned long long _traceType;
	SBFloatingDockBehaviorAssertion* _inAppFloatingDockBehaviorAssertion;
	SBFloatingDockBehaviorAssertion* _transientOverlayFloatingDockBehaviorAssertion;
	SBFloatingDockBehaviorAssertion* _switcherFloatingDockBehaviorAssertion;
	SBFloatingDockWindowLevelAssertion* _switcherFloatingDockWindowLevelAssertion;
	SBFloatingDockWindowLevelAssertion* _transientOverlayFloatingDockWindowLevelAssertion;
	SBFHomeGrabberSettings* _grabberSettings;
	SBViewMorphAnimator* _pipViewMorphAnimator;
	UILabel* _modifierStackDebugLabel;
	id<BSInvalidatable> _wallpaperRequireAssertion;

}

@property (nonatomic,retain) NSMutableDictionary * visibleItemContainers;                                                        //@synthesize visibleItemContainers=_visibleItemContainers - In the implementation block
@property (nonatomic,retain) NSMutableArray * hiddenRecycledItemContainers;                                                      //@synthesize hiddenRecycledItemContainers=_hiddenRecycledItemContainers - In the implementation block
@property (nonatomic,retain) SBAppSwitcherScrollView * scrollView;                                                               //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) SBScrollSwitcherModifierEvent * currentScrollEvent;                                                 //@synthesize currentScrollEvent=_currentScrollEvent - In the implementation block
@property (nonatomic,retain) SBFluidSwitcherContentView * contentView;                                                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) SBFluidSwitcherButton * plusButton;                                                                 //@synthesize plusButton=_plusButton - In the implementation block
@property (nonatomic,retain) SBFluidSwitcherTitledButton * reopenClosedWindowsButton;                                            //@synthesize reopenClosedWindowsButton=_reopenClosedWindowsButton - In the implementation block
@property (nonatomic,retain) SBFluidSwitcherLayoutContext * layoutContext;                                                       //@synthesize layoutContext=_layoutContext - In the implementation block
@property (nonatomic,retain) SBSwitcherModifier * rootModifier;                                                                  //@synthesize rootModifier=_rootModifier - In the implementation block
@property (nonatomic,retain) SBSwitcherModifier * reduceMotionModifier;                                                          //@synthesize reduceMotionModifier=_reduceMotionModifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * hiddenIconViews;                                                              //@synthesize hiddenIconViews=_hiddenIconViews - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * hiddenIconViewContainers;                                                     //@synthesize hiddenIconViewContainers=_hiddenIconViewContainers - In the implementation block
@property (assign,nonatomic) unsigned long long traceType;                                                                       //@synthesize traceType=_traceType - In the implementation block
@property (nonatomic,retain) SBFloatingDockBehaviorAssertion * inAppFloatingDockBehaviorAssertion;                               //@synthesize inAppFloatingDockBehaviorAssertion=_inAppFloatingDockBehaviorAssertion - In the implementation block
@property (nonatomic,retain) SBFloatingDockBehaviorAssertion * transientOverlayFloatingDockBehaviorAssertion;                    //@synthesize transientOverlayFloatingDockBehaviorAssertion=_transientOverlayFloatingDockBehaviorAssertion - In the implementation block
@property (nonatomic,retain) SBFloatingDockBehaviorAssertion * switcherFloatingDockBehaviorAssertion;                            //@synthesize switcherFloatingDockBehaviorAssertion=_switcherFloatingDockBehaviorAssertion - In the implementation block
@property (nonatomic,retain) SBFloatingDockWindowLevelAssertion * switcherFloatingDockWindowLevelAssertion;                      //@synthesize switcherFloatingDockWindowLevelAssertion=_switcherFloatingDockWindowLevelAssertion - In the implementation block
@property (nonatomic,retain) SBFloatingDockWindowLevelAssertion * transientOverlayFloatingDockWindowLevelAssertion;              //@synthesize transientOverlayFloatingDockWindowLevelAssertion=_transientOverlayFloatingDockWindowLevelAssertion - In the implementation block
@property (nonatomic,retain) SBFHomeGrabberSettings * grabberSettings;                                                           //@synthesize grabberSettings=_grabberSettings - In the implementation block
@property (assign,nonatomic,__weak) SBViewMorphAnimator * pipViewMorphAnimator;                                                  //@synthesize pipViewMorphAnimator=_pipViewMorphAnimator - In the implementation block
@property (nonatomic,retain) UILabel * modifierStackDebugLabel;                                                                  //@synthesize modifierStackDebugLabel=_modifierStackDebugLabel - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> wallpaperRequireAssertion;                                                      //@synthesize wallpaperRequireAssertion=_wallpaperRequireAssertion - In the implementation block
@property (nonatomic,readonly) NSArray * appLayouts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBSwitcherContentViewControllerDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBSwitcherContentViewControllerDataSource> dataSource;                                    //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) SBBestAppSuggestion * bestAppSuggestion;                                                            //@synthesize bestAppSuggestion=_bestAppSuggestion - In the implementation block
@property (assign,getter=isShowingModifierTimeline,nonatomic) BOOL showModifierTimeline; 
@property (assign,nonatomic) long long contentOrientation;                                                                       //@synthesize contentOrientation=_contentOrientation - In the implementation block
@property (assign,getter=isLiveContentRasterizationDisabled,nonatomic) BOOL liveContentRasterizationDisabled;                    //@synthesize liveContentRasterizationDisabled=_liveContentRasterizationDisabled - In the implementation block
@property (nonatomic,readonly) BOOL canInterruptActiveTransition; 
@property (nonatomic,copy,readonly) BSAnimationSettings * defaultTransitionAnimationSettings; 
-(void)_performActivatePlusButtonSwitcherResponse:(id)arg1 ;
-(double)minimumHomeScreenScale;
-(void)_ensureSubviewOrdering;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(BOOL)isRTLEnabled;
-(BOOL)snapshotView:(id)arg1 shouldShowAppClipOverlayForLayout:(id)arg2 ;
-(BOOL)shouldRubberbandFullScreenHomeGrabberView;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg1 ;
-(BSAnimationSettings *)defaultTransitionAnimationSettings;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(void)_performModifierInvalidateAdjustedAppLayoutsResponse:(id)arg1 ;
-(void)_applyStyleToItemContainer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2 animated:(BOOL)arg3 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(long long)contentOrientation;
-(void)scrollViewDidScroll:(id)arg1 withContext:(SCD_Struct_SB15)arg2 ;
-(void)setRootModifier:(SBSwitcherModifier *)arg1 ;
-(id)succinctDescription;
-(BOOL)handleHomeButtonDoublePress;
-(void)setLiveContentOverlayUpdatesSuspended:(BOOL)arg1 ;
-(unsigned long long)homeScreenIconGridSizeClassForAppLayout:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)_folderExpansionAnimationWillBegin:(id)arg1 ;
-(BOOL)homeScreenHasWidgetCenterOrLibraryOpen;
-(BOOL)handleVolumeUpButtonPress;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)_performModifierPerformTransitionResponse:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(BOOL)shouldAnimateRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 ;
-(void)_actuateEmptyAppSwitcherHaptic;
-(void)_updateScrollViewSizeAndSpacing;
-(BOOL)areLiveContentOverlayUpdatesSuspended;
-(BOOL)shouldAddAppLayoutToFront:(id)arg1 forTransitionWithContext:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(BOOL)handleHomeButtonPress;
-(id)homeGestureSettings;
-(CGRect)homeScreenIconFrameForAppLayout:(id)arg1 ;
-(void)_performModifierDosidoScaleAnimationResponse:(id)arg1 ;
-(CGRect)_frameForItemWithRole:(long long)arg1 inMainAppLayout:(id)arg2 interfaceOrientation:(long long)arg3 ;
-(void)_applyStyleToVisibleItemContainersWithCompletion:(/*^block*/id)arg1 ;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1 ;
-(void)_performModifierTimerEventResponse:(id)arg1 ;
-(void)setContentOrientation:(long long)arg1 ;
-(void)_updatePlusButtonPresence;
-(id)switcherBackdropLayoutElement;
-(CGPoint)morphToPiPTargetCenter;
-(void)_updateAppStatusBarAndHomeGrabberVisibilityAnimated:(BOOL)arg1 ;
-(double)morphToPiPSourceAlpha;
-(BOOL)isFloatingDockFullyPresented;
-(id)init;
-(void)_applyStyleToLiveContentOverlay:(id)arg1 forItemContainer:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_dispatchEventAndHandleAction:(id)arg1 ;
-(void)_updateHomeScreenBackdropType;
-(BOOL)_isLayoutStateSwitcher:(id)arg1 allowTransitions:(BOOL)arg2 ;
-(id)_iconForWorkspaceEntity:(id)arg1 ;
-(void)_performModifierCompletionResponse:(id)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(CGPoint)scrollableQueryModifier:(id)arg1 contentOffsetVelocityConsideringNextContentOffset:(CGPoint)arg2 ;
-(void)_prepareForCrossfadeIfNeeded;
-(void)_folderScrolledEnoughToClipSwitcherIconView:(id)arg1 ;
-(id<SBSwitcherContentViewControllerDelegate>)delegate;
-(SBSwitcherModifier *)rootModifier;
-(void)_performModifierHapticResponse:(id)arg1 ;
-(CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(CGPoint)arg2 translation:(CGPoint)arg3 startPoint:(CGPoint)arg4 locationInView:(CGPoint)arg5 horizontalVelocity:(inout double*)arg6 verticalVelocity:(inout double*)arg7 ;
-(BOOL)_appLayoutWantsToBeKeptInViewHierarchy:(id)arg1 ;
-(void)setBestAppSuggestion:(SBBestAppSuggestion *)arg1 ;
-(id)_rotationAnimationSettingsForTransitionContext:(id)arg1 ;
-(void)_performCrossfadeIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isDevicePad;
-(SBFloatingDockWindowLevelAssertion *)switcherFloatingDockWindowLevelAssertion;
-(void)performAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)hiddenIconViewContainers;
-(SBFluidSwitcherLayoutContext *)layoutContext;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_performModifierEmitStudyLogResponse:(id)arg1 ;
-(BOOL)canSelectContainer:(id)arg1 numberOfTaps:(long long)arg2 ;
-(BOOL)isAppLayoutVisibleInSwitcherBounds:(id)arg1 ;
-(void)_handlePlusButtonTapped:(id)arg1 ;
-(void)handleGestureDidEnd:(id)arg1 ;
-(id)_viewForLayoutElement:(id)arg1 ;
-(void)SBC2GroupCompletionAnimationDidComplete:(id)arg1 finished:(BOOL)arg2 retargeted:(BOOL)arg3 ;
-(void)_handleEventResponse:(id)arg1 ;
-(void)setTransientOverlayFloatingDockWindowLevelAssertion:(SBFloatingDockWindowLevelAssertion *)arg1 ;
-(NSMutableDictionary *)visibleItemContainers;
-(void)_updateScrollViewScrollEnabled;
-(void)handleReopenClosedWindowsButtonTapped:(id)arg1 ;
-(id)_unadjustedAppLayouts;
-(void)setLiveContentRasterizationDisabled:(BOOL)arg1 ;
-(BOOL)_shouldItemContainersUseDarkLabels;
-(void)setReopenClosedWindowsButton:(SBFluidSwitcherTitledButton *)arg1 ;
-(SBFloatingDockWindowLevelAssertion *)transientOverlayFloatingDockWindowLevelAssertion;
-(SBViewMorphAnimator *)pipViewMorphAnimator;
-(id)switcherDimmingViewLayoutElement;
-(void)setTransientOverlayFloatingDockBehaviorAssertion:(SBFloatingDockBehaviorAssertion *)arg1 ;
-(long long)numberOfVisibleCards;
-(void)handleEventResponse:(id)arg1 ;
-(CGRect)containerViewBounds;
-(id<SBSwitcherContentViewControllerDataSource>)dataSource;
-(CGPoint)scrollViewContentOffset;
-(void)_updateSnapshotCache;
-(BOOL)homeScreenHasOpenFolder;
-(void)relinquishTransientOverlayViewController:(id)arg1 ;
-(void)_updateReopenClosedWindowsButtonWithMode:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id<BSInvalidatable>)wallpaperRequireAssertion;
-(id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg1 ;
-(void)_setupMorphToPiPIfNeededForTransitionContext:(id)arg1 ;
-(CGSize)sizeForAppLayout:(id)arg1 fromProvider:(id)arg2 ;
-(CGRect)_iconImageFrameForIconView:(id)arg1 ;
-(BOOL)isWindowVisible;
-(void)setShowModifierTimeline:(BOOL)arg1 ;
-(void)_updateReopenClosedWindowsButtonText;
-(BOOL)_removeVisibleItemContainerForAppLayout:(id)arg1 ;
-(void)_blurItemContainerWithAnimation:(id)arg1 ;
-(void)performAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(double)_delayForTransitionWithContext:(id)arg1 animated:(BOOL)arg2 ;
-(void)_handleDismissTapGesture:(id)arg1 ;
-(void)setLayoutContext:(SBFluidSwitcherLayoutContext *)arg1 ;
-(unsigned long long)appLayoutsGenerationCount;
-(void)setHiddenRecycledItemContainers:(NSMutableArray *)arg1 ;
-(SBBestAppSuggestion *)bestAppSuggestion;
-(void)_updateSnapshotCacheReloadingForActiveInterfaceOrientationChange;
-(BOOL)isHomeScreenSidebarVisible;
-(BOOL)itemContainerForAppLayoutOverlapsFloatingDock:(id)arg1 ;
-(void)removeLiveContentOverlayForAppLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)_performModifierEmitSBEventResponse:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)_updateModifierTimelinePresence;
-(void)setHiddenIconViews:(NSMutableDictionary *)arg1 ;
-(BOOL)canInterruptActiveTransition;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(BOOL)isStudyLogEnabled;
-(SBFloatingDockBehaviorAssertion *)switcherFloatingDockBehaviorAssertion;
-(void)_updateLiveContentRasterization;
-(void)_configureApplicationAndTransientOverlayDockBehaviorAssertionsForContext:(id)arg1 ;
-(void)_updateVisibleItemsLayoutAndStyleWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isShowingModifierTimeline;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(double)homeScreenIconScaleForAppLayout:(id)arg1 ;
-(void)acquiredViewController:(id)arg1 forTransientOverlayAppLayout:(id)arg2 ;
-(void)setDelegate:(id<SBSwitcherContentViewControllerDelegate>)arg1 ;
-(long long)numberOfHiddenAppLayoutsForBundleIdentifier:(id)arg1 ;
-(void)_layoutAppLayout:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CGPoint)scrollableQueryModifier:(id)arg1 convertScrollViewPointToContainerViewCoordinateSpace:(CGPoint)arg2 ;
-(BOOL)isStatusBarHiddenForAppLayout:(id)arg1 ;
-(void)_configureTransitionRequestForGestureBegin:(id)arg1 ;
-(void)searchGesture:(id)arg1 startedShowing:(BOOL)arg2 ;
-(id)viewControllerForTransientOverlayAppLayout:(id)arg1 fromProvider:(id)arg2 ;
-(void)setPlusButton:(SBFluidSwitcherButton *)arg1 ;
-(SBFluidSwitcherTitledButton *)reopenClosedWindowsButton;
-(id)_firstZOrderedSubviewViewAtLocation:(CGPoint)arg1 ;
-(double)floatingDockWindowLevel;
-(void)_updateKeyboardSuppressionAssertion;
-(void)_warmupEmptyAppSwitcherHaptic;
-(void)_updateSpringBoardStatusBarAssertionAnimated:(BOOL)arg1 ;
-(void)setReduceMotionModifier:(SBSwitcherModifier *)arg1 ;
-(NSString *)description;
-(double)morphToPiPTargetScale;
-(void)setDataSource:(id<SBSwitcherContentViewControllerDataSource>)arg1 ;
-(void)setInAppFloatingDockBehaviorAssertion:(SBFloatingDockBehaviorAssertion *)arg1 ;
-(BOOL)_allowsHeaderItemsForAppLayout:(id)arg1 ;
-(CGSize)snapshotSizeForItemWithRole:(long long)arg1 inAppLayout:(id)arg2 interfaceOrientation:(long long)arg3 inImageCache:(id)arg4 ;
-(CGRect)iconImageFrameForAppLayout:(id)arg1 ;
-(void)setVisibleItemContainers:(NSMutableDictionary *)arg1 ;
-(void)noteModelDidMutateForInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 willAnimate:(BOOL)arg3 ;
-(void)noteModelDidMutateForRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setTraceType:(unsigned long long)arg1 ;
-(/*^block*/id)_sceneDeactivationPredicateMatchingAppLayouts:(id)arg1 ;
-(id)_transitionEventForTransitionToLayoutState:(id)arg1 identifier:(id)arg2 phase:(unsigned long long)arg3 animated:(BOOL)arg4 ;
-(void)_performEventResponse:(id)arg1 ;
-(void)_coolDownEmptyAppSwitcherHaptic;
-(void)performTransitionWithContext:(id)arg1 animated:(BOOL)arg2 alongsideAnimationHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_performModifierMatchMoveToIconViewResponse:(id)arg1 ;
-(double)homeScreenIconCornerRadiusForAppLayout:(id)arg1 ;
-(void)_updateResignActiveAssertions;
-(long long)switcherInterfaceOrientation;
-(SBScrollSwitcherModifierEvent *)currentScrollEvent;
-(double)displayCornerRadius;
-(BOOL)_supportsKillingForAppLayout:(id)arg1 ;
-(BOOL)isFloatingDockSupported;
-(void)_setupLiveContentOverlayForAppLayout:(id)arg1 itemContainer:(id)arg2 overlay:(id)arg3 ;
-(id)initWithRootModifier:(id)arg1 liveContentOverlayCoordinator:(id)arg2 debugName:(id)arg3 ;
-(void)handleGestureDidUpdate:(id)arg1 ;
-(void)viewDidLoad;
-(id)_activeTransientOverlayPresentedAppLayout;
-(id)switcherWindow;
-(void)_updatePlusButtonStyleWithMode:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_rebuildCachedAdjustedAppLayouts;
-(CGRect)floatingApplicationFrameInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2 ;
-(id)_workspaceEntityForBundleIdentifier:(id)arg1 inTransitionContext:(id)arg2 ;
-(void)setScrollView:(SBAppSwitcherScrollView *)arg1 ;
-(id)_appLayoutForItemContainerAtLocation:(CGPoint)arg1 environment:(long long)arg2 ;
-(void)_setupMorphAnimatorIfNeededForEntity:(id)arg1 pid:(int)arg2 appLayout:(id)arg3 uniqueID:(id)arg4 direction:(long long)arg5 gestureInitiated:(BOOL)arg6 ;
-(void)killContainer:(id)arg1 forReason:(long long)arg2 ;
-(void)_updateAppExposeAccessoryButtonsExtendedTouchRegions;
-(double)floatingDockViewTopMargin;
-(BOOL)hasHomeButton;
-(CGRect)_frameForInlineAppExposeItemAspectFill:(BOOL)arg1 ;
-(void)_updateHomeScreenContentRequirement;
-(void)_temporarilyHideMatchMovedZoomDownAnimationViewAnimated:(BOOL)arg1 ;
-(long long)orientationForSnapshotOfAppLayout:(id)arg1 inImageCache:(id)arg2 ;
-(void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2 ;
-(id)_webClipIdentifierForAppClipBundleIdentifier:(id)arg1 sceneIdentifier:(id)arg2 ;
-(void)setContentView:(SBFluidSwitcherContentView *)arg1 ;
-(id)_itemContainerForAppLayoutIfExists:(id)arg1 ;
-(void)_updateContentViewPassesTouchesThrough;
-(void)_performModifierScrollToAppLayoutResponse:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)_updateLayoutWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isLiveContentRasterizationDisabled;
-(void)_updateSwitcherBackdropType;
-(long long)homeScreenInterfaceOrientation;
-(BOOL)homeScreenHasOpenFolderInLocation:(id)arg1 ;
-(id)_floatingDockIconLocationForTransitionSource:(long long)arg1 ;
-(double)snapshotScaleForSceneHandle:(id)arg1 ;
-(void)setModifierStackDebugLabel:(UILabel *)arg1 ;
-(void)respondToInAppStatusBarRequestedHiddenUpdateAnimated:(BOOL)arg1 ;
-(id)_itemContainerAtLocation:(CGPoint)arg1 environment:(long long)arg2 ;
-(SBFluidSwitcherButton *)plusButton;
-(void)_performWithFixedUpdateMode:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CGRect)frameForPageViewOfContainer:(id)arg1 fullyPresented:(BOOL)arg2 ;
-(double)scaleForDownscaledSnapshotsOfAppLayout:(id)arg1 inImageCache:(id)arg2 ;
-(void)_setupContentAndTransientViews;
-(id)_appLayoutForWorkspaceTransientOverlay:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_acquireKeyboardSuppressionAssertionForMode:(id)arg1 ;
-(UILabel *)modifierStackDebugLabel;
-(void)setPipViewMorphAnimator:(SBViewMorphAnimator *)arg1 ;
-(void)_performModifierInvalidateReopenButtonTextResponse:(id)arg1 ;
-(id)switcherSettings;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(double)floatingDockHeight;
-(void)gestureHandlingModifierRequestsUpdate:(id)arg1 ;
-(void)_layoutVisibleItemsWithCompletion:(/*^block*/id)arg1 ;
-(id)parentViewControllerForContentOverlay;
-(void)_updateHomeScreenPointerInteractions;
-(void)iconViewSizeDidChange:(id)arg1 ;
-(BOOL)isAppLayoutMostRecentRepresentationOfDisplayItems:(id)arg1 ;
-(void)_updateModifierStackDebugLabel;
-(void)setSwitcherFloatingDockWindowLevelAssertion:(SBFloatingDockWindowLevelAssertion *)arg1 ;
-(void)_performBlurItemContainerResponse:(id)arg1 ;
-(unsigned long long)traceType;
-(id)currentVelocityValueForVisibleAppLayout:(id)arg1 key:(id)arg2 ;
-(void)_updateFloatingDockWindowLevelAssertion;
-(void)_reduceMotionStatusDidChange:(id)arg1 ;
-(void)scrollViewKillingProgressUpdated:(double)arg1 ofContainer:(id)arg2 ;
-(void)_updateModifierStackDebugLabelPresence;
-(void)setGrabberSettings:(SBFHomeGrabberSettings *)arg1 ;
-(id)genericSwitcherAccessoryLayoutElement;
-(void)noteAppLayoutsDidChange;
-(void)_updateSwitcherDimmingViewPresence;
-(void)_performModifierInjectVelocityResponse:(id)arg1 ;
-(BOOL)isReduceMotionEnabled;
-(unsigned long long)newAppLayoutsGenCount;
-(id)_createWorkspaceTransientOverlayForAppLayout:(id)arg1 ;
-(BOOL)_isPerformingMatchMoveToIconView;
-(void)_performModifierNotifyIconWillZoomDownResponse:(id)arg1 ;
-(void)_updateStyleWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateWallpaperStyle;
-(void)loadView;
-(void)_iconControllerOverlayVisibilityDidChange:(id)arg1 ;
-(void)_updateSwitcherBackdropViewPresence;
-(id)_iconViewForDisplayItem:(id)arg1 isVisible:(BOOL*)arg2 ;
-(CGPoint)gestureHandlingModifier:(id)arg1 averageVelocityOverDuration:(double)arg2 ;
-(NSMutableArray *)hiddenRecycledItemContainers;
-(id)activatingDisplayItemForAppLayout:(id)arg1 ;
-(CGRect)layoutFrameForItemWithRole:(long long)arg1 inAppLayout:(id)arg2 interfaceOrientation:(long long)arg3 forSnapshotView:(id)arg4 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setWallpaperRequireAssertion:(id<BSInvalidatable>)arg1 ;
-(void)_performModifierIconOverlayVisibilityUpdateResponse:(id)arg1 ;
-(CGRect)_frameForFloatingAppLayoutInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2 ;
-(BOOL)shouldAnimateInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 ;
-(void)_performContentViewScaleAnimationForDosido;
-(BOOL)_shouldInterruptPresentationAndDismiss;
-(SBFluidSwitcherContentView *)contentView;
-(id)containerViewControllerForPageViewFromProvider:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)prepareAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 ;
-(CGSize)defaultHomeScreenIconSize;
-(void)_performModifierUpdateLayoutResponse:(id)arg1 ;
-(void)handleGestureDidBegin:(id)arg1 ;
-(NSMutableDictionary *)hiddenIconViews;
-(void)_performModifierReachabilityResponse:(id)arg1 ;
-(SBFHomeGrabberSettings *)grabberSettings;
-(id)medusaSettings;
-(id)iconForAppLayout:(id)arg1 ;
-(SBSwitcherModifier *)reduceMotionModifier;
-(BOOL)isShowingSpotlightOrTodayView;
-(void)_updateHeaderItemsLabelColor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_cancelInProcessAnimationsWithOptions:(unsigned long long)arg1 ;
-(SBAppSwitcherScrollView *)scrollView;
-(id)delegateForForSnapshotPageViewFromProvider:(id)arg1 ;
-(void)iconViewWasRecycled:(id)arg1 ;
-(void)didSelectContainer:(id)arg1 ;
-(id)iconViewForAppLayout:(id)arg1 ;
-(void)_addVisibleItemContainerForAppLayout:(id)arg1 ;
-(void)_scrollToAppLayout:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(void)_performModifierIconViewVisibilityUpdateResponse:(id)arg1 ;
-(void)_updateReopenClosedWindowsButtonPresence;
-(void)_makeAppLayoutVisibleForTransitionWithContext:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_liveContentOverlayForHandlingHardwareButtonEvents;
-(id)entityRemovalSettings;
-(id)homeScreenIconLocationForAppLayout:(id)arg1 ;
-(void)_performFolderSnapshotRequestResponse:(id)arg1 ;
-(SBFloatingDockBehaviorAssertion *)inAppFloatingDockBehaviorAssertion;
-(BOOL)shouldMorphToPiPForTransitionContext:(id)arg1 ;
-(double)switcherWindowLevel;
-(SBFloatingDockBehaviorAssertion *)transientOverlayFloatingDockBehaviorAssertion;
-(void)_updateAsynchronousSurfaceRetentionAssertion;
-(void)setSwitcherFloatingDockBehaviorAssertion:(SBFloatingDockBehaviorAssertion *)arg1 ;
-(void)prepareAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 ;
-(void)_updateFloatingDockBehaviorAssertion;
-(id)_transitionEventForTransitionWithContext:(id)arg1 identifier:(id)arg2 phase:(unsigned long long)arg3 animated:(BOOL)arg4 ;
-(void)_updateVisibleItems;
-(void)dealloc;
-(void)setHiddenIconViewContainers:(NSMutableDictionary *)arg1 ;
-(NSArray *)appLayouts;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_updateLayoutForInterfaceOrientation:(long long)arg1 ;
-(void)SBC2GroupCompletionAnimationDidBegin:(id)arg1 ;
-(BOOL)isFloatingDockGesturePossible;
-(void)_updateStatusBarAndHomeGrabberVisibilityForAppLayout:(id)arg1 animated:(BOOL)arg2 ;
-(id)iconForDisplayItem:(id)arg1 ;
-(void)historianModifier:(id)arg1 didRecordEntry:(id)arg2 ;
-(CGRect)switcherViewBounds;
-(void)_unblurItemContainer:(id)arg1 ;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(void)setCurrentScrollEvent:(SBScrollSwitcherModifierEvent *)arg1 ;
-(long long)orientationForPageViewFromProvider:(id)arg1 ;
@end

