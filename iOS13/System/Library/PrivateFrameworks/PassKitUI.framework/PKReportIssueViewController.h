/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@class PKPaymentTransaction, PKPaymentPass, PKAccount, PKPaymentService, PKPaymentTransactionCellController, PKBusinessChatController, UIBarButtonItem, NSString, UITableViewHeaderFooterView, UIImageView;

@interface PKReportIssueViewController : PKSectionTableViewController <PKPaymentServiceDelegate, UITextViewDelegate> {

	PKPaymentTransaction* _transaction;
	PKPaymentPass* _paymentPass;
	PKAccount* _account;
	PKPaymentService* _paymentService;
	PKPaymentTransactionCellController* _transactionCellController;
	PKBusinessChatController* _businessChatController;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _submitButton;
	BOOL _hasIssueSelected;
	long long _selectedIssue;
	BOOL _hasMapsIssueSelected;
	long long _selectedMapsIssue;
	BOOL _hasDisputeTypeSelected;
	long long _selectedDisputeType;
	BOOL _reportingIssue;
	NSString* _statementName;
	BOOL _canPerformUnrecognizedTransaction;
	BOOL _canPerformDispute;
	BOOL _canPerformOther;
	BOOL _canPerformIncorrectMerchant;
	UITableViewHeaderFooterView* _footerView;
	UIImageView* _logoView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canReportIssueForTransaction:(id)arg1 paymentPass:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)_updateNavigationButtons;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(void)_submitButtonTapped:(id)arg1 ;
-(void)_updateFooterPlacement;
-(id)_statementName;
-(unsigned long long)_numberOfIssueTypesEnabled;
-(id)_transactionCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_statementNameCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_issueTypeCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_disputeTypeCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_mapsIssueCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_commentsCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_handleIssueTypeSelectedInTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_handleMapsIssueTypeSelectedInTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_handleDisputeTypeSelectedInTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(long long)_issueTypeForRowIndex:(long long)arg1 ;
-(long long)_rowIndexForIssueType:(long long)arg1 ;
-(id)_formattedStatementNameFromRawName:(id)arg1 ;
-(BOOL)_issueTypeEnabled:(long long)arg1 ;
-(void)_disputeTransactionInBusinessChat;
-(void)_reportIssueToMaps;
-(void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 dismissAfter:(BOOL)arg3 ;
-(void)_resetMapsMerchantAndBrandWithIssueReportIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithTransaction:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 detailViewStyle:(long long)arg4 ;
@end

