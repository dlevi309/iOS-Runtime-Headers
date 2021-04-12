/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewController.h>

@class UIPrintPanelViewController;

@interface UIPrintPaperViewController : UITableViewController {

	UIPrintPanelViewController* _printPanelViewController;

}
-(void)loadView;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)initWithPrintPanelViewController:(id)arg1 ;
-(void)adjustPopoverSize;
-(void)updateScaleUp:(id)arg1 ;
@end

