/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UITableViewController.h>

@class NSArray;

@interface WFContentSourceDebuggerViewController : UITableViewController {

	NSArray* _contentItems;

}

@property (nonatomic,retain) NSArray * contentItems;              //@synthesize contentItems=_contentItems - In the implementation block
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setContentItems:(NSArray *)arg1 ;
-(NSArray *)contentItems;
@end

