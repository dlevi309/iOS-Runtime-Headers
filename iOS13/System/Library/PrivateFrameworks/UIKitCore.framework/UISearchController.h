/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKitCore/_UIScrollViewScrollObserver_Internal.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerAnimatedTransitioning, UISearchResultsUpdating, UISearchControllerDelegate;
@class UISearchBar, _UISearchControllerDidScrollDelegate, UISystemInputViewController, UITapGestureRecognizer, UIView, _UINavigationControllerManagedSearchPalette, UIViewController, UINavigationItem, NSString;

@interface UISearchController : UIViewController <_UIScrollViewScrollObserver_Internal, NSCoding, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {

	UISearchBar* _searchBar;
	int _barPresentationStyle;
	id<UIViewControllerAnimatedTransitioning> _animator;
	id _windowWillAnimateToken;
	_UISearchControllerDidScrollDelegate* _didScrollDelegate;
	UISystemInputViewController* _systemInputViewController;
	BOOL _shouldFocusResults;
	UITapGestureRecognizer* _backButtonDismissGestureRecognizer;
	UITapGestureRecognizer* _doneButtonGestureRecognizer;
	long long _lastKnownInterfaceOrientation;
	struct {
		unsigned searchBarWasTableHeaderView : 1;
		unsigned searchBarWasFirstResponder : 1;
		unsigned transitioningOut : 1;
		unsigned delegateWantsInsertSearchFieldTextSuggestion : 1;
		unsigned automaticallyShowsCancelButton : 1;
		unsigned automaticallyShowsScopeBar : 1;
		unsigned automaticallyShowsSearchResultsController : 1;
		unsigned explicitlyShowsSearchResultsController : 1;
	}  _controllerFlags;
	BOOL _obscuresBackgroundDuringPresentation;
	BOOL _hidesNavigationBarDuringPresentation;
	BOOL __tabBarHidden;
	BOOL __showResultsForEmptySearch;
	BOOL __shouldRespectPreferredContentSize;
	UIView* _resultsControllerViewContainer;
	_UINavigationControllerManagedSearchPalette* _managedPalette;
	id<UISearchResultsUpdating> _searchResultsUpdater;
	id<UISearchControllerDelegate> _delegate;
	UIViewController* _searchResultsController;
	long long __previousSearchBarPosition;
	double __resultsContentScrollViewPresentationOffset;
	UIView* __systemInputMarginView;
	UINavigationItem* __navigationItemCurrentlyDisplayingSearchController;
	unsigned long long __requestedInteractionModel;

}

