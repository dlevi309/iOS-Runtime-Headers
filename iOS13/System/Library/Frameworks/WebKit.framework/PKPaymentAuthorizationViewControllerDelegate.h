/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


@protocol PKPaymentAuthorizationViewControllerDelegate <NSObject>
@optional
-(void)paymentAuthorizationViewController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationViewControllerWillAuthorizePayment:(id)arg1;
-(void)paymentAuthorizationViewController:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationViewController:(id)arg1 didSelectShippingContact:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationViewController:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationViewController:(id)arg1 didAuthorizePayment:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationViewController:(id)arg1 didSelectShippingMethod:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationViewController:(id)arg1 didSelectShippingAddress:(const void*)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationViewController:(id)arg1 didSelectShippingContact:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationViewController:(id)arg1 didSelectPaymentMethod:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(void)paymentAuthorizationViewControllerDidFinish:(id)arg1;

@end

