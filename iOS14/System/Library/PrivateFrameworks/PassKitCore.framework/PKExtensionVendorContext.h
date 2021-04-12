/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKExtensionBaseContext.h>
#import <libobjc.A.dylib/PKExtensionVendorContextProtocol.h>

@class PKEntitlementWhitelist, NSString;

@interface PKExtensionVendorContext : PKExtensionBaseContext <PKExtensionVendorContextProtocol> {

	PKEntitlementWhitelist* _whitelist;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)entitlementWhitelist;
-(id)hostContext;
-(id)hostContextWithErrorHandler:(/*^block*/id)arg1 ;
-(void)handleHostApplicationDidCancel;
-(void)handleHostApplicationWillResignActive:(BOOL)arg1 ;
-(void)handleHostApplicationDidBecomeActive;
-(void)prepareWithPaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)arg1 ;
-(void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg1 ;
-(void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1 ;
-(void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1 ;
-(void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1 ;
-(void)authorizationDidAuthorizeDisbursementWithResult:(id)arg1 ;
-(void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1 ;
-(void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg1 signatureRequest:(id)arg2 ;
-(void)handleDismissWithCompletion:(/*^block*/id)arg1 ;
-(void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1 ;
-(void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1 ;
-(void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1 ;
-(void)authorizationDidAuthorizePaymentCompleteWithStatus:(long long)arg1 ;
-(void)authorizationDidSelectShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2 ;
-(void)authorizationDidSelectShippingAddressCompleteWithStatus:(long long)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3 ;
-(void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg1 ;
@end

