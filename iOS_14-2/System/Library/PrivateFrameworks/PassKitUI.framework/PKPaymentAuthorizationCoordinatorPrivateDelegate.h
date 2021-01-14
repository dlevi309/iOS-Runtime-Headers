/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPaymentAuthorizationCoordinatorPrivateDelegate <NSObject>
@optional
-(void)paymentAuthorizationCoordinator:(id)arg1 willFinishWithError:(id)arg2;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeContextWithHandler:(/*^block*/id)arg2;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePeerPaymentQuote:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeDisbursementVoucher:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeApplePayTrustSignature:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinator:(id)arg1 didUpdateAccountServicePaymentMethod:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinator:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;

@end

