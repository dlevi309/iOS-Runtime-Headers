/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKExplanationViewController.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPaymentProvisioningController, PKPaymentPass, PKAssertion;

@interface PKPaymentPassMakeDefaultViewController : PKExplanationViewController {

	PKPaymentProvisioningController* _provisioningController;
	PKPaymentPass* _pass;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	PKAssertion* _notificationSupressionAssertion;

}
+(BOOL)shouldOfferMakeDefaultForPass:(id)arg1 provisioningController:(id)arg2 ;
-(void)dealloc;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CGSize)_snapshotSize;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)_invalidateAssertion;
-(void)_acquireAssertion;
-(void)proceedToNextScreen;
-(void)_performAddToWatchFlowWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_showAddToWatchOfferWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithProvisioningController:(id)arg1 paymentPass:(id)arg2 context:(long long)arg3 delegate:(id)arg4 ;
@end

