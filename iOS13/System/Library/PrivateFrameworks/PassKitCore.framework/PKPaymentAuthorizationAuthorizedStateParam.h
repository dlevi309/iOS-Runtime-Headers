/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)installmentAuthorizationToken;
-(PKServiceProviderPurchase *)purchase;
-(PKPayment *)payment;
-(void)setPayment:(PKPayment *)arg1 ;
-(PKPaymentToken *)paymentToken;
-(void)setPaymentToken:(PKPaymentToken *)arg1 ;
-(void)setPurchase:(PKServiceProviderPurchase *)arg1 ;
-(NSString *)purchaseTransactionIdentifier;
-(PKDisbursementVoucher *)disbursementVoucher;
-(PKAuthorizedPeerPaymentQuote *)authorizedPeerPaymentQuote;
-(PKApplePayTrustSignature *)applePayTrustSignature;
-(void)setPurchaseTransactionIdentifier:(NSString *)arg1 ;
@end

