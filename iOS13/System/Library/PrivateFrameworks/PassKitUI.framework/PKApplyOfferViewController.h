/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKApplyExplanationViewController.h>
#import <libobjc.A.dylib/PKApplyFlowControllerProtocol.h>

@class PKAccountFlowController, PKApplyOfferCreditCardView, NSString, CLInUseAssertion, PKPaymentInstallmentConfiguration;

@interface PKApplyOfferViewController : PKApplyExplanationViewController <PKApplyFlowControllerProtocol> {

	PKAccountFlowController* _accountController;
	PKApplyOfferCreditCardView* _offerView;
	NSString* _offerTermsIdentifier;
	CLInUseAssertion* _inUseAssertion;
	BOOL _useCompactLayout;
	PKPaymentInstallmentConfiguration* _installmentConfiguration;
	BOOL _hasSufficientOTBForInstallment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4 ;
-(void)_termsAccepted:(BOOL)arg1 ;
-(void)_setupForBroadwayApplication:(id)arg1 ;
-(void)_terminateApplyFlowWithoutDeclining;
-(void)_openTermsAndConditions;
@end

