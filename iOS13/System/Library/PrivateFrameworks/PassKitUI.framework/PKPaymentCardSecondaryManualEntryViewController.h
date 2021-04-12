/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupProvisioningFieldsViewController.h>

@interface PKPaymentCardSecondaryManualEntryViewController : PKPaymentSetupProvisioningFieldsViewController {

	BOOL _suppressPrimarySetupFields;

}

@property (assign,nonatomic) BOOL suppressPrimarySetupFields;              //@synthesize suppressPrimarySetupFields=_suppressPrimarySetupFields - In the implementation block
-(void)viewDidLoad;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(id)visibleFieldIdentifiers;
-(id)newPaymentEligibilityRequest;
-(id)readonlyFieldIdentifiers;
-(void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)defaultFields;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4 ;
-(void)setSuppressPrimarySetupFields:(BOOL)arg1 ;
-(BOOL)suppressPrimarySetupFields;
@end

