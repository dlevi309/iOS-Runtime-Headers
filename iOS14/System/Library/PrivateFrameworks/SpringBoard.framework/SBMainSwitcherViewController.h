/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
#import <libobjc.A.dylib/SBButtonEventsHandler.h>

@protocol SBSwitcherContentViewControlling, BSInvalidatable;
@class NSArray, SBAppSwitcherServiceSet, NSMutableDictionary, SBWindow, UIViewController, SBOrientationTransformWrapperView, SBFluidSwitcherGestureManager, NSMutableSet, SBAppLayout, SBSwitcherModelRemovalResults, NSDictionary, SBAppSwitcherSettings, NSMutableArray, SBPIPStashAssertion, SBMainDisplaySceneLayoutViewController, FBDisplayLayoutElement, SBAppSwitcherModel, SBSwitcherDemoCommandsServer, SBSwitcherDemoFilteringController, SBApplicationUserQuitMonitorServer, SiriContinuitySource, SBWorkspaceKeyboardFocusController, UIApplicationSceneDeactivationAssertion, SBAppStatusBarSettingsAssertion, BSSimpleAssertion, BSTimer, NSHashTable, BSAnimationSettings, NSString;

@interface SBMainSwitcherViewController : UIViewController <SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate, SBSwitcherDemoFilteringControllerObserver, PTSettingsKeyObserver, SBLayoutStateTransitionObserver, SBLayoutStateTransitionSceneEntityFrameProvider, SBFluidSwitcherGestureManagerDelegate, SBWorkspaceKeyboardFocusControllerObserver, SBAppSwitcherModelDelegate, SBMainDisplayWorkspaceAppInteractionEventSourceObserving, SBButtonEventsHandler> {

