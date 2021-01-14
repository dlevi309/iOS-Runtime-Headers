/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKPaymentAuthorizationHostProtocol <NSObject>
@optional
-(void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;
-(void)authorizationDidAuthorizeDisbursement:(id)arg1;
-(void)authorizationDidPresent;
-(void)didEncounterAuthorizationEvent:(unsigned long long)arg1;
-(void)authorizationDidAuthorizeContext;
-(void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1;
-(void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg1;
-(void)handleConnectionDidOpenWithCompletion:(/*^block*/id)arg1;

@required
-(void)authorizationWillStart;
-(void)authorizationDidFinishWithError:(id)arg1;
-(void)authorizationDidRequestMerchantSession;
-(void)authorizationDidAuthorizePayment:(id)arg1;
-(void)authorizationDidAuthorizePurchase:(id)arg1;
-(void)authorizationDidSelectShippingMethod:(id)arg1;
-(void)authorizationDidSelectPaymentMethod:(id)arg1;
-(void)authorizationDidSelectShippingAddress:(id)arg1;

@end

