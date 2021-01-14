/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol PKPaymentAuthorizationControllerPrivateDelegate <NSObject>
@optional
-(void)paymentAuthorizationController:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;
-(void)paymentAuthorizationController:(id)arg1 willFinishWithError:(id)arg2;
-(void)paymentAuthorizationController:(id)arg1 didRequestMerchantSession:(/*^block*/id)arg2;
-(void)paymentAuthorizationController:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didAuthorizePeerPaymentQuote:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didAuthorizeDisbursementVoucher:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didAuthorizeContextWithHandler:(/*^block*/id)arg2;

@end