@property (nonatomic,readonly) int _barPresentationStyle;                                                                                                                                          //@synthesize barPresentationStyle=_barPresentationStyle - In the implementation block
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
@property (assign,setter=_setShowResultsForEmptySearch:,nonatomic) BOOL _showResultsForEmptySearch;                                                                                                //@synthesize _showResultsForEmptySearch=__showResultsForEmptySearch - In the implementation block
@property (assign,setter=_setRequestedInteractionModel:,nonatomic) unsigned long long _requestedInteractionModel;                                                                                  //@synthesize _requestedInteractionModel=__requestedInteractionModel - In the implementation block
@property (assign,setter=_setShouldRespectPreferredContentSize:,nonatomic) BOOL _shouldRespectPreferredContentSize;                                                                                //@synthesize _shouldRespectPreferredContentSize=__shouldRespectPreferredContentSize - In the implementation block
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_resignSearchBarAsFirstResponder:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<UISearchControllerDelegate>)delegate;
-(void)setDelegate:(id<UISearchControllerDelegate>)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)_commonInit;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(id)focusItemContainer;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)_uninstallBackGestureRecognizer;
-(void)_installBackGestureRecognizer;
-(void)viewDidLayoutSubviews;
-(void)_dismissFromBackButton:(id)arg1 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(BOOL)_requiresCustomPresentationController;
-(UISearchBar *)searchBar;
-(UINavigationItem *)_navigationItemCurrentlyDisplayingSearchController;
-(void)set_navigationItemCurrentlyDisplayingSearchController:(UINavigationItem *)arg1 ;
-(BOOL)hidesNavigationBarDuringPresentation;
-(void)_updateSearchBarMaskIfNecessary;
-(void)_searchBarSuperviewChanged;
-(void)_searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)_searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2 ;
-(void)_searchBarCancelButtonClicked:(id)arg1 ;
-(void)_searchBarTextDidBeginEditing:(id)arg1 ;
-(void)_searchBarSearchButtonClicked:(id)arg1 ;
-(void)_searchBarTokensDidChange:(id)arg1 ;
-(BOOL)_delegateWantsInsertSearchFieldTextSuggestion;
-(void)_sendDelegateInsertSearchFieldTextSuggestion:(id)arg1 ;
-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)_searchBarShouldFinalizeBecomingFirstResponder;
-(void)setAutomaticallyShowsCancelButton:(BOOL)arg1 ;
-(_UINavigationControllerManagedSearchPalette *)_managedPalette;
-(BOOL)automaticallyShowsCancelButton;
-(void)setAutomaticallyShowsScopeBar:(BOOL)arg1 ;
-(BOOL)automaticallyShowsScopeBar;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_presentingViewControllerDidChange:(id)arg1 ;
-(void)_presentingViewControllerWillChange:(id)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)_observeScrollViewDidScroll:(id)arg1 ;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(void)_setTransitioningOutWithoutDisappearing:(BOOL)arg1 ;
-(BOOL)_isShowingSearchResultsControllerWhileActive;
-(UIViewController *)searchResultsController;
-(void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(double)arg2 ;
-(BOOL)_transitioningOutWithoutDisappearing;
-(void)_preferredContentSizeDidChangeForChildViewController:(id)arg1 ;
-(id)_defaultAnimationController;
-(unsigned long long)_requestedInteractionModel;
-(id)_searchPresentationController;
-(BOOL)obscuresBackgroundDuringPresentation;
-(UISystemInputViewController *)_systemInputViewController;
-(UIView *)_resultsControllerViewContainer;
-(BOOL)_tabBarHidden;
-(void)set_tabBarHidden:(BOOL)arg1 ;
-(void)set_systemInputMarginView:(UIView *)arg1 ;
-(void)set_resultsContentScrollViewPresentationOffset:(double)arg1 ;
-(void)set_previousSearchBarPosition:(long long)arg1 ;
-(double)_resultsContentScrollViewPresentationOffset;
-(long long)_previousSearchBarPosition;
-(BOOL)_showsSearchResultsController;
-(int)_barPresentationStyle;
-(BOOL)_shouldRespectPreferredContentSize;
-(BOOL)_searchbarWasTableHeaderView;
-(BOOL)_resultsControllerWillLayoutVisibleUnderContainerView;
-(void)_dismissPresentation:(BOOL)arg1 ;
-(void)_updateSearchResultsControllerWithDelta:(CGSize)arg1 ;
-(void)_updateSystemInputViewController;
-(void)setObscuresBackgroundDuringPresentation:(BOOL)arg1 ;
-(void)_connectSearchBar:(id)arg1 ;
-(void)_adjustSearchBarSizeForOrientation:(long long)arg1 ;
-(void)_uninstallDoneGestureRecognizer;
-(void)_removeCarPlayLimitedUIObserver;
-(void)_limitedUIDidChangeAnimated:(BOOL)arg1 ;
-(id)_createAnimationCoordinator;
-(void)_createSystemInputViewControllerIfNeededForTraitEnvironment:(id)arg1 ;
-(id)_animatorForBarPresentationStyle:(int)arg1 dismissing:(BOOL)arg2 ;
-(void)_resizeResultsControllerWithDelta:(CGSize)arg1 ;
-(void)_performAutomaticPresentation;
-(BOOL)automaticallyShowsSearchResultsController;
-(void)setAutomaticallyShowsSearchResultsController:(BOOL)arg1 ;
-(BOOL)showsSearchResultsController;
-(void)_updateVisibilityOfSearchResultsForSearchBar:(id)arg1 ;
-(void)setShowsSearchResultsController:(BOOL)arg1 ;
-(id)_locatePresentingViewController;
-(id<UISearchResultsUpdating>)searchResultsUpdater;
-(void)_watchScrollView:(id)arg1 forScrolling:(BOOL)arg2 ;
-(id)_locatePresentingViewControllerIfInManagedPaletteOrHostedByNavigationBar;
-(void)_sizeSearchViewToPresentingViewController:(id)arg1 ;
-(void)_willPresentFromViewController:(id)arg1 ;
-(void)_didPresentFromViewController:(id)arg1 ;
-(void)_willDismissSearchController;
-(void)_didDismissSearchController;
-(void)_setupForCurrentTraitCollection;
-(void)_installDoneGestureRecognizer;
-(id)_carPlayLimitedUIToken;
-(void)_setCarPlayLimitedUIToken:(id)arg1 ;
-(void)_updateFocusFromDoneButton:(id)arg1 ;
-(id)_carPlayLimitedUIViewController;
-(void)_setCarPlayLimitedUIViewController:(id)arg1 ;
-(void)_updateBarPresentationStyleForPresentingViewController:(id)arg1 ;
-(BOOL)_allowFormSheetStylePresentation;
-(void)_adjustSearchBarSizeForOrientation:(long long)arg1 oldPaletteFrame:(CGRect)arg2 ;
-(BOOL)_containedInNavigationPaletteAndNotHidden;
-(void)_updateSearchResultsContentScrollViewWithDelta:(CGSize)arg1 ;
-(void)_updateSearchResultsPositionWithDelta:(CGSize)arg1 ;
-(void)_beginWatchingPresentingController;
-(void)_endWatchingPresentingController;
-(void)_navigationControllerWillShowViewController:(id)arg1 ;
-(id)initWithSearchResultsController:(id)arg1 ;
-(BOOL)dimsBackgroundDuringPresentation;
-(void)setDimsBackgroundDuringPresentation:(BOOL)arg1 ;
-(void)_setRequestedInteractionModel:(unsigned long long)arg1 ;
-(BOOL)_automaticallyShowsSearchResultsController;
-(void)_setAutomaticallyShowsSearchResultsController:(BOOL)arg1 ;
-(void)_setShowResultsForEmptySearch:(BOOL)arg1 ;
-(void)_setShowsSearchResultsController:(BOOL)arg1 ;
-(void)_setAutomaticallyShowsCancelButton:(BOOL)arg1 ;
-(BOOL)_automaticallyShowsCancelButton;
-(void)_setAutomaticallyShowsScopeBar:(BOOL)arg1 ;
-(BOOL)_automaticallyShowsScopeBar;
-(void)_startManagingPalette:(id)arg1 ;
-(void)_stopManagingPalette;
-(void)set_resultsControllerViewContainer:(UIView *)arg1 ;
-(void)setSearchResultsUpdater:(id<UISearchResultsUpdating>)arg1 ;
-(void)setHidesNavigationBarDuringPresentation:(BOOL)arg1 ;
-(UIView *)_systemInputMarginView;
-(BOOL)_showResultsForEmptySearch;
-(void)_setShouldRespectPreferredContentSize:(BOOL)arg1 ;
@end

