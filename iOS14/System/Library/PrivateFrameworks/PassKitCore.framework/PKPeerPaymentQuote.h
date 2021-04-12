/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSURL, NSDecimalNumber, NSData, NSDate, PKPeerPaymentRecipient, PKCurrencyAmount;

@interface PKPeerPaymentQuote : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSArray* _items;
	NSString* _disclosureText;
	NSURL* _disclosureURL;
	NSDecimalNumber* _currentBalance;
	NSString* _currentBalanceCurrency;
	NSData* _appleHash;
	NSData* _externalHash;
	NSDecimalNumber* _totalReceiveAmount;
	NSString* _totalReceiveAmountCurrency;
	NSDecimalNumber* _totalFees;
	NSString* _totalFeesCurrency;
	NSDate* _validUntil;
	unsigned long long _riskLevel;
	PKPeerPaymentRecipient* _recipient;
	NSString* _bankName;
	NSString* _routingNumber;
	NSString* _accountNumber;

}

@property (nonatomic,readonly) PKCurrencyAmount * calculatedTotalAmount; 
@property (nonatomic,readonly) double validityDuration; 
@property (nonatomic,copy,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                         //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSString * disclosureText;                          //@synthesize disclosureText=_disclosureText - In the implementation block
@property (nonatomic,copy,readonly) NSURL * disclosureURL;                              //@synthesize disclosureURL=_disclosureURL - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * currentBalance;                   //@synthesize currentBalance=_currentBalance - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentBalanceCurrency;                  //@synthesize currentBalanceCurrency=_currentBalanceCurrency - In the implementation block
@property (nonatomic,copy,readonly) NSData * appleHash;                                 //@synthesize appleHash=_appleHash - In the implementation block
@property (nonatomic,copy,readonly) NSData * externalHash;                              //@synthesize externalHash=_externalHash - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * totalReceiveAmount;               //@synthesize totalReceiveAmount=_totalReceiveAmount - In the implementation block
@property (nonatomic,copy,readonly) NSString * totalReceiveAmountCurrency;              //@synthesize totalReceiveAmountCurrency=_totalReceiveAmountCurrency - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * totalFees;                        //@synthesize totalFees=_totalFees - In the implementation block
@property (nonatomic,copy,readonly) NSString * totalFeesCurrency;                       //@synthesize totalFeesCurrency=_totalFeesCurrency - In the implementation block
@property (nonatomic,copy,readonly) NSDate * validUntil;                                //@synthesize validUntil=_validUntil - In the implementation block
@property (nonatomic,readonly) unsigned long long riskLevel;                            //@synthesize riskLevel=_riskLevel - In the implementation block
@property (nonatomic,retain) PKPeerPaymentRecipient * recipient;                        //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,copy) NSString * bankName;                                         //@synthesize bankName=_bankName - In the implementation block
@property (nonatomic,copy) NSString * routingNumber;                                    //@synthesize routingNumber=_routingNumber - In the implementation block
@property (nonatomic,copy) NSString * accountNumber;                                    //@synthesize accountNumber=_accountNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRecipient:(PKPeerPaymentRecipient *)arg1 ;
-(NSDecimalNumber *)currentBalance;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bankName;
-(BOOL)hasExpired;
-(NSString *)routingNumber;
-(void)setRoutingNumber:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)items;
-(void)setBankName:(NSString *)arg1 ;
-(BOOL)preservesCurrentBalance;
-(id)description;
-(unsigned long long)riskLevel;
-(NSDate *)validUntil;
-(id)firstQuoteItemOfType:(unsigned long long)arg1 ;
-(NSData *)externalHash;
-(NSDecimalNumber *)totalReceiveAmount;
-(NSString *)totalReceiveAmountCurrency;
-(PKCurrencyAmount *)calculatedTotalAmount;
-(NSString *)accountNumber;
-(void)setAccountNumber:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)disclosureText;
-(NSURL *)disclosureURL;
-(NSString *)currentBalanceCurrency;
-(NSString *)totalFeesCurrency;
-(double)validityDuration;
-(PKPeerPaymentRecipient *)recipient;
-(NSDecimalNumber *)totalFees;
-(NSString *)identifier;
-(NSData *)appleHash;
-(BOOL)isEqual:(id)arg1 ;
@end

