/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKSectionTableViewController.h>

@class PKAccount, PKAccountService, PKInstallmentPlan, PKTransactionSource, PKPaymentTransactionDetailAmountLineItemGenerator, NSArray, PKPaymentTransactionDetailHeaderView;

@interface PKInstallmentPlanDetailsViewController : PKSectionTableViewController {

	PKAccount* _account;
	PKAccountService* _accountService;
	PKInstallmentPlan* _installmentPlan;
	PKTransactionSource* _transactionSource;
	PKPaymentTransactionDetailAmountLineItemGenerator* _lineItemGenerator;
	NSArray* _lineItems;
	PKPaymentTransactionDetailHeaderView* _headerView;

}
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillLayoutSubviews;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)_updateHeaderHeight;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)_detailsCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(id)_progressCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithAccount:(id)arg1 installmentPlan:(id)arg2 accountService:(id)arg3 transactionSource:(id)arg4 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

