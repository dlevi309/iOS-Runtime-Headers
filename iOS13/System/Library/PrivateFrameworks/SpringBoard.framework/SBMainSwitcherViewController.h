/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBSwitcherContentViewControllerDataSource.h>
#import <libobjc.A.dylib/SBSwitcherContentViewControllerDelegate.h>
#import <libobjc.A.dylib/SBSwitcherDemoFilteringControllerObserver.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBLayoutStateTransitionObserver.h>
#import <libobjc.A.dylib/SBLayoutStateTransitionSceneEntityFrameProvider.h>
#import <libobjc.A.dylib/SBFluidSwitcherGestureManagerDelegate.h>
#import <libobjc.A.dylib/SBWorkspaceKeyboardFocusControllerObserver.h>
#import <libobjc.A.dylib/SBAppSwitcherModelDelegate.h>
#import <libobjc.A.dylib/SBMainDisplayWorkspaceAppInteractionEventSourceObserving.h>

@protocol SBSwitcherContentViewControlling, BSInvalidatable;
@class NSArray, SBAppSwitcherServiceSet, NSMutableDictionary, SBWindow, UIViewController, SBOrientationTransformWrapperView, SBHomeScreenBackdropViewBase, UIView, SBFluidSwitcherGestureManager, NSMutableSet, SBAppLayout, SBAppSwitcherSettings, NSMutableArray, SBMainDisplaySceneLayoutViewController, FBDisplayLayoutElement, SBAppSwitcherModel, SBSwitcherDemoCommandsServer, SBSwitcherDemoFilteringController, SBApplicationUserQuitMonitorServer, SiriContinuitySource, SBWorkspaceKeyboardFocusController, UIApplicationSceneDeactivationAssertion, UIPanGestureRecognizer, SBAppStatusBarSettingsAssertion, BSSimpleAssertion, BSTimer, NSHashTable, BSAnimationSettings, NSString;

@interface SBMainSwitcherViewController : UIViewController <SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate, SBSwitcherDemoFilteringControllerObserver, PTSettingsKeyObserver, SBLayoutStateTransitionObserver, SBLayoutStateTransitionSceneEntityFrameProvider, SBFluidSwitcherGestureManagerDelegate, SBWorkspaceKeyboardFocusControllerObserver, SBAppSwitcherModelDelegate, SBMainDisplayWorkspaceAppInteractionEventSourceObserving> {

	NSArray* _mainAppLayouts;
	NSArray* _floatingAppLayouts;
	SBAppSwitcherServiceSet* _switcherServices;
	NSMutableDictionary* _appLayoutToAcquiredTransientOverlayViewController;
	NSMutableDictionary* _appLayoutToEligibleTransientOverlayViewController;
	SBWindow* _window;
	UIViewController*<SBSwitcherContentViewControlling> _mainContentViewController;
	UIViewController*<SBSwitcherContentViewControlling> _floatingContentViewController;
	SBOrientationTransformWrapperView* _contentWrapperView;
	SBOrientationTransformWrapperView* _mainContentWrapperView;
	SBOrientationTransformWrapperView* _floatingContentWrapperView;
	SBHomeScreenBackdropViewBase* _floatingSwitcherBackdropView;
	UIView* _floatingSwitcherDimmingView;
	SBFluidSwitcherGestureManager* _gestureManager;
	NSMutableSet* _windowDragSceneIdentifiers;
	SBAppLayout* _activeAppLayoutWhenActivatingMainSwitcher;
	SBAppSwitcherSettings* _settings;
	Class _mainContentViewControllerClass;
	NSMutableArray* _servicesRemovedWhileAwayFromSwitcher;
	NSMutableDictionary* _liveAppsBeingTerminated;
	BOOL _ignoreModelUpdates;
	id<BSInvalidatable> _deferRotationForAppSwitcherAssertion;
	id<BSInvalidatable> _lockKeyboardFocusAssertion;
	SBMainDisplaySceneLayoutViewController* _sceneLayoutViewController;
	FBDisplayLayoutElement* _displayLayoutElement;
	SBAppLayout* _testItemForInsertion;
	unsigned long long _testItemInsertionIndex;
	SBAppSwitcherModel* _mainSwitcherModel;
	SBSwitcherDemoCommandsServer* _demoCommandsServer;
	SBSwitcherDemoFilteringController* _demoFilteringController;
	NSArray* _demoFilteringHiddenAppLayouts;
	SBApplicationUserQuitMonitorServer* _userQuitMonitorServer;
	SiriContinuitySource* _siriSource;
	SBWorkspaceKeyboardFocusController* _keyboardFocusController;
	UIApplicationSceneDeactivationAssertion* _deactivatingScenesResignActiveAssertion;
	UIPanGestureRecognizer* _mainContentBorrowedScrollViewPanGestureRecognizer;
	SBAppStatusBarSettingsAssertion* _mainStatusBarAssertion;
	SBAppStatusBarSettingsAssertion* _floatingStatusBarAssertion;
	BSSimpleAssertion* _preventAdditionalMedusaSnapshotsAssertion;
	BSTimer* _preventAdditionalMedusaSnapshotsInvalidationTimer;
	NSMutableSet* _asynchronousRenderingAssertions;
	NSHashTable* _asynchronousRenderingCachedSurfacesReasons;
	BSTimer* _disableCachingAsynchronousRenderingSurfacesTimer;
	NSMutableDictionary* _recentSwipeUpToKillTimestampsForAppLayouts;
	NSHashTable* __hideStatusBarAssertions;
	id<BSInvalidatable> _suspendWallpaperAnimationAssertion;

}