	NSArray* _appLayouts;
	SBAppSwitcherServiceSet* _switcherServices;
	NSMutableDictionary* _appLayoutToAcquiredTransientOverlayViewController;
	NSMutableDictionary* _appLayoutToEligibleTransientOverlayViewController;
	SBWindow* _window;
	UIViewController*<SBSwitcherContentViewControlling> _contentViewController;
	SBOrientationTransformWrapperView* _contentWrapperView;
	SBFluidSwitcherGestureManager* _gestureManager;
	NSMutableSet* _windowDragSceneIdentifiers;
	SBAppLayout* _activeAppLayoutWhenActivatingMainSwitcher;
	SBSwitcherModelRemovalResults* _activeTransitionModelRemovalResults;
	NSDictionary* _activeTransitionModelRemovalAppLayoutToRemovalContext;
	SBAppSwitcherSettings* _settings;
	Class _contentViewControllerClass;
	NSMutableArray* _servicesRemovedWhileAwayFromSwitcher;
	NSMutableSet* _liveAppLayoutsBeingTerminated;
	BOOL _ignoreModelUpdates;
	id<BSInvalidatable> _deferRotationForAppSwitcherAssertion;
	id<BSInvalidatable> _lockKeyboardFocusAssertion;
	SBPIPStashAssertion* _pipStashOverrideAssertion;
	id<BSInvalidatable> _wallpaperScaleAssertion;
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
@property (nonatomic,readonly) UIViewController*<SBSwitcherContentViewControlling> contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(double)minimumHomeScreenScale;
-(CGRect)sceneEntityFrameForWorkspaceEntity:(id)arg1 inLayoutState:(id)arg2 ;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(void)_evaluateAsynchronousRenderingEnablement;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg1 ;
-(BSAnimationSettings *)defaultTransitionAnimationSettings;
-(BOOL)handleLockButtonPress;
-(id)switcherContentController:(id)arg1 hiddenAppLayoutsForBundleIdentifier:(id)arg2 ;
-(BOOL)handleVolumeDownButtonPress;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(long long)_overrideWindowActiveInterfaceOrientation;
-(BOOL)handleHomeButtonDoublePress;
-(id)appLayoutsForSwitcherContentController:(id)arg1 ;
-(BOOL)handleVolumeUpButtonPress;
-(id)_currentAppLayout;
-(BOOL)switcherContentControllerIsFloatingApplicationSupported:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)_cancelPiPForDisplayItem:(id)arg1 ;
-(void)cancelActiveGestureForSwitcherContentController:(id)arg1 ;
-(long long)_overrideInterfaceOrientationMechanics;
-(id)_resultsForDisplayItemRemovalResolutionRequest:(id)arg1 ;
-(void)_continuityAppSuggestionChanged:(id)arg1 ;
-(BOOL)handleHomeButtonPress;
-(void)switcherContentController:(id)arg1 setWallpaperScale:(double)arg2 withAnimationMode:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(/*^block*/id)_dismissSwitcherValidatorToAppLayout:(id)arg1 dismissFloatingSwitcher:(BOOL)arg2 withEventLabel:(id)arg3 animated:(BOOL)arg4 ;
-(void)switcherContentController:(id)arg1 setPointerInteractionsEnabled:(BOOL)arg2 ;
-(id)_entityForDisplayItem:(id)arg1 ;
-(void)handleApplicationSceneEntityDestructionIntent:(id)arg1 forEntities:(id)arg2 ;
-(void)removeAppLayoutTransientOverlayViewController:(id)arg1 ;
-(id)applicationSceneTransitionContextForDismissingFloatingInlineAppExpose;
-(CGRect)frameForInlineAppExposeItemAspectFill:(BOOL)arg1 ;
-(void)_destroyAppListCache;
-(void)programmaticSwitchAppGestureMoveToRight;
-(void)_purgeHiddenAppLayoutsForUILock;
-(void)failMultitaskingGesturesForReason:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)requestInAppStatusBarHiddenAssertionForReason:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)dismissAllSwitchersNoninteractivelyAnimated:(BOOL)arg1 ;
-(void)_releaseKeyboardFocus;
-(BOOL)switcherContentController:(id)arg1 shouldMorphFromPiPForTransitionContext:(id)arg2 ;
-(BOOL)switcherContentController:(id)arg1 supportsKillingOfAppLayout:(id)arg2 ;
-(void)switcherContentController:(id)arg1 bringAppLayoutToFront:(id)arg2 ;
-(id)_currentVisibleFloatingItem;
-(BOOL)fluidSwitcherGestureManagerSupportsFloatingApplication:(id)arg1 ;
-(id)appLayoutForWorkspaceTransientOverlay:(id)arg1 ;
-(BOOL)_hasAppLayoutBeenUserKilledWithinThresholdToCreateNewScene:(id)arg1 ;
-(void)_reqlinquishAssertion:(id)arg1 ;
-(BOOL)_isAcquiredTransientOverlayViewController:(id)arg1 ;
-(void)switcherContentController:(id)arg1 setHomeScreenBackdropBlurType:(long long)arg2 ;
-(void)_updateDisplayLayoutElementForLayoutState:(id)arg1 ;
-(CGRect)applicationSceneSettingsFrameForInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2 ;
-(BOOL)switcherContentController:(id)arg1 shouldMorphToPiPForTransitionContext:(id)arg2 ;
-(double)scaleForDownscaledSnapshotGenerationForSceneHandle:(id)arg1 ;
-(void)switcherContentController:(id)arg1 setHomeScreenAlpha:(double)arg2 withAnimationMode:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)switcherContentController:(id)arg1 deletedAppLayout:(id)arg2 forReason:(long long)arg3 ;
-(BOOL)dismissMainSwitcherNoninteractivelyAnimated:(BOOL)arg1 ;
-(void)_switcherServiceAdded:(id)arg1 ;
-(void)_insertAppLayout:(id)arg1 atIndex:(unsigned long long)arg2 modelMutationBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)mainSwitcherWindow;
-(id)_appForDisplayItem:(id)arg1 ;
-(BOOL)isInAppStatusBarRequestedHiddenForSwitcherContentController:(id)arg1 ;
-(void)_insertCardForDisplayIdentifier:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(SBAppLayout *)activeTransientOverlayPresentedAppLayout;
-(NSHashTable *)_hideStatusBarAssertions;
-(unsigned long long)supportedInterfaceOrientations;
-(id)_deviceApplicationSceneHandleForDisplayItem:(id)arg1 creatingIfNeeded:(BOOL)arg2 ;
-(void)_setContentOrientation:(long long)arg1 forContentViewController:(id)arg2 ;
-(UIViewController*<SBSwitcherContentViewControlling>)contentViewController;
-(BOOL)canInterruptActiveTransition;
-(void)_releaseSwitcherOrientationLock;
-(id)_appLayoutFromPrimaryLayoutItem:(id)arg1 sideLayoutElement:(id)arg2 configuration:(long long)arg3 ;
-(void)eventSource:(id)arg1 userDeletedWebBookmark:(id)arg2 ;
-(BOOL)isMainSwitcherVisible;
-(void)_loadContentViewControllerIfNecessary;
-(void)_addAppLayoutToFront:(id)arg1 ;
-(id)createWorkspaceTransientOverlayForAppLayout:(id)arg1 ;
-(id)acquireAllowHiddenAppAssertionForBundleIdentifier:(id)arg1 reason:(id)arg2 ;
-(void)_enumerateTransientOverlayViewControllersUsingBlock:(/*^block*/id)arg1 ;
-(void)_cacheAppList;
-(void)switcherContentController:(id)arg1 handlePlusButtonActionForBundleIdentifier:(id)arg2 ;
-(BOOL)hasAppLayoutForTransientOverlayViewController:(id)arg1 ;
-(void)fluidSwitcherGestureManager:(id)arg1 didEndGesture:(id)arg2 ;
-(BOOL)shouldAutorotate;
-(BOOL)shouldPerformPreTransitionInsertionOfAppLayout:(id)arg1 forTransitionWithContext:(id)arg2 ;
-(void)programmaticSwitchAppGestureMoveToLeft;
-(id)activeTransientOverlayPresentedAppLayoutForSwitcherContentController:(id)arg1 ;
-(BOOL)deleteAppLayoutForDisplayItem:(id)arg1 ;
-(id)_displayItemForEntity:(id)arg1 ;
-(void)_updateBestAppSuggestion;
-(void)switcherContentController:(id)arg1 setContentOrientation:(long long)arg2 ;
-(void)switcherContentController:(id)arg1 setContainerStatusBarHidden:(BOOL)arg2 animationDuration:(double)arg3 ;
-(void)switcherContentController:(id)arg1 setHomeScreenBackdropBlurProgress:(double)arg2 withAnimationMode:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)switcherContentController:(id)arg1 setHomeScreenDimmingAlpha:(double)arg2 withAnimationMode:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isInAppStatusBarHidden;
-(void)_switcherModelChanged:(id)arg1 ;
-(void)fluidSwitcherGestureManager:(id)arg1 willEndDraggingWindowWithSceneIdentifier:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)switcherContentController:(id)arg1 shouldResignActiveForStartOfTransition:(id)arg2 ;
-(BOOL)isSlideOverSwitcherVisible;
-(id)_modelRemovalRequestForDisplayItemResolutionResults:(id)arg1 ;
-(void)switcherDemoFilteringControllerDidChangeHiddenApplicationBundleIDs:(id)arg1 ;
-(BOOL)activateMainSwitcherNoninteractivelyWithSource:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldAddAppLayoutToFront:(id)arg1 ;
-(void)_removeCardForDisplayIdentifier:(id)arg1 ;
-(id)homeGestureBottomEdgeRecognizer;
-(void)_doUglySiriActivationThingsIfNecessary:(id)arg1 ;
-(BOOL)isAnySwitcherVisible;
-(id)switcherContentController:(id)arg1 transitionEventForLayoutState:(id)arg2 identifier:(id)arg3 phase:(unsigned long long)arg4 animated:(BOOL)arg5 ;
-(void)_removeAcquiredTransientOverlayViewController:(id)arg1 ;
-(BOOL)_isBestAppSuggestionEligibleForSwitcher:(id)arg1 ;
-(void)keyboardFocusController:(id)arg1 didUpdateFocusToPID:(int)arg2 sceneID:(id)arg3 ;
-(void)switcherContentController:(id)arg1 performTransitionWithRequest:(id)arg2 gestureInitiated:(BOOL)arg3 ;
-(void)addAppLayoutForDisplayItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateAssertion:(id)arg1 ;
-(long long)homeScreenInterfaceOrientation;
-(void)_performSceneDestructionForModelRemovalResults:(id)arg1 ;
-(id)switcherContentController:(id)arg1 transitionEventForContext:(id)arg2 identifier:(id)arg3 phase:(unsigned long long)arg4 animated:(BOOL)arg5 ;
-(BOOL)switcherContentController:(id)arg1 supportsHeaderItemsForAppLayout:(id)arg2 ;
-(id)_persistenceIdentifiersForBundleIdentifier:(id)arg1 ;
-(id)matchingIconViewForIconView:(id)arg1 ;
-(id)recentAppLayouts;
-(BOOL)_isPerformingModelTransitionForReplacementAppLayout:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)switcherContentController:(id)arg1 setHomeScreenScale:(double)arg2 withAnimationMode:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(long long)_currentUnlockedEnvironmentMode;
-(void)_addAppLayoutToFront:(id)arg1 removeAppLayout:(id)arg2 ;
-(BOOL)_dismissSwitcherNoninteractivelyToAppLayout:(id)arg1 dismissFloatingSwitcher:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)updateWindowVisibilityForSwitcherContentController:(id)arg1 ;
-(BOOL)_supportsFloatingApplication;
-(id)_switcherModelRemovalResultsForRequest:(id)arg1 forReason:(long long)arg2 ;
-(void)appSwitcherModel:(id)arg1 didRemoveAppLayoutForFallingOffList:(id)arg2 ;
-(id)_init;
-(void)_addAcquiredTransientOverlayViewController:(id)arg1 forAppLayout:(id)arg2 ;
-(id)_recentAppLayoutsController;
-(CGRect)frameForItemWithRole:(long long)arg1 inMainAppLayout:(id)arg2 interfaceOrientation:(long long)arg3 ;
-(void)switcherContentController:(id)arg1 setCacheAsynchronousRenderingSurfaces:(BOOL)arg2 ;
-(void)_insertAppLayouts:(id)arg1 atIndexes:(id)arg2 modelMutationBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)handleHomeButtonSinglePressUp;
-(id)_appLayoutContainingDisplayItem:(id)arg1 ;
-(/*^block*/id)_toggleSwitcherTransitionValidatorAnimated:(BOOL)arg1 ;
-(void)eventSource:(id)arg1 userTouchedApplication:(id)arg2 ;
-(/*^block*/id)_activateSwitcherValidatorWithEventLabel:(id)arg1 animated:(BOOL)arg2 ;
-(void)_rebuildAppListCache;
-(void)_noteUIWillLock;
-(void)_updateContentViewInterfaceOrientation:(long long)arg1 ;
-(id)_currentFloatingAppLayout;
-(void)_removeAppLayout:(id)arg1 forReason:(long long)arg2 ;
-(void)fluidSwitcherGestureManager:(id)arg1 didBeginGesture:(id)arg2 ;
-(void)switcherContentController:(id)arg1 setWallpaperStyle:(long long)arg2 ;
-(BOOL)_shouldPrioritizeSortOrderForAppLayout:(id)arg1 ;
-(void)_acquireAssertion:(id)arg1 ;
-(void)setSuspendWallpaperAnimationAssertion:(id<BSInvalidatable>)arg1 ;
-(void)switcherContentController:(id)arg1 reopenHiddenAppLayoutsWithBundleIdentifier:(id)arg2 ;
-(long long)switcherInterfaceOrientationForContentController:(id)arg1 ;
-(void)_warmAppInfoForAppsInList;
-(id<BSInvalidatable>)suspendWallpaperAnimationAssertion;
-(void)_lockKeyboardFocus;
-(void)fluidSwitcherGestureManager:(id)arg1 didBeginDraggingWindowWithSceneIdentifier:(id)arg2 ;
-(BOOL)hasAppLayoutForDisplayItem:(id)arg1 ;
-(void)_applicationDidExit:(id)arg1 ;
-(BOOL)_hasAppLayoutContainingDisplayItem:(id)arg1 ;
-(void)updateUserInteractionEnabledForSwitcherContentController:(id)arg1 ;
-(id)viewControllerForTransientOverlayAppLayout:(id)arg1 ;
-(CGRect)frameForFloatingAppLayoutInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2 ;
-(void)_lockOrientationForSwitcherWithLayoutState:(id)arg1 ;
-(id)_transientOverlayPesentationManager;
-(id)windowsToExcludeForCrossfadeSnapshotForSwitcherContentController:(id)arg1 ;
-(long long)sbActiveInterfaceOrientation;
-(void)addAppLayoutForTransientOverlayViewController:(id)arg1 ;
-(void)fluidSwitcherGestureManager:(id)arg1 didUpdateGesture:(id)arg2 ;
-(void)_setHideStatusBarAssertions:(id)arg1 ;
-(void)switcherContentController:(id)arg1 activatedBestAppSuggestion:(id)arg2 ;
-(void)switcherContentController:(id)arg1 layoutStateTransitionDidEndWithTransitionContext:(id)arg2 ;
-(void)dealloc;
-(BOOL)toggleMainSwitcherNoninteractivelyWithSource:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_configureRequest:(id)arg1 forSwitcherTransitionRequest:(id)arg2 withEventLabel:(id)arg3 ;
-(void)_switcherServiceRemoved:(id)arg1 ;
-(void)_deleteAppLayoutsMatchingBundleIdentifier:(id)arg1 ;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(BOOL)hasTransientOverlayAppLayouts;
-(void)_setAsynchronousRenderingEnabled:(BOOL)arg1 withMinificationFilter:(BOOL)arg2 forLayerTarget:(id)arg3 presentationManager:(id)arg4 ;
@end

