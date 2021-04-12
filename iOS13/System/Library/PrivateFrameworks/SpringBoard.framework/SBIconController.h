/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/BBObserverDelegate.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>
#import <libobjc.A.dylib/SBApplicationRestrictionObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBSearchGestureObserver.h>
#import <libobjc.A.dylib/FBSDisplayLayoutPublisherObserving.h>
#import <libobjc.A.dylib/SBRootFolderPageStateObserver.h>
#import <libobjc.A.dylib/SBAlertItemsControllerObserver.h>
#import <libobjc.A.dylib/SBAssistantObserver.h>
#import <libobjc.A.dylib/SBHIconManagerDelegate.h>
#import <libobjc.A.dylib/SBRootFolderControllerAccessoryViewControllerDelegate.h>
#import <libobjc.A.dylib/SBHomeScreenSpotlightDismissalDelegate.h>
#import <libobjc.A.dylib/SBHomeScreenTodayViewControllerDelegate.h>
#import <libobjc.A.dylib/SBFloatingDockControllerDelegate.h>
#import <libobjc.A.dylib/SPUIRemoteSearchViewDelegate.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/WGWidgetGroupViewControllerDelegate.h>
#import <libobjc.A.dylib/SBHSidebarProviderDelegate.h>
#import <libobjc.A.dylib/SBLayoutStateTransitionObserver.h>
#import <libobjc.A.dylib/SBIconModelApplicationDataSource.h>
#import <libobjc.A.dylib/SBHomeScreenIconTransitionAnimatorDelegate.h>
#import <libobjc.A.dylib/SBIconAnimationContaining.h>

@protocol SBRootFolderPageTransition, BSInvalidatable;
@class NSArray, UIView, UIWindow, NSSet, SBIconModel, BBObserver, NSMutableSet, SBApplicationController, SBApplicationPlaceholderController, SBUIController, SBMainDisplayPolicyAggregator, SBAlertItemsController, SBAssistantController, _UILegibilitySettings, NSIndexPath, SBWorkspaceTransitionRequest, BSEventQueue, SBFolderStatsQueryableMetric, NSMutableArray, NSMapTable, SBHIconImageCache, SBIconVisibilityService, SBHIconManager, SBHomeScreenTodayViewController, SBHomeScreenSpotlightViewController, SBFloatingDockController, NSTimer, PTSingleTestRecipe, SBHRootFolderSettings, SBAppStatusBarDateTimeAssertion, WGWidgetGroupViewController, SBTodayOverlayController, SBRootFolderController, SBFolderController, SBIconContentView, SBRootFolder, SBIconDragManager, NSString;

@interface SBIconController : UIViewController <BBObserverDelegate, MCProfileConnectionObserver, SBApplicationRestrictionObserver, UIGestureRecognizerDelegate, SBSearchGestureObserver, FBSDisplayLayoutPublisherObserving, SBRootFolderPageStateObserver, SBAlertItemsControllerObserver, SBAssistantObserver, SBHIconManagerDelegate, SBRootFolderControllerAccessoryViewControllerDelegate, SBHomeScreenSpotlightDismissalDelegate, SBHomeScreenTodayViewControllerDelegate, SBFloatingDockControllerDelegate, SPUIRemoteSearchViewDelegate, PTSettingsKeyObserver, WGWidgetGroupViewControllerDelegate, SBHSidebarProviderDelegate, SBLayoutStateTransitionObserver, SBIconModelApplicationDataSource, SBHomeScreenIconTransitionAnimatorDelegate, SBIconAnimationContaining> {

