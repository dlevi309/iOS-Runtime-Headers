/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate.h>
#import <UIKit/UIDebuggingInformationViewController.h>

@class UITableView, NSString;

@interface UIDebuggingKBAutoFillViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate, UIDebuggingInformationViewController> {

	UITableView* _tableView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)autoFillTestGroundTruthGenerationViewController:(id)arg1 didFinishWithResult:(id)arg2 ;
-(id)_getTopMostViewControllerInWindow:(id)arg1 ;
-(id)_formTypeFileName:(long long)arg1 ;
-(void)_archiveTopMostViewControllerForAutoFillTest;
@end

