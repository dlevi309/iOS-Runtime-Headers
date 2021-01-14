/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationHostProtocol.h>
#import <libobjc.A.dylib/PKContinuityPaymentServiceDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationHostProtocol.h>

@class PKContinuityPaymentViewController, UINavigationController, PKRemotePaymentRequest, PKContinuityPaymentService, NSString;

@interface PKContinuityPaymentRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentAuthorizationHostProtocol, PKContinuityPaymentServiceDelegate, PKPaymentAuthorizationHostProtocol> {

	PKContinuityPaymentViewController* _continuityViewController;
	UINavigationController* _navigationController;
	PKRemotePaymentRequest* _remoteRequest;
	PKContinuityPaymentService* _continuityService;
	BOOL _hasAuthorizedPayment;
	BOOL _hasSentCancelPaymentRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSecureForRemoteViewService;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(void)_invalidate;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didReceivePaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 ;
-(void)didReceivePaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2 ;
-(void)didReceiveCancellationForRemotePaymentRequest:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)_dismiss;
-(BOOL)shouldAutorotate;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)authorizationWillStart;
-(void)authorizationDidFinishWithError:(id)arg1 ;
-(void)authorizationDidRequestMerchantSession;
-(void)authorizationDidAuthorizePayment:(id)arg1 ;
-(void)authorizationDidAuthorizePurchase:(id)arg1 ;
-(void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1 ;
-(void)authorizationDidAuthorizeDisbursement:(id)arg1 ;
-(void)authorizationDidSelectShippingMethod:(id)arg1 ;
-(void)authorizationDidSelectPaymentMethod:(id)arg1 ;
-(void)authorizationDidSelectShippingAddress:(id)arg1 ;
-(void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)handleButtonActions:(id)arg1 ;
-(void)_cancelPayment;
-(void)configureWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didInvalidateForRemoteAlert;
-(void)_presentEnrollAccessibilityIntentAlert;
-(void)dealloc;
@end

