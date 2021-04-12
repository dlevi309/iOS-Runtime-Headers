/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/PKAddBankAccountInformationViewControllerDelegate.h>

@class PKAccount, PKPaymentWebService, NSMutableArray, NSString;

@interface PKCreditAccountBankAccountsViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate> {

	PKAccount* _account;
	PKPaymentWebService* _paymentWebService;
	unsigned long long _accountFeatureIdentifier;
	NSMutableArray* _fundingSources;
	long long _context;
	NSMutableArray* _deletingFundingSources;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)viewDidLoad;
-(id)_addBankAccountInformationViewController;
-(void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1 ;
-(void)addBankAccountInformationViewController:(id)arg1 didAddFundingSource:(id)arg2 ;
-(void)addBankAccountInformationViewControllerDidFinish:(id)arg1 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)_toggleEditingMode;
-(void)_updateEditButtonIfNecessary;
-(void)_editButtonPressed:(id)arg1 ;
-(id)_broadwayBankAccountCellForRowAtIndex:(long long)arg1 ;
-(void)_configureBankAccountCell:(id)arg1 withFundingSource:(id)arg2 ;
-(BOOL)_isBankAccountIndexPath:(id)arg1 ;
-(void)_didSelectDeleteBroadwayBankAccountAtIndexPath:(id)arg1 ;
-(id)initWithAccount:(id)arg1 paymentWebService:(id)arg2 context:(long long)arg3 ;
-(void)addBankAccountInformationViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
@end

