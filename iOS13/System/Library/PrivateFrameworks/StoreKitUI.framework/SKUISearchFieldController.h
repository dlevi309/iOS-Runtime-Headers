/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUISearchControllerDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/SKUITrendingSearchPageViewDelegate.h>

@protocol SKUISearchFieldDelegate;
@class SKUICompletionList, SSVLoadURLOperation, NSOperationQueue, UITableViewController, SKUISearchController, UIViewController, SKUIClientContext, NSString, UISearchBar;

@interface SKUISearchFieldController : NSObject <SKUISearchControllerDelegate, UISearchResultsUpdating, UIPopoverPresentationControllerDelegate, UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, SKUITrendingSearchPageViewDelegate> {

	SKUICompletionList* _completionList;
	SSVLoadURLOperation* _loadOperation;
	NSOperationQueue* _operationQueue;
	UITableViewController* _searchResultsController;
	SKUISearchController* _searchController;
	SCD_Struct_SK31 _delegateRespondsTo;
	UIViewController* _contentsController;
	SKUIClientContext* _clientContext;
	id<SKUISearchFieldDelegate> _delegate;
	NSString* _searchBarAccessoryText;
	NSString* _searchHintsURLString;
	NSString* _trendingSearchURLString;
	long long _numberOfSearchResults;

}

@property (nonatomic,__weak,readonly) UIViewController * contentsController;              //@synthesize contentsController=_contentsController - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                           //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISearchFieldDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UISearchBar * searchBar; 
@property (nonatomic,copy) NSString * searchBarAccessoryText;                             //@synthesize searchBarAccessoryText=_searchBarAccessoryText - In the implementation block
@property (nonatomic,copy) NSString * searchHintsURLString;                               //@synthesize searchHintsURLString=_searchHintsURLString - In the implementation block
@property (assign,nonatomic) BOOL displaysSearchBarInNavigationBar; 
@property (assign,nonatomic) BOOL showsResultsForEmptyField; 
@property (nonatomic,copy) NSString * trendingSearchURLString;                            //@synthesize trendingSearchURLString=_trendingSearchURLString - In the implementation block
@property (assign,nonatomic) long long numberOfSearchResults;                             //@synthesize numberOfSearchResults=_numberOfSearchResults - In the implementation block
@property (nonatomic,readonly) BOOL canBecomeActive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SKUISearchFieldDelegate>)delegate;
-(void)setDelegate:(id<SKUISearchFieldDelegate>)arg1 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(UISearchBar *)searchBar;
-(BOOL)displaysSearchBarInNavigationBar;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(BOOL)searchBarShouldClear:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_reloadData;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setDisplaysSearchBarInNavigationBar:(BOOL)arg1 ;
-(void)willPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)presentSearchController:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)setSearchTerm:(id)arg1 ;
-(void)becomeActive;
-(NSString *)searchHintsURLString;
-(NSString *)trendingSearchURLString;
-(void)trendingSearchPageView:(id)arg1 didSelectSearch:(id)arg2 ;
-(void)resignActive:(BOOL)arg1 ;
-(void)setShowsResultsForEmptyField:(BOOL)arg1 ;
-(BOOL)canBecomeActive;
-(id)URLForTrendingSearchPageView:(id)arg1 ;
-(void)setNumberOfSearchResults:(long long)arg1 ;
-(id)initWithContentsController:(id)arg1 clientContext:(id)arg2 ;
-(BOOL)_presentsInPopover:(id)arg1 ;
-(void)_reloadTrendingVisibility;
-(void)_loadResultsForSearchRequest:(id)arg1 ;
-(void)_adjustInsetsForResultsTableView:(id)arg1 ;
-(UIViewController *)contentsController;
-(void)_setResponse:(id)arg1 error:(id)arg2 ;
-(void)setSearchHintsURLString:(NSString *)arg1 ;
-(void)searchControllerWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)searchControllerClientContext:(id)arg1 ;
-(id)initWithContentsController:(id)arg1 ;
-(void)setSearchBarAccessoryText:(NSString *)arg1 ;
-(BOOL)showsResultsForEmptyField;
-(NSString *)searchBarAccessoryText;
-(void)setTrendingSearchURLString:(NSString *)arg1 ;
-(long long)numberOfSearchResults;
@end

