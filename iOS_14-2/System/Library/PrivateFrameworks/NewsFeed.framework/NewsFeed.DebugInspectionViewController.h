/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@interface NewsFeed.DebugInspectionViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	 inspector;
	 feedItem;
	 commandCenter;
	 tableView;
	 sections;

}
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)doDismiss;
-(void)doTapToRadar;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

