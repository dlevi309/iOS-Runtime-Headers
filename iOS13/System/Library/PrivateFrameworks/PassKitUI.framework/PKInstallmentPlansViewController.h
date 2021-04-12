/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol PKPaymentDataProvider;
@class PKAccount, PKAccountService, PKPaymentPass, NSArray, NSMutableDictionary, NSDateFormatter;

@interface PKInstallmentPlansViewController : UITableViewController {

	PKAccount* _account;
	PKAccountService* _accountService;
	PKPaymentPass* _paymentPass;
	id<PKPaymentDataProvider> _dataProvider;
	NSArray* _installmentPlans;
	NSMutableDictionary* _installmentPlanToDeviceName;
	NSDateFormatter* _installmentDateFormatter;

}
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_updateInstallmentPlans;
-(void)_handleAccountUpdatedNotification:(id)arg1 ;
-(id)_installmentPlanForIndexPath:(id)arg1 ;
-(void)_configureCell:(id)arg1 forInstallmentPlan:(id)arg2 ;
-(id)initWithAccount:(id)arg1 accountService:(id)arg2 paymentPass:(id)arg3 dataProvider:(id)arg4 ;
-(id)_totalAmountPaid;
-(id)_totalAmountRemaining;
@end

