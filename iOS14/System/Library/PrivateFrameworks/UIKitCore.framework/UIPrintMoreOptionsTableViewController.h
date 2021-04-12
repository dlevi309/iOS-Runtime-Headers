/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewController.h>

@class UIPrintPanelViewController;

@interface UIPrintMoreOptionsTableViewController : UITableViewController {

	UIPrintPanelViewController* _printPanelViewController;
	long long _stapleRow;

}
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)updateStaple:(id)arg1 ;
-(id)initWithPrintPanelViewController:(id)arg1 ;
-(void)showCancelButton;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

