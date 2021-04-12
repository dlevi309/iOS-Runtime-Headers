/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKPaymentAuthorizationHostProtocol <NSObject>
@optional
-(void)authorizationDidPresent;
-(void)connectionDidOpen;
-(void)didEncounterAuthorizationEvent:(unsigned long long)arg1;

@required
-(void)authorizationDidFinishWithError:(id)arg1;
-(void)authorizationWillStart;
-(void)authorizationDidRequestMerchantSession;
-(void)authorizationDidAuthorizeContext;
-(void)authorizationDidAuthorizePayment:(id)arg1;
-(void)authorizationDidAuthorizePurchase:(id)arg1;
-(void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;
-(void)authorizationDidAuthorizeDisbursement:(id)arg1;
-(void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1;
-(void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg1;
-(void)authorizationDidSelectShippingMethod:(id)arg1;
-(void)authorizationDidSelectShippingAddress:(id)arg1;
-(void)authorizationDidSelectPaymentMethod:(id)arg1;

@end

