/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBNestingViewController.h>
#import <libobjc.A.dylib/SBFolderControllerDelegate.h>
#import <libobjc.A.dylib/SBFolderObserver.h>
#import <libobjc.A.dylib/SBIconListViewDragObserver.h>
#import <libobjc.A.dylib/SBFolderControllerBackgroundViewDelegate.h>
#import <libobjc.A.dylib/SBFolderViewDelegate.h>
#import <libobjc.A.dylib/SBScaleIconZoomAnimationContaining.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBIconLocationPresenting.h>
#import <libobjc.A.dylib/SBIconViewQuerying.h>

@protocol SBFolderControllerDelegate, SBIconListLayoutProvider, SBIconViewProviding, BSInvalidatable;
@class SBFolderContainerView, SBFolderView, SBFolderControllerBackgroundView, NSTimer, SBIconAnimator, NSMutableSet, SBFolder, SBIconView, UIView, _UILegibilitySettings, NSString, UIColor, SBFolderIconImageCache, SBHIconImageCache, SBIconPageIndicatorImageSetCache, UIStatusBar, SBFolderControllerConfiguration, SBFolderControllerAnimationContext, SBIconListPageControl, NSArray, SBIconListView, NSIndexPath, SBIconLayoutOverrideStrategy, UIWindow, SBHIconModel, NSSet;

@interface SBFolderController : SBNestingViewController <SBFolderControllerDelegate, SBFolderObserver, SBIconListViewDragObserver, SBFolderControllerBackgroundViewDelegate, SBFolderViewDelegate, SBScaleIconZoomAnimationContaining, BSDescriptionProviding, SBIconLocationPresenting, SBIconViewQuerying> {

	SBFolderContainerView* _containerView;
	SBFolderView* _contentView;
	SBFolderControllerBackgroundView* _backgroundView;
	NSTimer* _closeFolderTimer;
	BOOL _grabbedIconHasEverEnteredFolderView;
	SBIconAnimator* _iconAnimator;
	NSMutableSet* _draggingEnteredIconListViews;
	NSMutableSet* _fakeStatusBarHidingReasons;
	NSMutableSet* _realStatusBarHidingReasons;
	BOOL _isOpen;
	BOOL _isEditing;
	BOOL _isAnimating;
	BOOL _rotating;
	BOOL _occluded;
	BOOL _active;
	id<SBFolderControllerDelegate> _folderDelegate;
	SBFolder* _folder;
	id<SBIconListLayoutProvider> _listLayoutProvider;
	long long _orientation;
	unsigned long long _allowedOrientations;
	id<SBIconViewProviding> _iconViewProvider;
	id _context;
	SBIconView* _folderIconView;
	UIView* _headerView;
	_UILegibilitySettings* _legibilitySettings;
	NSString* _originatingIconLocation;
	UIColor* _defaultAccessibilityTintColor;
	SBFolderIconImageCache* _folderIconImageCache;
	SBHIconImageCache* _iconImageCache;
	SBIconPageIndicatorImageSetCache* _iconPageIndicatorImageSetCache;
	id<BSInvalidatable> _statusBarAssertion;
	UIStatusBar* _fakeStatusBar;
	SBFolderControllerConfiguration* _configuration;
	SBFolderControllerAnimationContext* _animationContext;
	SBIconListPageControl* _pageControl;

}

