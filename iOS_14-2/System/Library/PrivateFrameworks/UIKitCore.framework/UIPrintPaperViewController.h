/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewController.h>

@class UIPrintPanelViewController;

@interface UIPrintPaperViewController : UITableViewController {

	UIPrintPanelViewController* _printPanelViewController;

}
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)initWithPrintPanelViewController:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)updateScaleUp:(id)arg1 ;
-(void)adjustPopoverSize;
@end

