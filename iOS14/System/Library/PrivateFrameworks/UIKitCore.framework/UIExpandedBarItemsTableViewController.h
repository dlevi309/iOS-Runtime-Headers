/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITableViewController.h>

@class UIBarButtonItemGroup;

@interface UIExpandedBarItemsTableViewController : UITableViewController {

	UIBarButtonItemGroup* _barButtonGroup;

}

@property (nonatomic,readonly) UIBarButtonItemGroup * barButtonGroup;              //@synthesize barButtonGroup=_barButtonGroup - In the implementation block
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(id)initWithBarButtonGroup:(id)arg1 ;
-(id)_visibleItems;
-(UIBarButtonItemGroup *)barButtonGroup;
-(id)_displayTitleForBarButtonItem:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(unsigned long long)_numberOfItems;
@end