@property (assign,getter=isOpen,nonatomic) BOOL open;                                                          //@synthesize isOpen=_isOpen - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                                      //@synthesize active=_active - In the implementation block
@property (assign,getter=isRotating,nonatomic) BOOL rotating;                                                  //@synthesize rotating=_rotating - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                                                //@synthesize isAnimating=_isAnimating - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> statusBarAssertion;                                           //@synthesize statusBarAssertion=_statusBarAssertion - In the implementation block
@property (nonatomic,retain) UIStatusBar * fakeStatusBar;                                                      //@synthesize fakeStatusBar=_fakeStatusBar - In the implementation block
@property (nonatomic,copy) SBFolderControllerConfiguration * configuration;                                    //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) long long orientation;                                                            //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) SBFolderView * folderView; 
@property (nonatomic,readonly) SBFolderView * folderViewIfLoaded; 
@property (nonatomic,readonly) SBFolderContainerView * folderContainerView; 
@property (nonatomic,__weak,readonly) SBFolderController * outerFolderController; 
@property (nonatomic,readonly) SBFolderController * innerFolderController; 
@property (nonatomic,retain) SBFolderControllerAnimationContext * animationContext;                            //@synthesize animationContext=_animationContext - In the implementation block
@property (nonatomic,retain) SBIconListPageControl * pageControl;                                              //@synthesize pageControl=_pageControl - In the implementation block
@property (assign,nonatomic,__weak) id<SBFolderControllerDelegate> folderDelegate;                             //@synthesize folderDelegate=_folderDelegate - In the implementation block
@property (nonatomic,retain) SBFolder * folder;                                                                //@synthesize folder=_folder - In the implementation block
@property (nonatomic,readonly) id<SBIconListLayoutProvider> listLayoutProvider;                                //@synthesize listLayoutProvider=_listLayoutProvider - In the implementation block
@property (nonatomic,readonly) unsigned long long allowedOrientations;                                         //@synthesize allowedOrientations=_allowedOrientations - In the implementation block
@property (nonatomic,__weak,readonly) id<SBIconViewProviding> iconViewProvider;                                //@synthesize iconViewProvider=_iconViewProvider - In the implementation block
@property (nonatomic,readonly) id context;                                                                     //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) SBIconView * folderIconView;                                                      //@synthesize folderIconView=_folderIconView - In the implementation block
@property (nonatomic,readonly) UIView * headerView;                                                            //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) long long currentPageIndex; 
@property (getter=isEditing,nonatomic,readonly) BOOL editing;                                                  //@synthesize isEditing=_isEditing - In the implementation block
@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling; 
@property (getter=isScrollDragging,nonatomic,readonly) BOOL scrollDragging; 
@property (getter=isScrollDecelerating,nonatomic,readonly) BOOL scrollDecelerating; 
@property (getter=isScrollTracking,nonatomic,readonly) BOOL scrollTracking; 
@property (nonatomic,readonly) unsigned long long userInterfaceLayoutDirectionHandling; 
@property (nonatomic,readonly) long long userInterfaceLayoutDirection; 
@property (nonatomic,readonly) double currentScrollingOffset; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                       //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) long long defaultPageIndex; 
@property (nonatomic,readonly) long long minimumPageIndex; 
@property (nonatomic,readonly) long long maximumPageIndex; 
@property (nonatomic,readonly) long long firstIconPageIndex; 
@property (nonatomic,readonly) long long lastIconPageIndex; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,copy,readonly) NSArray * iconListViews; 
@property (nonatomic,readonly) unsigned long long iconListViewCount; 
@property (nonatomic,readonly) SBIconListView * currentIconListView; 
@property (nonatomic,copy) NSString * originatingIconLocation;                                                 //@synthesize originatingIconLocation=_originatingIconLocation - In the implementation block
@property (nonatomic,readonly) SBFolderController * deepestFolderController; 
@property (nonatomic,readonly) NSIndexPath * currentIndexPath; 
@property (nonatomic,readonly) BOOL hasDock; 
@property (nonatomic,readonly) SBIconListView * dockListView; 
@property (nonatomic,readonly) BOOL suspendsWallpaperAnimationWhileOpen; 
@property (nonatomic,readonly) BOOL closesAfterDragExits; 
@property (nonatomic,readonly) BOOL canAcceptFolderIconDrags; 
@property (nonatomic,readonly) BOOL disablesScrollingWhileIconDragIsDropping; 
@property (assign,getter=isOccluded,nonatomic) BOOL occluded;                                                  //@synthesize occluded=_occluded - In the implementation block
@property (assign,nonatomic) double statusBarHeight; 
@property (nonatomic,retain) SBIconLayoutOverrideStrategy * iconLayoutOverrideStrategy; 
@property (assign,getter=isPageControlHidden,nonatomic) BOOL pageControlHidden; 
@property (assign,nonatomic) double pageControlAlpha; 
@property (nonatomic,retain) UIColor * defaultAccessibilityTintColor;                                          //@synthesize defaultAccessibilityTintColor=_defaultAccessibilityTintColor - In the implementation block
@property (nonatomic,readonly) SBFolderIconImageCache * folderIconImageCache;                                  //@synthesize folderIconImageCache=_folderIconImageCache - In the implementation block
@property (nonatomic,retain) SBHIconImageCache * iconImageCache;                                               //@synthesize iconImageCache=_iconImageCache - In the implementation block
@property (nonatomic,readonly) SBIconPageIndicatorImageSetCache * iconPageIndicatorImageSetCache;              //@synthesize iconPageIndicatorImageSetCache=_iconPageIndicatorImageSetCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) UIWindow * animationWindow; 
@property (nonatomic,readonly) UIView * fallbackIconContainerView; 
@property (nonatomic,readonly) UIView * extraViewsContainer; 
@property (nonatomic,copy,readonly) NSArray * extraViews; 
@property (nonatomic,readonly) BOOL shouldAnimateLastTwoViewsAsOne; 
@property (nonatomic,readonly) BOOL shouldAnimateFirstTwoViewsAsOne; 
@property (nonatomic,readonly) SBHIconModel * iconModel; 
@property (nonatomic,readonly) SBIconListView * dockIconListView; 
@property (nonatomic,copy,readonly) NSSet * presentedIconLocations; 
+(Class)_contentViewClass;
+(Class)configurationClass;
+(id)iconLocation;
+(Class)listViewClass;
-(NSString *)description;
-(void)invalidate;
-(void)_invalidate;
-(BOOL)isActive;
-(id)context;
-(void)setActive:(BOOL)arg1 ;
-(long long)orientation;
-(BOOL)isOpen;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setConfiguration:(SBFolderControllerConfiguration *)arg1 ;
-(SBFolderControllerConfiguration *)configuration;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isScrolling;
-(UIView *)contentView;
-(void)loadView;
-(long long)userInterfaceLayoutDirection;
-(UIView *)containerView;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)isAnimating;
-(UIView *)headerView;
-(void)setContentAlpha:(double)arg1 ;
-(BOOL)isEditing;
-(double)statusBarHeight;
-(BOOL)isOccluded;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isRotating;
-(NSIndexPath *)currentIndexPath;
-(BOOL)_allowUserInteraction;
-(SBIconListPageControl *)pageControl;
-(void)setAnimating:(BOOL)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setOccluded:(BOOL)arg1 ;
-(void)setStatusBarHeight:(double)arg1 ;
-(void)setPageControl:(SBIconListPageControl *)arg1 ;
-(SBFolderControllerAnimationContext *)animationContext;
-(void)setAnimationContext:(SBFolderControllerAnimationContext *)arg1 ;
-(unsigned long long)_depth;
-(void)setRotating:(BOOL)arg1 ;
-(long long)currentPageIndex;
-(void)setCurrentPageIndex:(long long)arg1 ;
-(void)setOpen:(BOOL)arg1 ;
-(SBFolder *)folder;
-(void)setFolder:(SBFolder *)arg1 ;
-(void)orientationDidChange:(long long)arg1 ;
-(unsigned long long)allowedOrientations;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(UIWindow *)animationWindow;
-(SBHIconModel *)iconModel;
-(SBIconListView *)currentIconListView;
-(SBIconListView *)dockIconListView;
-(SBIconListView *)dockListView;
-(UIView *)fallbackIconContainerView;
-(id)matchMoveSourceViewForIconView:(id)arg1 ;
-(id<SBIconListLayoutProvider>)listLayoutProvider;
-(SBFolderIconImageCache *)folderIconImageCache;
-(NSArray *)iconListViews;
-(void)prepareForAnimation:(id)arg1 withTargetIcon:(id)arg2 ;
-(id)borrowScalingView;
-(void)returnScalingView;
-(id)iconLocation;
-(void)layoutIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(BOOL)arg3 ;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 ;
-(BOOL)isDisplayingIconView:(id)arg1 ;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2 ;
-(NSSet *)presentedIconLocations;
-(id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2 ;
-(void)setFolderIconImageCache:(SBFolderIconImageCache *)arg1 ;
-(BOOL)isPresentingIconLocation:(id)arg1 ;
-(id<SBIconViewProviding>)iconViewProvider;
-(SBIconPageIndicatorImageSetCache *)iconPageIndicatorImageSetCache;
-(void)setFolderDelegate:(id<SBFolderControllerDelegate>)arg1 ;
-(void)setOriginatingIconLocation:(NSString *)arg1 ;
-(void)setFolderIconView:(SBIconView *)arg1 ;
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
-(void)folderControllerDidOpen:(id)arg1 ;
-(void)folderControllerWillClose:(id)arg1 ;
-(void)folderControllerDidClose:(id)arg1 ;
-(UIEdgeInsets)contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg1 ;
-(id)folderControllerWantsToHideStatusBar:(id)arg1 ;
-(id)fakeStatusBarForFolderController:(id)arg1 ;
-(void)folderController:(id)arg1 willRemoveFakeStatusBar:(id)arg2 ;
-(id)statusBarStyleRequestForFolderController:(id)arg1 ;
-(UIEdgeInsets)statusBarEdgeInsetsForFolderController:(id)arg1 ;
-(id)folderController:(id)arg1 iconAnimatorForOperation:(long long)arg2 onViewController:(id)arg3 animated:(BOOL)arg4 initialDelay:(double*)arg5 ;
-(void)folderController:(id)arg1 willUseIconTransitionAnimator:(id)arg2 forOperation:(long long)arg3 onViewController:(id)arg4 animated:(BOOL)arg5 ;
-(id)folderController:(id)arg1 accessibilityTintColorForScreenRect:(CGRect)arg2 ;
-(void)folderController:(id)arg1 willCreateInnerFolderControllerWithConfiguration:(id)arg2 ;
-(UIView *)extraViewsContainer;
-(NSArray *)extraViews;
-(BOOL)shouldAnimateLastTwoViewsAsOne;
-(BOOL)shouldAnimateFirstTwoViewsAsOne;
-(id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg1 inLocations:(id)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(SBFolderController *)innerFolderController;
-(id)beginModifyingDockOffscreenFractionForReason:(id)arg1 ;
-(BOOL)hasDock;
-(NSString *)originatingIconLocation;
-(id<SBFolderControllerDelegate>)folderDelegate;
-(SBHIconImageCache *)iconImageCache;
-(long long)defaultPageIndex;
-(void)delegateDidChange;
-(void)parentDelegateDidChange;
-(SBFolderView *)folderViewIfLoaded;
-(id)_makeContentViewWithConfiguration:(id)arg1 ;
-(void)_resetIconLists;
-(SBFolderView *)folderView;
-(SBFolderContainerView *)folderContainerView;
-(id)nestingViewController:(id)arg1 animationControllerForOperation:(long long)arg2 onViewController:(id)arg3 animated:(BOOL)arg4 ;
-(BOOL)doesPageContainIconListView:(long long)arg1 ;
-(void)_configureForInnerFolderController:(id)arg1 ;
-(void)prepareToClose;
-(void)_addFakeStatusBarView;
-(void)prepareToOpen;
-(void)_fadeHomescreenAndDockIfNecessaryForFolderOpen:(BOOL)arg1 ;
-(void)_compactFolder;
-(void)_removeFakeStatusBar;
-(void)fadeContentForMagnificationFraction:(double)arg1 ;
-(void)updateContentViewOcclusionWithOverriddenHasInnerFolder:(BOOL)arg1 ;
-(void)updateContentViewOcclusion;
-(void)_resetFakeStatusBarSettingsIfNecessary;
-(void)nestingViewController:(id)arg1 willPerformOperation:(long long)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4 ;
-(SBIconView *)folderIconView;
-(unsigned long long)iconListViewIndexForPageIndex:(long long)arg1 ;
-(void)fadeContentForMinificationFraction:(double)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 forOperation:(long long)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)_updateAssociatedControllerStateAnimated:(BOOL)arg1 ;
-(void)_updateFolderRequiredTrailingEmptyListCount;
-(SBIconLayoutOverrideStrategy *)iconLayoutOverrideStrategy;
-(void)setIconLayoutOverrideStrategy:(SBIconLayoutOverrideStrategy *)arg1 ;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCurrentPageIndexToListDirectlyContainingIcon:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)iconListViewCount;
-(long long)pageIndexForIconListViewIndex:(unsigned long long)arg1 ;
-(void)animateScrollToDefaultPageWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)minimumPageIndex;
-(long long)maximumPageIndex;
-(long long)firstIconPageIndex;
-(long long)lastIconPageIndex;
-(void)_updateStateOfAssociatedController:(id)arg1 animated:(BOOL)arg2 ;
-(id)folderControllerForFolder:(id)arg1 ;
-(id)iconListViewAtIndex:(unsigned long long)arg1 ;
-(id)iconListViewAtPoint:(CGPoint)arg1 ;
-(id)iconListViewForTouch:(id)arg1 ;
-(id)iconListViewForDrag:(id)arg1 ;
-(void)cancelScrolling;
-(BOOL)isEffectivelyOccludedIfHasInnerFolder:(BOOL)arg1 ;
-(BOOL)isEffectivelyOccluded;
-(unsigned long long)userInterfaceLayoutDirectionHandling;
-(void)setIconImageCache:(SBHIconImageCache *)arg1 ;
-(BOOL)_homescreenAndDockShouldFade;
-(void)_setHomescreenAndDockAlpha:(double)arg1 ;
-(void)_removeFakeStatusBarAndAssertionIfExists;
-(void)_hideStatusBarForReason:(id)arg1 ;
-(void)_resetFakeStatusBarFrameOnly;
-(void)_resetFakeStatusBarMatchMoveAnimation;
-(void)_unhideStatusBarForReason:(id)arg1 ;
-(BOOL)isPageControlHidden;
-(void)setPageControlHidden:(BOOL)arg1 ;
-(double)pageControlAlpha;
-(void)setPageControlAlpha:(double)arg1 ;
-(void)prepareToTearDown;
-(id)_addEmptyListForce:(BOOL)arg1 ;
-(void)_cancelCloseFolderTimer;
-(BOOL)closesAfterDragExits;
-(void)_closeFolderTimerFired;
-(BOOL)canAcceptFolderIconDrags;
-(void)noteUserIsInteractingWithIcons;
-(void)_cancelAllInteractionTimers;
-(void)noteIconDrag:(id)arg1 didChangeInIconListView:(id)arg2 ;
-(void)_setCloseFolderTimerIfNecessary;
-(void)_clearIconAnimator;
-(id)_newAnimatorForZoomUp:(BOOL)arg1 ;
-(SBFolderController *)outerFolderController;
-(BOOL)_listIndexIsVisible:(unsigned long long)arg1 ;
-(BOOL)shouldOpenFolderIcon:(id)arg1 ;
-(void)configureInnerFolderControllerConfiguration:(id)arg1 ;
-(void)setCurrentPageIndexToListDirectlyContainingIcon:(id)arg1 animated:(BOOL)arg2 ;
-(void)popFolderAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_canAcceptIconDropSession:(id)arg1 inListView:(id)arg2 ;
-(id)nestingViewController:(id)arg1 sourceViewForPresentingViewController:(id)arg2 ;
-(void)noteIconDrag:(id)arg1 didEnterIconListView:(id)arg2 ;
-(void)noteIconDrag:(id)arg1 didExitIconListView:(id)arg2 ;
-(BOOL)disablesScrollingWhileIconDragIsDropping;
-(void)noteIconDragDidEnd:(id)arg1 ;
-(void)_noteFolderListsDidChange;
-(UIColor *)defaultAccessibilityTintColor;
-(void)folder:(id)arg1 didAddList:(id)arg2 ;
-(void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3 ;
-(void)folder:(id)arg1 didAddIcons:(id)arg2 removedIcons:(id)arg3 ;
-(void)folder:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3 ;
-(void)iconListView:(id)arg1 concludeIconDrop:(id)arg2 ;
-(void)iconListView:(id)arg1 iconDropSessionDidEnd:(id)arg2 ;
-(double)minimumHomeScreenScaleForFolderControllerBackgroundView:(id)arg1 ;
-(Class)iconListViewClassForFolderView:(id)arg1 ;
-(id)iconLocationForFolderView:(id)arg1 ;
-(BOOL)folderView:(id)arg1 canChangeCurrentPageIndexToIndex:(long long)arg2 ;
-(void)folderView:(id)arg1 currentPageIndexWillChange:(long long)arg2 ;
-(void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2 ;
-(void)folderViewWillBeginDragging:(id)arg1 ;
-(void)folderViewWillBeginScrolling:(id)arg1 ;
-(void)folderViewWillEndDragging:(id)arg1 ;
-(void)folderViewWillUpdatePageDuringScrolling:(id)arg1 ;
-(void)folderViewDidScroll:(id)arg1 ;
-(void)folderViewDidEndScrolling:(id)arg1 ;
-(void)folderView:(id)arg1 willAnimateScrollToPageIndex:(long long)arg2 ;
-(void)folderViewShouldClose:(id)arg1 withPinchGesture:(id)arg2 ;
-(void)folderViewShouldBeginEditing:(id)arg1 ;
-(void)folderViewShouldEndEditing:(id)arg1 ;
-(BOOL)folderView:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3 ;
-(void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3 ;
-(id)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3 ;
-(void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(CGPoint)arg4 ;
-(void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3 ;
-(void)folderView:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3 ;
-(id)folderView:(id)arg1 iconListView:(id)arg2 previewForDroppingIconDragItem:(id)arg3 proposedPreview:(id)arg4 ;
-(void)folderView:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4 ;
-(BOOL)folderView:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg3 onIconView:(id)arg4 ;
-(void)folderView:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3 ;
-(void)folderViewDidChangeOrientation:(id)arg1 ;
-(double)minimumHomeScreenScaleForFolderView:(id)arg1 ;
-(UIEdgeInsets)contentOverlayInsetsFromParentIfAvailableForFolderView:(id)arg1 ;
-(id)folderView:(id)arg1 accessibilityTintColorForRect:(CGRect)arg2 ;
-(void)addViewToHierarchyForNestedViewController:(id)arg1 ;
-(void)removeViewFromHierarchyForNestedViewController:(id)arg1 ;
-(BOOL)isScrollDragging;
-(BOOL)isScrollDecelerating;
-(BOOL)isScrollTracking;
-(double)currentScrollingOffset;
-(void)beginEditingTitle;
-(SBFolderController *)deepestFolderController;
-(BOOL)suspendsWallpaperAnimationWhileOpen;
-(void)setScrollingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)revealIcon:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_updateHomescreenAndDockFade;
-(void)_hideFakeStatusBarForReason:(id)arg1 ;
-(void)_unhideFakeStatusBarForReason:(id)arg1 ;
-(id)addEmptyListView;
-(void)unscatterAnimated:(BOOL)arg1 afterDelay:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)_iconAppearsOnCurrentPage:(id)arg1 ;
-(void)pushFolderIcon:(id)arg1 location:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)restoreExpandedIndexPath:(id)arg1 ;
-(void)prepareToLaunchTappedIcon:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(UIEdgeInsets)statusBarInsetsForOrientation:(long long)arg1 ;
-(void)setDefaultAccessibilityTintColor:(UIColor *)arg1 ;
-(id<BSInvalidatable>)statusBarAssertion;
-(void)setStatusBarAssertion:(id<BSInvalidatable>)arg1 ;
-(UIStatusBar *)fakeStatusBar;
-(void)setFakeStatusBar:(UIStatusBar *)arg1 ;
@end

