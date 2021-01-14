/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKOnBoardingViewController.h>

@class PKApplyController, PKPaymentInstallmentConfiguration;

@interface PKFeatureOnBoardingViewController : PKOnBoardingViewController {

	unsigned long long _featureIdentifier;
	PKApplyController* _applyController;
	BOOL _isMainFeatureOnboardingPage;
	BOOL _useCompactLayout;
	PKPaymentInstallmentConfiguration* _installmentConfiguration;

}

@property (nonatomic,retain) PKPaymentInstallmentConfiguration * installmentConfiguration;              //@synthesize installmentConfiguration=_installmentConfiguration - In the implementation block
-(void)_openTermsAndConditions;
-(void)_handleAccountCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_checkSecurityCapabilities:(unsigned long long)arg1 nextStep:(/*^block*/id)arg2 ;
-(void)_handleApplyFlowWithCompletion:(/*^block*/id)arg1 ;
-(void)handleSetupLater;
-(void)handleProductAvailable;
-(id)nextOnboardingViewControllerWithPage:(id)arg1 product:(id)arg2 ;
-(void)viewDidLoad;
-(PKPaymentInstallmentConfiguration *)installmentConfiguration;
-(void)setInstallmentConfiguration:(PKPaymentInstallmentConfiguration *)arg1 ;
-(id)initWithParentFlowController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 featureIdentifier:(unsigned long long)arg4 provisioningController:(id)arg5 paymentSetupProduct:(id)arg6 currentPage:(id)arg7 ;
@end

