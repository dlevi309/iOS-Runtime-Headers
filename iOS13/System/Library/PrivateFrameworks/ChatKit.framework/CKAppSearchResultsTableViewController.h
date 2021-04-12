/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchResultsUpdating.h>

@protocol CKBrowserAppManagerViewControllerDelegate;
@class NSArray, NSString;

@interface CKAppSearchResultsTableViewController : UITableViewController <UISearchResultsUpdating> {

	NSArray* _allPlugins;
	id<CKBrowserAppManagerViewControllerDelegate> _delegate;
	NSArray* _searchResults;

}

@property (nonatomic,retain) NSArray * searchResults;                                                    //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,retain) NSArray * allPlugins;                                                       //@synthesize allPlugins=_allPlugins - In the implementation block
@property (assign,nonatomic,__weak) id<CKBrowserAppManagerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CKBrowserAppManagerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CKBrowserAppManagerViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)setSearchResults:(NSArray *)arg1 ;
-(NSArray *)searchResults;
-(void)searchEnded;
-(NSArray *)allPlugins;
-(void)setAllPlugins:(NSArray *)arg1 ;
@end

