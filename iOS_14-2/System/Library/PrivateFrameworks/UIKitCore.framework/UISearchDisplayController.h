/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIScrollViewScrollObserver_Internal.h>

@protocol UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate;
@class UIViewController, UITableView, UIView, UISearchBar, UILabel, NSString, UIPopoverController, NSArray, UIScrollView, UISearchDisplayControllerContainerView, UINavigationItem, _UINavigationControllerPalette, UIButton, UIColor, _UISearchControllerDidScrollDelegate;

@interface UISearchDisplayController : NSObject <_UIScrollViewScrollObserver_Internal> {

	UIViewController* _viewController;
	UITableView* _tableView;
	UIView* _dimmingView;
	UISearchBar* _searchBar;
	UILabel* _noResultsLabel;
	NSString* _noResultsMessage;
	NSString* _resultsTitle;
	CFArrayRef _containingScrollViews;
	double _lastKeyboardAdjustment;
	double _lastFooterAdjustment;
	UIPopoverController* _popoverController;
	long long _searchResultsTableViewStyle;
	id _navigationControllerBookkeeper;
	NSArray* _savedSelectedCellsWhenViewWillAppear;
	UIScrollView* _savedContainingScrollView;
	UISearchDisplayControllerContainerView* _containerView;
	unsigned long long _savedSearchBarResizingMask;
	UINavigationItem* _navigationItem;
	CGPoint _containingScrollViewContentOffset;
	CGRect _searchFieldInNavigationBarFrame;
	_UINavigationControllerPalette* _attachedNavigationPalette;
	UIButton* _animatingAppearanceNavigationButton;
	double _animatingAppearanceNavigationSearchBarWidth;
	UIColor* _dimmingOverlayColor;
	UIView* _tableViewBackgroundHeaderView;
	long long _unactivatedBarPosition;
	_UISearchControllerDidScrollDelegate* _didScrollDelegate;
	struct {
		unsigned visible : 1;
		unsigned animating : 1;
		unsigned hidIndexBar : 1;
		unsigned hidNavigationBar : 1;
		unsigned noResultsMessageVisible : 1;
		unsigned noResultsMessageAutoDisplay : 1;
		unsigned navigationBarHidingEnabled : 1;
		unsigned dimTableViewOnEmptySearchString : 1;
		unsigned isRotatingWithPopover : 1;
		unsigned cancelButtonManagementDisabled : 1;
		unsigned allowDisablingNavigationBarHiding : 1;
		unsigned showsResultsForEmptyField : 1;
		unsigned searchBarCanBeHoisted : 1;
		unsigned animatingSearchResultsDisappearance : 1;
		unsigned navigationBarShadowWasHidden : 1;
		unsigned hoistingSearchBar : 1;
	}  _searchDisplayControllerFlags;
	BOOL _displaysSearchBarInNavigationBar;
	id<UISearchDisplayDelegate> _delegate;
	id<UITableViewDataSource> _tableViewDataSource;
	id<UITableViewDelegate> _tableViewDelegate;
	unsigned long long _navigationBarSearchFieldSizing;
	double __activationGapHeight;
	double __additionalNonCollapsingHeightAboveSearchBar;

}

