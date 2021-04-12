/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)object;
-(void)setObject:(id)arg1 ;
-(long long)kind;
-(void)setKind:(long long)arg1 ;
-(CNContact *)shippingContact;
-(PKPaymentMethod *)paymentMethod;
-(PKServiceProviderPurchase *)purchase;
-(PKPayment *)payment;
-(PKShippingMethod *)shippingMethod;
-(PKDisbursementVoucher *)disbursementVoucher;
-(PKAuthorizedPeerPaymentQuote *)authorizedPeerPaymentQuote;
-(PKApplePayTrustSignature *)applePayTrustSignature;
-(PKAccountServicePaymentMethod *)accountServicePaymentMethod;
@end

