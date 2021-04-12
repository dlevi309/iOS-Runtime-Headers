/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBFolderController.h>
#import <libobjc.A.dylib/SBFramewiseInteractiveTransitionAnimatorDelegate.h>
#import <libobjc.A.dylib/SBViewControllerTransitionContextDelegate.h>
#import <libobjc.A.dylib/SBRootFolderViewDelegate.h>
#import <libobjc.A.dylib/SBSearchGestureObserver.h>
#import <libobjc.A.dylib/SBRootFolderPageStateTransitioning.h>
#import <libobjc.A.dylib/SBHIconRootViewProviding.h>

@protocol SBHLegibility, SBHSidebarProvider, SBRootFolderControllerAccessoryViewControllerDelegate, SBRootFolderPageTransition;
@class SBViewControllerTransitionContext, SBFramewiseInteractiveTransitionAnimator, SBPercentPassthroughInteractiveTransition, NSHashTable, UIViewController, SBSearchGesture, _SBRootFolderDockAnimationViewControllerWindow, _SBRootFolderPageTransitionHandle, SBRootFolderView, SBRootFolder, NSSet, NSArray, UIView, SBFParallaxSettings, NSString, _UILegibilitySettings, SBFolderIconImageCache, SBHIconImageCache;

@interface SBRootFolderController : SBFolderController <SBFramewiseInteractiveTransitionAnimatorDelegate, SBViewControllerTransitionContextDelegate, SBRootFolderViewDelegate, SBSearchGestureObserver, SBRootFolderPageStateTransitioning, SBHIconRootViewProviding> {

	SBViewControllerTransitionContext* _currentTransitionContext;
	SBFramewiseInteractiveTransitionAnimator* _currentTransitionAnimator;
	SBPercentPassthroughInteractiveTransition* _currentTransitionInteractor;
	NSHashTable* _pageStateObservers;
	NSHashTable* _sidebarViewControllerAppearStateOverrideAssertions;
	BOOL _showsDoneButtonWhileEditing;
	BOOL _spotlightTransitioningFromBreadcrumb;
	BOOL _managesStatusBarWidth;
	long long _pageState;
	UIViewController* _pullDownSearchViewController;
	UIViewController*<SBHLegibility> _todayViewController;
	UIViewController*<SBHSidebarProvider> _sidebarViewController;
	SBSearchGesture* _searchGesture;
	id<SBRootFolderControllerAccessoryViewControllerDelegate> _accessoryViewControllerDelegate;
	double _effectiveSidebarVisibilityProgress;
	_SBRootFolderDockAnimationViewControllerWindow* _dockAnimationWindow;
	_SBRootFolderPageTransitionHandle* _currentTransitionHandle;
	id<SBRootFolderPageTransition> _searchGestureTransition;
	id<SBRootFolderPageTransition> _implicitScrollTransition;
	UIViewController* _portraitHeaderViewController;

}

