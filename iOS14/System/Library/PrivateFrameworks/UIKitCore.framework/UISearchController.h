/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIScrollViewScrollObserver_Internal.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerAnimatedTransitioning, UISearchResultsUpdating, UISearchControllerDelegate, UISearchResultsUpdatingPrivate;
@class UISearchBar, _UISearchControllerDidScrollDelegate, UISystemInputViewController, UITapGestureRecognizer, UIView, _UINavigationControllerManagedSearchPalette, UIViewController, NSArray, UIScrollView, UINavigationItem, _UISearchControllerTVKeyboardContainerView, UICollectionView, UIFocusContainerGuide, UIFocusGuide, NSString;

@interface UISearchController : UIViewController <NSCoding, UIGestureRecognizerDelegate, _UIScrollViewScrollObserver_Internal, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {

	UISearchBar* _searchBar;
	int _barPresentationStyle;
	id<UIViewControllerAnimatedTransitioning> _animator;
	id _windowWillAnimateToken;
	_UISearchControllerDidScrollDelegate* _didScrollDelegate;
	UISystemInputViewController* _systemInputViewController;
	BOOL _shouldFocusResultsOnNextFocusUpdate;
	UITapGestureRecognizer* _backButtonDismissGestureRecognizer;
	UITapGestureRecognizer* _doneButtonGestureRecognizer;
	long long _lastKnownInterfaceOrientation;
	BOOL _shouldUseLegacyAnimator;
	struct {
		unsigned searchBarWasTableHeaderView : 1;
		unsigned searchBarWasFirstResponder : 1;
		unsigned transitioningOut : 1;
		unsigned delegateWantsInsertSearchFieldTextSuggestion : 1;
		unsigned automaticallyShowsCancelButton : 1;
		unsigned automaticallyShowsScopeBar : 1;
		unsigned automaticallyShowsSearchResultsController : 1;
		unsigned explicitlyShowsSearchResultsController : 1;
		unsigned searchFieldIsBeginningEditing : 1;
	}  _controllerFlags;
	UIEdgeInsets _previousObservedScrollViewGradientMaskLengths;
	BOOL _previousObservedScrollViewShouldPreventFocusScrollPastContentSize;
	BOOL _obscuresBackgroundDuringPresentation;
	BOOL _hidesNavigationBarDuringPresentation;
	BOOL __tabBarHidden;
	BOOL __gridKeyboardVisible;
	BOOL __shouldHideGridKeyboardUnfocused;
	BOOL __shouldDisplayDefaultSuggestion;
	BOOL __showResultsForEmptySearch;
	BOOL __shouldRespectPreferredContentSize;
	BOOL __alwaysHidesNavigationBar;
	UIView* _resultsControllerViewContainer;
	_UINavigationControllerManagedSearchPalette* _managedPalette;
	id<UISearchResultsUpdating> _searchResultsUpdater;
	id<UISearchControllerDelegate> _delegate;
	UIViewController* _searchResultsController;
	NSArray* _searchSuggestions;
	UIScrollView* _searchControllerObservedScrollView;
	long long __previousSearchBarPosition;
	double __resultsContentScrollViewPresentationOffset;
	UIView* __systemInputMarginView;
	UINavigationItem* __navigationItemCurrentlyDisplayingSearchController;
	_UISearchControllerTVKeyboardContainerView* __tvKeyboardContainerView;
	UICollectionView* __suggestionView;
	UIView* __leftDividerView;
	UIView* __rightDividerView;
	UIFocusContainerGuide* __scopeBarFocusContainerGuide;
	NSArray* __scopeBarConstraints;
	double __topResultsViewEdgeInset;
	UIFocusGuide* _keyboardToSearchResultsFocusGuide;
	UIFocusGuide* _searchResultsToHiddenKeyboardFocusGuide;
	UIView* __suggestionContainerView;
	NSArray* _searchHints;
	id<UISearchResultsUpdatingPrivate> _searchResultsUpdaterPrivate;
	unsigned long long __requestedInteractionModel;

}

