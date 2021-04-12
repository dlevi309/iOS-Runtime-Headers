/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber, PKPeerPaymentRequestToken, PKPeerPaymentQuoteCertificatesResponse;

@interface PKPeerPaymentQuoteRequest : PKPeerPaymentWebServiceRequest <NSSecureCoding> {

	BOOL _preserveCurrentBalance;
	NSString* _orderIdentifier;
	NSDecimalNumber* _amount;
	NSString* _currency;
	unsigned long long _externalFundingSource;
	unsigned long long _destination;
	unsigned long long _context;
	PKPeerPaymentRequestToken* _requestToken;
	NSString* _dpanIdentifier;
	NSString* _fpanIdentifier;
	long long _paymentNetwork;
	unsigned long long _paymentMethodType;
	NSString* _recipientIdentifier;
	NSString* _senderAddress;
	NSString* _bankName;
	NSString* _routingNumber;
	NSString* _accountNumber;
	PKPeerPaymentQuoteCertificatesResponse* _quoteCertificatesResponse;

}

@property (nonatomic,copy,readonly) NSString * orderIdentifier;                                               //@synthesize orderIdentifier=_orderIdentifier - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                                                          //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * currency;                                                               //@synthesize currency=_currency - In the implementation block
@property (assign,nonatomic) BOOL preserveCurrentBalance;                                                     //@synthesize preserveCurrentBalance=_preserveCurrentBalance - In the implementation block
@property (assign,nonatomic) unsigned long long externalFundingSource;                                        //@synthesize externalFundingSource=_externalFundingSource - In the implementation block
@property (assign,nonatomic) unsigned long long destination;                                                  //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) unsigned long long context;                                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) PKPeerPaymentRequestToken * requestToken;                                        //@synthesize requestToken=_requestToken - In the implementation block
@property (setter=setDPANIdentifier:,nonatomic,copy) NSString * dpanIdentifier;                               //@synthesize dpanIdentifier=_dpanIdentifier - In the implementation block
@property (setter=setFPANIdentifier:,nonatomic,copy) NSString * fpanIdentifier;                               //@synthesize fpanIdentifier=_fpanIdentifier - In the implementation block
@property (assign,nonatomic) long long paymentNetwork;                                                        //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (assign,nonatomic) unsigned long long paymentMethodType;                                            //@synthesize paymentMethodType=_paymentMethodType - In the implementation block
@property (nonatomic,copy) NSString * recipientIdentifier;                                                    //@synthesize recipientIdentifier=_recipientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * senderAddress;                                                          //@synthesize senderAddress=_senderAddress - In the implementation block
@property (nonatomic,copy) NSString * bankName;                                                               //@synthesize bankName=_bankName - In the implementation block
@property (nonatomic,copy) NSString * routingNumber;                                                          //@synthesize routingNumber=_routingNumber - In the implementation block
@property (nonatomic,copy) NSString * accountNumber;                                                          //@synthesize accountNumber=_accountNumber - In the implementation block
@property (nonatomic,retain) PKPeerPaymentQuoteCertificatesResponse * quoteCertificatesResponse;              //@synthesize quoteCertificatesResponse=_quoteCertificatesResponse - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)context;
-(void)setContext:(unsigned long long)arg1 ;
-(unsigned long long)destination;
-(void)setDestination:(unsigned long long)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(void)setRecipientIdentifier:(NSString *)arg1 ;
-(long long)paymentNetwork;
-(void)setPaymentNetwork:(long long)arg1 ;
-(NSString *)accountNumber;
-(void)setAccountNumber:(NSString *)arg1 ;
-(PKPeerPaymentRequestToken *)requestToken;
-(void)setRequestToken:(PKPeerPaymentRequestToken *)arg1 ;
-(NSString *)recipientIdentifier;
-(NSString *)senderAddress;
-(void)setSenderAddress:(NSString *)arg1 ;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(NSString *)routingNumber;
-(void)setRoutingNumber:(NSString *)arg1 ;
-(NSString *)bankName;
-(NSString *)dpanIdentifier;
-(void)setDPANIdentifier:(id)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5 ;
-(void)updateWithPaymentPass:(id)arg1 externalFundingSource:(unsigned long long)arg2 ;
-(unsigned long long)externalFundingSource;
-(void)setPreserveCurrentBalance:(BOOL)arg1 ;
-(void)setBankName:(NSString *)arg1 ;
-(void)setQuoteCertificatesResponse:(PKPeerPaymentQuoteCertificatesResponse *)arg1 ;
-(BOOL)preserveCurrentBalance;
-(void)updateWithPaymentPass:(id)arg1 ;
-(unsigned long long)paymentMethodType;
-(PKPeerPaymentQuoteCertificatesResponse *)quoteCertificatesResponse;
-(void)setFPANIdentifier:(id)arg1 ;
-(BOOL)isEqualToPeerPaymentQuoteRequest:(id)arg1 ;
-(NSString *)orderIdentifier;
-(void)setExternalFundingSource:(unsigned long long)arg1 ;
-(NSString *)fpanIdentifier;
-(void)setPaymentMethodType:(unsigned long long)arg1 ;
@end

