/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <UIKitCore/UITableViewController.h>

@class NSMutableArray, TSADebugViewController;

@interface TSADebugTableViewController : UITableViewController {

	NSMutableArray* _debugItems;
	TSADebugViewController* _parent;

}
-(id)init;
-(void)dealloc;
-(id)initWithParent:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)addItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)hideImmediately;
@end

