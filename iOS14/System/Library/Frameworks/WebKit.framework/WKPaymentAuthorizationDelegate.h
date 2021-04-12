/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@interface WKPaymentAuthorizationDelegate : NSObject {

	RetainPtr<PKPaymentRequest>* _request;
	RetainPtr<NSArray<PKPaymentSummaryItem *> >* _summaryItems;
	RetainPtr<NSArray<PKShippingMethod *> >* _shippingMethods;
	RetainPtr<NSError>* _sessionError;
	WeakPtr<WebKit::PaymentAuthorizationPresenter, WTF::EmptyCounter>* _presenter;
	BlockPtr<void (PKPaymentAuthorizationResult *)> _didAuthorizePaymentCompletion;
	BlockPtr<void (PKPaymentMerchantSession *, NSError *)> _didRequestMerchantSessionCompletion;
	BlockPtr<void (PKPaymentRequestPaymentMethodUpdate *)> _didSelectPaymentMethodCompletion;
	BlockPtr<void (PKPaymentRequestShippingContactUpdate *)> _didSelectShippingContactCompletion;
	BlockPtr<void (PKPaymentRequestShippingMethodUpdate *)> _didSelectShippingMethodCompletion;

}
-(void)_didFinish;
-(void)completeMerchantValidation:(id)arg1 error:(id)arg2 ;
-(void)completePaymentMethodSelection:(id)arg1 ;
-(void)_willFinishWithError:(id)arg1 ;
-(void)completePaymentSession:(long long)arg1 errors:(id)arg2 ;
-(void)completeShippingContactSelection:(id)arg1 ;
-(void)completeShippingMethodSelection:(id)arg1 ;
-(id)_initWithRequest:(id)arg1 presenter:(PaymentAuthorizationPresenter*)arg2 ;
-(void)_didRequestMerchantSession:(/*^block*/id)arg1 ;
-(void)_didAuthorizePayment:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didSelectShippingMethod:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didSelectShippingContact:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didSelectPaymentMethod:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidate;
-(void)_getPaymentServicesMerchantURL:(/*^block*/id)arg1 ;
-(id)shippingMethods;
-(id)summaryItems;
@end

