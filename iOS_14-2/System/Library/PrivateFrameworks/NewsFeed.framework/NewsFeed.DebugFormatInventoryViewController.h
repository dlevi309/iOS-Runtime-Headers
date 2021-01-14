/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>

@interface NewsFeed.DebugFormatInventoryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchResultsUpdating> {

	 packages;
	 sections;
	 tableView;
	 groupViewController;
	 versionLabel;
	 coverViewManager;
	 $__lazy_storage_$_uploadBarButtonItem;
	 $__lazy_storage_$_updatedLabel;
	 styler;
	 editor;

}
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)doDismiss;
-(void)doCompileUpload;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

