/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>

@class PKPaymentPass, PKAppletSubcredentialSharingRequest, NSArray;

@interface PKAppletSubcredentialEntitlementPickerViewController : PKPaymentSetupTableViewController {

	PKPaymentPass* _pass;
	PKAppletSubcredentialSharingRequest* _sharingRequest;
	NSArray* _supportedEntitlements;
	long long _selectedEntitlementIndex;

}
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)handleSharedButton;
-(id)initWithSharingRequest:(id)arg1 ;
@end

