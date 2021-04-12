/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/SBReusableViewMapDelegate.h>
#import <libobjc.A.dylib/SBRootFolderPageStateObserver.h>
#import <libobjc.A.dylib/SBNestingViewControllerDelegate.h>
#import <libobjc.A.dylib/SBHIconModelDelegate.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBRootFolderDelegate.h>
#import <libobjc.A.dylib/SBIconViewObserver.h>
#import <libobjc.A.dylib/SBIconViewDelegate.h>
#import <libobjc.A.dylib/SBIconViewQuerying.h>
#import <libobjc.A.dylib/SBHomeScreenIconTransitionAnimatorDelegate.h>
#import <libobjc.A.dylib/SBIconViewProviding.h>
#import <libobjc.A.dylib/SBRootFolderControllerDelegate.h>
#import <libobjc.A.dylib/SBIconLocationPresenting.h>

@protocol SBHIconManagerDelegate, SBHIconRootViewProviding, SBIconListLayoutProvider, SBHSidebarProvider;
@class SBReusableViewMap, SBIconLabelImageCache, UIImpactFeedbackGenerator, NSMutableSet, NSMutableArray, NSHashTable, SBIconPreviousLocationTracker, SBFolderIconImageCache, SBHIconImageCache, SBHIconModel, SBRootFolder, SBRootFolderController, UIViewController, SBFloatingDockViewController, _UILegibilitySettings, SBLeafIcon, SBHomeScreenIconTransitionAnimator, SBIconDragManager, SBIconPageIndicatorImageSetCache, SBIconView, NSTimer, NSIndexPath, SBFolder, BSEventQueue, SBWorkspaceInteractionContext, SBHHomeScreenSettings, SBHRootFolderSettings, NSString, SBHomeScreenDefaults, SBFolderController, SBSearchGesture, NSSet;

@interface SBHIconManager : NSObject <UIPopoverPresentationControllerDelegate, SBReusableViewMapDelegate, SBRootFolderPageStateObserver, SBNestingViewControllerDelegate, SBHIconModelDelegate, PTSettingsKeyObserver, SBRootFolderDelegate, SBIconViewObserver, SBIconViewDelegate, SBIconViewQuerying, SBHomeScreenIconTransitionAnimatorDelegate, SBIconViewProviding, SBRootFolderControllerDelegate, SBIconLocationPresenting> {

	SBReusableViewMap* _iconViewMap;
	SBReusableViewMap* _homescreenIconAccessoryViewMap;
	SBReusableViewMap* _homescreenIconLabelAccessoryViewMap;
	SBReusableViewMap* _homescreenIconImageViewMap;
	SBIconLabelImageCache* _labelImageCache;
	UIImpactFeedbackGenerator* _iconEditingFeedbackBehavior;
	NSMutableSet* _touchedIconViews;
	NSMutableArray* _iconTouchesFinishedBlocks;
	unsigned long long _maxIconViewsInHierarchy;
	NSHashTable* _pageStateObservers;
	NSHashTable* _folderPresentationObservers;
	NSMutableArray* _currentExpandCompletions;
	NSMutableArray* _currentCollapseCompletions;
	SBIconPreviousLocationTracker* _previousIconLocationTracker;
	SBFolderIconImageCache* _folderIconImageCache;
	SBHIconImageCache* _iconImageCache;
	unsigned long long _relayoutCount;
	Class _subclassIconViewClass;
	BOOL _dockPinnedForRotation;
	BOOL _showsDoneButtonWhileEditing;
	BOOL _editing;
	BOOL _animatingForUnscatter;
	BOOL _needsRelayout;
	BOOL _animatingFolderCreation;
	BOOL _animatingFolderOpeningOrClosing;
	BOOL _resettingRootIconLists;
	id<SBHIconManagerDelegate> _delegate;
	SBHIconModel* _iconModel;
	SBRootFolder* _rootFolder;
	SBRootFolderController* _rootFolderController;
	UIViewController*<SBHIconRootViewProviding> _rootViewController;
	SBFloatingDockViewController* _floatingDockViewController;
	_UILegibilitySettings* _legibilitySettings;
	id<SBIconListLayoutProvider> _listLayoutProvider;
	unsigned long long _listLayoutProviderLayoutOptions;
	SBLeafIcon* _iconToReveal;
	SBHomeScreenIconTransitionAnimator* _currentTransitionAnimator;
	SBIconDragManager* _iconDragManager;
	SBIconPageIndicatorImageSetCache* _iconPageIndicatorImageSetCache;
	SBIconView* _highlightedIconView;
	NSTimer* _editingEndTimer;
	NSTimer* _iconEditingFeedbackWarmTimer;
	SBIconView* _previewInteractingIconView;
	NSIndexPath* _postResetIndexPath;
	SBFolder* _closingFolder;
	BSEventQueue* _transitionEventQueue;
	SBWorkspaceInteractionContext* _currentInteractionContext;
	SBHHomeScreenSettings* _homeScreenSettings;
	SBHRootFolderSettings* _rootFolderSettings;
	NSString* _precachedContentSizeCategory;
	SBIconView* _popoverIconView;
	SBHomeScreenDefaults* _homeScreenDefaults;
	UIViewController*<SBHSidebarProvider> _sidebarViewController;

}

