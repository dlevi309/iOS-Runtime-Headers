/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKPaymentAuthorizationDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationControllerPrivateDelegate.h>

@class NSString;

@interface WKPaymentAuthorizationControllerDelegate : WKPaymentAuthorizationDelegate <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRequest:(id)arg1 presenter:(PaymentAuthorizationPresenter*)arg2 ;
-(void)_getPaymentServicesMerchantURL:(/*^block*/id)arg1 ;
-(void)paymentAuthorizationControllerDidFinish:(id)arg1 ;
-(void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationController:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationController:(id)arg1 didSelectShippingContact:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationController:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationController:(id)arg1 willFinishWithError:(id)arg2 ;
-(void)paymentAuthorizationController:(id)arg1 didRequestMerchantSession:(/*^block*/id)arg2 ;
@end

