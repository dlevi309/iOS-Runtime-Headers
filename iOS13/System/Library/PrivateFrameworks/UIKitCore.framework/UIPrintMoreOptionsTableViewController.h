/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewController.h>

@class UIPrintPanelViewController;

@interface UIPrintMoreOptionsTableViewController : UITableViewController {

	UIPrintPanelViewController* _printPanelViewController;
	long long _stapleRow;

}
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)updateStaple:(id)arg1 ;
-(id)initWithPrintPanelViewController:(id)arg1 ;
-(void)showCancelButton;
@end

