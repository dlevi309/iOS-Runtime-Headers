/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupPresentationProtocol.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@protocol PKSetupFlowControllerProtocol, PKPaymentSetupViewControllerDelegate;
@class PKPaymentProvisioningController, PKApplyController, PKPaymentSetupProduct, UIImage, PKDynamicProvisioningPageContent, PKPaymentInstallmentConfiguration, NSString;

@interface PKFeatureOnBoardingViewController : PKExplanationViewController <PKPaymentSetupPresentationProtocol, PKExplanationViewControllerDelegate, PKViewControllerPreflightable> {

	id<PKSetupFlowControllerProtocol> _parentFlowController;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	unsigned long long _featureIdentifier;
	PKPaymentProvisioningController* _provisioningController;
	PKApplyController* _applyController;
	PKPaymentSetupProduct* _paymentSetupProduct;
	UIImage* _heroImage;
	PKDynamicProvisioningPageContent* _currentPage;
	BOOL _isMainFeatureOnboardingPage;
	BOOL _useCompactLayout;
	PKPaymentInstallmentConfiguration* _installmentConfiguration;

}

@property (nonatomic,retain) PKPaymentInstallmentConfiguration * installmentConfiguration;              //@synthesize installmentConfiguration=_installmentConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)setInstallmentConfiguration:(PKPaymentInstallmentConfiguration *)arg1 ;
-(PKPaymentInstallmentConfiguration *)installmentConfiguration;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)explanationViewDidSelectBodyButton:(id)arg1 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(void)explanationViewControllerDidSelectDone:(id)arg1 ;
-(id)paymentSetupMarker;
-(id)initWithParentFlowController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 featureIdentifier:(unsigned long long)arg4 provisoningController:(id)arg5 paymentSetupProduct:(id)arg6 currentPage:(id)arg7 ;
-(void)terminateSetupFlow;
-(void)_openTermsAndConditions;
-(void)_handleAccountCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_checkSecurityCapabilities:(unsigned long long)arg1 nextStep:(/*^block*/id)arg2 ;
-(void)_handleApplyFlowWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleNotifyRequested;
@end