@property (assign,nonatomic) BOOL noResultsMessageVisible; 
@property (assign,nonatomic) BOOL automaticallyShowsNoResultsMessage; 
@property (nonatomic,copy) NSString * noResultsMessage; 
@property (assign,getter=isNavigationBarHidingEnabled,nonatomic) BOOL navigationBarHidingEnabled; 
@property (assign,nonatomic) BOOL dimTableViewOnEmptySearchString; 
@property (assign,setter=_setCancelButtonManagementDisabled:,getter=_isCancelButtonManagementDisabled,nonatomic) BOOL cancelButtonManagementDisabled; 
@property (assign,nonatomic) unsigned long long navigationBarSearchFieldSizing;                                                                                    //@synthesize navigationBarSearchFieldSizing=_navigationBarSearchFieldSizing - In the implementation block
@property (assign,nonatomic) double _activationGapHeight;                                                                                                          //@synthesize _activationGapHeight=__activationGapHeight - In the implementation block
@property (assign,nonatomic) double _additionalNonCollapsingHeightAboveSearchBar;                                                                                  //@synthesize _additionalNonCollapsingHeightAboveSearchBar=__additionalNonCollapsingHeightAboveSearchBar - In the implementation block
@property (assign,nonatomic) id<UISearchDisplayDelegate> delegate;                                                                                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (nonatomic,readonly) UISearchBar * searchBar;                                                                                                            //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * searchContentsController;                                                                                 //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) UITableView * searchResultsTableView;                                                                                               //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<UITableViewDataSource> searchResultsDataSource;                                                                             //@synthesize tableViewDataSource=_tableViewDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<UITableViewDelegate> searchResultsDelegate;                                                                                 //@synthesize tableViewDelegate=_tableViewDelegate - In the implementation block
@property (nonatomic,copy) NSString * searchResultsTitle;                                                                                                          //@synthesize resultsTitle=_resultsTitle - In the implementation block
@property (assign,nonatomic) BOOL displaysSearchBarInNavigationBar;                                                                                                //@synthesize displaysSearchBarInNavigationBar=_displaysSearchBarInNavigationBar - In the implementation block
@property (nonatomic,readonly) UINavigationItem * navigationItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_uiibSetRequiresSearchDisplayControllerSupport;
-(UISearchBar *)searchBar;
-(UINavigationItem *)navigationItem;
-(double)_statusBarHeight;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithSearchBar:(id)arg1 contentsController:(id)arg2 searchResultsTableViewStyle:(long long)arg3 ;
-(id)init;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(double)arg2 ;
-(void)_adjustTableViewContentInsetsAndOffsetsIgnoringCurrent:(BOOL)arg1 ;
-(id<UISearchDisplayDelegate>)delegate;
-(BOOL)isActive;
-(void)navigationControllerDidCancelShowingViewController:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_restoreSelectedCellsInCaseViewDidNotReallyAppear;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
-(void)_animateNavigationBarSearchBarAppearance:(id)arg1 ;
-(void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2 ;
-(id)_containerView;
-(void)setDelegate:(id<UISearchDisplayDelegate>)arg1 ;
-(BOOL)hidNavigationBar;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_observeScrollViewDidScroll:(id)arg1 ;
-(void)popoverController:(id)arg1 animationCompleted:(long long)arg2 ;
-(void)searchBarResultsListButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(BOOL)_isSearchBarInBar;
-(id)_containingViewOfClass:(Class)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(UIEdgeInsets)_tableViewContentInsets;
-(id)_topShadowView;
-(void)_configureNewSearchBar;
-(unsigned long long)navigationBarSearchFieldSizing;
-(UITableView *)searchResultsTableView;
-(UIViewController *)searchContentsController;
-(id)_dimmingOverlayColor;
-(void)_updatePinnedSearchBar;
-(void)_configureContainerView;
-(BOOL)noResultsMessageVisible;
-(void)_cleanUpSearchBar;
-(void)windowDidRotate:(id)arg1 ;
-(void)setActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateSearchBarMaskIfNecessary;
-(void)_managedTableViewDidScroll;
-(void)_searchBarSuperviewWillChange;
-(void)_searchBarSuperviewChanged;
-(void)_updateNoSearchResultsMessageVisiblity;
-(id)_dimmingViewColor;
-(id<UITableViewDelegate>)searchResultsDelegate;
-(id)initWithSearchBar:(id)arg1 contentsController:(id)arg2 ;
-(BOOL)displaysSearchBarInNavigationBar;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(NSString *)noResultsMessage;
-(void)_destroyManagedTableView;
-(id<UITableViewDataSource>)searchResultsDataSource;
-(double)_dimmingViewAlpha;
-(void)_watchContainingTableViewForScrolling:(BOOL)arg1 ;
-(BOOL)_areSearchContentsSplitViewMaster;
-(void)windowWillAnimateRotation:(id)arg1 ;
-(void)_configureSearchBarForTableView;
-(BOOL)isNavigationBarHidingEnabled;
-(NSString *)searchResultsTitle;
-(void)_popoverClearButtonPressed:(id)arg1 ;
-(BOOL)_searchBarInNavigationControllerComponent;
-(BOOL)_shouldAccountForStatusBarHeight;
-(BOOL)_searchBarShouldScrollToVisible:(id)arg1 ;
-(double)_additionalNonCollapsingHeightAboveSearchBar;
-(id)_createPopoverController;
-(BOOL)dimTableViewOnEmptySearchString;
-(void)navigationControllerWillShowViewController:(id)arg1 ;
-(BOOL)_showsResultsForEmptyField;
-(void)_setTableViewVisible:(BOOL)arg1 inView:(id)arg2 ;
-(BOOL)_containedInPopover;
-(void)_sendDelegateDidBeginDidEndSearch;
-(void)_popoverKeyboardDidShow:(id)arg1 ;
-(void)_popoverKeyboardDidHide:(id)arg1 ;
-(void)navigationControllerDidShowViewController:(id)arg1 ;
-(void)_hideVisibleRefreshControl;
-(void)_disableParentScrollViews;
-(void)setNoResultsMessage:(NSString *)arg1 ;
-(void)_enableParentScrollViews;
-(void)showHideAnimationDidFinish;
-(id)_noResultsMessageLabel;
-(double)_updateNavigationPalette;
-(void)_clearSavedSelectedCellsWeUsedWhenHedgingOurBets;
-(void)setSearchResultsTitle:(NSString *)arg1 ;
-(void)_saveSelectedRowsInCaseViewDoesNotReallyAppear;
-(void)_setupNoResultsLabelIfNecessary;
-(void)_hoistSearchBar;
-(void)setSearchContentsController:(UIViewController *)arg1 ;
-(void)setSearchResultsDataSource:(id<UITableViewDataSource>)arg1 ;
-(void)_clearViewController;
-(void)setSearchResultsDelegate:(id<UITableViewDelegate>)arg1 ;
-(void)setNoResultsMessageVisible:(BOOL)arg1 ;
-(double)_activationGapHeight;
-(void)setAutomaticallyShowsNoResultsMessage:(BOOL)arg1 ;
-(BOOL)automaticallyShowsNoResultsMessage;
-(void)setNavigationBarHidingEnabled:(BOOL)arg1 ;
-(void)_setAllowDisablingNavigationBarHiding:(BOOL)arg1 ;
-(BOOL)_allowDisablingNavigationBarHiding;
-(void)setDimTableViewOnEmptySearchString:(BOOL)arg1 ;
-(BOOL)_isCancelButtonManagementDisabled;
-(void)_setCancelButtonManagementDisabled:(BOOL)arg1 ;
-(void)_setShowsResultsForEmptyField:(BOOL)arg1 ;
-(void)setNavigationBarSearchFieldSizing:(unsigned long long)arg1 ;
-(void)_setDimmingOverlayColor:(id)arg1 ;
-(void)setDisplaysSearchBarInNavigationBar:(BOOL)arg1 ;
-(void)set_activationGapHeight:(double)arg1 ;
-(void)set_additionalNonCollapsingHeightAboveSearchBar:(double)arg1 ;
-(void)dealloc;
-(id)_containingTableView;
@end

