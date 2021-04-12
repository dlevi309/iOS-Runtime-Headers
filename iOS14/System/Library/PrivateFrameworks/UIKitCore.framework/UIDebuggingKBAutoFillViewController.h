/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)autoFillTestGroundTruthGenerationViewController:(id)arg1 didFinishWithResult:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)_getTopMostViewControllerInWindow:(id)arg1 ;
-(id)_formTypeFileName:(long long)arg1 ;
-(void)_archiveTopMostViewControllerForAutoFillTest;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

