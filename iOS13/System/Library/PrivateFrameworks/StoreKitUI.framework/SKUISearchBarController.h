/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUISearchFieldDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@class SKUIFocusedTouchGestureRecognizer, SKUIClientContext, UIViewController, UISearchBar, SKUISearchFieldController, SKUISearchBarViewElement, NSString;

@interface SKUISearchBarController : NSObject <SKUISearchFieldDelegate, UISearchBarDelegate> {

	SKUIFocusedTouchGestureRecognizer* _cancelTouchGestureRecognizer;
	SKUIClientContext* _clientContext;
	BOOL _displaysSearchBarInNavigationBar;
	UIViewController* _parentViewController;
	UISearchBar* _searchBar;
	SKUISearchFieldController* _searchFieldController;
	BOOL _showsResultsForEmptyField;
	BOOL _usesSearchFieldController;
	SKUISearchBarViewElement* _viewElement;

}

@property (nonatomic,retain) SKUISearchBarViewElement * searchBarViewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                            //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) BOOL displaysSearchBarInNavigationBar;                        //@synthesize displaysSearchBarInNavigationBar=_displaysSearchBarInNavigationBar - In the implementation block
@property (assign,nonatomic) BOOL showsResultsForEmptyField;                               //@synthesize showsResultsForEmptyField=_showsResultsForEmptyField - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentViewController;               //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,readonly) UISearchBar * searchBar; 
@property (nonatomic,readonly) BOOL canBecomeActive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UIViewController *)parentViewController;
-(UISearchBar *)searchBar;
-(BOOL)displaysSearchBarInNavigationBar;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)setDisplaysSearchBarInNavigationBar:(BOOL)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)becomeActive;
-(void)reloadAfterDocumentUpdate;
-(id)initWithSearchBarViewElement:(id)arg1 ;
-(void)setSearchBarViewElement:(SKUISearchBarViewElement *)arg1 ;
-(void)resignActive:(BOOL)arg1 ;
-(void)setShowsResultsForEmptyField:(BOOL)arg1 ;
-(BOOL)canBecomeActive;
-(id)_searchFieldController;
-(void)searchFieldController:(id)arg1 requestSearch:(id)arg2 ;
-(void)searchFieldController:(id)arg1 searchBarDidChangeText:(id)arg2 ;
-(BOOL)showsResultsForEmptyField;
-(void)_cancelGestureAction:(id)arg1 ;
-(void)_customizeSearchFieldController:(id)arg1 ;
-(void)_customizeSearchBar:(id)arg1 ;
-(id)_newSearchFieldController;
-(void)_dispatchSubmitEventWithText:(id)arg1 URL:(id)arg2 searchHintOriginalTerm:(id)arg3 searchHintIndex:(id)arg4 ;
-(void)_dispatchChangeEventWithText:(id)arg1 ;
-(void)_removeCancelTouchGestureRecognizer;
-(SKUISearchBarViewElement *)searchBarViewElement;
@end