	NSSet* _visibleTags;
	NSSet* _hiddenTags;
	SBIconModel* _iconModel;
	BBObserver* _bbObserver;
	NSMutableSet* _displayIDsWithBadgingEnabled;
	SBApplicationController* _override_applicationController;
	SBApplicationPlaceholderController* _override_applicationPlaceholderController;
	SBUIController* _override_userInterfaceController;
	SBMainDisplayPolicyAggregator* _override_policyAggregator;
	SBAlertItemsController* _override_alertItemsController;
	SBAssistantController* _override_assistantController;
	BOOL _rotating;
	BOOL _allowsUninstall;
	BOOL _keyboardIsRotating;
	BOOL _isAnimatingSignficantly;
	BOOL _sendITunesNotification;
	BOOL _showingSearch;
	BOOL _performedInitialLayout;
	_UILegibilitySettings* _legibilitySettings;
	NSIndexPath* _indexPathToResetTo;
	SBWorkspaceTransitionRequest* _currentTransitionRequest;
	BSEventQueue* _transitionEventQueue;
	SBFolderStatsQueryableMetric* _queryableFolderMetric;
	NSMutableArray* _iconTouchesFinishedBlocks;
	NSMapTable* _folderControllerDeferRotationForIconScrollingAssertions;
	NSMapTable* _activeInterfaceOrientationChangeDeferralAssertionsByReason;
	NSMapTable* _deviceOrientationUpdateDeferralAssertionsByReason;
	SBHIconImageCache* _appSwitcherHeaderIconImageCache;
	SBHIconImageCache* _tableUIIconImageCache;
	SBHIconImageCache* _notificationIconImageCache;
	NSMutableSet* _delayedStyleWallpaperEffectViews;
	NSMapTable* _suspendWallpaperAnimationForFolderAssertions;
	SBIconVisibilityService* _iconVisibilityService;
	BOOL _hasRestrictedEnforcedLayout;
	BOOL _uninstallingSystemAppsRestricted;
	BOOL _dismissingMenuForFolderPresentation;
	BOOL __ignoreMutatingIconListsOnApplicationInstall;
	SBHIconManager* _iconManager;
	SBHomeScreenTodayViewController* _todayViewController;
	SBHomeScreenSpotlightViewController* _spotlightViewController;
	SBFloatingDockController* _floatingDockController;
	NSTimer* _delayedLaunchRequestTimer;
	NSTimer* _editingEndTimer;
	/*^block*/id _searchGestureCompletionHandler;
	NSTimer* _popoverDelayTimer;
	NSTimer* _iconEditingFeedbackWarmTimer;
	unsigned long long _iconOcclusionReasons;
	id<SBRootFolderPageTransition> _interactivePullToTodaySearchTransition;
	id<BSInvalidatable> _displayLayoutTransition;
	PTSingleTestRecipe* _relayoutTestRecipe;
	PTSingleTestRecipe* _toggleSearchTestRecipe;
	PTSingleTestRecipe* _runDownloadingIconTestRecipe;
	PTSingleTestRecipe* _organizeInFoldersTestRecipe;
	SBHRootFolderSettings* _rootFolderSettings;
	SBAppStatusBarDateTimeAssertion* _statusBarContentAssertion;
	id<BSInvalidatable> _sidebarAppearanceStateOverrideAssertion;
	id<BSInvalidatable> _significantAnimationColorSamplingAssertion;
	id<BSInvalidatable> _suspendWallpaperAnimationForSpotlightAssertion;
	WGWidgetGroupViewController* _widgetGroupViewController;
	SBTodayOverlayController* _todayOverlayController;
	long long _currentIconListIndex;
	NSSet* _appIconForceTouchWindows;

}

