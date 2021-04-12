/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBUICoronaAnimationControllerParticipant.h>
#import <libobjc.A.dylib/SBIconListLayoutObserver.h>
#import <libobjc.A.dylib/SBIconViewObserver.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/SBIconListModelObserver.h>
#import <libobjc.A.dylib/SBIconListViewDragDelegate.h>
#import <libobjc.A.dylib/WGMajorListViewControllerDelegate.h>
#import <libobjc.A.dylib/WGWidgetIconAnimationExtraViewsProviding.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBTodayViewSpotlightPresenterDelegate.h>
#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBUISpotlightInitiating.h>
#import <libobjc.A.dylib/SBHLegibility.h>
#import <libobjc.A.dylib/SBIconViewQuerying.h>
#import <libobjc.A.dylib/SBIconLocationPresenting.h>
#import <libobjc.A.dylib/SBFIdleTimerBehaviorProviding.h>
#import <libobjc.A.dylib/SBHOccludable.h>

@protocol SBTodayViewControllerDelegate, SBFOverlayDismissalDelegate, SBIconListLayoutProvider, SBIconViewProviding;
@class NSArray, SBViewControllerTransitionContext, _UILegibilitySettings, NSSet, SBIconView, SBRootFolder, SBHIconManager, UIViewController, WGMajorListViewController, SBHWidgetSettings, UIScrollView, NSMutableArray, UIStackView, UIView, SBIconListView, MTMaterialView, UILabel, NSLayoutConstraint, SBTodayIconListLayoutDelegate, SBTodayKeepOnHomeScreenPlatterView, WGWidgetListHeaderView, SBHDateHeaderViewController, NSMutableDictionary, SBTodayViewSpotlightPresenter, SBFTouchPassThroughView, NSMutableSet, NSHashTable, UITapGestureRecognizer, NSMapTable, NSString;

@interface SBTodayViewController : UIViewController <SBUICoronaAnimationControllerParticipant, SBIconListLayoutObserver, SBIconViewObserver, UIScrollViewDelegate, SBIconListModelObserver, SBIconListViewDragDelegate, WGMajorListViewControllerDelegate, WGWidgetIconAnimationExtraViewsProviding, PTSettingsKeyObserver, SBTodayViewSpotlightPresenterDelegate, CSExternalBehaviorProviding, UIGestureRecognizerDelegate, SBUISpotlightInitiating, SBHLegibility, SBIconViewQuerying, SBIconLocationPresenting, SBFIdleTimerBehaviorProviding, SBHOccludable> {

	SBIconView* _cachedHiddenIconView;
	BOOL _occluded;
	BOOL _suppressesEditingStateForListViews;
	BOOL _headerVisible;
	BOOL _spotlightVisible;
	BOOL _visuallyRevealedPriorToEditingIcons;
	BOOL _enableEditingModeWhenScrollEnds;
	_UILegibilitySettings* _legibilitySettings;
	SBViewControllerTransitionContext* _transitionContext;
	SBRootFolder* _rootFolder;
	SBHIconManager* _iconManager;
	id<SBTodayViewControllerDelegate> _delegate;
	id<SBFOverlayDismissalDelegate> _dismissalDelegate;
	UIViewController* _containerViewController;
	WGMajorListViewController* _legacyWidgetListViewController;
	id<SBIconListLayoutProvider> _listLayoutProvider;
	id<SBIconViewProviding> _iconViewProvider;
	long long _location;
	SBHWidgetSettings* _widgetSettings;
	UIScrollView* _scrollView;
	NSMutableArray* _scrollViewDidEndScrollingHandlers;
	UIStackView* _stackView;
	UIView* _fixedContentSizeView;
	SBIconListView* _listView;
	UIView* _favoriteListContainerView;
	MTMaterialView* _favoriteListPlatterView;
	UILabel* _favoriteListInstructionLabel;
	SBIconListView* _favoriteListView;
	NSLayoutConstraint* _favoriteListWithLargeWidgetMinimumHeightConstraint;
	NSLayoutConstraint* _favoriteListWithSmallOrMediumWidgetsMinimumHeightConstraint;
	SBTodayIconListLayoutDelegate* _listLayoutDelegate;
	SBTodayIconListLayoutDelegate* _favoriteListLayoutDelegate;
	UIView* _carouselReferenceForLegacyWidgetListView;
	UIView* _legacyListContainerView;
	MTMaterialView* _legacyListPlatterView;
	UIView* _headerContainerView;
	SBTodayKeepOnHomeScreenPlatterView* _keepOnHomeScreenPlatterView;
	WGWidgetListHeaderView* _dateHeaderView;
	SBHDateHeaderViewController* _dateHeaderViewController;
	NSMutableDictionary* _cancelTouchesAssertionsByLegacyWidgetID;
	NSMutableDictionary* _cancelTouchesAssertionsByWidgetID;
	SBTodayViewSpotlightPresenter* _spotlightPresenter;
	SBFTouchPassThroughView* _spotlightContainerView;
	NSLayoutConstraint* _stackViewToScrollViewTopConstraint;
	NSLayoutConstraint* _stackViewToScrollViewBottomConstraint;
	NSMutableSet* _suspendVisibleRowRangeUpdatesReasons;
	NSMutableSet* _widgetHitTestingDisabledReasons;
	double _searchBarTopOffset;
	NSHashTable* _viewControllerAppearStateOverrideAssertions;
	UITapGestureRecognizer* _dismissTapGestureRecognizer;
	NSMapTable* _onScreenIconIndexRangeByIconListView;

}

