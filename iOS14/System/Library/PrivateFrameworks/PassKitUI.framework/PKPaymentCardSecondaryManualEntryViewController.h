/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupProvisioningFieldsViewController.h>

@interface PKPaymentCardSecondaryManualEntryViewController : PKPaymentSetupProvisioningFieldsViewController {

	BOOL _suppressPrimarySetupFields;

}

@property (assign,nonatomic) BOOL suppressPrimarySetupFields;              //@synthesize suppressPrimarySetupFields=_suppressPrimarySetupFields - In the implementation block
-(id)newPaymentEligibilityRequest;
-(id)defaultFields;
-(id)readonlyFieldIdentifiers;
-(void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4 ;
-(void)setSuppressPrimarySetupFields:(BOOL)arg1 ;
-(BOOL)suppressPrimarySetupFields;
-(void)viewDidLoad;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(id)visibleFieldIdentifiers;
@end

