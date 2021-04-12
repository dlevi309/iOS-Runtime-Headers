/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
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