@property (nonatomic,retain) SBIconView * highlightedIconView;                                                                                 //@synthesize highlightedIconView=_highlightedIconView - In the implementation block
@property (nonatomic,retain) NSTimer * editingEndTimer;                                                                                        //@synthesize editingEndTimer=_editingEndTimer - In the implementation block
@property (nonatomic,retain) NSTimer * iconEditingFeedbackWarmTimer;                                                                           //@synthesize iconEditingFeedbackWarmTimer=_iconEditingFeedbackWarmTimer - In the implementation block
@property (nonatomic,retain) SBRootFolderController * rootFolderController;                                                                    //@synthesize rootFolderController=_rootFolderController - In the implementation block
@property (nonatomic,retain) UIViewController*<SBHIconRootViewProviding> rootViewController;                                                   //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,retain) SBIconView * previewInteractingIconView;                                                                          //@synthesize previewInteractingIconView=_previewInteractingIconView - In the implementation block
@property (nonatomic,copy) NSIndexPath * postResetIndexPath;                                                                                   //@synthesize postResetIndexPath=_postResetIndexPath - In the implementation block
@property (assign,nonatomic) BOOL needsRelayout;                                                                                               //@synthesize needsRelayout=_needsRelayout - In the implementation block
@property (assign,getter=isAnimatingFolderCreation,nonatomic) BOOL animatingFolderCreation;                                                    //@synthesize animatingFolderCreation=_animatingFolderCreation - In the implementation block
@property (assign,getter=isAnimatingFolderOpeningOrClosing,nonatomic) BOOL animatingFolderOpeningOrClosing;                                    //@synthesize animatingFolderOpeningOrClosing=_animatingFolderOpeningOrClosing - In the implementation block
@property (assign,getter=isAnimatingForUnscatter,nonatomic) BOOL animatingForUnscatter;                                                        //@synthesize animatingForUnscatter=_animatingForUnscatter - In the implementation block
@property (nonatomic,retain) SBFolder * closingFolder;                                                                                         //@synthesize closingFolder=_closingFolder - In the implementation block
@property (nonatomic,readonly) BSEventQueue * transitionEventQueue;                                                                            //@synthesize transitionEventQueue=_transitionEventQueue - In the implementation block
@property (nonatomic,retain) SBHomeScreenIconTransitionAnimator * currentTransitionAnimator;                                                   //@synthesize currentTransitionAnimator=_currentTransitionAnimator - In the implementation block
@property (nonatomic,retain) SBRootFolder * rootFolder;                                                                                        //@synthesize rootFolder=_rootFolder - In the implementation block
@property (nonatomic,retain) SBWorkspaceInteractionContext * currentInteractionContext;                                                        //@synthesize currentInteractionContext=_currentInteractionContext - In the implementation block
@property (nonatomic,readonly) SBHHomeScreenSettings * homeScreenSettings;                                                                     //@synthesize homeScreenSettings=_homeScreenSettings - In the implementation block
@property (nonatomic,readonly) SBHRootFolderSettings * rootFolderSettings;                                                                     //@synthesize rootFolderSettings=_rootFolderSettings - In the implementation block
@property (nonatomic,copy) NSString * precachedContentSizeCategory;                                                                            //@synthesize precachedContentSizeCategory=_precachedContentSizeCategory - In the implementation block
@property (nonatomic,retain) SBIconView * popoverIconView;                                                                                     //@synthesize popoverIconView=_popoverIconView - In the implementation block
@property (nonatomic,readonly) SBHomeScreenDefaults * homeScreenDefaults;                                                                      //@synthesize homeScreenDefaults=_homeScreenDefaults - In the implementation block
@property (nonatomic,retain) UIViewController*<SBHSidebarProvider> sidebarViewController;                                                      //@synthesize sidebarViewController=_sidebarViewController - In the implementation block
@property (assign,getter=isResettingRootIconLists,nonatomic) BOOL resettingRootIconLists;                                                      //@synthesize resettingRootIconLists=_resettingRootIconLists - In the implementation block
@property (assign,nonatomic,__weak) id<SBHIconManagerDelegate> delegate;                                                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientation; 
@property (nonatomic,retain) SBHIconModel * iconModel;                                                                                         //@synthesize iconModel=_iconModel - In the implementation block
@property (nonatomic,readonly) SBFolderController * openedFolderController; 
@property (nonatomic,retain) SBFloatingDockViewController * floatingDockViewController;                                                        //@synthesize floatingDockViewController=_floatingDockViewController - In the implementation block
@property (assign,getter=isDockPinnedForRotation,nonatomic) BOOL dockPinnedForRotation;                                                        //@synthesize dockPinnedForRotation=_dockPinnedForRotation - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButtonWhileEditing;                                                                                 //@synthesize showsDoneButtonWhileEditing=_showsDoneButtonWhileEditing - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                                                                    //@synthesize editing=_editing - In the implementation block
@property (getter=isEditingAllowed,nonatomic,readonly) BOOL editingAllowed; 
@property (getter=isIconDragging,nonatomic,readonly) BOOL iconDragging; 
@property (getter=isRootFolderContentVisible,nonatomic,readonly) BOOL rootFolderContentVisible; 
@property (getter=isIconContentPossiblyVisibleOverApplication,nonatomic,readonly) BOOL iconContentPossiblyVisibleOverApplication; 
@property (nonatomic,readonly) UIImpactFeedbackGenerator * iconEditingFeedbackBehavior; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                                       //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,retain) id<SBIconListLayoutProvider> listLayoutProvider;                                                                  //@synthesize listLayoutProvider=_listLayoutProvider - In the implementation block
@property (assign,nonatomic) unsigned long long listLayoutProviderLayoutOptions;                                                               //@synthesize listLayoutProviderLayoutOptions=_listLayoutProviderLayoutOptions - In the implementation block
@property (nonatomic,retain) SBLeafIcon * iconToReveal;                                                                                        //@synthesize iconToReveal=_iconToReveal - In the implementation block
@property (nonatomic,readonly) BOOL allowsNestedFolders; 
@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling; 
@property (getter=isRootFolderScrolling,nonatomic,readonly) BOOL rootFolderScrolling; 
@property (getter=isFolderScrolling,nonatomic,readonly) BOOL folderScrolling; 
@property (getter=isTrackingScroll,nonatomic,readonly) BOOL trackingScroll; 
@property (nonatomic,readonly) BOOL hasOpenFolder; 
@property (nonatomic,readonly) SBFolder * openedFolder; 
@property (nonatomic,readonly) BOOL canCloseFolders; 
@property (nonatomic,readonly) BOOL hasAnimatingFolder; 
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (getter=isPerformingExpandTransition,nonatomic,readonly) BOOL performingExpandTransition; 
@property (getter=isPerformingCancelledCollapseTransition,nonatomic,readonly) BOOL performingCancelledCollapseTransition; 
@property (nonatomic,readonly) SBIconDragManager * iconDragManager;                                                                            //@synthesize iconDragManager=_iconDragManager - In the implementation block
@property (getter=isIconTouched,nonatomic,readonly) BOOL iconTouched; 
@property (getter=isShowingPullDownSearch,nonatomic,readonly) BOOL showingPullDownSearch; 
@property (getter=isShowingPullDownOrTodayViewSearch,nonatomic,readonly) BOOL showingPullDownOrTodayViewSearch; 
@property (getter=isShowingSpotlightOrTodayView,nonatomic,readonly) BOOL showingSpotlightOrTodayView; 
@property (getter=isShowingTodayView,nonatomic,readonly) BOOL showingTodayView; 
@property (getter=isShowingOrTransitioningToTodayView,nonatomic,readonly) BOOL showingOrTransitioningToTodayView; 
@property (getter=isTransitioningHomeScreenState,nonatomic,readonly) BOOL transitioningHomeScreenState; 
@property (getter=isSidebarVisible,nonatomic,readonly) BOOL sidebarVisible; 
@property (getter=isSidebarEffectivelyVisible,nonatomic,readonly) BOOL sidebarEffectivelyVisible; 
@property (getter=isSidebarVisibilityGestureActive,nonatomic,readonly) BOOL sidebarVisibilityGestureActive; 
@property (nonatomic,readonly) SBSearchGesture * searchGesture; 
@property (nonatomic,readonly) SBIconPageIndicatorImageSetCache * iconPageIndicatorImageSetCache;                                              //@synthesize iconPageIndicatorImageSetCache=_iconPageIndicatorImageSetCache - In the implementation block
@property (nonatomic,readonly) SBFolderIconImageCache * folderIconImageCache; 
@property (nonatomic,readonly) SBHIconImageCache * iconImageCache; 
@property (nonatomic,copy,readonly) NSString * statisticsSummary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * presentedIconLocations; 
+(double)defaultIconLayoutAnimationDuration;
-(id)init;
-(NSString *)description;
-(id<SBHIconManagerDelegate>)delegate;
-(void)setDelegate:(id<SBHIconManagerDelegate>)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isScrolling;
-(long long)interfaceOrientation;
-(void)setRootViewController:(UIViewController*<SBHIconRootViewProviding>)arg1 ;
-(UIViewController*<SBHIconRootViewProviding>)rootViewController;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(BOOL)isTransitioning;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(SBHomeScreenIconTransitionAnimator *)currentTransitionAnimator;
-(void)setCurrentTransitionAnimator:(SBHomeScreenIconTransitionAnimator *)arg1 ;
-(id)viewMap:(id)arg1 makeNewViewOfClass:(Class)arg2 ;
-(unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2 ;
-(BOOL)viewMap:(id)arg1 shouldRecycleView:(id)arg2 ;
-(id)recycledViewsContainerProviderForViewMap:(id)arg1 ;
-(SBHomeScreenDefaults *)homeScreenDefaults;
-(UIViewController*<SBHSidebarProvider>)sidebarViewController;
-(SBHIconModel *)iconModel;
-(id)dockListView;
-(SBSearchGesture *)searchGesture;
-(id<SBIconListLayoutProvider>)listLayoutProvider;
-(SBFolderIconImageCache *)folderIconImageCache;
-(SBRootFolder *)rootFolder;
-(void)_sizeCategoryDidChange:(id)arg1 ;
-(void)noteFloatingDockWillChangeHeight;
-(void)setFloatingDockViewController:(SBFloatingDockViewController *)arg1 ;
-(void)layoutIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(BOOL)arg3 ;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 ;
-(BOOL)isDisplayingIconView:(id)arg1 ;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2 ;
-(NSSet *)presentedIconLocations;
-(id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2 ;
-(void)noteFloatingDockWillAnimateChangeInHeight;
-(BOOL)isIconDragging;
-(SBIconDragManager *)iconDragManager;
-(BOOL)isPresentingIconLocation:(id)arg1 ;
-(id)dequeueReusableIconViewOfClass:(Class)arg1 ;
-(void)recycleIconView:(id)arg1 ;
-(BOOL)isIconViewRecycled:(id)arg1 ;
-(void)configureIconView:(id)arg1 forIcon:(id)arg2 ;
-(BOOL)canCloseFolders;
-(Class)controllerClassForFolderClass:(Class)arg1 ;
-(void)setListLayoutProvider:(id<SBIconListLayoutProvider>)arg1 ;
-(SBIconPageIndicatorImageSetCache *)iconPageIndicatorImageSetCache;
-(id)firstIconViewForIcon:(id)arg1 ;
-(id)accessibilityTintColorForScreenRect:(CGRect)arg1 ;
-(Class)controllerClassForFolder:(id)arg1 ;
-(BOOL)folderController:(id)arg1 canChangeCurrentPageIndexToIndex:(long long)arg2 ;
-(void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2 ;
-(BOOL)folderControllerShouldClose:(id)arg1 withPinchGesture:(id)arg2 ;
-(void)folderControllerShouldBeginEditing:(id)arg1 ;
-(void)folderControllerShouldEndEditing:(id)arg1 ;
-(void)folderControllerWillBeginScrolling:(id)arg1 ;
-(void)folderControllerDidEndScrolling:(id)arg1 ;
-(BOOL)folderController:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3 ;
-(void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3 ;
-(id)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3 ;
-(void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(CGPoint)arg4 ;
-(void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3 ;
-(void)folderController:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3 ;
-(id)folderController:(id)arg1 iconListView:(id)arg2 previewForDroppingIconDragItem:(id)arg3 proposedPreview:(id)arg4 ;
-(void)folderController:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4 ;
-(BOOL)folderController:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg3 onIconView:(id)arg4 ;
-(void)folderController:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3 ;
-(double)minimumHomeScreenScaleForFolderController:(id)arg1 ;
-(void)folderControllerWillOpen:(id)arg1 ;
-(void)folderControllerWillClose:(id)arg1 ;
-(UIEdgeInsets)contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg1 ;
-(id)folderControllerWantsToHideStatusBar:(id)arg1 ;
-(id)fakeStatusBarForFolderController:(id)arg1 ;
-(void)folderController:(id)arg1 willRemoveFakeStatusBar:(id)arg2 ;
-(id)statusBarStyleRequestForFolderController:(id)arg1 ;
-(UIEdgeInsets)statusBarEdgeInsetsForFolderController:(id)arg1 ;
-(void)folderController:(id)arg1 willUseIconTransitionAnimator:(id)arg2 forOperation:(long long)arg3 onViewController:(id)arg4 animated:(BOOL)arg5 ;
-(id)folderController:(id)arg1 accessibilityTintColorForScreenRect:(CGRect)arg2 ;
-(void)folderController:(id)arg1 willCreateInnerFolderControllerWithConfiguration:(id)arg2 ;
-(id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg1 inLocations:(id)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(SBHIconImageCache *)iconImageCache;
-(void)nestingViewController:(id)arg1 willPerformOperation:(long long)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4 ;
-(id)folderControllerForFolder:(id)arg1 ;
-(void)unscatterAnimated:(BOOL)arg1 afterDelay:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)nestingViewController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(BOOL)iconView:(id)arg1 editingModeGestureRecognizerDidFire:(id)arg2 ;
-(BOOL)iconView:(id)arg1 shouldContinueToUseBackgroundViewForComponents:(id)arg2 ;
-(double)additionalDragLiftScaleForIconView:(id)arg1 ;
-(BOOL)iconViewShouldBeginShortcutsPresentation:(id)arg1 ;
-(id)containerViewForPresentingContextMenuForIconView:(id)arg1 ;
-(void)iconView:(id)arg1 willUseContextMenuStyle:(id)arg2 ;
-(void)iconViewShortcutsPresentationDidFinish:(id)arg1 ;
-(id)applicationBundleURLForShortcutsWithIconView:(id)arg1 ;
-(id)applicationShortcutWidgetBundleIdentifierForShortcutsWithIconView:(id)arg1 ;
-(BOOL)iconView:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)iconView:(id)arg1 applicationShortcutItemsWithProposedItems:(id)arg2 ;
-(void)iconView:(id)arg1 willRemoveIconLabelAccessoryView:(id)arg2 ;
-(id)iconView:(id)arg1 iconLabelAccessoryViewOfType:(long long)arg2 ;
-(void)iconView:(id)arg1 willRemoveIconImageView:(id)arg2 ;
-(id)imageViewForIconView:(id)arg1 ;
-(BOOL)iconViewDisplaysBadges:(id)arg1 ;
-(id)iconView:(id)arg1 parallaxSettingsForIconAccessoryView:(id)arg2 ;
-(id)iconView:(id)arg1 iconAccessoryViewOfClass:(Class)arg2 ;
-(void)iconView:(id)arg1 willRemoveIconAccessoryView:(id)arg2 ;
-(BOOL)icon:(id)arg1 canReceiveGrabbedIcon:(id)arg2 ;
-(id)accessibilityTintColorForIconView:(id)arg1 ;
-(long long)iconView:(id)arg1 draggingStartLocationWithProposedStartLocation:(long long)arg2 ;
-(id)launchActionsForIconView:(id)arg1 ;
-(id)launchURLForIconView:(id)arg1 ;
-(id)iconView:(id)arg1 dragPreviewForItem:(id)arg2 session:(id)arg3 previewParameters:(id)arg4 ;
-(BOOL)iconViewCanBeginDrags:(id)arg1 ;
-(void)iconView:(id)arg1 willAnimateDragLiftWithAnimator:(id)arg2 session:(id)arg3 ;
-(void)iconView:(id)arg1 dragLiftAnimationDidChangeDirection:(long long)arg2 ;
-(BOOL)iconView:(id)arg1 canAddDragItemsToSession:(id)arg2 ;
-(void)iconView:(id)arg1 willAddDragItems:(id)arg2 toSession:(id)arg3 ;
-(void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2 ;
-(void)iconView:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3 ;
-(void)iconView:(id)arg1 didEndDragSession:(id)arg2 withOperation:(unsigned long long)arg3 ;
-(id)iconViewWillCancelDrag:(id)arg1 ;
-(void)iconView:(id)arg1 willUsePreviewForCancelling:(id)arg2 targetIconView:(id)arg3 ;
-(void)iconView:(id)arg1 item:(id)arg2 willAnimateDragCancelWithAnimator:(id)arg3 ;
-(void)iconTouchBegan:(id)arg1 ;
-(void)icon:(id)arg1 touchMoved:(id)arg2 ;
-(void)iconTapped:(id)arg1 ;
-(BOOL)iconShouldAllowTap:(id)arg1 ;
-(BOOL)iconShouldAllowCloseBoxTap:(id)arg1 ;
-(id)backgroundViewForComponentsOfIconView:(id)arg1 ;
-(BOOL)iconViewDisplaysCloseBox:(id)arg1 ;
-(long long)closeBoxTypeForIconView:(id)arg1 ;
-(void)iconCloseBoxTapped:(id)arg1 ;
-(void)icon:(id)arg1 touchEnded:(BOOL)arg2 ;
-(void)removeAllIconAnimations;
-(void)iconViewWasRecycled:(id)arg1 ;
-(id)iconView:(id)arg1 labelImageWithParameters:(id)arg2 ;
-(BOOL)rootFolder:(id)arg1 canBounceIcon:(id)arg2 ;
-(BOOL)showsDoneButtonWhileEditing;
-(BOOL)dismissSpotlightAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isDockPinnedForRotation;
-(BOOL)isSidebarEffectivelyVisible;
-(BOOL)isSidebarVisibilityGestureActive;
-(BOOL)rootFolderControllerCanUseSeparateWindowForRotation:(id)arg1 ;
-(void)rootFolderController:(id)arg1 statusBarInsetsDidChange:(UIEdgeInsets)arg2 ;
-(BOOL)isSidebarVisible;
-(void)rootFolderController:(id)arg1 wantsToAdjustTodayContentForEdgeBounceForScrollOffset:(CGPoint)arg2 ;
-(double)distanceToTopOfSpotlightIconsForRootFolderController:(id)arg1 ;
-(double)maxExternalDockHeightForRootFolderController:(id)arg1 ;
-(double)externalDockHeightForRootFolderController:(id)arg1 ;
-(double)preferredExternalDockVerticalMarginForRootFolderController:(id)arg1 ;
-(id)backgroundViewForDockForRootFolderController:(id)arg1 ;
-(id)backgroundViewForEditingDoneButtonForRootFolderController:(id)arg1 ;
-(void)rootFolderController:(id)arg1 didChangeSidebarVisibilityProgress:(double)arg2 ;
-(void)rootFolderController:(id)arg1 didChangeEffectiveSidebarVisibilityProgress:(double)arg2 ;
-(void)rootFolderController:(id)arg1 didOverscrollOnFirstPageByAmount:(double)arg2 ;
-(void)rootFolderController:(id)arg1 didEndOverscrollOnFirstPageWithVelocity:(double)arg2 ;
-(void)rootFolderController:(id)arg1 willUsePropertyAnimator:(id)arg2 toTransitionToState:(long long)arg3 ;
-(void)rootFolderPageStateProvider:(id)arg1 willBeginTransitionToState:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 ;
-(void)enumeratePageStateObserversUsingBlock:(/*^block*/id)arg1 ;
-(void)rootFolderController:(id)arg1 willUseTransitionContext:(id)arg2 toTransitionToState:(long long)arg3 ;
-(void)rootFolderPageStateProvider:(id)arg1 didContinueTransitionToState:(long long)arg2 progress:(double)arg3 ;
-(void)rootFolderPageStateProvider:(id)arg1 willEndTransitionToState:(long long)arg2 successfully:(BOOL)arg3 ;
-(void)rootFolderPageStateProvider:(id)arg1 didEndTransitionFromState:(long long)arg2 toState:(long long)arg3 successfully:(BOOL)arg4 ;
-(id)externalDockIconListViewForRootFolderController:(id)arg1 ;
-(void)setSidebarViewController:(UIViewController*<SBHSidebarProvider>)arg1 ;
-(void)addPageStateObserver:(id)arg1 ;
-(void)removePageStateObserver:(id)arg1 ;
-(SBRootFolderController *)rootFolderController;
-(SBHRootFolderSettings *)rootFolderSettings;
-(void)iconDragManager:(id)arg1 didEndDragOriginatingFromIconView:(id)arg2 userDidBeginDrag:(BOOL)arg3 lastUserInteractionDate:(id)arg4 ;
-(void)iconDragManagerIconDraggingDidChange:(id)arg1 ;
-(void)getListView:(id*)arg1 folder:(id*)arg2 relativePath:(id*)arg3 forIndexPath:(id)arg4 createIfNecessary:(BOOL)arg5 ;
-(void)uninstallIcon:(id)arg1 animate:(BOOL)arg2 ;
-(void)layoutIconListsWithAnimationType:(long long)arg1 ;
-(void)cancelAllDrags;
-(BOOL)isEditingAllowed;
-(BOOL)isIconContentPossiblyVisibleOverApplication;
-(SBFloatingDockViewController *)floatingDockViewController;
-(BOOL)isRootFolderContentVisible;
-(void)layoutIconListsWithAnimationType:(long long)arg1 forceRelayout:(BOOL)arg2 ;
-(UIImpactFeedbackGenerator *)iconEditingFeedbackBehavior;
-(void)setEditing:(BOOL)arg1 withFeedbackBehavior:(id)arg2 ;
-(void)iconDragManagerMultiItemIconDraggingDidChange:(id)arg1 ;
-(BOOL)isIconCurrentlyOnscreen:(id)arg1 ;
-(BOOL)isTrackingScroll;
-(id)createNewFolderFromRecipientIcon:(id)arg1 grabbedIcon:(id)arg2 ;
-(void)addIcons:(id)arg1 intoFolderIcon:(id)arg2 openFolderOnFinish:(BOOL)arg3 complete:(/*^block*/id)arg4 ;
-(void)pushExpandedIcon:(id)arg1 location:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)allowsNestedFolders;
-(void)_reduceTransparencyStatusDidChange:(id)arg1 ;
-(BOOL)hasRootViewController;
-(void)_prepareToResetRootIconLists;
-(void)_iconModelWillReloadIcons:(id)arg1 ;
-(void)_iconModelDidReloadIcons:(id)arg1 ;
-(void)_iconModelWillLayout:(id)arg1 ;
-(void)_iconModelDidLayout:(id)arg1 ;
-(void)setRootFolder:(SBRootFolder *)arg1 ;
-(id)_rootFolderForRootViewControllerForRootFolder:(id)arg1 ;
-(void)_precacheImagesForRootIcons;
-(BOOL)hasAnimatingFolder;
-(void)setNeedsRelayout:(BOOL)arg1 ;
-(id)iconLocationForPrecachingImages;
-(Class)iconViewClass;
-(void)setPrecachedContentSizeCategory:(NSString *)arg1 ;
-(BOOL)relayout;
-(void)addNewIconToDesignatedLocation:(id)arg1 animate:(BOOL)arg2 scrollToList:(BOOL)arg3 saveIconState:(BOOL)arg4 ;
-(void)_finishResetRootIconLists;
-(void)_finishResetRootIconListsReusingPreviousControllers:(BOOL)arg1 ;
-(void)setResettingRootIconLists:(BOOL)arg1 ;
-(BOOL)hasOpenFolder;
-(SBFolderController *)openedFolderController;
-(void)setPostResetIndexPath:(NSIndexPath *)arg1 ;
-(void)closeFolderAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setRootFolderController:(SBRootFolderController *)arg1 ;
-(id)_createAppropriateRootViewControllerForRootFolder:(id)arg1 ;
-(NSIndexPath *)postResetIndexPath;
-(SBHHomeScreenSettings *)homeScreenSettings;
-(id)_createRootTableControllerForRootFolder:(id)arg1 ;
-(id)_createRootFolderControllerForRootFolder:(id)arg1 ;
-(unsigned long long)allowedInterfaceOrientations;
-(void)setShowsDoneButtonWhileEditing:(BOOL)arg1 ;
-(void)setDockPinnedForRotation:(BOOL)arg1 ;
-(void)_configureRootFolderConfiguration:(id)arg1 ;
-(BOOL)isResettingRootIconLists;
-(SBFolder *)openedFolder;
-(void)setPreviewInteractingIconView:(SBIconView *)arg1 ;
-(NSTimer *)editingEndTimer;
-(void)setEditingEndTimer:(NSTimer *)arg1 ;
-(void)_restartEditingEndTimer;
-(BOOL)isIconTouched;
-(id)reasonToDisallowTapOnIconView:(id)arg1 ;
-(BOOL)canOpenFolders;
-(SBIconView *)highlightedIconView;
-(void)setHighlightedIconView:(SBIconView *)arg1 ;
-(id)effectiveDockListView;
-(id)floatingDockListView;
-(BOOL)iconsShouldAllowCloseBoxes;
-(void)enumerateIconModelsUsingBlock:(/*^block*/id)arg1 ;
-(SBLeafIcon *)iconToReveal;
-(void)setIconToReveal:(SBLeafIcon *)arg1 ;
-(void)uninstallIcon:(id)arg1 ;
-(void)uninstallIcon:(id)arg1 animate:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeIcon:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)iconListViewForIndexPath:(id)arg1 ;
-(void)popExpandedIconAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setIconToReveal:(id)arg1 revealingPrevious:(BOOL)arg2 ;
-(id)_currentFolderController;
-(void)_tryScrollToIconToRevealAnimated:(BOOL)arg1 ;
-(void)_enqueueTransitionName:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)finishInstallingIconAnimated:(BOOL)arg1 ;
-(void)popToCurrentRootIconList;
-(void)layoutIconListsWithAnimationType:(long long)arg1 duration:(double)arg2 forceRelayout:(BOOL)arg3 ;
-(void)setAnimatingForUnscatter:(BOOL)arg1 ;
-(void)_ensureRootFolderController;
-(id)iconListViewAtIndex:(unsigned long long)arg1 inFolder:(id)arg2 createIfNecessary:(BOOL)arg3 ;
-(id)currentRootIconList;
-(id)addDownloadingIconsForDataSources:(id)arg1 ;
-(id)replaceDownloadingIconsForDataSources:(id)arg1 withIconsFromGenerator:(/*^block*/id)arg2 ;
-(unsigned long long)maxListCountForFolders;
-(unsigned long long)maxIconCountForListInFolderClass:(Class)arg1 ;
-(void)_updateVisibleIconsViewsForAllowableCloseBoxes;
-(BOOL)hasRootFolderController;
-(BOOL)isAnimatingFolderOpeningOrClosing;
-(BOOL)isAnimatingFolderCreation;
-(void)hasAnimatingFolderChanged;
-(id)_proposedFolderNameForGrabbedIcon:(id)arg1 recipientIcon:(id)arg2 ;
-(void)setAnimatingFolderCreation:(BOOL)arg1 ;
-(id)localizedDefaultFolderName;
-(void)openFolderIcon:(id)arg1 location:(id)arg2 animated:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)popExpandedIconFromLocation:(id)arg1 interactionContext:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setCurrentInteractionContext:(SBWorkspaceInteractionContext *)arg1 ;
-(BOOL)isRootFolderScrolling;
-(BOOL)isFolderScrolling;
-(void)_animateFolderIcon:(id)arg1 open:(BOOL)arg2 location:(id)arg3 animated:(BOOL)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)setAnimatingFolderOpeningOrClosing:(BOOL)arg1 ;
-(void)_closeFolderController:(id)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setClosingFolder:(SBFolder *)arg1 ;
-(void)_cleanupForClosingFolderAnimated:(BOOL)arg1 ;
-(void)_compactRootListsAfterFolderCloseWithAnimation:(BOOL)arg1 ;
-(void)_folderDidFinishOpenClose:(BOOL)arg1 animated:(BOOL)arg2 success:(BOOL)arg3 ;
-(void)replaceFolderIcon:(id)arg1 byContainedIcon:(id)arg2 animated:(BOOL)arg3 ;
-(BSEventQueue *)transitionEventQueue;
-(BOOL)isShowingTodayView;
-(BOOL)presentSpotlightFromSource:(unsigned long long)arg1 fromBreadcrumb:(BOOL)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)isShowingOrTransitioningToTodayView;
-(BOOL)_isShowingPullDownSearchOrTransitioning;
-(BOOL)_isShowingTodayViewSearchOrTransitioning;
-(BOOL)isShowingPullDownSearch;
-(BOOL)_isShowingTodayViewSearch;
-(BOOL)_isShowingSearchableTodayView;
-(BOOL)_isShowingOrTransitioningToSearchableTodayView;
-(void)getStatistics:(SBHIconManagerStatistics*)arg1 ;
-(NSString *)precachedContentSizeCategory;
-(void)_addTouchedIconView:(id)arg1 ;
-(BOOL)shouldHighlightTouchedIconView:(id)arg1 ;
-(void)highlightIconView:(id)arg1 ;
-(NSTimer *)iconEditingFeedbackWarmTimer;
-(void)setIconEditingFeedbackWarmTimer:(NSTimer *)arg1 ;
-(void)_removeTouchedIconView:(id)arg1 ;
-(id)reasonToDisallowInteractionOnIconView:(id)arg1 ;
-(void)clearHighlightedIcon;
-(BOOL)_shouldRespondToIconCloseBoxes;
-(void)_noteUserIsInteractingWithIcons;
-(BOOL)iconAllowsBadging:(id)arg1 ;
-(id)homescreenIconImageViewMap;
-(id)homescreenIconAccessoryViewMap;
-(BOOL)_shouldParallaxInIconLocation:(id)arg1 ;
-(id)homescreenIconLabelAccessoryViewMap;
-(id)iconLabelImageCache;
-(SBIconView *)previewInteractingIconView;
-(void)_setupApplicationShortcutItemsForPresentation:(id)arg1 ;
-(id)iconViewMap;
-(BOOL)shouldRecycleIconView:(id)arg1 ;
-(BOOL)isPerformingCancelledExpandTransition;
-(void)enumerateIconViewQueryableChildrenUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isFloatingDockVisible;
-(SBWorkspaceInteractionContext *)currentInteractionContext;
-(void)performAfterAllIconTouchesFinishedUsingBlock:(/*^block*/id)arg1 ;
-(void)noteIconStateChangedExternally;
-(id)localizedFolderNameForDefaultDisplayName:(id)arg1 ;
-(void)tearDownAndResetRootIconLists;
-(unsigned long long)listLayoutProviderLayoutOptions;
-(unsigned long long)maxListCountForFoldersForIconModel:(id)arg1 ;
-(unsigned long long)iconModel:(id)arg1 maxIconCountForListInFolderClass:(Class)arg2 ;
-(unsigned long long)maxIconCountForDockForIconModel:(id)arg1 ;
-(unsigned long long)iconModel:(id)arg1 maxRowCountForListInRootFolderWithInterfaceOrientation:(long long)arg2 ;
-(unsigned long long)iconModel:(id)arg1 maxColumnCountForListInRootFolderWithInterfaceOrientation:(long long)arg2 ;
-(BOOL)supportsDockForIconModel:(id)arg1 ;
-(id)iconModel:(id)arg1 customInsertionIndexPathForIcon:(id)arg2 inRootFolder:(id)arg3 ;
-(void)iconModel:(id)arg1 launchIcon:(id)arg2 fromLocation:(id)arg3 context:(id)arg4 ;
-(id)iconModel:(id)arg1 localizedFolderNameForDefaultDisplayName:(id)arg2 ;
-(BOOL)canSaveIconState:(id)arg1 ;
-(void)didSaveIconState:(id)arg1 ;
-(void)didDeleteIconState:(id)arg1 ;
-(id)defaultIconStateForIconModel:(id)arg1 ;
-(id)firstPageLeafIdentifiersForIconModel:(id)arg1 ;
-(BOOL)iconModel:(id)arg1 shouldAvoidPlacingIconOnFirstPage:(id)arg2 ;
-(void)iconModel:(id)arg1 willRemoveIcon:(id)arg2 ;
-(BOOL)rootFolder:(id)arg1 shouldAllowBadgingForIcon:(id)arg2 ;
-(void)iconViewShortcutsPresentationDidCancel:(id)arg1 ;
-(id)animator:(id)arg1 animationSettingsForOperation:(unsigned long long)arg2 childViewController:(id)arg3 ;
-(BOOL)animator:(id)arg1 canAlterViewHierarchyDuringCleanupUsingBlock:(/*^block*/id)arg2 ;
-(void)noteInterfaceOrientationChanged;
-(void)setIconModel:(SBHIconModel *)arg1 ;
-(void)updateVisibleIconsToShowLeafIcons:(id)arg1 hideLeafIcons:(id)arg2 forceRelayout:(BOOL)arg3 ;
-(void)resetRootIconLists;
-(void)setListLayoutProviderLayoutOptions:(unsigned long long)arg1 ;
-(void)clearHighlightedIcon:(id)arg1 ;
-(id)rootIconListAtIndex:(long long)arg1 ;
-(id)floatingDockSuggestionsListView;
-(BOOL)isIconVisiblyRepresented:(id)arg1 ;
-(void)addNewIconsToDesignatedLocations:(id)arg1 saveIconState:(BOOL)arg2 ;
-(void)scrollToIconListContainingIcon:(id)arg1 animate:(BOOL)arg2 ;
-(void)animateToDefaultStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)tryScrollToIconToRevealAnimated:(BOOL)arg1 ;
-(void)setIdleModeText:(id)arg1 ;
-(id)viewControllerForPresentingViewControllers;
-(BOOL)resetIconLayoutWithOptions:(unsigned long long)arg1 ;
-(void)runDownloadingIconTest;
-(void)organizeAllIconsIntoFolders;
-(BOOL)hasOpenFolderInLocation:(id)arg1 ;
-(long long)currentIconListIndex;
-(void)popToCurrentRootIconListWhenPossible;
-(BOOL)isPerformingExpandTransition;
-(BOOL)isPerformingCancelledCollapseTransition;
-(void)cancelAllFolderScrolling;
-(void)activateTodayViewWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)presentSpotlightFromBreadcrumb:(BOOL)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)dismissSpotlightOrTodayViewAnimated:(BOOL)arg1 ;
-(BOOL)isShowingPullDownOrTodayViewSearch;
-(BOOL)isShowingSpotlightOrTodayView;
-(BOOL)isTransitioningHomeScreenState;
-(NSString *)statisticsSummary;
-(void)presentStatistics;
-(void)addFolderPresentationObserver:(id)arg1 ;
-(void)removeFolderPresentationObserver:(id)arg1 ;
-(BOOL)isAnimatingForUnscatter;
-(BOOL)needsRelayout;
-(SBFolder *)closingFolder;
-(SBIconView *)popoverIconView;
-(void)setPopoverIconView:(SBIconView *)arg1 ;
@end

