/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerResultsViewControllerDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerSuggestionsViewControllerDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerSearchResultsViewControllerDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerStateRepresentable.h>
#import <libobjc.A.dylib/WFActionDrawerStateConfigurable.h>
#import <libobjc.A.dylib/WFDragControllerDelegate.h>

@protocol WFActionDrawerViewControllerDelegate, WFActionDrawerResultsControlling, NSObject;
@class WFActionDrawerSearchResultsViewController, WFActionDrawerResultsController, WFActionDrawerResults, NSSet, UISearchBar, UIView, WFActionDrawerSiriSuggestionsViewController, WFDragController, NSString, WFActionDrawerState;

@interface WFActionDrawerViewController : UIViewController <UISearchBarDelegate, WFActionDrawerResultsViewControllerDelegate, WFActionDrawerSuggestionsViewControllerDelegate, WFActionDrawerSearchResultsViewControllerDelegate, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable, WFDragControllerDelegate> {

	BOOL _scrollsToTop;
	BOOL _requiresOpaqueBackground;
	WFActionDrawerSearchResultsViewController* _searchResultsViewController;
	WFActionDrawerResultsController* _actionDrawerResultsController;
	id<WFActionDrawerViewControllerDelegate> _delegate;
	WFActionDrawerResults* _siriSuggestionResults;
	NSSet* _siriSuggestionBundleIdentifiers;
	double _bottomContentInset;
	UISearchBar* _searchBar;
	UIView* _separatorView;
	long long _activePane;
	WFActionDrawerSiriSuggestionsViewController* _siriSuggestionsViewController;
	WFActionDrawerResults* _workflowSuggestionResults;
	WFDragController* _currentDragController;
	id<WFActionDrawerResultsControlling> _actionDrawerResultsControllingDelegate;
	id<NSObject> _actionRegistryFilledNotificationObserver;

}