@property (setter=_setHideStatusBarAssertions:,nonatomic,retain) NSHashTable * _hideStatusBarAssertions;               //@synthesize _hideStatusBarAssertions=__hideStatusBarAssertions - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> suspendWallpaperAnimationAssertion;                                   //@synthesize suspendWallpaperAnimationAssertion=_suspendWallpaperAnimationAssertion - In the implementation block
@property (nonatomic,readonly) BOOL canInterruptActiveTransition; 
@property (nonatomic,copy,readonly) BSAnimationSettings * defaultTransitionAnimationSettings; 
@property (nonatomic,readonly) SBAppLayout * activeTransientOverlayPresentedAppLayout; 
@property (nonatomic,readonly) BOOL hasTransientOverlayAppLayouts; 
@property (nonatomic,readonly) UIViewController*<SBSwitcherContentViewControlling> contentViewController;              //@synthesize mainContentViewController=_mainContentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)dealloc;
-(id)_init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(UIViewController*<SBSwitcherContentViewControlling>)contentViewController;
-(BOOL)shouldAutorotate;
-(long long)_overrideInterfaceOrientationMechanics;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(double)minimumHomeScreenScale;
-(id<BSInvalidatable>)suspendWallpaperAnimationAssertion;
-(void)setSuspendWallpaperAnimationAssertion:(id<BSInvalidatable>)arg1 ;
-(BOOL)activateMainSwitcherNoninteractivelyWithSource:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)dismissAllSwitchersNoninteractivelyAnimated:(BOOL)arg1 ;
-(BOOL)dismissMainSwitcherNoninteractivelyAnimated:(BOOL)arg1 ;
-(void)_configureRequest:(id)arg1 forSwitcherTransitionRequest:(id)arg2 withEventLabel:(id)arg3 ;
-(BOOL)isMainSwitcherVisible;
-(id)appLayoutForWorkspaceTransientOverlay:(id)arg1 ;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(BOOL)_isAcquiredTransientOverlayViewController:(id)arg1 ;
-(void)_removeAcquiredTransientOverlayViewController:(id)arg1 ;
-(id)_recentAppLayoutsController;
-(BOOL)isAnySwitcherVisible;
-(void)removeAppLayoutTransientOverlayViewController:(id)arg1 ;
-(void)addAppLayoutForTransientOverlayViewController:(id)arg1 ;
-(void)failMultitaskingGesturesForReason:(id)arg1 ;
-(void)_reduceMotionStatusDidChange:(id)arg1 ;
-(BOOL)toggleMainSwitcherNoninteractivelyWithSource:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)handleHomeButtonSinglePressUp;
-(void)removedDisplayItems:(id)arg1 withDestructionIntent:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)requestInAppStatusBarHiddenAssertionForReason:(id)arg1 animated:(BOOL)arg2 ;
-(double)scaleForDownscaledSnapshotGenerationForSceneHandle:(id)arg1 ;
-(void)programmaticSwitchAppGestureMoveToLeft;
-(void)programmaticSwitchAppGestureMoveToRight;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(id)switcherContentController:(id)arg1 hiddenAppLayoutsForBundleIdentifier:(id)arg2 ;
-(BOOL)switcherContentController:(id)arg1 isAppLayoutHigherPriorityInTetheredSwitcher:(id)arg2 ;
-(void)switcherContentController:(id)arg1 bringAppLayoutToFront:(id)arg2 ;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(BSAnimationSettings *)defaultTransitionAnimationSettings;
-(id)mainSwitcherWindow;
-(BOOL)switcherContentController:(id)arg1 shouldResignActiveForStartOfTransition:(id)arg2 ;
-(void)switcherContentController:(id)arg1 setContentOrientation:(long long)arg2 ;
-(id)windowsToExcludeForCrossfadeSnapshotForSwitcherContentController:(id)arg1 ;
-(long long)shadowStyleForSwitcherContentController:(id)arg1 ;
-(void)updateWindowVisibilityForSwitcherContentController:(id)arg1 ;
-(void)updateUserInteractionEnabledForSwitcherContentController:(id)arg1 ;
-(void)switcherContentController:(id)arg1 setWallpaperScale:(double)arg2 withAnimationMode:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)switcherContentController:(id)arg1 setHomeScreenScale:(double)arg2 withAnimationMode:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)switcherContentController:(id)arg1 setHomeScreenAlpha:(double)arg2 withAnimationMode:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)switcherContentController:(id)arg1 setDimmingAlpha:(double)arg2 withAnimationMode:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)switcherContentController:(id)arg1 setBackdropBlurProgress:(double)arg2 withAnimationMode:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(CGRect)frameForInlineAppExposeItemAspectFill:(BOOL)arg1 ;
-(id)viewControllerForTransientOverlayAppLayout:(id)arg1 ;
-(long long)sbActiveInterfaceOrientation;
-(void)switcherContentController:(id)arg1 deletedAppLayout:(id)arg2 forReason:(long long)arg3 ;
-(long long)homeScreenInterfaceOrientation;
-(id)createWorkspaceTransientOverlayForAppLayout:(id)arg1 ;
-(BOOL)isInAppStatusBarRequestedHiddenForSwitcherContentController:(id)arg1 ;
-(void)switcherContentController:(id)arg1 setContainerStatusBarHidden:(BOOL)arg2 animationDuration:(double)arg3 ;
-(CGRect)frameForItemWithRole:(long long)arg1 inMainAppLayout:(id)arg2 interfaceOrientation:(long long)arg3 ;
-(CGRect)frameForFloatingAppLayoutInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2 ;
-(id)appLayoutsForSwitcherContentController:(id)arg1 ;
-(void)switcherContentController:(id)arg1 handlePlusButtonActionForBundleIdentifier:(id)arg2 ;
-(void)switcherContentController:(id)arg1 reopenHiddenAppLayoutsWithBundleIdentifier:(id)arg2 ;
-(void)switcherContentController:(id)arg1 setCursorInteractionsEnabled:(BOOL)arg2 ;
-(void)switcherContentController:(id)arg1 setWallpaperStyle:(long long)arg2 ;
-(void)switcherContentController:(id)arg1 setBackdropBlurType:(long long)arg2 ;
-(void)switcherContentController:(id)arg1 setCacheAsynchronousRenderingSurfaces:(BOOL)arg2 ;
-(id)activeTransientOverlayPresentedAppLayoutForSwitcherContentController:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg1 shouldMorphToPiPForTransitionContext:(id)arg2 ;
-(id)switcherContentController:(id)arg1 transitionEventForLayoutState:(id)arg2 identifier:(id)arg3 phase:(unsigned long long)arg4 animated:(BOOL)arg5 ;
-(id)switcherContentController:(id)arg1 transitionEventForContext:(id)arg2 identifier:(id)arg3 phase:(unsigned long long)arg4 animated:(BOOL)arg5 ;
-(void)switcherContentControllerBeginTethering:(id)arg1 ;
-(void)switcherContentControllerEndTethering:(id)arg1 ;
-(void)switcherContentController:(id)arg1 performTransitionWithRequest:(id)arg2 gestureInitiated:(BOOL)arg3 ;
-(void)cancelActiveGestureForSwitcherContentController:(id)arg1 ;
-(id)iconViewForIconIdentifier:(id)arg1 ;
-(BOOL)canInterruptActiveTransition;
-(void)_enumerateTransientOverlayViewControllersUsingBlock:(/*^block*/id)arg1 ;
-(void)_addAcquiredTransientOverlayViewController:(id)arg1 forAppLayout:(id)arg2 ;
-(BOOL)hasTransientOverlayAppLayouts;
-(void)eventSource:(id)arg1 userTouchedApplication:(id)arg2 ;
-(id)_currentAppLayout;
-(void)_updateContentViewInterfaceOrientation:(long long)arg1 ;
-(void)_evaluateAsynchronousRenderingEnablement;
-(void)switcherDemoFilteringControllerDidChangeHiddenApplicationBundleIDs:(id)arg1 ;
-(void)switcherContentController:(id)arg1 activatedBestAppSuggestion:(id)arg2 ;
-(id)recentAppLayouts;
-(void)_reqlinquishAssertion:(id)arg1 ;
-(void)_acquireAssertion:(id)arg1 ;
-(void)_updateAssertion:(id)arg1 ;
-(BOOL)hasAppLayoutForTransientOverlayViewController:(id)arg1 ;
-(void)appSwitcherModel:(id)arg1 didRemoveAppLayoutForFallingOffList:(id)arg2 ;
-(void)_insertCardForDisplayIdentifier:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_removeCardForDisplayIdentifier:(id)arg1 ;
-(CGRect)sceneEntityFrameForWorkspaceEntity:(id)arg1 inLayoutState:(id)arg2 ;
-(long long)_overrideWindowActiveInterfaceOrientation;
-(long long)switcherInterfaceOrientationForContentController:(id)arg1 ;
-(void)_addAppLayoutToFront:(id)arg1 ;
-(id)applicationSceneTransitionContextForDismissingFloatingInlineAppExpose;
-(void)_warmAppInfoForAppsInList;
-(void)_loadContentViewControllerIfNecessary;
-(void)_applicationDidExit:(id)arg1 ;
-(void)_noteUIWillLock;
-(void)_rebuildAppListCache;
-(void)_rebuildFloatingAppListCache;
-(void)_switcherServiceRemoved:(id)arg1 ;
-(void)_switcherServiceAdded:(id)arg1 ;
-(void)_applicationProcessDidExit:(id)arg1 ;
-(void)_continuityAppSuggestionChanged:(id)arg1 ;
-(void)_switcherModelChanged:(id)arg1 ;
-(void)_updateBestAppSuggestion;
-(void)_lockOrientationForSwitcherWithLayoutState:(id)arg1 ;
-(void)_lockKeyboardFocus;
-(void)_updateDisplayLayoutElementForLayoutState:(id)arg1 ;
-(void)_releaseSwitcherOrientationLock;
-(void)_releaseKeyboardFocus;
-(id)_appLayoutFromPrimaryLayoutItem:(id)arg1 sideLayoutElement:(id)arg2 configuration:(long long)arg3 ;
-(void)_deleteAppLayout:(id)arg1 forReason:(long long)arg2 ;
-(void)_addAppLayoutToFront:(id)arg1 removeAppLayout:(id)arg2 ;
-(BOOL)shouldPerformPreTransitionInsertionOfAppLayout:(id)arg1 forTransitionWithContext:(id)arg2 ;
-(void)_insertAppLayout:(id)arg1 atIndex:(unsigned long long)arg2 modelMutationBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setContentOrientation:(long long)arg1 forContentViewController:(id)arg2 ;
-(id)_contentWrapperViewForContentViewController:(id)arg1 ;
-(CGRect)applicationSceneSettingsFrameForInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2 ;
-(id)_entityForDisplayItem:(id)arg1 ;
-(/*^block*/id)_activateSwitcherValidatorWithEventLabel:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_dismissSwitcherNoninteractivelyToAppLayout:(id)arg1 dismissFloatingSwitcher:(BOOL)arg2 animated:(BOOL)arg3 ;
-(/*^block*/id)_toggleSwitcherTransitionValidatorAnimated:(BOOL)arg1 ;
-(NSHashTable *)_hideStatusBarAssertions;
-(void)_setHideStatusBarAssertions:(id)arg1 ;
-(long long)_currentUnlockedEnvironmentMode;
-(/*^block*/id)_dismissSwitcherValidatorToAppLayout:(id)arg1 dismissFloatingSwitcher:(BOOL)arg2 withEventLabel:(id)arg3 animated:(BOOL)arg4 ;
-(void)_doUglySiriActivationThingsIfNecessary:(id)arg1 ;
-(id)_appForDisplayItem:(id)arg1 ;
-(id)_appLayoutContainingDisplayItem:(id)arg1 ;
-(id)_transientOverlayPesentationManager;
-(void)_insertMainAppLayouts:(id)arg1 atIndexes:(id)arg2 floatingAppLayouts:(id)arg3 atIndexes:(id)arg4 modelMutationBlock:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_createFloatingSwitcherBackdropView;
-(BOOL)_shouldAddAppLayoutToFront:(id)arg1 ;
-(BOOL)_isBestAppSuggestionEligibleForSwitcher:(id)arg1 ;
-(id)_currentFloatingAppLayout;
-(void)_destroyAppListCache;
-(void)_cacheAppList;
-(void)_destroyFloatingAppListCache;
-(void)_cacheFloatingAppList;
-(void)_removeDisplayItemsAndGoToHomeScreen:(id)arg1 removalIntent:(id)arg2 ;
-(void)_removeDisplayItem:(id)arg1 withNowPrimaryWorkspaceEntity:(id)arg2 currentFloatingAppLayout:(id)arg3 intent:(id)arg4 ;
-(BOOL)_transitionRequestValidatorForRemovingDisplayItemWithRequest:(id)arg1 displayItem:(id)arg2 environmentMode:(long long)arg3 ;
-(void)_deleteDisplayItem:(id)arg1 ;
-(void)_cancelPiPForDisplayItem:(id)arg1 ;
-(void)_deleteAppLayoutForDisplayItem:(id)arg1 ;
-(void)_removeAppLayout:(id)arg1 forReason:(long long)arg2 modelMutationBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_purgeHiddenAppLayoutsForUILock;
-(void)_setAsynchronousRenderingEnabled:(BOOL)arg1 withMinificationFilter:(BOOL)arg2 forLayerTarget:(id)arg3 presentationManager:(id)arg4 ;
-(void)fluidSwitcherGestureManager:(id)arg1 didBeginGesture:(id)arg2 ;
-(void)fluidSwitcherGestureManager:(id)arg1 didUpdateGesture:(id)arg2 ;
-(void)fluidSwitcherGestureManager:(id)arg1 didEndGesture:(id)arg2 ;
-(void)fluidSwitcherGestureManager:(id)arg1 didBeginDraggingWindowWithSceneIdentifier:(id)arg2 ;
-(void)fluidSwitcherGestureManager:(id)arg1 willEndDraggingWindowWithSceneIdentifier:(id)arg2 ;
-(void)keyboardFocusController:(id)arg1 didUpdateFocusToPID:(int)arg2 sceneID:(id)arg3 ;
-(BOOL)isInAppStatusBarHidden;
-(SBAppLayout *)activeTransientOverlayPresentedAppLayout;
-(id)_currentVisibleFloatingItem;
-(BOOL)_hasAppLayoutBeenUserKilledWithinThresholdToCreateNewScene:(id)arg1 ;
-(id)_persistenceIdentifiersForBundleIdentifier:(id)arg1 ;
@end

