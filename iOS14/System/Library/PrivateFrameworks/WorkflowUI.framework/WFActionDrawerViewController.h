/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/WFDragControllerDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerStateRepresentable.h>
#import <libobjc.A.dylib/WFActionDrawerStateConfigurable.h>

@protocol WFActionDrawerResultsControlling, NSObject;
@class WFActionDrawerSearchResultsViewController, WFActionDrawerCoordinator, WFActionDrawerSiriSuggestionsViewController, WFActionDrawerResults, NSSet, UISearchBar, UIView, WFDragController, NSString, WFActionDrawerState;

@interface WFActionDrawerViewController : UIViewController <UISearchBarDelegate, WFDragControllerDelegate, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable> {

	BOOL _scrollsToTop;
	BOOL _requiresOpaqueBackground;
	WFActionDrawerSearchResultsViewController* _searchResultsViewController;
	WFActionDrawerCoordinator* _coordinator;
	WFActionDrawerSiriSuggestionsViewController* _siriSuggestionsViewController;
	WFActionDrawerResults* _siriSuggestionResults;
	NSSet* _siriSuggestionBundleIdentifiers;
	double _bottomContentInset;
	UISearchBar* _searchBar;
	UIView* _separatorView;
	long long _activePane;
	WFActionDrawerResults* _workflowSuggestionResults;
	WFDragController* _currentDragController;
	id<WFActionDrawerResultsControlling> _actionDrawerResultsControllingDelegate;
	id<NSObject> _actionRegistryFilledNotificationObserver;

}

@property (assign,nonatomic,__weak) UISearchBar * searchBar;                                                             //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,nonatomic,__weak) UIView * separatorView;                                                              //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,readonly) long long activePane;                                                                     //@synthesize activePane=_activePane - In the implementation block
@property (nonatomic,retain) WFActionDrawerResults * workflowSuggestionResults;                                          //@synthesize workflowSuggestionResults=_workflowSuggestionResults - In the implementation block
@property (nonatomic,retain) WFDragController * currentDragController;                                                   //@synthesize currentDragController=_currentDragController - In the implementation block
@property (nonatomic,retain) id<WFActionDrawerResultsControlling> actionDrawerResultsControllingDelegate;                //@synthesize actionDrawerResultsControllingDelegate=_actionDrawerResultsControllingDelegate - In the implementation block
@property (nonatomic,retain) id<NSObject> actionRegistryFilledNotificationObserver;                                      //@synthesize actionRegistryFilledNotificationObserver=_actionRegistryFilledNotificationObserver - In the implementation block
@property (nonatomic,__weak,readonly) WFActionDrawerCoordinator * coordinator;                                           //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,readonly) WFActionDrawerSiriSuggestionsViewController * siriSuggestionsViewController;              //@synthesize siriSuggestionsViewController=_siriSuggestionsViewController - In the implementation block
@property (nonatomic,readonly) WFActionDrawerSearchResultsViewController * searchResultsViewController;                  //@synthesize searchResultsViewController=_searchResultsViewController - In the implementation block
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(UISearchBar *)searchBar;
-(void)viewWillLayoutSubviews;
-(double)bottomContentInset;
-(void)startSearching;
-(UIView *)separatorView;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)setScrollsToTop:(BOOL)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(BOOL)scrollsToTop;
-(id)searchField;
-(void)setBottomContentInset:(double)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithCoordinator:(id)arg1 ;
-(id)searchText;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(void)updateBackgroundColor;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(WFActionDrawerState *)state;
-(void)loadView;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)dealloc;
-(void)setSeparatorView:(UIView *)arg1 ;
-(WFActionDrawerCoordinator *)coordinator;
-(void)resetSearch;
-(long long)activePane;
-(void)dragController:(id)arg1 didEnterViewController:(id)arg2 ;
-(BOOL)moveToState:(id)arg1 animated:(BOOL)arg2 ;
-(id<NSObject>)actionRegistryFilledNotificationObserver;
-(void)setActionRegistryFilledNotificationObserver:(id<NSObject>)arg1 ;
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
-(WFActionDrawerSiriSuggestionsViewController *)siriSuggestionsViewController;
-(WFActionDrawerResults *)siriSuggestionResults;
-(NSSet *)siriSuggestionBundleIdentifiers;
-(void)setSiriSuggestionBundleIdentifiers:(NSSet *)arg1 ;
-(BOOL)requiresOpaqueBackground;
-(WFActionDrawerResults *)workflowSuggestionResults;
-(void)setWorkflowSuggestionResults:(WFActionDrawerResults *)arg1 ;
-(WFDragController *)currentDragController;
-(void)setCurrentDragController:(WFDragController *)arg1 ;
-(id<WFActionDrawerResultsControlling>)actionDrawerResultsControllingDelegate;
-(void)setActionDrawerResultsControllingDelegate:(id<WFActionDrawerResultsControlling>)arg1 ;
@end

