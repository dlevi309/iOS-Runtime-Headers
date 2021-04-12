/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol PKPaymentAuthorizationControllerDelegate <NSObject>
@optional
-(void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationControllerWillAuthorizePayment:(id)arg1;
-(void)paymentAuthorizationController:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didSelectShippingContact:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didSelectShippingMethod:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didSelectShippingContact:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didSelectPaymentMethod:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(void)paymentAuthorizationControllerDidFinish:(id)arg1;

@end