@property (nonatomic,readonly) int _barPresentationStyle;                                                                                                                                          //@synthesize barPresentationStyle=_barPresentationStyle - In the implementation block
@property (nonatomic,readonly) BOOL _searchFieldIsBeginningEditing; 
@property (nonatomic,readonly) BOOL _isShowingSearchResultsControllerWhileActive; 
@property (nonatomic,readonly) BOOL _searchbarWasTableHeaderView; 
@property (assign,nonatomic) long long _previousSearchBarPosition;                                                                                                                                 //@synthesize _previousSearchBarPosition=__previousSearchBarPosition - In the implementation block
@property (nonatomic,retain) UIView * _resultsControllerViewContainer;                                                                                                                             //@synthesize resultsControllerViewContainer=_resultsControllerViewContainer - In the implementation block
@property (assign,nonatomic) double _resultsContentScrollViewPresentationOffset;                                                                                                                   //@synthesize _resultsContentScrollViewPresentationOffset=__resultsContentScrollViewPresentationOffset - In the implementation block
@property (nonatomic,readonly) UISystemInputViewController * _systemInputViewController; 
@property (assign,nonatomic) BOOL _tabBarHidden;                                                                                                                                                   //@synthesize _tabBarHidden=__tabBarHidden - In the implementation block
@property (nonatomic,retain) UIView * _systemInputMarginView;                                                                                                                                      //@synthesize _systemInputMarginView=__systemInputMarginView - In the implementation block
@property (readonly) BOOL _delegateWantsInsertSearchFieldTextSuggestion; 
@property (nonatomic,retain,readonly) _UINavigationControllerManagedSearchPalette * _managedPalette;                                                                                               //@synthesize managedPalette=_managedPalette - In the implementation block
@property (assign,nonatomic,__weak) UINavigationItem * _navigationItemCurrentlyDisplayingSearchController;                                                                                         //@synthesize _navigationItemCurrentlyDisplayingSearchController=__navigationItemCurrentlyDisplayingSearchController - In the implementation block
@property (nonatomic,readonly) _UISearchControllerTVKeyboardContainerView * _tvKeyboardContainerView;                                                                                              //@synthesize _tvKeyboardContainerView=__tvKeyboardContainerView - In the implementation block
@property (nonatomic,readonly) UICollectionView * _suggestionView;                                                                                                                                 //@synthesize _suggestionView=__suggestionView - In the implementation block
@property (nonatomic,readonly) UIView * _leftDividerView;                                                                                                                                          //@synthesize _leftDividerView=__leftDividerView - In the implementation block
@property (nonatomic,readonly) UIView * _rightDividerView;                                                                                                                                         //@synthesize _rightDividerView=__rightDividerView - In the implementation block
@property (nonatomic,readonly) UIFocusContainerGuide * _scopeBarFocusContainerGuide;                                                                                                               //@synthesize _scopeBarFocusContainerGuide=__scopeBarFocusContainerGuide - In the implementation block
@property (nonatomic,retain) NSArray * _scopeBarConstraints;                                                                                                                                       //@synthesize _scopeBarConstraints=__scopeBarConstraints - In the implementation block
@property (assign,nonatomic) double _topResultsViewEdgeInset;                                                                                                                                      //@synthesize _topResultsViewEdgeInset=__topResultsViewEdgeInset - In the implementation block
@property (nonatomic,retain) UIFocusGuide * keyboardToSearchResultsFocusGuide;                                                                                                                     //@synthesize keyboardToSearchResultsFocusGuide=_keyboardToSearchResultsFocusGuide - In the implementation block
@property (nonatomic,retain) UIFocusGuide * searchResultsToHiddenKeyboardFocusGuide;                                                                                                               //@synthesize searchResultsToHiddenKeyboardFocusGuide=_searchResultsToHiddenKeyboardFocusGuide - In the implementation block
@property (nonatomic,retain) UIView * _suggestionContainerView;                                                                                                                                    //@synthesize _suggestionContainerView=__suggestionContainerView - In the implementation block
@property (assign,setter=_setGridKeyboardVisible:,getter=_isGridKeyboardVisible,nonatomic) BOOL _gridKeyboardVisible;                                                                              //@synthesize _gridKeyboardVisible=__gridKeyboardVisible - In the implementation block
@property (nonatomic,readonly) BOOL _tvShouldScrollWithObservedScrollViewIfPossible; 
@property (assign,setter=_setShouldHideGridKeyboardUnfocused:,nonatomic) BOOL _shouldHideGridKeyboardUnfocused;                                                                                    //@synthesize _shouldHideGridKeyboardUnfocused=__shouldHideGridKeyboardUnfocused - In the implementation block
@property (assign,setter=_setShouldDisplayDefaultSuggestion:,getter=_shouldDisplayDefaultSuggestion,nonatomic) BOOL _shouldDisplayDefaultSuggestion;                                               //@synthesize _shouldDisplayDefaultSuggestion=__shouldDisplayDefaultSuggestion - In the implementation block
@property (nonatomic,copy) NSArray * searchHints;                                                                                                                                                  //@synthesize searchHints=_searchHints - In the implementation block
@property (assign,nonatomic,__weak) id<UISearchResultsUpdatingPrivate> searchResultsUpdaterPrivate;                                                                                                //@synthesize searchResultsUpdaterPrivate=_searchResultsUpdaterPrivate - In the implementation block
@property (assign,setter=_setShowResultsForEmptySearch:,nonatomic) BOOL _showResultsForEmptySearch;                                                                                                //@synthesize _showResultsForEmptySearch=__showResultsForEmptySearch - In the implementation block
@property (assign,setter=_setRequestedInteractionModel:,nonatomic) unsigned long long _requestedInteractionModel;                                                                                  //@synthesize _requestedInteractionModel=__requestedInteractionModel - In the implementation block
@property (assign,setter=_setShouldRespectPreferredContentSize:,nonatomic) BOOL _shouldRespectPreferredContentSize;                                                                                //@synthesize _shouldRespectPreferredContentSize=__shouldRespectPreferredContentSize - In the implementation block
@property (assign,setter=_setAlwaysHidesNavigationBar:,nonatomic) BOOL _alwaysHidesNavigationBar;                                                                                                  //@synthesize _alwaysHidesNavigationBar=__alwaysHidesNavigationBar - In the implementation block
@property (assign,setter=_setAutomaticallyShowsCancelButton:,nonatomic) BOOL _automaticallyShowsCancelButton; 
@property (assign,setter=_setAutomaticallyShowsScopeBar:,nonatomic) BOOL _automaticallyShowsScopeBar; 
@property (assign,setter=_setAutomaticallyShowsSearchResultsController:,getter=_automaticallyShowsSearchResultsController,nonatomic) BOOL _automaticallyShowsSearchResultsController; 
@property (assign,setter=_setShowsSearchResultsController:,getter=_showsSearchResultsController,nonatomic) BOOL _showsSearchResultsController; 
@property (assign,nonatomic,__weak) id<UISearchResultsUpdating> searchResultsUpdater;                                                                                                              //@synthesize searchResultsUpdater=_searchResultsUpdater - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,nonatomic,__weak) id<UISearchControllerDelegate> delegate;                                                                                                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL dimsBackgroundDuringPresentation; 
@property (assign,nonatomic) BOOL obscuresBackgroundDuringPresentation;                                                                                                                            //@synthesize obscuresBackgroundDuringPresentation=_obscuresBackgroundDuringPresentation - In the implementation block
@property (assign,nonatomic) BOOL hidesNavigationBarDuringPresentation;                                                                                                                            //@synthesize hidesNavigationBarDuringPresentation=_hidesNavigationBarDuringPresentation - In the implementation block
@property (nonatomic,readonly) UIViewController * searchResultsController;                                                                                                                         //@synthesize searchResultsController=_searchResultsController - In the implementation block
@property (nonatomic,readonly) UISearchBar * searchBar;                                                                                                                                            //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,nonatomic) BOOL automaticallyShowsSearchResultsController; 
@property (assign,nonatomic) BOOL showsSearchResultsController; 
@property (assign,nonatomic) BOOL automaticallyShowsCancelButton; 
@property (assign,nonatomic) BOOL automaticallyShowsScopeBar; 
@property (nonatomic,copy) NSArray * searchSuggestions;                                                                                                                                            //@synthesize searchSuggestions=_searchSuggestions - In the implementation block
@property (nonatomic,retain) UIScrollView * searchControllerObservedScrollView;                                                                                                                    //@synthesize searchControllerObservedScrollView=_searchControllerObservedScrollView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_resignSearchBarAsFirstResponder:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(UISearchBar *)searchBar;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)_locatePresentingViewControllerIfInManagedPaletteOrHostedByNavigationBar;
-(id)preferredFocusEnvironments;
-(void)setActive:(BOOL)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(UIViewController *)searchResultsController;
-(double)transitionDuration:(id)arg1 ;
-(void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(double)arg2 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id<UISearchControllerDelegate>)delegate;
-(void)set_navigationItemCurrentlyDisplayingSearchController:(UINavigationItem *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)_requestedInteractionModel;
-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)_searchBarShouldFinalizeBecomingFirstResponder;
-(BOOL)isActive;
-(UINavigationItem *)_navigationItemCurrentlyDisplayingSearchController;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_preferredContentSizeDidChangeForChildViewController:(id)arg1 ;
-(NSArray *)searchHints;
-(void)_searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2 ;
-(BOOL)_delegateWantsInsertSearchFieldTextSuggestion;
-(void)_sendDelegateInsertSearchFieldTextSuggestion:(id)arg1 ;
-(void)_setTransitioningOutWithoutDisappearing:(BOOL)arg1 ;
-(void)setDelegate:(id<UISearchControllerDelegate>)arg1 ;
-(BOOL)_requiresCustomPresentationController;
-(BOOL)hidesNavigationBarDuringPresentation;
-(_UISearchControllerTVKeyboardContainerView *)_tvKeyboardContainerView;
-(void)set_topResultsViewEdgeInset:(double)arg1 ;
-(BOOL)_isGridKeyboardVisible;
-(UIView *)_suggestionContainerView;
-(void)set_suggestionContainerView:(UIView *)arg1 ;
-(BOOL)_shouldHideGridKeyboardUnfocused;
-(double)_topResultsViewEdgeInset;
-(void)_setGridKeyboardVisible:(BOOL)arg1 ;
-(void)set_systemInputMarginView:(UIView *)arg1 ;
-(void)set_resultsContentScrollViewPresentationOffset:(double)arg1 ;
-(void)set_previousSearchBarPosition:(long long)arg1 ;
-(BOOL)_searchFieldIsBeginningEditing;
-(CGSize)preferredContentSize;
-(double)_resultsContentScrollViewPresentationOffset;
-(long long)_previousSearchBarPosition;
-(BOOL)_showsSearchResultsController;
-(void)_keyboardWillShow:(id)arg1 ;
-(int)_barPresentationStyle;
-(void)_dismissPresentation:(BOOL)arg1 ;
-(BOOL)_shouldRespectPreferredContentSize;
-(id)_viewToInsertSearchBarContainerViewUnder;
-(BOOL)_searchbarWasTableHeaderView;
-(BOOL)_resultsControllerWillLayoutVisibleUnderContainerView;
-(void)_updateSearchResultsControllerWithDelta:(CGSize)arg1 ;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_observeScrollViewDidScroll:(id)arg1 ;
-(void)_updateSystemInputViewController;
-(void)setObscuresBackgroundDuringPresentation:(BOOL)arg1 ;
-(BOOL)_tvShouldScrollWithObservedScrollViewIfPossible;
-(id<UISearchResultsUpdating>)searchResultsUpdater;
-(void)_adjustSearchBarSizeForOrientation:(long long)arg1 ;
-(void)_connectSearchBar:(id)arg1 ;
-(void)_uninstallDoneGestureRecognizer;
-(void)_removeCarPlayLimitedUIObserver;
-(void)_limitedUIDidChangeAnimated:(BOOL)arg1 ;
-(id)_createAnimationCoordinator;
-(void)_createSystemInputViewControllerIfNeededForTraitEnvironment:(id)arg1 ;
-(id)_animatorForBarPresentationStyle:(int)arg1 dismissing:(BOOL)arg2 ;
-(void)_displayDefaultHelperPlaceholderMessage;
-(BOOL)showsSearchResultsController;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)_resizeResultsControllerWithDelta:(CGSize)arg1 ;
-(void)setShowsSearchResultsController:(BOOL)arg1 ;
-(void)_performAutomaticPresentationFromTextField:(BOOL)arg1 ;
-(void)_handleBackButtonGesture:(id)arg1 ;
-(BOOL)automaticallyShowsSearchResultsController;
-(void)_didDismissSearchController;
-(void)setAutomaticallyShowsSearchResultsController:(BOOL)arg1 ;
-(id)_carPlayLimitedUIToken;
-(void)_updateVisibilityOfSearchResultsForSearchBar:(id)arg1 ;
-(id)_locatePresentingViewController;
-(void)_watchScrollView:(id)arg1 forScrolling:(BOOL)arg2 ;
-(void)_sizeSearchViewToPresentingViewController:(id)arg1 ;
-(void)_setCarPlayLimitedUIToken:(id)arg1 ;
-(void)_willPresentFromViewController:(id)arg1 ;
-(void)_didPresentFromViewController:(id)arg1 ;
-(void)viewDidLoad;
-(void)_willDismissSearchController;
-(void)_setupForCurrentTraitCollection;
-(void)_installDoneGestureRecognizer;
-(void)_updateFocusFromDoneButton:(id)arg1 ;
-(id)_carPlayLimitedUIViewController;
-(void)_setCarPlayLimitedUIViewController:(id)arg1 ;
-(void)_stopManagingPalette;
-(void)_updateBarPresentationStyleForPresentingViewController:(id)arg1 ;
-(BOOL)_tabBarHidden;
-(UIView *)_leftDividerView;
-(BOOL)_allowFormSheetStylePresentation;
-(void)_beginWatchingPresentingController;
-(void)_adjustSearchBarSizeForOrientation:(long long)arg1 oldPaletteFrame:(CGRect)arg2 ;
-(id)searchTextColor;
-(id)_searchPresentationController;
-(id)focusItemContainer;
-(BOOL)_containedInNavigationPaletteAndNotHidden;
-(BOOL)obscuresBackgroundDuringPresentation;
-(UIView *)_rightDividerView;
-(id)_systemInputViewControllerAfterUpdate:(BOOL)arg1 ;
-(UICollectionView *)_suggestionView;
-(NSArray *)_scopeBarConstraints;
-(void)_updateSearchResultsContentScrollViewWithDelta:(CGSize)arg1 ;
-(void)setSearchSuggestions:(NSArray *)arg1 ;
-(void)_updateSearchResultsPositionWithDelta:(CGSize)arg1 ;
-(void)_setRequestedInteractionModel:(unsigned long long)arg1 ;
-(void)_endWatchingPresentingController;
-(BOOL)dimsBackgroundDuringPresentation;
-(void)_navigationControllerWillShowViewController:(id)arg1 ;
-(void)_startManagingPalette:(id)arg1 ;
-(UIFocusContainerGuide *)_scopeBarFocusContainerGuide;
-(void)set_scopeBarConstraints:(NSArray *)arg1 ;
-(void)setDimsBackgroundDuringPresentation:(BOOL)arg1 ;
-(void)_setShowResultsForEmptySearch:(BOOL)arg1 ;
-(BOOL)_automaticallyShowsSearchResultsController;
-(void)setSearchResultsUpdater:(id<UISearchResultsUpdating>)arg1 ;
-(UIView *)_resultsControllerViewContainer;
-(UIFocusGuide *)keyboardToSearchResultsFocusGuide;
-(void)_setAutomaticallyShowsSearchResultsController:(BOOL)arg1 ;
-(id)searchPlaceholderColor;
-(void)setKeyboardToSearchResultsFocusGuide:(UIFocusGuide *)arg1 ;
-(void)_setShowsSearchResultsController:(BOOL)arg1 ;
-(void)_setAutomaticallyShowsCancelButton:(BOOL)arg1 ;
-(BOOL)_automaticallyShowsCancelButton;
-(void)_setAutomaticallyShowsScopeBar:(BOOL)arg1 ;
-(void)_uninstallBackGestureRecognizer;
-(BOOL)_automaticallyShowsScopeBar;
-(void)set_resultsControllerViewContainer:(UIView *)arg1 ;
-(void)_tvUpdateScrollViewGradientMaskWithNavigationController;
-(void)_adjustTVSearchContainerViewForContentScrollView:(id)arg1 ;
-(NSArray *)searchSuggestions;
-(void)setHidesNavigationBarDuringPresentation:(BOOL)arg1 ;
-(void)set_tabBarHidden:(BOOL)arg1 ;
-(UIFocusGuide *)searchResultsToHiddenKeyboardFocusGuide;
-(UIScrollView *)searchControllerObservedScrollView;
-(id<UISearchResultsUpdatingPrivate>)searchResultsUpdaterPrivate;
-(void)setSearchResultsToHiddenKeyboardFocusGuide:(UIFocusGuide *)arg1 ;
-(void)setSearchControllerObservedScrollView:(UIScrollView *)arg1 ;
-(UIView *)_systemInputMarginView;
-(void)_setShouldHideGridKeyboardUnfocused:(BOOL)arg1 ;
-(BOOL)_shouldDisplayDefaultSuggestion;
-(void)_setShouldDisplayDefaultSuggestion:(BOOL)arg1 ;
-(void)setSearchHints:(NSArray *)arg1 ;
-(void)setSearchResultsUpdaterPrivate:(id<UISearchResultsUpdatingPrivate>)arg1 ;
-(BOOL)_showResultsForEmptySearch;
-(void)_installBackGestureRecognizer;
-(void)_setShouldRespectPreferredContentSize:(BOOL)arg1 ;
-(BOOL)_alwaysHidesNavigationBar;
-(void)_setAlwaysHidesNavigationBar:(BOOL)arg1 ;
-(_UINavigationControllerManagedSearchPalette *)_managedPalette;
-(BOOL)_isShowingSearchResultsControllerWhileActive;
-(void)setAutomaticallyShowsCancelButton:(BOOL)arg1 ;
-(BOOL)automaticallyShowsCancelButton;
-(void)setAutomaticallyShowsScopeBar:(BOOL)arg1 ;
-(BOOL)automaticallyShowsScopeBar;
-(void)_searchBarCancelButtonClicked:(id)arg1 ;
-(void)_searchBarTextDidBeginEditing:(id)arg1 ;
-(void)_searchBarSearchButtonClicked:(id)arg1 ;
-(void)_searchBarTokensDidChange:(id)arg1 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(UISystemInputViewController *)_systemInputViewController;
-(id)initWithCoder:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_commonInit;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)_transitioningOutWithoutDisappearing;
-(void)_updateSearchBarMaskIfNecessary;
-(void)loadView;
-(void)_searchBarSuperviewChanged;
-(id)searchTextField;
-(void)_searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(id)initWithSearchResultsController:(id)arg1 ;
-(void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_searchBarDidUpdateScopeBar:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(id)_defaultAnimationController;
-(void)viewDidLayoutSubviews;
-(void)_presentingViewControllerDidChange:(id)arg1 ;
-(void)_presentingViewControllerWillChange:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

