/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKExplanationViewController.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPaymentProvisioningController, PKPaymentPass, PKPaymentProvisioningTracker;

@interface PKPaymentSetupOptionalExpressModeViewController : PKExplanationViewController {

	PKPaymentProvisioningController* _provisioningController;
	PKPaymentPass* _pass;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	PKPaymentProvisioningTracker* _provisioningTracker;

}
-(id)initWithProvisioningController:(id)arg1 paymentPass:(id)arg2 context:(long long)arg3 delegate:(id)arg4 ;
-(id)_credentialViewController;
-(void)_presentNextViewController:(id)arg1 ;
-(id)_moreInfoViewControllerWithDismissalHandler:(/*^block*/id)arg1 ;
-(CGSize)_snapshotSize;
-(void)loadView;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)_terminateSetupFlow;
-(void)proceedToNextScreen;
@end

