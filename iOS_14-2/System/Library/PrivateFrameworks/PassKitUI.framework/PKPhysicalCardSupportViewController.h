/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITableViewController.h>

@class PKAccountService, PKAccount, PKPaymentPass, PKPhysicalCard, PKTableHeaderView, UIBarButtonItem, PKBusinessChatController;

@interface PKPhysicalCardSupportViewController : UITableViewController {

	PKAccountService* _accountService;
	PKAccount* _account;
	PKPaymentPass* _paymentPass;
	PKPhysicalCard* _physicalCard;
	PKTableHeaderView* _tableHeaderView;
	UIBarButtonItem* _nextButton;
	PKBusinessChatController* _businessChatController;
	BOOL _hasSelectedReason;
	long long _selectedReason;

}
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_nextButtonTapped:(id)arg1 ;
-(void)_presentManualActivation;
-(void)_presentBusinessChatWithContext:(id)arg1 ;
-(id)initWithAccountService:(id)arg1 account:(id)arg2 paymentPass:(id)arg3 physicalCard:(id)arg4 ;
@end

