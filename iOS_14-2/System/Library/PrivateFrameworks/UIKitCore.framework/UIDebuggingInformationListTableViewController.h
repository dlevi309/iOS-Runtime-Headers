/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UIDebuggingInformationViewController.h>

@class NSMutableArray;

@interface UIDebuggingInformationListTableViewController : UITableViewController <UIDebuggingInformationViewController> {

	NSMutableArray* topLevelViewControllers;
	NSMutableArray* topLevelViewControllerNames;

}
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)toggleOverlayFullscreen;
-(void)toggleOverlayVisibility;
-(void)addTopLevelViewController:(id)arg1 forName:(id)arg2 ;
-(id)topLevelViewControllerForName:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

