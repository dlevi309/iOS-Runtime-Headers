/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITableViewController.h>

@class UIBarButtonItemGroup;

@interface UIExpandedBarItemsTableViewController : UITableViewController {

	UIBarButtonItemGroup* _barButtonGroup;

}

@property (nonatomic,readonly) UIBarButtonItemGroup * barButtonGroup;              //@synthesize barButtonGroup=_barButtonGroup - In the implementation block
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithBarButtonGroup:(id)arg1 ;
-(UIBarButtonItemGroup *)barButtonGroup;
-(id)_visibleItems;
-(unsigned long long)_numberOfItems;
-(id)_displayTitleForBarButtonItem:(id)arg1 ;
@end

