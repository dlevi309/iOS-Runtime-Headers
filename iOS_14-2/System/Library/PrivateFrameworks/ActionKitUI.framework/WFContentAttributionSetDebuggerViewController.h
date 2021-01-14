/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UITableViewController.h>

@class NSArray;

@interface WFContentAttributionSetDebuggerViewController : UITableViewController {

	NSArray* _contentItems;

}

@property (nonatomic,retain) NSArray * contentItems;              //@synthesize contentItems=_contentItems - In the implementation block
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(NSArray *)contentItems;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setContentItems:(NSArray *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