@property (assign,nonatomic) BOOL hasRestrictedEnforcedLayout;                                                                                       //@synthesize hasRestrictedEnforcedLayout=_hasRestrictedEnforcedLayout - In the implementation block
@property (assign,getter=isUninstallingSystemAppsRestricted,nonatomic) BOOL uninstallingSystemAppsRestricted;                                        //@synthesize uninstallingSystemAppsRestricted=_uninstallingSystemAppsRestricted - In the implementation block
@property (nonatomic,retain) NSTimer * delayedLaunchRequestTimer;                                                                                    //@synthesize delayedLaunchRequestTimer=_delayedLaunchRequestTimer - In the implementation block
@property (nonatomic,retain) NSTimer * editingEndTimer;                                                                                              //@synthesize editingEndTimer=_editingEndTimer - In the implementation block
@property (nonatomic,copy) id searchGestureCompletionHandler;                                                                                        //@synthesize searchGestureCompletionHandler=_searchGestureCompletionHandler - In the implementation block
@property (nonatomic,retain) NSTimer * popoverDelayTimer;                                                                                            //@synthesize popoverDelayTimer=_popoverDelayTimer - In the implementation block
@property (nonatomic,retain) NSTimer * iconEditingFeedbackWarmTimer;                                                                                 //@synthesize iconEditingFeedbackWarmTimer=_iconEditingFeedbackWarmTimer - In the implementation block
@property (assign,nonatomic) unsigned long long iconOcclusionReasons;                                                                                //@synthesize iconOcclusionReasons=_iconOcclusionReasons - In the implementation block
@property (nonatomic,retain) SBHomeScreenTodayViewController * todayViewController;                                                                  //@synthesize todayViewController=_todayViewController - In the implementation block
@property (nonatomic,retain) SBHomeScreenSpotlightViewController * spotlightViewController;                                                          //@synthesize spotlightViewController=_spotlightViewController - In the implementation block
@property (nonatomic,retain) id<SBRootFolderPageTransition> interactivePullToTodaySearchTransition;                                                  //@synthesize interactivePullToTodaySearchTransition=_interactivePullToTodaySearchTransition - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> displayLayoutTransition;                                                                            //@synthesize displayLayoutTransition=_displayLayoutTransition - In the implementation block
@property (nonatomic,readonly) PTSingleTestRecipe * relayoutTestRecipe;                                                                              //@synthesize relayoutTestRecipe=_relayoutTestRecipe - In the implementation block
@property (nonatomic,readonly) PTSingleTestRecipe * toggleSearchTestRecipe;                                                                          //@synthesize toggleSearchTestRecipe=_toggleSearchTestRecipe - In the implementation block
@property (nonatomic,readonly) PTSingleTestRecipe * runDownloadingIconTestRecipe;                                                                    //@synthesize runDownloadingIconTestRecipe=_runDownloadingIconTestRecipe - In the implementation block
@property (nonatomic,readonly) PTSingleTestRecipe * organizeInFoldersTestRecipe;                                                                     //@synthesize organizeInFoldersTestRecipe=_organizeInFoldersTestRecipe - In the implementation block
@property (nonatomic,readonly) SBHRootFolderSettings * rootFolderSettings;                                                                           //@synthesize rootFolderSettings=_rootFolderSettings - In the implementation block
@property (nonatomic,retain) SBAppStatusBarDateTimeAssertion * statusBarContentAssertion;                                                            //@synthesize statusBarContentAssertion=_statusBarContentAssertion - In the implementation block
@property (assign,nonatomic) BOOL dismissingMenuForFolderPresentation;                                                                               //@synthesize dismissingMenuForFolderPresentation=_dismissingMenuForFolderPresentation - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> sidebarAppearanceStateOverrideAssertion;                                                            //@synthesize sidebarAppearanceStateOverrideAssertion=_sidebarAppearanceStateOverrideAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> significantAnimationColorSamplingAssertion;                                                         //@synthesize significantAnimationColorSamplingAssertion=_significantAnimationColorSamplingAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> suspendWallpaperAnimationForSpotlightAssertion;                                                     //@synthesize suspendWallpaperAnimationForSpotlightAssertion=_suspendWallpaperAnimationForSpotlightAssertion - In the implementation block
@property (nonatomic,readonly) SBApplicationController * applicationController; 
@property (nonatomic,readonly) SBApplicationPlaceholderController * applicationPlaceholderController; 
@property (nonatomic,readonly) SBUIController * userInterfaceController; 
@property (nonatomic,readonly) SBMainDisplayPolicyAggregator * policyAggregator; 
@property (nonatomic,readonly) SBAlertItemsController * alertItemsController; 
@property (nonatomic,readonly) SBAssistantController * assistantController; 
@property (nonatomic,readonly) WGWidgetGroupViewController * widgetGroupViewController;                                                              //@synthesize widgetGroupViewController=_widgetGroupViewController - In the implementation block
@property (nonatomic,retain) SBIconModel * model; 
@property (nonatomic,retain) SBTodayOverlayController * todayOverlayController;                                                                      //@synthesize todayOverlayController=_todayOverlayController - In the implementation block
@property (getter=_rootFolderController,nonatomic,readonly) SBRootFolderController * rootFolderController; 
@property (getter=_openFolderController,nonatomic,readonly) SBFolderController * openFolderController; 
@property (getter=_currentFolderController,nonatomic,readonly) SBFolderController * currentFolderController; 
@property (assign,setter=_setIgnoreMutatingIconListsOnApplicationInstall:,nonatomic) BOOL _ignoreMutatingIconListsOnApplicationInstall;              //@synthesize _ignoreMutatingIconListsOnApplicationInstall=__ignoreMutatingIconListsOnApplicationInstall - In the implementation block
@property (nonatomic,readonly) long long currentIconListIndex;                                                                                       //@synthesize currentIconListIndex=_currentIconListIndex - In the implementation block
@property (nonatomic,readonly) BOOL areAnyIconViewContextMenusShowing; 
@property (nonatomic,readonly) NSSet * appIconForceTouchWindows;                                                                                     //@synthesize appIconForceTouchWindows=_appIconForceTouchWindows - In the implementation block
@property (nonatomic,readonly) SBHIconManager * iconManager;                                                                                         //@synthesize iconManager=_iconManager - In the implementation block
@property (nonatomic,readonly) SBHIconImageCache * appSwitcherHeaderIconImageCache; 
@property (nonatomic,readonly) SBHIconImageCache * appSwitcherUnmaskedIconImageCache; 
@property (nonatomic,readonly) SBHIconImageCache * tableUIIconImageCache; 
@property (nonatomic,readonly) SBHIconImageCache * notificationIconImageCache; 
@property (nonatomic,readonly) SBIconContentView * contentView; 
@property (nonatomic,readonly) SBRootFolder * rootFolder; 
@property (nonatomic,copy,readonly) NSSet * visibleIconStateDisplayIdentifiers; 
@property (nonatomic,readonly) BOOL iconsShouldAllowCloseBoxes; 
@property (nonatomic,readonly) unsigned long long allowedInterfaceOrientations; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                                             //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) SBIconDragManager * iconDragManager; 
@property (nonatomic,readonly) SBFloatingDockController * floatingDockController;                                                                    //@synthesize floatingDockController=_floatingDockController - In the implementation block
@property (nonatomic,readonly) id<SBIconAnimationContaining> currentAnimationContainer; 
@property (getter=isShowingTodayOverlay,nonatomic,readonly) BOOL showingTodayOverlay; 
@property (getter=isShowingSidebar,nonatomic,readonly) BOOL showingSidebar; 
@property (getter=isSidebarPinned,nonatomic,readonly) BOOL sidebarPinned; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double currentDockHeight; 
@property (nonatomic,copy,readonly) NSArray * allApplications; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) UIWindow * animationWindow; 
@property (nonatomic,readonly) UIView * fallbackIconContainerView; 
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)dealloc;
-(NSString *)description;
-(long long)orientation;
-(NSArray *)allApplications;
-(SBIconModel *)model;
-(void)setModel:(SBIconModel *)arg1 ;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBIconContentView *)contentView;
-(void)loadView;
-(UIView *)containerView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)publisher:(id)arg1 didUpdateLayout:(id)arg2 withTransition:(id)arg3 ;
-(SBHIconManager *)iconManager;
-(SBApplicationController *)applicationController;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2 ;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2 ;
-(void)_installedAppsDidChange:(id)arg1 ;
-(UIWindow *)animationWindow;
-(UIView *)fallbackIconContainerView;
-(void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2 ;
-(void)searchGesture:(id)arg1 completedShowing:(BOOL)arg2 ;
-(SBRootFolder *)rootFolder;
-(void)noteFloatingDockWillChangeHeight;
-(void)noteFloatingDockWillAnimateChangeInHeight;
-(SBIconDragManager *)iconDragManager;
-(void)folderController:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3 ;
-(UIEdgeInsets)contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg1 ;
-(id)containerViewForPresentingContextMenuForIconView:(id)arg1 ;
-(id)launchActionsForIconView:(id)arg1 ;
-(id)launchURLForIconView:(id)arg1 ;
-(SBHomeScreenTodayViewController *)todayViewController;
-(BOOL)isSidebarPinned;
-(void)rootFolderPageStateProvider:(id)arg1 willBeginTransitionToState:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 ;
-(id)rootFolderController:(id)arg1 transitionContextForTransitioningToState:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 ;
-(void)rootFolderPageStateProvider:(id)arg1 didContinueTransitionToState:(long long)arg2 progress:(double)arg3 ;
-(void)rootFolderPageStateProvider:(id)arg1 willEndTransitionToState:(long long)arg2 successfully:(BOOL)arg3 ;
-(void)rootFolderPageStateProvider:(id)arg1 didEndTransitionFromState:(long long)arg2 toState:(long long)arg3 successfully:(BOOL)arg4 ;
-(void)rootFolderController:(id)arg1 transitionWillBegin:(id)arg2 ;
-(void)rootFolderController:(id)arg1 transitionWillReverse:(id)arg2 ;
-(void)rootFolderController:(id)arg1 transitionWillFinish:(id)arg2 ;
-(void)rootFolderController:(id)arg1 transitionDidFinish:(id)arg2 ;
-(void)setTodayViewController:(SBHomeScreenTodayViewController *)arg1 ;
-(id)_rootFolderController;
-(double)minimumHomeScreenScale;
-(SBHRootFolderSettings *)rootFolderSettings;
-(id)windowForIconDragPreviewsForIconManager:(id)arg1 ;
-(BOOL)iconManagerCanBeginIconDrags:(id)arg1 ;
-(void)iconManager:(id)arg1 willBeginIconDragWithUniqueIdentifier:(id)arg2 numberOfDraggedItems:(unsigned long long)arg3 ;
-(void)iconManager:(id)arg1 didAddItemsToIconDragWithUniqueIdentifier:(id)arg2 numberOfDraggedItems:(unsigned long long)arg3 ;
-(void)iconManager:(id)arg1 didEndIconDragWithUniqueIdentifier:(id)arg2 numberOfDraggedItems:(unsigned long long)arg3 ;
-(id)iconManager:(id)arg1 dragPreviewForIconView:(id)arg2 dragPreviewForItem:(id)arg3 session:(id)arg4 previewParameters:(id)arg5 ;
-(void)iconManager:(id)arg1 iconDropSessionDidEnter:(id)arg2 ;
-(long long)interfaceOrientationForIconManager:(id)arg1 ;
-(unsigned long long)allowedInterfaceOrientationsForIconManager:(id)arg1 ;
-(void)iconManager:(id)arg1 willDestroyRootFolderController:(id)arg2 ;
-(void)iconManager:(id)arg1 willDestroyRootViewController:(id)arg2 ;
-(void)iconManager:(id)arg1 didCreateRootViewController:(id)arg2 ;
-(unsigned long long)allowedInterfaceOrientations;
-(void)iconManager:(id)arg1 willUseRootFolderControllerConfiguration:(id)arg2 ;
-(void)iconManager:(id)arg1 didCreateRootFolderController:(id)arg2 ;
-(BOOL)isFloatingDockVisibleForIconManager:(id)arg1 ;
-(NSTimer *)editingEndTimer;
-(void)setEditingEndTimer:(NSTimer *)arg1 ;
-(BOOL)isEditingAllowedForIconManager:(id)arg1 ;
-(BOOL)iconsShouldAllowCloseBoxes;
-(id)_currentFolderController;
-(void)iconManagerDidFinishInstallForIcon:(id)arg1 ;
-(void)_enqueueTransitionName:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_ensureRootFolderController;
-(void)iconManager:(id)arg1 willUseIconImageCache:(id)arg2 ;
-(BOOL)isRootFolderContentVisibleForIconManager:(id)arg1 ;
-(BOOL)isIconContentPossiblyVisibleOverApplicationForIconManager:(id)arg1 ;
-(id)viewControllerForPresentingViewControllersForIconManager:(id)arg1 ;
-(id)iconManager:(id)arg1 accessibilityTintColorForScreenRect:(CGRect)arg2 ;
-(void)_updateVisibleIconsViewsForAllowableCloseBoxes;
-(void)iconManagerIconDraggingDidChange:(id)arg1 ;
-(void)iconManagerFolderAnimatingDidChange:(id)arg1 ;
-(unsigned long long)maximumListCountForFoldersForIconManager:(id)arg1 ;
-(id)localizedDefaultFolderNameForIconManager:(id)arg1 ;
-(id)iconManager:(id)arg1 localizedFolderNameForDefaultDisplayName:(id)arg2 ;
-(void)iconManager:(id)arg1 willOpenFolder:(id)arg2 ;
-(void)iconManager:(id)arg1 didOpenFolder:(id)arg2 ;
-(void)iconManager:(id)arg1 willCloseFolder:(id)arg2 ;
-(void)iconManager:(id)arg1 didCloseFolder:(id)arg2 ;
-(void)iconManager:(id)arg1 possibleUserIconTapBegan:(id)arg2 ;
-(void)iconManager:(id)arg1 possibleUserIconTapBeganAfterInformingIcon:(id)arg2 ;
-(NSTimer *)iconEditingFeedbackWarmTimer;
-(void)setIconEditingFeedbackWarmTimer:(NSTimer *)arg1 ;
-(void)iconManager:(id)arg1 touchesEndedForIconView:(id)arg2 ;
-(id)iconManager:(id)arg1 reasonToDisallowInteractionOnIconView:(id)arg2 ;
-(void)iconManager:(id)arg1 willPrepareIconViewForLaunch:(id)arg2 ;
-(void)iconManager:(id)arg1 launchIconForIconView:(id)arg2 ;
-(void)iconManager:(id)arg1 didReceiveTapOnLaunchDisabledIconView:(id)arg2 ;
-(BOOL)_shouldRespondToIconCloseBoxes;
-(void)iconManager:(id)arg1 wantsUninstallForIcon:(id)arg2 location:(id)arg3 ;
-(BOOL)iconManager:(id)arg1 iconViewDisplaysCloseBox:(id)arg2 ;
-(BOOL)iconManager:(id)arg1 canBeginDragForIconView:(id)arg2 ;
-(long long)iconManager:(id)arg1 draggingStartLocationForIconView:(id)arg2 proposedStartLocation:(long long)arg3 ;
-(id)iconManager:(id)arg1 launchActionsForIconView:(id)arg2 ;
-(id)iconManager:(id)arg1 launchURLForIconView:(id)arg2 ;
-(id)iconManager:(id)arg1 containerViewForPresentingContextMenuForIconView:(id)arg2 ;
-(void)iconManager:(id)arg1 iconView:(id)arg2 willUseContextMenuStyle:(id)arg3 ;
-(double)iconManager:(id)arg1 additionalDragLiftScaleForIconView:(id)arg2 ;
-(long long)iconManager:(id)arg1 closeBoxTypeForIconView:(id)arg2 proposedType:(long long)arg3 ;
-(BOOL)iconManager:(id)arg1 allowsBadgingForIcon:(id)arg2 ;
-(id)iconManager:(id)arg1 backgroundViewForComponentsOfIconView:(id)arg2 ;
-(BOOL)iconManager:(id)arg1 shouldContinueToUseBackgroundView:(id)arg2 forComponentsOfIconView:(id)arg3 ;
-(id)iconManager:(id)arg1 accessibilityTintColorForIconView:(id)arg2 ;
-(id)iconManager:(id)arg1 applicationShortcutItemsForIconView:(id)arg2 ;
-(id)iconManager:(id)arg1 applicationBundleURLForShortcutsWithIconView:(id)arg2 ;
-(id)iconManager:(id)arg1 applicationShortcutWidgetBundleIdentifierForShortcutsWithIconView:(id)arg2 ;
-(BOOL)iconManager:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3 forIconView:(id)arg4 ;
-(id)recycledViewsContainerProviderForIconManager:(id)arg1 ;
-(void)iconManager:(id)arg1 configureIconView:(id)arg2 forIcon:(id)arg3 ;
-(BOOL)iconManager:(id)arg1 folderController:(id)arg2 canChangeCurrentPageIndexToIndex:(long long)arg3 ;
-(void)iconManager:(id)arg1 folderControllerWillBeginScrolling:(id)arg2 ;
-(void)iconManager:(id)arg1 folderControllerDidEndScrolling:(id)arg2 ;
-(double)iconManager:(id)arg1 minimumHomeScreenScaleForFolderController:(id)arg2 ;
-(void)iconManager:(id)arg1 didSpringLoadIconView:(id)arg2 ;
-(UIEdgeInsets)iconManager:(id)arg1 contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg2 ;
-(void)iconManager:(id)arg1 willOpenFolderController:(id)arg2 ;
-(void)iconManager:(id)arg1 willCloseFolderController:(id)arg2 ;
-(id)iconManager:(id)arg1 wantsToHideStatusBarForFolderController:(id)arg2 ;
-(id)iconManager:(id)arg1 fakeStatusBarForFolderController:(id)arg2 ;
-(id)iconManager:(id)arg1 statusBarStyleRequestForFolderController:(id)arg2 ;
-(void)iconManager:(id)arg1 willRemoveFakeStatusBar:(id)arg2 forFolderController:(id)arg3 ;
-(UIEdgeInsets)iconManager:(id)arg1 statusBarEdgeInsetsForFolderController:(id)arg2 ;
-(void)iconManager:(id)arg1 wantsToAdjustTodayContentForEdgeBounceForScrollOffset:(CGPoint)arg2 ;
-(double)distanceToTopOfSpotlightIconsForIconManager:(id)arg1 ;
-(id)iconManager:(id)arg1 backgroundViewForDockForRootFolderController:(id)arg2 ;
-(id)iconManager:(id)arg1 backgroundViewForEditingDoneButtonForRootFolderController:(id)arg2 ;
-(BOOL)iconManagerCanUseSeparateWindowForRotation:(id)arg1 ;
-(void)iconManager:(id)arg1 statusBarInsetsDidChange:(UIEdgeInsets)arg2 ;
-(void)iconManager:(id)arg1 rootFolderController:(id)arg2 willUseTransitionContext:(id)arg3 toTransitionToState:(long long)arg4 ;
-(void)iconManager:(id)arg1 rootFolderController:(id)arg2 willUsePropertyAnimator:(id)arg3 toTransitionToState:(long long)arg4 ;
-(void)iconManager:(id)arg1 rootFolderController:(id)arg2 didChangeSidebarVisibilityProgress:(double)arg3 ;
-(void)iconManager:(id)arg1 rootFolderController:(id)arg2 didChangeEffectiveSidebarVisibilityProgress:(double)arg3 ;
-(void)iconManager:(id)arg1 rootFolderController:(id)arg2 didOverscrollOnFirstPageByAmount:(double)arg3 ;
-(void)iconManager:(id)arg1 rootFolderController:(id)arg2 didEndOverscrollOnFirstPageWithVelocity:(double)arg3 ;
-(void)iconManager:(id)arg1 nestingViewController:(id)arg2 willPerformOperation:(long long)arg3 onViewController:(id)arg4 withTransitionCoordinator:(id)arg5 ;
-(id)iconManager:(id)arg1 animator:(id)arg2 animationSettingsForOperation:(unsigned long long)arg3 childViewController:(id)arg4 ;
-(BOOL)iconManagerCanSaveIconState:(id)arg1 ;
-(void)iconManagerDidSaveIconState:(id)arg1 ;
-(id)defaultIconStateForIconManager:(id)arg1 ;
-(id)firstPageLeafIdentifiersForIconManager:(id)arg1 ;
-(id)localizedFolderNameForDefaultDisplayName:(id)arg1 ;
-(void)iconManagerDidNoteIconStateChangedExternally:(id)arg1 ;
-(id)animator:(id)arg1 animationSettingsForOperation:(unsigned long long)arg2 childViewController:(id)arg3 ;
-(long long)currentIconListIndex;
-(void)popToCurrentRootIconListWhenPossible;
-(void)activateTodayViewWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissAppIconForceTouchControllers:(/*^block*/id)arg1 ;
-(double)currentDockHeight;
-(BOOL)areAnyIconViewContextMenusAnimating;
-(BOOL)areAnyIconViewContextMenusShowing;
-(void)performAfterContextMenuAnimationsHaveCompleted:(/*^block*/id)arg1 ;
-(void)earlyTerminateAnyContextMenuAnimations;
-(void)widgetGroupViewControllerDidChangeHeaderVisibility:(id)arg1 ;
-(CGSize)widgetGroupViewController:(id)arg1 sizeForInterfaceOrientation:(long long)arg2 ;
-(void)dismissSearchView;
-(SBTodayOverlayController *)todayOverlayController;
-(void)dismissTodayOverlay;
-(void)setTodayOverlayController:(SBTodayOverlayController *)arg1 ;
-(SBMainDisplayPolicyAggregator *)policyAggregator;
-(SBFloatingDockController *)floatingDockController;
-(id)initWithApplicationController:(id)arg1 applicationPlaceholderController:(id)arg2 userInterfaceController:(id)arg3 policyAggregator:(id)arg4 alertItemsController:(id)arg5 assistantController:(id)arg6 ;
-(void)updateNumberOfRowsWithDuration:(double)arg1 ;
-(void)handleHomeButtonTap;
-(void)noteTransientOverlayPresented;
-(void)_runTest:(/*^block*/id)arg1 afterMovingIconsIntoFolder:(id)arg2 withFolderOpen:(BOOL)arg3 ;
-(void)_runFolderOpenTest;
-(void)_runScrollFolderTest:(long long)arg1 ;
-(void)_runFolderCloseTest;
-(void)_runAppIconForceTouchTest:(id)arg1 withOptions:(id)arg2 ;
-(void)_runFolderTestWithName:(id)arg1 actions:(/*^block*/id)arg2 ;
-(WGWidgetGroupViewController *)widgetGroupViewController;
-(void)assistantWillAppear:(id)arg1 ;
-(void)_controlCenterWillPresent:(id)arg1 ;
-(id)_policyAggregator;
-(NSSet *)visibleIconStateDisplayIdentifiers;
-(BOOL)importIconState:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(void)alertItemsController:(id)arg1 willActivateAlertItem:(id)arg2 ;
-(void)alertItemsController:(id)arg1 didActivateAlertItem:(id)arg2 ;
-(void)alertItemsController:(id)arg1 didDeactivateAlertItem:(id)arg2 forReason:(int)arg3 ;
-(BOOL)isShowingSidebar;
-(SBAssistantController *)assistantController;
-(void)_selectIconModel:(BOOL)arg1 ;
-(void)_lockScreenUIWillLock:(id)arg1 ;
-(void)_primaryAppleAcountDidChange:(id)arg1 ;
-(void)_storeAccountDidChange:(id)arg1 ;
-(void)_backupRestoringDidChange:(id)arg1 ;
-(void)_controlCenterWillDismiss:(id)arg1 ;
-(void)_coverSheetWillPresent:(id)arg1 ;
-(void)_coverSheetDidPresent:(id)arg1 ;
-(void)_forceTouchControllerWillPresent:(id)arg1 ;
-(void)_updateUninstallingSystemAppsRestricted;
-(unsigned long long)_foldersInList:(id)arg1 ;
-(SBAlertItemsController *)alertItemsController;
-(void)updateContentViewOrientationAndLayoutIfNeeded;
-(void)_updateStatusBarContentAssertion;
-(void)_relinquishStatusBarContentAssertion;
-(long long)_effectiveOrientation;
-(void)_performInitialLayoutWithOrientation:(long long)arg1 ;
-(id)_openFolderController;
-(SBApplicationPlaceholderController *)applicationPlaceholderController;
-(BOOL)allowsUninstall;
-(BOOL)isUninstallingSystemAppsRestricted;
-(NSTimer *)delayedLaunchRequestTimer;
-(void)setDelayedLaunchRequestTimer:(NSTimer *)arg1 ;
-(id)launchActivationSettingsForIconView:(id)arg1 ;
-(void)completeSidebarAnimationsIfNeeded;
-(void)setUninstallingSystemAppsRestricted:(BOOL)arg1 ;
-(SBHIconImageCache *)tableUIIconImageCache;
-(CGSize)_suggestedTodayViewSizeForBounds:(CGRect)arg1 ;
-(unsigned long long)iconOcclusionReasons;
-(void)setIconOcclusionReasons:(unsigned long long)arg1 ;
-(void)_updateVisibleIconsAfterOcclusionChange;
-(void)addIconOcclusionReason:(unsigned long long)arg1 updateVisibleIcons:(BOOL)arg2 ;
-(void)removeIconOcclusionReason:(unsigned long long)arg1 updateVisibleIcons:(BOOL)arg2 ;
-(void)_mutateIconListsForInstalledAppsDidChangeWithController:(id)arg1 added:(id)arg2 modified:(id)arg3 removed:(id)arg4 ;
-(BOOL)_ignoreMutatingIconListsOnApplicationInstall;
-(void)setHasRestrictedEnforcedLayout:(BOOL)arg1 ;
-(void)_iconVisibilityChanged:(id)arg1 ;
-(BOOL)_badgesAreEnabledForSectionInfo:(id)arg1 ;
-(void)_updateEnabledBadgesSetWithSections:(id)arg1 ;
-(BOOL)hasRestrictedEnforcedLayout;
-(void)_acquireAssertionsForFolderController:(id)arg1 ;
-(void)_invalidateAssertionsForFolderController:(id)arg1 ;
-(SBHomeScreenSpotlightViewController *)spotlightViewController;
-(id)_todayOverlayControllerIfNeeded;
-(id<BSInvalidatable>)suspendWallpaperAnimationForSpotlightAssertion;
-(void)setSuspendWallpaperAnimationForSpotlightAssertion:(id<BSInvalidatable>)arg1 ;
-(id)transitionContextToShowSpotlight:(BOOL)arg1 fromTodayView:(BOOL)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 ;
-(id<BSInvalidatable>)displayLayoutTransition;
-(void)setDisplayLayoutTransition:(id<BSInvalidatable>)arg1 ;
-(void)setInteractivePullToTodaySearchTransition:(id<SBRootFolderPageTransition>)arg1 ;
-(id<SBRootFolderPageTransition>)interactivePullToTodaySearchTransition;
-(BOOL)_shouldHideAppIconForceTouchInfoForApplication:(id)arg1 ;
-(BOOL)isUninstallSupportedForIcon:(id)arg1 ;
-(id)_aggregateLoggingAppKeyForIcon:(id)arg1 ;
-(void)_beginDisablingAllOrientationChangesForReason:(id)arg1 ;
-(void)_endDisablingAllOrientationChangesForReason:(id)arg1 ;
-(id)searchGestureCompletionHandler;
-(void)setSearchGestureCompletionHandler:(id)arg1 ;
-(SBUIController *)userInterfaceController;
-(void)setSpotlightViewController:(SBHomeScreenSpotlightViewController *)arg1 ;
-(void)_showInfoAlertIfNeeded:(BOOL)arg1 ;
-(void)_launchFromIconView:(id)arg1 ;
-(void)setDismissingMenuForFolderPresentation:(BOOL)arg1 ;
-(BOOL)dismissingMenuForFolderPresentation;
-(BOOL)shouldUseLiveBlurForBackgroundViewForComponentsOfIconView:(id)arg1 ;
-(BOOL)allowsBadgingForIcon:(id)arg1 ;
-(id<BSInvalidatable>)significantAnimationColorSamplingAssertion;
-(void)setSignificantAnimationColorSamplingAssertion:(id<BSInvalidatable>)arg1 ;
-(id<BSInvalidatable>)sidebarAppearanceStateOverrideAssertion;
-(void)setSidebarAppearanceStateOverrideAssertion:(id<BSInvalidatable>)arg1 ;
-(void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3 ;
-(id)additionalIconModelForIconManager:(id)arg1 ;
-(id)iconManager:(id)arg1 defaultAutomaticFavoriteIconIdentifiersWithMaximumCount:(unsigned long long)arg2 ;
-(void)handleSpotlightPresentationFromViewController:(id)arg1 ;
-(void)handleSpotlightDismissalFromViewController:(id)arg1 ;
-(unsigned long long)defaultSearchViewPresentationSourceForViewController:(id)arg1 ;
-(BOOL)todayViewControllerCanBeginInteractivePullToSearch:(id)arg1 ;
-(void)todayViewControllerDidBeginInteractivePullToSearch:(id)arg1 ;
-(void)todayViewController:(id)arg1 didUpdateInteractivePullToSearchWithProgress:(double)arg2 ;
-(void)todayViewController:(id)arg1 didEndInteractivePullToSearchSuccessfully:(BOOL)arg2 ;
-(void)todayViewControllerDidFocusSearchField:(id)arg1 ;
-(double)minimumHomeScreenScaleForFloatingDockController:(id)arg1 ;
-(id)iconModel:(id)arg1 applicationWithBundleIdentifier:(id)arg2 ;
-(id)placeholdersByDisplayIDForIconModel:(id)arg1 ;
-(id)userInterfaceControllerIfExists;
-(id)folderNameForDisplayID:(id)arg1 ;
-(id)iconPathForIconWithDisplayID:(id)arg1 ;
-(void)noteViewCovered;
-(void)noteViewUncovered;
-(id<SBIconAnimationContaining>)currentAnimationContainer;
-(BOOL)resetHomeScreenLayout;
-(SBHIconImageCache *)appSwitcherUnmaskedIconImageCache;
-(SBHIconImageCache *)appSwitcherHeaderIconImageCache;
-(SBHIconImageCache *)notificationIconImageCache;
-(BOOL)isShowingTodayOverlay;
-(BOOL)areHomeScreenIconsOccluded;
-(BOOL)_isHostedByCoverSheet;
-(void)_iconForceTouchControllerWillPresent:(id)arg1 ;
-(void)_iconForceTouchControllerDidDismiss:(id)arg1 ;
-(NSTimer *)popoverDelayTimer;
-(void)setPopoverDelayTimer:(NSTimer *)arg1 ;
-(PTSingleTestRecipe *)relayoutTestRecipe;
-(PTSingleTestRecipe *)toggleSearchTestRecipe;
-(PTSingleTestRecipe *)runDownloadingIconTestRecipe;
-(PTSingleTestRecipe *)organizeInFoldersTestRecipe;
-(SBAppStatusBarDateTimeAssertion *)statusBarContentAssertion;
-(void)setStatusBarContentAssertion:(SBAppStatusBarDateTimeAssertion *)arg1 ;
-(void)_setIgnoreMutatingIconListsOnApplicationInstall:(BOOL)arg1 ;
-(NSSet *)appIconForceTouchWindows;
-(id)_createTestFolderWithOverrideIconList:(id)arg1 ;
-(id)_ppt_currentHomescreenState;
-(void)_ppt_restoreHomescreenState:(id)arg1 ;
-(void)_failCurrentTestWithMessage:(id)arg1 ;
-(id)_createTestFolder;
@end

