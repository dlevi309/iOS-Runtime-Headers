/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)initWithSetupContext:(long long)arg1 setupDelegate:(id)arg2 product:(id)arg3 linkedApplication:(id)arg4 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)_subtitle;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)_doneButtonTapped:(id)arg1 ;
@end

