/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/CKAppManagerAppTableViewCellDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol CKAppManagerViewControllerDelegate;
@class UITableView, UIBarButtonItem, NSArray, UISearchController, CKAppSearchResultsTableViewController, NSString;

@interface CKAppManagerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CKAppManagerAppTableViewCellDelegate, UISearchControllerDelegate, UISearchBarDelegate> {

	UITableView* _tableView;
	UIBarButtonItem* _dismissButton;
	id<CKAppManagerViewControllerDelegate> _delegate;
	NSArray* _favoritePlugins;
	NSArray* _plugins;
	UISearchController* _searchController;
	CKAppSearchResultsTableViewController* _searchResultsController;

}

@property (assign,nonatomic,__weak) id<CKAppManagerViewControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * favoritePlugins;                                                    //@synthesize favoritePlugins=_favoritePlugins - In the implementation block
@property (nonatomic,retain) NSArray * plugins;                                                            //@synthesize plugins=_plugins - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                                        //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) CKAppSearchResultsTableViewController * searchResultsController;              //@synthesize searchResultsController=_searchResultsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)plugins;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)setSearchController:(UISearchController *)arg1 ;
-(UISearchController *)searchController;
-(CKAppSearchResultsTableViewController *)searchResultsController;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)setSearchResultsController:(CKAppSearchResultsTableViewController *)arg1 ;
-(id<CKAppManagerViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)setDelegate:(id<CKAppManagerViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)updateEditDoneButton;
-(NSArray *)favoritePlugins;
-(id)balloonPluginManager;
-(BOOL)allowEnablingDisabledApps;
-(void)setFavoritePlugins:(NSArray *)arg1 ;
-(void)reloadPluginsImmediately;
-(BOOL)togglePluginAtIndex:(unsigned long long)arg1 enabled:(BOOL)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)appCell:(id)arg1 wasToggledOn:(BOOL)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 ;
-(void)setPlugins:(NSArray *)arg1 ;
-(void)viewDidLayoutSubviews;
@end

