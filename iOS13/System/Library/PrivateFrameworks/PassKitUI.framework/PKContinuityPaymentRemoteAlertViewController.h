/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)_invalidate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(long long)preferredStatusBarStyle;
-(void)_dismiss;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1 ;
-(void)didReceivePaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 ;
-(void)didReceivePaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2 ;
-(void)didReceiveCancellationForRemotePaymentRequest:(id)arg1 ;
-(void)authorizationDidFinishWithError:(id)arg1 ;
-(void)authorizationWillStart;
-(void)authorizationDidRequestMerchantSession;
-(void)authorizationDidAuthorizePayment:(id)arg1 ;
-(void)authorizationDidAuthorizePurchase:(id)arg1 ;
-(void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1 ;
-(void)authorizationDidAuthorizeDisbursement:(id)arg1 ;
-(void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1 ;
-(void)authorizationDidSelectShippingMethod:(id)arg1 ;
-(void)authorizationDidSelectShippingAddress:(id)arg1 ;
-(void)authorizationDidSelectPaymentMethod:(id)arg1 ;
-(void)handleButtonActions:(id)arg1 ;
-(void)configureWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didInvalidateForRemoteAlert;
@end

