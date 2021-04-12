/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKPaymentToken, PKPayment, PKServiceProviderPurchase, NSString, PKAuthorizedPeerPaymentQuote, PKDisbursementVoucher, PKApplePayTrustSignature;

@interface PKPaymentAuthorizationAuthorizedStateParam : PKPaymentAuthorizationStateParam {

	PKPaymentToken* _paymentToken;
	PKPayment* _payment;
	PKServiceProviderPurchase* _purchase;
	NSString* _purchaseTransactionIdentifier;
	PKAuthorizedPeerPaymentQuote* _authorizedPeerPaymentQuote;
	PKDisbursementVoucher* _disbursementVoucher;
	PKApplePayTrustSignature* _applePayTrustSignature;
	NSString* _installmentAuthorizationToken;

}

@property (nonatomic,retain) PKPaymentToken * paymentToken;                                            //@synthesize paymentToken=_paymentToken - In the implementation block
@property (nonatomic,retain) PKPayment * payment;                                                      //@synthesize payment=_payment - In the implementation block
@property (nonatomic,retain) PKServiceProviderPurchase * purchase;                                     //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,copy) NSString * purchaseTransactionIdentifier;                                   //@synthesize purchaseTransactionIdentifier=_purchaseTransactionIdentifier - In the implementation block
@property (nonatomic,readonly) PKAuthorizedPeerPaymentQuote * authorizedPeerPaymentQuote;              //@synthesize authorizedPeerPaymentQuote=_authorizedPeerPaymentQuote - In the implementation block
@property (nonatomic,readonly) PKDisbursementVoucher * disbursementVoucher;                            //@synthesize disbursementVoucher=_disbursementVoucher - In the implementation block
@property (nonatomic,readonly) PKApplePayTrustSignature * applePayTrustSignature;                      //@synthesize applePayTrustSignature=_applePayTrustSignature - In the implementation block
@property (nonatomic,copy,readonly) NSString * installmentAuthorizationToken;                          //@synthesize installmentAuthorizationToken=_installmentAuthorizationToken - In the implementation block
+(id)paramWithPayment:(id)arg1 ;
+(id)paramWithPaymentToken:(id)arg1 ;
+(id)paramWithPurchase:(id)arg1 purchaseTransactionIdentifier:(id)arg2 ;
+(id)paramWithDisbursementVoucher:(id)arg1 ;
+(id)paramWithAuthorizedPeerPaymentQuote:(id)arg1 ;
+(id)paramWithInstallmentAuthorizationToken:(id)arg1 ;
+(id)paramWithApplePayTrustSignature:(id)arg1 ;
-(PKServiceProviderPurchase *)purchase;
-(NSString *)purchaseTransactionIdentifier;
-(PKDisbursementVoucher *)disbursementVoucher;
-(PKAuthorizedPeerPaymentQuote *)authorizedPeerPaymentQuote;
-(PKApplePayTrustSignature *)applePayTrustSignature;
-(NSString *)installmentAuthorizationToken;
-(id)description;
-(PKPaymentToken *)paymentToken;
-(void)setPaymentToken:(PKPaymentToken *)arg1 ;
-(void)setPurchaseTransactionIdentifier:(NSString *)arg1 ;
-(void)setPurchase:(PKServiceProviderPurchase *)arg1 ;
-(PKPayment *)payment;
-(void)setPayment:(PKPayment *)arg1 ;
@end

