/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber, NSString, NSArray, NSData;

@interface PKPeerPaymentQuoteItem : NSObject <NSSecureCoding> {

	BOOL _preservesCurrentBalance;
	unsigned long long _type;
	NSDecimalNumber* _exchangeRate;
	NSDecimalNumber* _sendAmount;
	NSString* _sendAmountCurrency;
	NSDecimalNumber* _receiveAmount;
	NSString* _receiveAmountCurrency;
	NSDecimalNumber* _totalAmount;
	NSString* _totalAmountCurrency;
	NSDecimalNumber* _fees;
	NSString* _feesCurrency;
	NSString* _dpanIdentifier;
	NSString* _countryCode;
	NSArray* _supportedNetworks;
	NSString* _merchantIdentifier;
	unsigned long long _merchantCapabilities;
	NSData* _nonce;

}

@property (nonatomic,readonly) unsigned long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * exchangeRate;                  //@synthesize exchangeRate=_exchangeRate - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * sendAmount;                    //@synthesize sendAmount=_sendAmount - In the implementation block
@property (nonatomic,copy,readonly) NSString * sendAmountCurrency;                   //@synthesize sendAmountCurrency=_sendAmountCurrency - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * receiveAmount;                 //@synthesize receiveAmount=_receiveAmount - In the implementation block
@property (nonatomic,copy,readonly) NSString * receiveAmountCurrency;                //@synthesize receiveAmountCurrency=_receiveAmountCurrency - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * totalAmount;                   //@synthesize totalAmount=_totalAmount - In the implementation block
@property (nonatomic,copy,readonly) NSString * totalAmountCurrency;                  //@synthesize totalAmountCurrency=_totalAmountCurrency - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * fees;                          //@synthesize fees=_fees - In the implementation block
@property (nonatomic,copy,readonly) NSString * feesCurrency;                         //@synthesize feesCurrency=_feesCurrency - In the implementation block
@property (nonatomic,copy,readonly) NSString * dpanIdentifier;                       //@synthesize dpanIdentifier=_dpanIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;                          //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedNetworks;                     //@synthesize supportedNetworks=_supportedNetworks - In the implementation block
@property (nonatomic,copy,readonly) NSString * merchantIdentifier;                   //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long merchantCapabilities;              //@synthesize merchantCapabilities=_merchantCapabilities - In the implementation block
@property (nonatomic,copy,readonly) NSData * nonce;                                  //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,readonly) BOOL preservesCurrentBalance;                         //@synthesize preservesCurrentBalance=_preservesCurrentBalance - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)quoteItemWithDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)countryCode;
-(NSData *)nonce;
-(NSString *)merchantIdentifier;
-(NSDecimalNumber *)totalAmount;
-(NSDecimalNumber *)exchangeRate;
-(NSArray *)supportedNetworks;
-(unsigned long long)merchantCapabilities;
-(NSString *)totalAmountCurrency;
-(NSString *)dpanIdentifier;
-(NSDecimalNumber *)fees;
-(NSString *)feesCurrency;
-(NSDecimalNumber *)receiveAmount;
-(BOOL)preservesCurrentBalance;
-(NSDecimalNumber *)sendAmount;
-(NSString *)sendAmountCurrency;
-(NSString *)receiveAmountCurrency;
@end

