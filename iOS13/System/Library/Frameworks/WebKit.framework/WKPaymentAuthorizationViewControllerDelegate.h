/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKPaymentAuthorizationDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationViewControllerPrivateDelegate.h>

@class NSString;

@interface WKPaymentAuthorizationViewControllerDelegate : WKPaymentAuthorizationDelegate <PKPaymentAuthorizationViewControllerDelegate, PKPaymentAuthorizationViewControllerPrivateDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)paymentAuthorizationViewControllerDidFinish:(id)arg1 ;
-(void)paymentAuthorizationViewController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationViewController:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationViewController:(id)arg1 didSelectShippingContact:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationViewController:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationViewController:(id)arg1 willFinishWithError:(id)arg2 ;
-(void)paymentAuthorizationViewController:(id)arg1 didRequestMerchantSession:(/*^block*/id)arg2 ;
-(id)initWithRequest:(id)arg1 presenter:(PaymentAuthorizationPresenter*)arg2 ;
-(void)_getPaymentServicesMerchantURL:(/*^block*/id)arg1 ;
@end

