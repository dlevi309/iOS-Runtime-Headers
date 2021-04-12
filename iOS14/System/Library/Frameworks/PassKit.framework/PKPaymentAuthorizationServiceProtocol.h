/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
*/


@protocol PKPaymentAuthorizationServiceProtocol <NSObject>
@optional
-(void)handleHostApplicationDidCancel;
-(void)prepareWithPaymentRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)handleDismissWithCompletion:(/*^block*/id)arg1;
-(void)authorizationDidAuthorizePaymentCompleteWithStatus:(long long)arg1;
-(void)authorizationDidRequestMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
-(void)authorizationDidSelectShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;
-(void)authorizationDidSelectShippingAddressCompleteWithStatus:(long long)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3;
-(void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg1;

@required
-(void)handleHostApplicationWillResignActive:(BOOL)arg1;
-(void)handleHostApplicationDidBecomeActive;
-(void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)arg1;
-(void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg1;
-(void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;
-(void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
-(void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1;
-(void)authorizationDidAuthorizeDisbursementWithResult:(id)arg1;
-(void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1;
-(void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg1 signatureRequest:(id)arg2;
-(void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1;
-(void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1;
-(void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1;

@end

