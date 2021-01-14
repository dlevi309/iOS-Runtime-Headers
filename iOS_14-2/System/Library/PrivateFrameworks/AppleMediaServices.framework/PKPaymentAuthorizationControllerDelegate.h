/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol PKPaymentAuthorizationControllerDelegate <NSObject>
@optional
-(void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationControllerWillAuthorizePayment:(id)arg1;
-(void)paymentAuthorizationController:(id)arg1 didRequestMerchantSessionUpdate:(/*^block*/id)arg2;
-(void)paymentAuthorizationController:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didSelectShippingContact:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didSelectShippingMethod:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didSelectShippingContact:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didSelectPaymentMethod:(id)arg2 completion:(/*^block*/id)arg3;
-(id)presentationWindowForPaymentAuthorizationController:(id)arg1;

@required
-(void)paymentAuthorizationControllerDidFinish:(id)arg1;

@end

