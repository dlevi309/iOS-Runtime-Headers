/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/PKAddBankAccountInformationViewControllerDelegate.h>

@class PKBankAccountInformation, PKPeerPaymentAccount, NSString;

@interface PKPeerPaymentBankAccountsViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate> {

	PKBankAccountInformation* _bankInformation;
	PKPeerPaymentAccount* _account;
	long long _detailViewStyle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_doneButtonPressed:(id)arg1 ;
-(void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(id)initWithPeerPaymentAccount:(id)arg1 detailViewStyle:(long long)arg2 ;
@end

