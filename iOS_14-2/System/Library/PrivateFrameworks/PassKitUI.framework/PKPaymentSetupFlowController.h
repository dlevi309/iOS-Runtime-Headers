/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKSetupFlowControllerProtocol.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPasscodeUpgradeFlowController, PKPaymentProvisioningController, NSString;

@interface PKPaymentSetupFlowController : NSObject <PKSetupFlowControllerProtocol> {

	PKPasscodeUpgradeFlowController* _passcodeUpgradeFlowController;
	PKPaymentProvisioningController* _provisioningController;
	long long _setupContext;
	id<PKPaymentSetupViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) PKPaymentProvisioningController * provisioningController;              //@synthesize provisioningController=_provisioningController - In the implementation block
@property (nonatomic,readonly) long long setupContext;                                                //@synthesize setupContext=_setupContext - In the implementation block
@property (nonatomic,__weak,readonly) id<PKPaymentSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)manualEntryPaymentSetupViewControllerForProduct:(id)arg1 allowsSelectingBank:(BOOL)arg2 ;
-(id<PKPaymentSetupViewControllerDelegate>)delegate;
-(long long)setupContext;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 ;
-(id)nextQueuedCredentialViewControllerWithSetupProduct:(id)arg1 allowsManualEntry:(BOOL)arg2 ;
-(id)nextQueuedCredentialViewControllerWithSetupProduct:(id)arg1 state:(long long)arg2 allowsManualEntry:(BOOL)arg3 ;
-(PKPaymentProvisioningController *)provisioningController;
-(id)paymentSetupViewControllerForAssociatedCredentials:(id)arg1 product:(id)arg2 allowsManualEntry:(BOOL)arg3 ;
-(void)presentPasscodeUpgradeOnViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_paymentSetupViewControllerForAssociatedCredential:(id)arg1 product:(id)arg2 allowsManualEntry:(BOOL)arg3 ;
-(id)_defaultPaymentSetupViewControllerAllowingManualEntry:(BOOL)arg1 ;
-(id)_onboardingViewControllerForProduct:(id)arg1 ;
-(id)_barcodePaymentOnboardingViewControllerForProduct:(id)arg1 ;
-(id)_offerOptionalExpressModeSetup;
-(id)_watchExtensionInstallationViewController;
-(id)_nextPaymentCredentialControllerWithSetupProduct:(id)arg1 allowsManualEntry:(BOOL)arg2 ;
-(id)_offerMakeDefaultViewController;
-(id)_offerAMPEnrollmentViewController;
-(id)_educationViewControllerShouldShow;
-(id)initialPaymentSetupViewControllerForMode:(long long)arg1 allowsManualEntry:(BOOL)arg2 ;
-(void)nextViewControllerWithCompletion:(/*^block*/id)arg1 ;
@end