@property (nonatomic,retain) id<SBIconListLayoutProvider> listLayoutProvider;                                               //@synthesize listLayoutProvider=_listLayoutProvider - In the implementation block
@property (nonatomic,retain) id<SBIconViewProviding> iconViewProvider;                                                      //@synthesize iconViewProvider=_iconViewProvider - In the implementation block
@property (assign,nonatomic) long long location;                                                                            //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) SBHWidgetSettings * widgetSettings;                                                            //@synthesize widgetSettings=_widgetSettings - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                                     //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) NSMutableArray * scrollViewDidEndScrollingHandlers;                                            //@synthesize scrollViewDidEndScrollingHandlers=_scrollViewDidEndScrollingHandlers - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                                                       //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UIView * fixedContentSizeView;                                                                 //@synthesize fixedContentSizeView=_fixedContentSizeView - In the implementation block
@property (nonatomic,retain) SBIconListView * listView;                                                                     //@synthesize listView=_listView - In the implementation block
@property (nonatomic,retain) UIView * favoriteListContainerView;                                                            //@synthesize favoriteListContainerView=_favoriteListContainerView - In the implementation block
@property (nonatomic,retain) MTMaterialView * favoriteListPlatterView;                                                      //@synthesize favoriteListPlatterView=_favoriteListPlatterView - In the implementation block
@property (nonatomic,retain) UILabel * favoriteListInstructionLabel;                                                        //@synthesize favoriteListInstructionLabel=_favoriteListInstructionLabel - In the implementation block
@property (nonatomic,retain) SBIconListView * favoriteListView;                                                             //@synthesize favoriteListView=_favoriteListView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * favoriteListWithLargeWidgetMinimumHeightConstraint;                       //@synthesize favoriteListWithLargeWidgetMinimumHeightConstraint=_favoriteListWithLargeWidgetMinimumHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * favoriteListWithSmallOrMediumWidgetsMinimumHeightConstraint;              //@synthesize favoriteListWithSmallOrMediumWidgetsMinimumHeightConstraint=_favoriteListWithSmallOrMediumWidgetsMinimumHeightConstraint - In the implementation block
@property (nonatomic,retain) SBTodayIconListLayoutDelegate * listLayoutDelegate;                                            //@synthesize listLayoutDelegate=_listLayoutDelegate - In the implementation block
@property (nonatomic,retain) SBTodayIconListLayoutDelegate * favoriteListLayoutDelegate;                                    //@synthesize favoriteListLayoutDelegate=_favoriteListLayoutDelegate - In the implementation block
@property (nonatomic,retain) UIView * carouselReferenceForLegacyWidgetListView;                                             //@synthesize carouselReferenceForLegacyWidgetListView=_carouselReferenceForLegacyWidgetListView - In the implementation block
@property (nonatomic,retain) UIView * legacyListContainerView;                                                              //@synthesize legacyListContainerView=_legacyListContainerView - In the implementation block
@property (nonatomic,retain) MTMaterialView * legacyListPlatterView;                                                        //@synthesize legacyListPlatterView=_legacyListPlatterView - In the implementation block
@property (nonatomic,retain) UIView * headerContainerView;                                                                  //@synthesize headerContainerView=_headerContainerView - In the implementation block
@property (nonatomic,retain) SBTodayKeepOnHomeScreenPlatterView * keepOnHomeScreenPlatterView;                              //@synthesize keepOnHomeScreenPlatterView=_keepOnHomeScreenPlatterView - In the implementation block
@property (nonatomic,retain) WGWidgetListHeaderView * dateHeaderView;                                                       //@synthesize dateHeaderView=_dateHeaderView - In the implementation block
@property (nonatomic,retain) SBHDateHeaderViewController * dateHeaderViewController;                                        //@synthesize dateHeaderViewController=_dateHeaderViewController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cancelTouchesAssertionsByLegacyWidgetID;                                 //@synthesize cancelTouchesAssertionsByLegacyWidgetID=_cancelTouchesAssertionsByLegacyWidgetID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cancelTouchesAssertionsByWidgetID;                                       //@synthesize cancelTouchesAssertionsByWidgetID=_cancelTouchesAssertionsByWidgetID - In the implementation block
@property (nonatomic,retain) SBTodayViewSpotlightPresenter * spotlightPresenter;                                            //@synthesize spotlightPresenter=_spotlightPresenter - In the implementation block
@property (nonatomic,retain) SBFTouchPassThroughView * spotlightContainerView;                                              //@synthesize spotlightContainerView=_spotlightContainerView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * stackViewToScrollViewTopConstraint;                                     //@synthesize stackViewToScrollViewTopConstraint=_stackViewToScrollViewTopConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * stackViewToScrollViewBottomConstraint;                                  //@synthesize stackViewToScrollViewBottomConstraint=_stackViewToScrollViewBottomConstraint - In the implementation block
@property (assign,nonatomic) BOOL visuallyRevealedPriorToEditingIcons;                                                      //@synthesize visuallyRevealedPriorToEditingIcons=_visuallyRevealedPriorToEditingIcons - In the implementation block
@property (nonatomic,retain) NSMutableSet * suspendVisibleRowRangeUpdatesReasons;                                           //@synthesize suspendVisibleRowRangeUpdatesReasons=_suspendVisibleRowRangeUpdatesReasons - In the implementation block
@property (nonatomic,retain) NSMutableSet * widgetHitTestingDisabledReasons;                                                //@synthesize widgetHitTestingDisabledReasons=_widgetHitTestingDisabledReasons - In the implementation block
@property (nonatomic,readonly) double searchBarTopOffset;                                                                   //@synthesize searchBarTopOffset=_searchBarTopOffset - In the implementation block
@property (nonatomic,retain) NSHashTable * viewControllerAppearStateOverrideAssertions;                                     //@synthesize viewControllerAppearStateOverrideAssertions=_viewControllerAppearStateOverrideAssertions - In the implementation block
@property (assign,nonatomic) BOOL enableEditingModeWhenScrollEnds;                                                          //@synthesize enableEditingModeWhenScrollEnds=_enableEditingModeWhenScrollEnds - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * dismissTapGestureRecognizer;                                          //@synthesize dismissTapGestureRecognizer=_dismissTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSMapTable * onScreenIconIndexRangeByIconListView;                                             //@synthesize onScreenIconIndexRangeByIconListView=_onScreenIconIndexRangeByIconListView - In the implementation block
@property (nonatomic,retain) SBRootFolder * rootFolder;                                                                     //@synthesize rootFolder=_rootFolder - In the implementation block
@property (assign,nonatomic,__weak) SBHIconManager * iconManager;                                                           //@synthesize iconManager=_iconManager - In the implementation block
@property (assign,nonatomic,__weak) id<SBTodayViewControllerDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBFOverlayDismissalDelegate> dismissalDelegate;                                      //@synthesize dismissalDelegate=_dismissalDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * containerViewController;                                             //@synthesize containerViewController=_containerViewController - In the implementation block
@property (nonatomic,readonly) WGMajorListViewController * legacyWidgetListViewController;                                  //@synthesize legacyWidgetListViewController=_legacyWidgetListViewController - In the implementation block
@property (assign,nonatomic) BOOL suppressesEditingStateForListViews;                                                       //@synthesize suppressesEditingStateForListViews=_suppressesEditingStateForListViews - In the implementation block
@property (assign,getter=isHeaderVisible,nonatomic) BOOL headerVisible;                                                     //@synthesize headerVisible=_headerVisible - In the implementation block
@property (assign,getter=isSpotlightVisible,nonatomic) BOOL spotlightVisible;                                               //@synthesize spotlightVisible=_spotlightVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * extraViewsContainers; 
@property (nonatomic,copy,readonly) NSArray * extraViews; 
@property (nonatomic,readonly) BOOL shouldAnimateLastTwoViewsAsOne; 
@property (nonatomic,readonly) BOOL shouldAnimateFirstTwoViewsAsOne; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (nonatomic,retain) SBViewControllerTransitionContext * transitionContext;                                         //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                    //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,copy,readonly) NSSet * presentedIconLocations; 
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) double customIdleExpirationTimeout; 
@property (nonatomic,readonly) double customIdleWarningTimeout; 
@property (assign,getter=isOccluded,nonatomic) BOOL occluded;                                                               //@synthesize occluded=_occluded - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)cleanupAfterSpotlightDismissal;
-(id<SBIconViewProviding>)iconViewProvider;
-(void)resetForSpotlightDismissalAnimated:(BOOL)arg1 ;
-(id)spotlightHeaderAcquiringViewController;
-(id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)iconList:(id)arg1 didAddIcon:(id)arg2 ;
-(void)setRevealed:(BOOL)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)setOccluded:(BOOL)arg1 ;
-(void)coronaAnimationController:(id)arg1 willAnimateCoronaTransitionWithAnimator:(id)arg2 ;
-(void)iconView:(id)arg1 didChangeCustomImageViewController:(id)arg2 ;
-(void)setIconManager:(SBHIconManager *)arg1 ;
-(void)iconViewWillDismissContextMenu:(id)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)setTransitionContext:(SBViewControllerTransitionContext *)arg1 ;
-(void)conformsToCSExternalBehaviorProviding;
-(void)iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2 ;
-(NSArray *)extraViewsContainers;
-(UIViewController *)containerViewController;
-(id<SBTodayViewControllerDelegate>)delegate;
-(void)iconViewWillPresentContextMenu:(id)arg1 ;
-(BOOL)isSpotlightVisible;
-(SBViewControllerTransitionContext *)transitionContext;
-(void)_scrollViewDidEndScrolling;
-(void)enumerateDisplayedIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_updateVisiblySettledForIconViews;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg1 inLocations:(id)arg2 ;
-(void)iconListViewDidChangeBoundsSize:(id)arg1 ;
-(id)iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3 ;
-(long long)location;
-(BOOL)isPresentingIconLocation:(id)arg1 ;
-(id)_findHiddenIconView;
-(BOOL)iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg2 onIconView:(id)arg3 ;
-(void)setListLayoutProvider:(id<SBIconListLayoutProvider>)arg1 ;
-(SBHIconManager *)iconManager;
-(id)_platterViewAtLocation:(CGPoint)arg1 ;
-(UIStackView *)stackView;
-(long long)notificationBehavior;
-(void)conformsToCSBehaviorProviding;
-(NSArray *)extraViews;
-(BOOL)suppressesEditingStateForListViews;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(SBRootFolder *)rootFolder;
-(void)iconListView:(id)arg1 didRemoveIconView:(id)arg2 ;
-(BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(long long)proximityDetectionMode;
-(BOOL)shouldAnimateLastTwoViewsAsOne;
-(void)setContainerViewController:(UIViewController *)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(id<SBIconListLayoutProvider>)listLayoutProvider;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(CGPoint)arg3 ;
-(void)_setUpGestureRecognizers;
-(id)iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2 ;
-(void)setRootFolder:(SBRootFolder *)arg1 ;
-(id)firstIconViewForIcon:(id)arg1 ;
-(void)setLocation:(long long)arg1 ;
-(void)_updateHiddenIconViewForScrolling:(BOOL)arg1 ;
-(NSString *)coverSheetIdentifier;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)_updateScrollViewContentSize;
-(BOOL)isOccluded;
-(void)setDelegate:(id<SBTodayViewControllerDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2 ;
-(BOOL)shouldAnimateFirstTwoViewsAsOne;
-(void)setDisplayLayoutElementActive:(BOOL)arg1 ;
-(void)_invalidateAllCancelTouchesAssertions;
-(void)setIconViewProvider:(id<SBIconViewProviding>)arg1 ;
-(BOOL)iconListView:(id)arg1 canHandleIconDropSession:(id)arg2 ;
-(id)listModel;
-(BOOL)isHeaderVisible;
-(CGRect)_cellFrameInScrollBoundsForCell:(id)arg1 ;
-(CGSize)widgetListViewController:(id)arg1 sizeForInterfaceOrientation:(long long)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)_updateHeaderVisibility;
-(void)iconListView:(id)arg1 didAddIconView:(id)arg2 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)removeFromParentViewController;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(CGRect)_suggestedTodayViewFrameForBounds:(CGRect)arg1 ;
-(void)iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2 ;
-(SBIconListView *)favoriteListView;
-(long long)idleTimerDuration;
-(void)layoutIconListView:(double)arg1 animationType:(long long)arg2 forceRelayout:(BOOL)arg3 ;
-(SBHWidgetSettings *)widgetSettings;
-(void)iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2 ;
-(long long)idleTimerMode;
-(BOOL)isDisplayingIconView:(id)arg1 ;
-(long long)participantState;
-(BOOL)isDisplayingIcon:(id)arg1 ;
-(void)iconList:(id)arg1 didMoveIcon:(id)arg2 ;
-(void)setSpotlightPresenter:(SBTodayViewSpotlightPresenter *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)scrollIconToVisible:(id)arg1 atPosition:(long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleClippingScrollViewDidScroll:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setVisuallyRevealedPriorToEditingIcons:(BOOL)arg1 ;
-(void)_updateEditingStateAnimated:(BOOL)arg1 ;
-(long long)idleWarnMode;
-(NSSet *)presentedIconLocations;
-(void)scrollViewDidScroll:(id)arg1 ;
-(SBIconListView *)listView;
-(void)setEditing:(BOOL)arg1 ;
-(id)_majorScrollView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setHeaderVisible:(BOOL)arg1 ;
-(void)iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 ;
-(SBTodayViewSpotlightPresenter *)spotlightPresenter;
-(void)loadView;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)iconList:(id)arg1 didRemoveIcon:(id)arg2 ;
-(long long)scrollingStrategy;
-(id)iconListView:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2 ;
-(void)_cleanupViews;
-(BOOL)visuallyRevealedPriorToEditingIcons;
-(void)setSuppressesEditingStateForListViews:(BOOL)arg1 ;
-(UIScrollView *)scrollView;
-(id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2 ;
-(void)iconListView:(id)arg1 performIconDrop:(id)arg2 ;
-(unsigned long long)restrictedCapabilities;
-(UIView *)headerContainerView;
-(void)setHeaderContainerView:(UIView *)arg1 ;
-(void)iconListView:(id)arg1 willUseIconView:(id)arg2 forDroppingIconDragItem:(id)arg3 ;
-(void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)noteIconViewWillZoomDown:(id)arg1 ;
-(void)dealloc;
-(void)setWidgetSettings:(SBHWidgetSettings *)arg1 ;
-(double)searchBarTopOffset;
-(void)setDismissalDelegate:(id<SBFOverlayDismissalDelegate>)arg1 ;
-(id<SBFOverlayDismissalDelegate>)dismissalDelegate;
-(void)setListView:(SBIconListView *)arg1 ;
-(void)_beginAppearanceTransitionForChildViewControllersToVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_endAppearanceTransitionForChildViewControllersToVisible:(BOOL)arg1 ;
-(void)_showOnBoardingAlertIfNeeded;
-(void)dismissSpotlightAnimated:(BOOL)arg1 ;
-(WGMajorListViewController *)legacyWidgetListViewController;
-(UITapGestureRecognizer *)dismissTapGestureRecognizer;
-(id)initWithListLayoutProvider:(id)arg1 iconViewProvider:(id)arg2 legacyWidgetListViewController:(id)arg3 location:(long long)arg4 ;
-(id)beginOverridingViewControllerAppearanceStateToRemainDisappearedForReason:(id)arg1 ;
-(void)_updateSidebarPinnedState;
-(void)_setUpScrollView;
-(void)_setUpSearchPresenter;
-(void)_setUpIconListViews;
-(void)_setUpLegacyWidgetListView;
-(void)_setUpHeaderViews;
-(BOOL)_isSidebarPinned;
-(void)setVisuallyRevealed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGSize)_iconSpacingForIconListViews;
-(void)_updateFavoriteListPlatterAndSize;
-(void)_beginSuspendingVisibleRowRangeUpdatesForReason:(id)arg1 ;
-(id)favoriteListModel;
-(void)_updateIconListSpacing;
-(void)_setUpIconListViewLayoutDelegates;
-(void)_updateLegacyListPlatter;
-(double)_dateHeaderViewSpacing;
-(void)_dismissTodayViewOverlay:(id)arg1 ;
-(void)_endSuspendingVisibleRowRangeUpdatesForReason:(id)arg1 ;
-(void)_autoFillInFavoriteListViewIfNecessary;
-(void)_toggleHeaderViewWithEditingState:(BOOL)arg1 ;
-(void)_updateListLayoutAdditionalInsets;
-(void)_updateScrollViewContentInset;
-(void)_endDisablingWidgetHitTestingForReason:(id)arg1 ;
-(void)_cancelTouchesForAllWidgets;
-(void)_beginDisablingWidgetHitTestingForReason:(id)arg1 ;
-(BOOL)_isOverridingViewControllerAppearanceStateToRemainDisappeared;
-(UIEdgeInsets)_effectiveLayoutInsets;
-(void)_updateListViewLayoutAnimated:(BOOL)arg1 ;
-(void)_updateTouchInsets;
-(void)_toggleNonFavoriteListVisibilityWithSidebarPinned:(BOOL)arg1 editing:(BOOL)arg2 ;
-(void)_toggleCarouselLayoutWithEditingState:(BOOL)arg1 ;
-(NSHashTable *)viewControllerAppearStateOverrideAssertions;
-(void)_cancelTouchesForWidgetIconView:(id)arg1 ;
-(void)_enumerateWidgetIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateWidgetPlatterViewsUsingBlock:(/*^block*/id)arg1 ;
-(void)_cancelTouchesForWidgetPlatterView:(id)arg1 ;
-(id)_widgetIconViewAtLocation:(CGPoint)arg1 ;
-(void)_enumerateWidgetWrapperViewsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_isWidgetHitTestingDisabled;
-(void)_updateVisibleRowRangeForListViews;
-(void)_prepareIconViewsForSpotlightPresentation;
-(void)_prepareIconViewForSpotlightPresentation:(id)arg1 ;
-(void)_cancelTouchesForHitTestedWidgetInScrollView:(id)arg1 ;
-(WGWidgetListHeaderView *)dateHeaderView;
-(void)_styleHeaderView:(id)arg1 withCellFrameInScrollViewBounds:(CGRect)arg2 ;
-(SBTodayIconListLayoutDelegate *)listLayoutDelegate;
-(unsigned long long)_indexForNextWidgetInNonFavoriteListViewAfterContentOffset:(double)arg1 ;
-(void)_updateRevealStateAnimated:(BOOL)arg1 ;
-(void)_updateSubviewOrderingForListViews;
-(void)_updateVisiblySettledForIconViewsInListView:(id)arg1 ;
-(void)_updateVisiblySettledForIconView:(id)arg1 atIconIndex:(unsigned long long)arg2 inListView:(id)arg3 ;
-(void)_updateVisibleRowRangeForListView:(id)arg1 ;
-(BOOL)_isViewVisibleInScrollViewSpace:(id)arg1 ;
-(NSLayoutConstraint *)stackViewToScrollViewBottomConstraint;
-(id)scrollViewForWidgetListViewController:(id)arg1 ;
-(void)editButtonTappedFromWidgetListViewController:(id)arg1 ;
-(id)editingMaterialViewForWidgetListViewController:(id)arg1 ;
-(BOOL)isWidgetListViewControllerEditable:(id)arg1 ;
-(id)parentViewControllerForSpotlightPresenter:(id)arg1 ;
-(double)todayViewControllerLocationForSpotlightPresenter:(id)arg1 ;
-(double)searchBarTopOffsetForSpotlightPresenter:(id)arg1 ;
-(void)spotlightPresenterSearchBarDidFocus:(id)arg1 ;
-(void)spotlightPresenterWillPresentSpotlight:(id)arg1 ;
-(void)spotlightPresenterDidPresentSpotlight:(id)arg1 ;
-(void)spotlightPresenterDidDismissSpotlight:(id)arg1 ;
-(BOOL)spotlightPresenterAllowsPullToSearch:(id)arg1 ;
-(void)setSpotlightVisible:(BOOL)arg1 ;
-(NSMutableArray *)scrollViewDidEndScrollingHandlers;
-(void)setScrollViewDidEndScrollingHandlers:(NSMutableArray *)arg1 ;
-(UIView *)fixedContentSizeView;
-(void)setFixedContentSizeView:(UIView *)arg1 ;
-(UIView *)favoriteListContainerView;
-(void)setFavoriteListContainerView:(UIView *)arg1 ;
-(MTMaterialView *)favoriteListPlatterView;
-(void)setFavoriteListPlatterView:(MTMaterialView *)arg1 ;
-(UILabel *)favoriteListInstructionLabel;
-(void)setFavoriteListInstructionLabel:(UILabel *)arg1 ;
-(void)setFavoriteListView:(SBIconListView *)arg1 ;
-(NSLayoutConstraint *)favoriteListWithLargeWidgetMinimumHeightConstraint;
-(void)setFavoriteListWithLargeWidgetMinimumHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)favoriteListWithSmallOrMediumWidgetsMinimumHeightConstraint;
-(void)setFavoriteListWithSmallOrMediumWidgetsMinimumHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setListLayoutDelegate:(SBTodayIconListLayoutDelegate *)arg1 ;
-(SBTodayIconListLayoutDelegate *)favoriteListLayoutDelegate;
-(void)setFavoriteListLayoutDelegate:(SBTodayIconListLayoutDelegate *)arg1 ;
-(UIView *)carouselReferenceForLegacyWidgetListView;
-(void)setCarouselReferenceForLegacyWidgetListView:(UIView *)arg1 ;
-(UIView *)legacyListContainerView;
-(void)setLegacyListContainerView:(UIView *)arg1 ;
-(MTMaterialView *)legacyListPlatterView;
-(void)setLegacyListPlatterView:(MTMaterialView *)arg1 ;
-(SBTodayKeepOnHomeScreenPlatterView *)keepOnHomeScreenPlatterView;
-(void)setKeepOnHomeScreenPlatterView:(SBTodayKeepOnHomeScreenPlatterView *)arg1 ;
-(void)setDateHeaderView:(WGWidgetListHeaderView *)arg1 ;
-(SBHDateHeaderViewController *)dateHeaderViewController;
-(void)setDateHeaderViewController:(SBHDateHeaderViewController *)arg1 ;
-(NSMutableDictionary *)cancelTouchesAssertionsByLegacyWidgetID;
-(void)setCancelTouchesAssertionsByLegacyWidgetID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cancelTouchesAssertionsByWidgetID;
-(void)setCancelTouchesAssertionsByWidgetID:(NSMutableDictionary *)arg1 ;
-(SBFTouchPassThroughView *)spotlightContainerView;
-(void)setSpotlightContainerView:(SBFTouchPassThroughView *)arg1 ;
-(NSLayoutConstraint *)stackViewToScrollViewTopConstraint;
-(NSMutableSet *)suspendVisibleRowRangeUpdatesReasons;
-(void)setSuspendVisibleRowRangeUpdatesReasons:(NSMutableSet *)arg1 ;
-(NSMutableSet *)widgetHitTestingDisabledReasons;
-(void)setWidgetHitTestingDisabledReasons:(NSMutableSet *)arg1 ;
-(void)setViewControllerAppearStateOverrideAssertions:(NSHashTable *)arg1 ;
-(BOOL)enableEditingModeWhenScrollEnds;
-(void)setEnableEditingModeWhenScrollEnds:(BOOL)arg1 ;
-(void)setDismissTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(NSMapTable *)onScreenIconIndexRangeByIconListView;
-(void)setOnScreenIconIndexRangeByIconListView:(NSMapTable *)arg1 ;
@end