@property (assign,nonatomic,__weak) UISearchBar * searchBar;                                                             //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,nonatomic,__weak) UIView * separatorView;                                                              //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,readonly) long long activePane;                                                                     //@synthesize activePane=_activePane - In the implementation block
@property (nonatomic,readonly) WFActionDrawerSiriSuggestionsViewController * siriSuggestionsViewController;              //@synthesize siriSuggestionsViewController=_siriSuggestionsViewController - In the implementation block
@property (nonatomic,readonly) WFActionDrawerSearchResultsViewController * searchResultsViewController;                  //@synthesize searchResultsViewController=_searchResultsViewController - In the implementation block
@property (nonatomic,retain) WFActionDrawerResults * workflowSuggestionResults;                                          //@synthesize workflowSuggestionResults=_workflowSuggestionResults - In the implementation block
@property (nonatomic,retain) WFDragController * currentDragController;                                                   //@synthesize currentDragController=_currentDragController - In the implementation block
@property (nonatomic,retain) id<WFActionDrawerResultsControlling> actionDrawerResultsControllingDelegate;                //@synthesize actionDrawerResultsControllingDelegate=_actionDrawerResultsControllingDelegate - In the implementation block
@property (nonatomic,retain) id<NSObject> actionRegistryFilledNotificationObserver;                                      //@synthesize actionRegistryFilledNotificationObserver=_actionRegistryFilledNotificationObserver - In the implementation block
@property (nonatomic,readonly) WFActionDrawerResultsController * actionDrawerResultsController;                          //@synthesize actionDrawerResultsController=_actionDrawerResultsController - In the implementation block
@property (assign,nonatomic,__weak) id<WFActionDrawerViewControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WFActionDrawerResults * siriSuggestionResults;                                              //@synthesize siriSuggestionResults=_siriSuggestionResults - In the implementation block
@property (nonatomic,copy) NSSet * siriSuggestionBundleIdentifiers;                                                      //@synthesize siriSuggestionBundleIdentifiers=_siriSuggestionBundleIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL scrollsToTop;                                                                          //@synthesize scrollsToTop=_scrollsToTop - In the implementation block
@property (assign,nonatomic) BOOL requiresOpaqueBackground;                                                              //@synthesize requiresOpaqueBackground=_requiresOpaqueBackground - In the implementation block
@property (assign,nonatomic) double bottomContentInset;                                                                  //@synthesize bottomContentInset=_bottomContentInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WFActionDrawerState * state; 
-(void)dealloc;
-(id<WFActionDrawerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFActionDrawerViewControllerDelegate>)arg1 ;
-(WFActionDrawerState *)state;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIView *)separatorView;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UISearchBar *)searchBar;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(id)searchField;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(id)searchText;
-(void)setSeparatorView:(UIView *)arg1 ;
-(void)setScrollsToTop:(BOOL)arg1 ;
-(BOOL)scrollsToTop;
-(void)updateBackgroundColor;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(void)startSearching;
-(void)setBottomContentInset:(double)arg1 ;
-(double)bottomContentInset;
-(void)resetSearch;
-(BOOL)moveToState:(id)arg1 animated:(BOOL)arg2 ;
-(WFActionDrawerResultsController *)actionDrawerResultsController;
-(id<NSObject>)actionRegistryFilledNotificationObserver;
-(void)setActionRegistryFilledNotificationObserver:(id<NSObject>)arg1 ;
-(void)dragController:(id)arg1 didEnterViewController:(id)arg2 ;
-(void)searchResultsViewController:(id)arg1 didSelectAction:(id)arg2 ;
-(void)searchResultsViewController:(id)arg1 didSelectDocumentationForAction:(id)arg2 fromView:(id)arg3 ;
-(void)searchResultsViewController:(id)arg1 didSelectAppWithBundleIdentifier:(id)arg2 ;
-(void)suggestionsViewController:(id)arg1 didSelectDocumentationForAction:(id)arg2 fromView:(id)arg3 ;
-(void)suggestionsViewController:(id)arg1 didSelectAction:(id)arg2 ;
-(void)suggestionsViewControllerDidSelectCategoryApps:(id)arg1 title:(id)arg2 ;
-(void)suggestionsViewControllerDidSelectCategoryFavorites:(id)arg1 title:(id)arg2 ;
-(void)suggestionsViewControllerViewControllerDidSelectCategoryScripting:(id)arg1 title:(id)arg2 ;
-(void)suggestionsViewController:(id)arg1 didSelectCategoryForContentType:(id)arg2 title:(id)arg3 ;
-(void)resultsViewController:(id)arg1 didSelectAction:(id)arg2 ;
-(void)resultsViewController:(id)arg1 didSelectDocumentationForAction:(id)arg2 fromView:(id)arg3 ;
-(id)initWithActionRegistry:(id)arg1 home:(id)arg2 ;
-(void)transitionToChildViewController:(id)arg1 ;
-(void)setSiriSuggestionResults:(WFActionDrawerResults *)arg1 ;
-(void)setRequiresOpaqueBackground:(BOOL)arg1 ;
-(void)populateSuggestionsUsingWorkflow:(id)arg1 ;
-(void)updateForActionAdded;
-(void)updateAdditionalSafeAreaInsets;
-(void)subscribeForActionRegistryFilledNotifications;
-(void)updateContentForSearchBar;
-(void)updateContentForSearchBarSkippingTransition:(BOOL)arg1 ;
-(WFActionDrawerSearchResultsViewController *)searchResultsViewController;
-(WFActionDrawerResults *)siriSuggestionResults;
-(NSSet *)siriSuggestionBundleIdentifiers;
-(void)setSiriSuggestionBundleIdentifiers:(NSSet *)arg1 ;
-(BOOL)requiresOpaqueBackground;
-(long long)activePane;
-(WFActionDrawerSiriSuggestionsViewController *)siriSuggestionsViewController;
-(WFActionDrawerResults *)workflowSuggestionResults;
-(void)setWorkflowSuggestionResults:(WFActionDrawerResults *)arg1 ;
-(WFDragController *)currentDragController;
-(void)setCurrentDragController:(WFDragController *)arg1 ;
-(id<WFActionDrawerResultsControlling>)actionDrawerResultsControllingDelegate;
-(void)setActionDrawerResultsControllingDelegate:(id<WFActionDrawerResultsControlling>)arg1 ;
@end

