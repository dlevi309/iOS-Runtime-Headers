/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class CNContact, PKPaymentMethod, PKShippingMethod, PKPayment, PKServiceProviderPurchase, PKAuthorizedPeerPaymentQuote, PKDisbursementVoucher, PKApplePayTrustSignature, PKAccountServicePaymentMethod;

@interface PKPaymentAuthorizationClientCallbackStateParam : PKPaymentAuthorizationStateParam {

	long long _kind;
	id _object;

}

@property (nonatomic,retain) id object;                                                                  //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) long long kind;                                                             //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) CNContact * shippingContact; 
@property (nonatomic,readonly) PKPaymentMethod * paymentMethod; 
@property (nonatomic,readonly) PKShippingMethod * shippingMethod; 
@property (nonatomic,readonly) PKPayment * payment; 
@property (nonatomic,readonly) PKServiceProviderPurchase * purchase; 
@property (nonatomic,readonly) PKAuthorizedPeerPaymentQuote * authorizedPeerPaymentQuote; 
@property (nonatomic,readonly) PKDisbursementVoucher * disbursementVoucher; 
@property (nonatomic,readonly) PKApplePayTrustSignature * applePayTrustSignature; 
@property (nonatomic,readonly) PKAccountServicePaymentMethod * accountServicePaymentMethod; 
+(id)paramWithCallbackKind:(long long)arg1 object:(id)arg2 ;
-(PKServiceProviderPurchase *)purchase;
-(id)object;
-(PKDisbursementVoucher *)disbursementVoucher;
-(PKAuthorizedPeerPaymentQuote *)authorizedPeerPaymentQuote;
-(PKApplePayTrustSignature *)applePayTrustSignature;
-(PKPaymentMethod *)paymentMethod;
-(long long)kind;
-(void)setObject:(id)arg1 ;
-(id)description;
-(PKAccountServicePaymentMethod *)accountServicePaymentMethod;
-(void)setKind:(long long)arg1 ;
-(CNContact *)shippingContact;
-(PKShippingMethod *)shippingMethod;
-(PKPayment *)payment;
@end

