/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UIDebuggingInformationViewController.h>

@class NSMutableArray;

@interface UIDebuggingInformationListTableViewController : UITableViewController <UIDebuggingInformationViewController> {

	NSMutableArray* topLevelViewControllers;
	NSMutableArray* topLevelViewControllerNames;

}
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)toggleOverlayFullscreen;
-(void)toggleOverlayVisibility;
-(void)addTopLevelViewController:(id)arg1 forName:(id)arg2 ;
-(id)topLevelViewControllerForName:(id)arg1 ;
@end

