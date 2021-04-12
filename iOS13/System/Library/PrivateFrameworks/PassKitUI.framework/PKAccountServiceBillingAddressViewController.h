/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/PKAddressEditorViewControllerDelegate.h>

@class CNContact, PKAccountService, PKAccount;

@interface PKAccountServiceBillingAddressViewController : PKSectionTableViewController <PKAddressEditorViewControllerDelegate> {

	CNContact* _currentBillingAddress;
	PKAccountService* _accountService;
	PKAccount* _account;
	unsigned long long _accountFeatureIdentifier;
	long long _detailViewStyle;
	/*^block*/id _handler;
	BOOL _loadingNewBillingContact;

}
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(long long)modalPresentationStyle;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(void)addressEditorViewController:(id)arg1 selectedContact:(id)arg2 ;
-(void)addressEditorViewControllerDidCancel:(id)arg1 ;
-(id)_currentBillingAddressCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_enterNewBillingAddressCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(void)_didSelectChangeAddress;
-(id)requiredBillingAddressKeys;
-(id)initWithBillingAddress:(id)arg1 account:(id)arg2 accountService:(id)arg3 detailViewStyle:(long long)arg4 handler:(/*^block*/id)arg5 ;
@end

