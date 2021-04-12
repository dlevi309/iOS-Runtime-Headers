/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKSectionTableViewController.h>

@class PKAccount, PKAccountService, PKInstallmentPlan, PKPaymentPass, PKPaymentTransactionDetailAmountLineItemGenerator, NSArray, PKPaymentTransactionDetailHeaderView;

@interface PKInstallmentPlanDetailsViewController : PKSectionTableViewController {

	PKAccount* _account;
	PKAccountService* _accountService;
	PKInstallmentPlan* _installmentPlan;
	PKPaymentPass* _paymentPass;
	PKPaymentTransactionDetailAmountLineItemGenerator* _lineItemGenerator;
	NSArray* _lineItems;
	PKPaymentTransactionDetailHeaderView* _headerView;

}
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)initWithAccount:(id)arg1 installmentPlan:(id)arg2 accountService:(id)arg3 paymentPass:(id)arg4 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(void)_updateHeaderHeight;
-(id)_detailsCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_progressCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
@end

