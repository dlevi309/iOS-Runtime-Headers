/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPaymentSetupProduct, PKLinkedApplication, PKTableHeaderView;

@interface PKPaymentSetupAppRequiredViewController : PKPaymentSetupTableViewController {

	PKPaymentSetupProduct* _product;
	PKLinkedApplication* _linkedApplication;
	PKTableHeaderView* _headerView;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	BOOL _isBridge;
	BOOL _isBuddy;

}
-(id)_subtitle;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_doneButtonTapped:(id)arg1 ;
-(id)initWithSetupContext:(long long)arg1 setupDelegate:(id)arg2 product:(id)arg3 linkedApplication:(id)arg4 ;
@end

