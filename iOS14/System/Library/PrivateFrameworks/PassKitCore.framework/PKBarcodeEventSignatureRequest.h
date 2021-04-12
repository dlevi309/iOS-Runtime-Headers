/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSNumber, NSData;

@interface PKBarcodeEventSignatureRequest : NSObject <NSSecureCoding> {

	NSString* _deviceAccountIdentifier;
	NSString* _transactionIdentifier;
	NSString* _barcodeIdentifier;
	NSString* _rawMerchantName;
	NSString* _merchantName;
	NSDate* _transactionDate;
	NSString* _currencyCode;
	NSNumber* _amount;
	NSString* _transactionStatus;
	NSData* _partialSignature;

}

@property (nonatomic,copy) NSString * deviceAccountIdentifier;              //@synthesize deviceAccountIdentifier=_deviceAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * transactionIdentifier;                //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * barcodeIdentifier;                    //@synthesize barcodeIdentifier=_barcodeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * rawMerchantName;                      //@synthesize rawMerchantName=_rawMerchantName - In the implementation block
@property (nonatomic,copy) NSString * merchantName;                         //@synthesize merchantName=_merchantName - In the implementation block
@property (nonatomic,retain) NSDate * transactionDate;                      //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                         //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,retain) NSNumber * amount;                             //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * transactionStatus;                    //@synthesize transactionStatus=_transactionStatus - In the implementation block
@property (nonatomic,copy) NSData * partialSignature;                       //@synthesize partialSignature=_partialSignature - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)currencyCode;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(id)description;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setAmount:(NSNumber *)arg1 ;
-(NSString *)rawMerchantName;
-(void)setDeviceAccountIdentifier:(NSString *)arg1 ;
-(NSData *)partialSignature;
-(NSString *)deviceAccountIdentifier;
-(NSString *)barcodeIdentifier;
-(id)initWithPaymentTransaction:(id)arg1 deviceAccountIdentifier:(id)arg2 ;
-(void)setBarcodeIdentifier:(NSString *)arg1 ;
-(void)setRawMerchantName:(NSString *)arg1 ;
-(void)setPartialSignature:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)amount;
-(void)setTransactionStatus:(NSString *)arg1 ;
-(NSString *)transactionStatus;
-(NSString *)transactionIdentifier;
-(NSString *)merchantName;
-(void)setMerchantName:(NSString *)arg1 ;
@end