@property (nonatomic,retain) _SBRootFolderDockAnimationViewControllerWindow * dockAnimationWindow;                                          //@synthesize dockAnimationWindow=_dockAnimationWindow - In the implementation block
@property (assign,nonatomic) BOOL managesStatusBarWidth;                                                                                    //@synthesize managesStatusBarWidth=_managesStatusBarWidth - In the implementation block
@property (nonatomic,readonly) SBRootFolderView * rootFolderView; 
@property (nonatomic,retain) SBSearchGesture * searchGesture;                                                                               //@synthesize searchGesture=_searchGesture - In the implementation block
@property (assign,nonatomic) long long pageState;                                                                                           //@synthesize pageState=_pageState - In the implementation block
@property (nonatomic,retain) _SBRootFolderPageTransitionHandle * currentTransitionHandle;                                                   //@synthesize currentTransitionHandle=_currentTransitionHandle - In the implementation block
@property (nonatomic,retain) id<SBRootFolderPageTransition> searchGestureTransition;                                                        //@synthesize searchGestureTransition=_searchGestureTransition - In the implementation block
@property (nonatomic,retain) id<SBRootFolderPageTransition> implicitScrollTransition;                                                       //@synthesize implicitScrollTransition=_implicitScrollTransition - In the implementation block
@property (nonatomic,readonly) UIViewController * portraitHeaderViewController;                                                             //@synthesize portraitHeaderViewController=_portraitHeaderViewController - In the implementation block
@property (nonatomic,readonly) long long todayViewPageIndex; 
@property (nonatomic,readonly) long long sidebarPageIndex; 
@property (assign,nonatomic,__weak) id<SBRootFolderControllerDelegate> folderDelegate; 
@property (nonatomic,retain) SBRootFolder * folder; 
@property (assign,nonatomic) unsigned long long dockEdge; 
@property (nonatomic,readonly) double dockHeight; 
@property (getter=isDockExternal,nonatomic,readonly) BOOL dockExternal; 
@property (getter=isDockPinnedForRotation,nonatomic,readonly) BOOL dockPinnedForRotation; 
@property (nonatomic,copy,readonly) NSSet * nonDockPresentedIconLocations; 
@property (nonatomic,readonly) BOOL showsDoneButtonWhileEditing;                                                                            //@synthesize showsDoneButtonWhileEditing=_showsDoneButtonWhileEditing - In the implementation block
@property (nonatomic,readonly) UIViewController * pullDownSearchViewController;                                                             //@synthesize pullDownSearchViewController=_pullDownSearchViewController - In the implementation block
@property (nonatomic,readonly) UIViewController*<SBHLegibility> todayViewController;                                                        //@synthesize todayViewController=_todayViewController - In the implementation block
@property (nonatomic,readonly) UIViewController*<SBHSidebarProvider> sidebarViewController;                                                 //@synthesize sidebarViewController=_sidebarViewController - In the implementation block
@property (nonatomic,readonly) double spotlightFirstIconRowOffset; 
@property (assign,nonatomic,__weak) id<SBRootFolderControllerAccessoryViewControllerDelegate> accessoryViewControllerDelegate;              //@synthesize accessoryViewControllerDelegate=_accessoryViewControllerDelegate - In the implementation block
@property (assign,getter=isSpotlightTransitioningFromBreadcrumb,nonatomic) BOOL spotlightTransitioningFromBreadcrumb;                       //@synthesize spotlightTransitioningFromBreadcrumb=_spotlightTransitioningFromBreadcrumb - In the implementation block
@property (nonatomic,copy,readonly) NSArray * folderControllers; 
@property (assign,nonatomic) BOOL allowsAutoscrollToTodayView; 
@property (getter=isTodayViewVisible,nonatomic,readonly) BOOL todayViewVisible; 
@property (getter=isTodayViewTransitioning,nonatomic,readonly) BOOL todayViewTransitioning; 
@property (assign,getter=isTodayViewPageHidden,nonatomic) BOOL todayViewPageHidden; 
@property (getter=isPullDownSearchVisible,nonatomic,readonly) BOOL pullDownSearchVisible; 
@property (getter=isPullDownSearchTransitioning,nonatomic,readonly) BOOL pullDownSearchTransitioning; 
@property (getter=isPullDownSearchVisibleOrTransitioning,nonatomic,readonly) BOOL pullDownSearchVisibleOrTransitioning; 
@property (getter=isOnTodayPage,nonatomic,readonly) BOOL todayPage; 
@property (getter=isTodayViewVisibleOrTransitionDestination,nonatomic,readonly) BOOL todayViewVisibleOrTransitionDestination; 
@property (getter=isTodayViewSearchVisible,nonatomic,readonly) BOOL todayViewSearchVisible; 
@property (getter=isTodayViewSearchTransitioning,nonatomic,readonly) BOOL todayViewSearchTransitioning; 
@property (getter=isTodayViewSearchVisibleOrTransitioning,nonatomic,readonly) BOOL todayViewSearchVisibleOrTransitioning; 
@property (getter=isAnySearchVisible,nonatomic,readonly) BOOL anySearchVisible; 
@property (getter=isAnySearchVisibleOrTransitioning,nonatomic,readonly) BOOL anySearchVisibleOrTransitioning; 
@property (nonatomic,readonly) UIView * searchableTodayWrapperView; 
@property (nonatomic,readonly) UIView * searchBackdropView; 
@property (assign,nonatomic) double sidebarVisibilityProgress; 
@property (assign,nonatomic) double effectiveSidebarVisibilityProgress;                                                                     //@synthesize effectiveSidebarVisibilityProgress=_effectiveSidebarVisibilityProgress - In the implementation block
@property (getter=isSidebarVisible,nonatomic,readonly) BOOL sidebarVisible; 
@property (getter=isSidebarEffectivelyVisible,nonatomic,readonly) BOOL sidebarEffectivelyVisible; 
@property (assign,getter=isSidebarPinned,nonatomic) BOOL sidebarPinned; 
@property (getter=isSidebarVisibilityGestureActive,nonatomic,readonly) BOOL sidebarVisibilityGestureActive; 
@property (nonatomic,readonly) SBFParallaxSettings * parallaxSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isTransitioningPageState,nonatomic,readonly) BOOL transitioningPageState; 
@property (nonatomic,readonly) long long destinationPageState; 
@property (nonatomic,copy,readonly) NSSet * presentedIconLocations; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIViewController * deepestFolderController; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling; 
@property (getter=isScrollTracking,nonatomic,readonly) BOOL scrollTracking; 
@property (assign,nonatomic) long long currentPageIndex; 
@property (nonatomic,retain) SBFolderIconImageCache * folderIconImageCache; 
@property (nonatomic,retain) SBHIconImageCache * iconImageCache; 
+(Class)_contentViewClass;
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(Class)configurationClass;
+(id)iconLocation;
+(id)dockIconLocation;
+(SBRootFolderPageStateTransitionSnapshot)pageStateTransitionSnapshotForScrollOffset:(double)arg1 pageWidth:(double)arg2 pages:(const long long*)arg3 pageCount:(unsigned long long)arg4 userInterfaceLayoutDirection:(long long)arg5 currentPageState:(long long)arg6 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)transitionDidFinish:(id)arg1 ;
-(void)transitionWillBegin:(id)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(unsigned long long)_depth;
-(BOOL)isDockVisible;
-(void)orientationDidChange:(long long)arg1 ;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(UIViewController*<SBHSidebarProvider>)sidebarViewController;
-(id)dockIconListView;
-(id)dockListView;
-(SBSearchGesture *)searchGesture;
-(void)setSearchGesture:(SBSearchGesture *)arg1 ;
-(void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2 ;
-(void)searchGesture:(id)arg1 startedShowing:(BOOL)arg2 ;
-(void)searchGesture:(id)arg1 completedShowing:(BOOL)arg2 ;
-(void)searchGesture:(id)arg1 resetAnimated:(BOOL)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 ;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2 ;
-(NSSet *)presentedIconLocations;
-(BOOL)isPresentingIconLocation:(id)arg1 ;
-(void)setFolderDelegate:(id<SBRootFolderControllerDelegate>)arg1 ;
-(id)extraViewsContainer;
-(id)extraViews;
-(BOOL)shouldAnimateLastTwoViewsAsOne;
-(BOOL)shouldAnimateFirstTwoViewsAsOne;
-(BOOL)isDisplayingIcon:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(id)beginModifyingDockOffscreenFractionForReason:(id)arg1 ;
-(void)transitionWillReverse:(id)arg1 ;
-(void)transitionWillFinish:(id)arg1 ;
-(id)_makeContentViewWithConfiguration:(id)arg1 ;
-(void)prepareToClose;
-(void)prepareToOpen;
-(void)viewWillTransitionToSize:(CGSize)arg1 forOperation:(long long)arg2 withTransitionCoordinator:(id)arg3 ;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)prepareToTearDown;
-(BOOL)closesAfterDragExits;
-(BOOL)canAcceptFolderIconDrags;
-(BOOL)_listIndexIsVisible:(unsigned long long)arg1 ;
-(BOOL)shouldOpenFolderIcon:(id)arg1 ;
-(BOOL)disablesScrollingWhileIconDragIsDropping;
-(void)folderView:(id)arg1 currentPageIndexWillChange:(long long)arg2 ;
-(void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2 ;
-(void)folderViewWillBeginDragging:(id)arg1 ;
-(void)folderViewWillBeginScrolling:(id)arg1 ;
-(void)folderViewWillEndDragging:(id)arg1 ;
-(void)folderViewWillUpdatePageDuringScrolling:(id)arg1 ;
-(void)folderViewDidScroll:(id)arg1 ;
-(void)folderViewDidEndScrolling:(id)arg1 ;
-(void)folderView:(id)arg1 willAnimateScrollToPageIndex:(long long)arg2 ;
-(BOOL)suspendsWallpaperAnimationWhileOpen;
-(UIEdgeInsets)statusBarInsetsForOrientation:(long long)arg1 ;
-(void)_reduceTransparencyChanged;
-(void)setIdleText:(id)arg1 ;
-(BOOL)showsDoneButtonWhileEditing;
-(UIViewController *)pullDownSearchViewController;
-(UIViewController*<SBHLegibility>)todayViewController;
-(UIViewController *)portraitHeaderViewController;
-(long long)pageState;
-(long long)todayViewPageIndex;
-(void)setPageState:(long long)arg1 ;
-(SBRootFolderView *)rootFolderView;
-(double)_todayViewVisibilityProgress;
-(void)updateViewsAfterOrientationChange;
-(id)_viewControllersToNotifyForViewObscuration;
-(BOOL)isTodayViewSearchVisible;
-(void)dismissSpotlightAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isOnTodayPage;
-(BOOL)isTodayViewVisibleOrTransitionDestination;
-(BOOL)isAnySearchVisibleOrTransitioning;
-(void)doneButtonTriggered:(id)arg1 ;
-(BOOL)isDockExternal;
-(unsigned long long)dockEdge;
-(void)setDockEdge:(unsigned long long)arg1 ;
-(double)dockHeight;
-(BOOL)isDockPinnedForRotation;
-(void)setManagesStatusBarWidth:(BOOL)arg1 ;
-(id)viewControllerForPageState:(long long)arg1 ;
-(BOOL)allowsAutoscrollToTodayView;
-(void)setAllowsAutoscrollToTodayView:(BOOL)arg1 ;
-(UIView *)searchableTodayWrapperView;
-(UIView *)searchBackdropView;
-(SBFParallaxSettings *)parallaxSettings;
-(long long)sidebarPageIndex;
-(double)sidebarVisibilityProgress;
-(double)effectiveSidebarVisibilityProgress;
-(void)setSidebarVisibilityProgress:(double)arg1 ;
-(BOOL)isSidebarEffectivelyVisible;
-(BOOL)isSidebarPinned;
-(void)setSidebarPinned:(BOOL)arg1 ;
-(BOOL)isSidebarVisibilityGestureActive;
-(BOOL)_isDockSwitchedForOrientation:(long long)arg1 ;
-(BOOL)_dockLayoutReversedForInterfaceOrientation:(long long)arg1 ;
-(_SBRootFolderDockAnimationViewControllerWindow *)dockAnimationWindow;
-(unsigned long long)_dockEdgeForInterfaceOrientation:(long long)arg1 ;
-(void)_configureDockViewForOrientationWithoutAnimation:(long long)arg1 ;
-(void)_configureAppStatusBarInsetsForOrientation:(long long)arg1 ;
-(void)configureAppStatusBarInsets;
-(BOOL)managesStatusBarWidth;
-(BOOL)isAnySearchVisible;
-(void)_configureTodayViewPageForOrientation:(long long)arg1 ;
-(BOOL)_todayViewPageIsVisibleForOrientation:(long long)arg1 ;
-(void)setTodayViewPageHidden:(BOOL)arg1 ;
-(BOOL)_shouldUseDockAnimationWindowForRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)setDockAnimationWindow:(_SBRootFolderDockAnimationViewControllerWindow *)arg1 ;
-(BOOL)_shouldSlideDockOutDuringRotationFromOrientation:(long long)arg1 toOrientation:(long long)arg2 ;
-(void)_configureDockViewForOrientationDuringAnimation:(long long)arg1 ;
-(void)_configureViewForOrientationWithoutAnimation:(long long)arg1 ;
-(id)updateStateTransitionsDuringScrollingScrollView:(id)arg1 pageBounceComparator:(/*function pointer*/void*)arg2 ;
-(id<SBRootFolderPageTransition>)implicitScrollTransition;
-(BOOL)isTransitiongBetweenPageStateVerticalGroups;
-(void)setImplicitScrollTransition:(id<SBRootFolderPageTransition>)arg1 ;
-(SBRootFolderPageStateTransitionSnapshot)pageStateTransitionSnapshotForScrollOffset:(double)arg1 ;
-(long long)destinationPageState;
-(BOOL)isSidebarVisible;
-(BOOL)isTransitioningPageState;
-(_SBRootFolderPageTransitionHandle *)currentTransitionHandle;
-(BOOL)isPullDownSearchVisibleOrTransitioning;
-(BOOL)isTodayViewVisible;
-(void)performPageStateTransitionToState:(long long)arg1 reason:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)canTransitionPageStateToState:(long long)arg1 ;
-(void)performDefaultPageStateTransitionToState:(long long)arg1 reason:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)beginPageStateTransitionToState:(long long)arg1 reason:(id)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 ;
-(BOOL)isTodayViewPageHidden;
-(double)pageTransitionProgress;
-(BOOL)isAnySearchTransitioning;
-(BOOL)isPullDownSearchVisible;
-(BOOL)isPullDownSearchTransitioning;
-(BOOL)isTodayViewSearchTransitioning;
-(double)visibilityProgressTowardPageStateMatchingTest:(/*^block*/id)arg1 ;
-(void)setCurrentTransitionHandle:(_SBRootFolderPageTransitionHandle *)arg1 ;
-(void)willBeginTransitionToState:(long long)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(void)enumeratePageStateObserversUsingBlock:(/*^block*/id)arg1 ;
-(double)_anySearchVisibilityProgress;
-(id<SBRootFolderControllerAccessoryViewControllerDelegate>)accessoryViewControllerDelegate;
-(id)defaultTransitionForTransitioningFromPageState:(long long)arg1 toPageState:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 ;
-(void)_checkForImproperScrollOffsetForPageState;
-(void)didContinueTransitionToState:(long long)arg1 progress:(double)arg2 ;
-(void)willEndTransitionToState:(long long)arg1 successfully:(BOOL)arg2 ;
-(void)didEndTransitionFromState:(long long)arg1 toState:(long long)arg2 successfully:(BOOL)arg3 ;
-(void)setSearchGestureTransition:(id<SBRootFolderPageTransition>)arg1 ;
-(id<SBRootFolderPageTransition>)searchGestureTransition;
-(id)viewControllerForTransitioningFromPageState:(long long)arg1 toPageState:(long long)arg2 ;
-(BOOL)isTodayViewTransitioning;
-(void)transitionContext:(id)arg1 updateTransitionProgress:(double)arg2 ;
-(void)rootFolderView:(id)arg1 wantsToAdjustTodayContentForEdgeBounceForScrollOffset:(CGPoint)arg2 ;
-(double)distanceToTopOfSpotlightIconsForRootFolderView:(id)arg1 ;
-(double)maxExternalDockHeightForRootFolderView:(id)arg1 ;
-(double)externalDockHeightForRootFolderView:(id)arg1 ;
-(double)preferredExternalDockVerticalMarginForRootFolderView:(id)arg1 ;
-(id)backgroundViewForDockForRootFolderView:(id)arg1 ;
-(id)backgroundViewForEditingDoneButtonForRootFolderView:(id)arg1 ;
-(void)rootFolderView:(id)arg1 didChangeSidebarVisibilityProgress:(double)arg2 ;
-(void)rootFolderView:(id)arg1 didChangeEffectiveSidebarVisibilityProgress:(double)arg2 ;
-(void)rootFolderView:(id)arg1 didOverscrollOnFirstPageByAmount:(double)arg2 ;
-(void)rootFolderView:(id)arg1 didEndOverscrollOnFirstPageWithVelocity:(double)arg2 ;
-(id)rootFolderViewIfLoaded;
-(NSArray *)folderControllers;
-(void)setPullDownSearchViewController:(UIViewController *)arg1 ;
-(void)setTodayViewController:(UIViewController*<SBHLegibility>)arg1 ;
-(void)setSidebarViewController:(UIViewController*<SBHSidebarProvider>)arg1 ;
-(double)spotlightFirstIconRowOffset;
-(NSSet *)nonDockPresentedIconLocations;
-(void)addPageStateObserver:(id)arg1 ;
-(void)removePageStateObserver:(id)arg1 ;
-(void)setParallaxDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(id)beginOverridingSidebarViewControllerAppearanceStateToRemainDisappearedForReason:(id)arg1 ;
-(void)_removeSidebarViewControllerAppearStateOverrideAssertion:(id)arg1 ;
-(void)_configureAppStatusBarInsetsAnimated:(BOOL)arg1 ;
-(void)presentSpotlightAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isTodayViewSearchVisibleOrTransitioning;
-(BOOL)isTodayViewOrTodayViewSearchVisible;
-(BOOL)isTransitioningBetweenIconAndTodayView;
-(BOOL)isTransitioningBetweenIconPageAndTodayPage;
-(BOOL)isTransitioningBetweenHorizontalPageStates;
-(void)pageTransitionHandle:(id)arg1 updateCurrentPageStateTransitionToProgress:(double)arg2 ;
-(void)pageTransitionHandle:(id)arg1 endPageStateTransitionSuccessfully:(BOOL)arg2 ;
-(void)_setupDebugTapGestureRecognizerForDockIconListView:(id)arg1 ;
-(void)setAccessoryViewControllerDelegate:(id<SBRootFolderControllerAccessoryViewControllerDelegate>)arg1 ;
-(BOOL)isSpotlightTransitioningFromBreadcrumb;
-(void)setSpotlightTransitioningFromBreadcrumb:(BOOL)arg1 ;
-(void)setEffectiveSidebarVisibilityProgress:(double)arg1 ;
@end

