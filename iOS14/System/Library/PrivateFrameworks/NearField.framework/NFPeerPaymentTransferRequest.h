/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber, NSString, NSDate, NSData;

@interface NFPeerPaymentTransferRequest : NSObject <NSSecureCoding> {

	NSDecimalNumber* _transactionAmount;
	NSString* _appleTransactionHash;
	NSString* _publicTransactionHash;
	NSDate* _transactionDate;
	NSString* _transactionCurrency;
	NSString* _transactionCountry;
	NSData* _nonce;

}

@property (nonatomic,copy) NSDecimalNumber * transactionAmount;              //@synthesize transactionAmount=_transactionAmount - In the implementation block
@property (nonatomic,copy) NSString * appleTransactionHash;                  //@synthesize appleTransactionHash=_appleTransactionHash - In the implementation block
@property (nonatomic,copy) NSString * publicTransactionHash;                 //@synthesize publicTransactionHash=_publicTransactionHash - In the implementation block
@property (nonatomic,copy) NSDate * transactionDate;                         //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,copy) NSString * transactionCurrency;                   //@synthesize transactionCurrency=_transactionCurrency - In the implementation block
@property (nonatomic,copy) NSString * transactionCountry;                    //@synthesize transactionCountry=_transactionCountry - In the implementation block
@property (nonatomic,copy) NSData * nonce;                                   //@synthesize nonce=_nonce - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setNonce:(NSData *)arg1 ;
-(NSString *)transactionCurrency;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setAppleTransactionHash:(NSString *)arg1 ;
-(void)setPublicTransactionHash:(NSString *)arg1 ;
-(void)setTransactionCurrency:(NSString *)arg1 ;
-(void)setTransactionCountry:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDecimalNumber *)transactionAmount;
-(void)setTransactionAmount:(NSDecimalNumber *)arg1 ;
-(NSData *)nonce;
-(NSString *)appleTransactionHash;
-(NSString *)publicTransactionHash;
-(NSString *)transactionCountry;
@end

