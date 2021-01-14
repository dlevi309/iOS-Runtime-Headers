/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSURL, NSDecimalNumber, NSArray, NSData, PKCurrencyAmount;

@interface PKTransactionReceipt : NSObject <NSSecureCoding, NSCopying> {

	NSString* _uniqueID;
	NSString* _receiptProviderIdentifier;
	NSString* _receiptIdentifier;
	NSDate* _lastUpdatedDate;
	NSURL* _supportURL;
	long long _state;
	NSDecimalNumber* _subtotalAmount;
	NSDecimalNumber* _totalAmount;
	NSString* _currencyCode;
	NSArray* _headerFields;
	NSArray* _lineItems;
	NSArray* _summaryItems;
	NSData* _pdfReceiptData;
	NSData* _htmlReceiptData;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) NSURL * fileURL;                                        //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSString * uniqueID;                                        //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy) NSString * receiptProviderIdentifier;                       //@synthesize receiptProviderIdentifier=_receiptProviderIdentifier - In the implementation block
@property (nonatomic,copy) NSString * receiptIdentifier;                               //@synthesize receiptIdentifier=_receiptIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdatedDate;                                 //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (nonatomic,retain) NSURL * supportURL;                                       //@synthesize supportURL=_supportURL - In the implementation block
@property (assign,nonatomic) long long state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * subtotalAmount;                         //@synthesize subtotalAmount=_subtotalAmount - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * totalAmount;                            //@synthesize totalAmount=_totalAmount - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                    //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,readonly) NSArray * headerFields;                                 //@synthesize headerFields=_headerFields - In the implementation block
@property (nonatomic,readonly) NSArray * lineItems;                                    //@synthesize lineItems=_lineItems - In the implementation block
@property (nonatomic,readonly) NSArray * summaryItems;                                 //@synthesize summaryItems=_summaryItems - In the implementation block
@property (nonatomic,readonly) NSData * pdfReceiptData;                                //@synthesize pdfReceiptData=_pdfReceiptData - In the implementation block
@property (nonatomic,readonly) NSData * htmlReceiptData;                               //@synthesize htmlReceiptData=_htmlReceiptData - In the implementation block
@property (nonatomic,readonly) PKCurrencyAmount * subtotalCurrencyAmount; 
@property (nonatomic,readonly) PKCurrencyAmount * totalCurrencyAmount; 
+(BOOL)supportsSecureCoding;
-(NSString *)currencyCode;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(NSDate *)lastUpdatedDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)headerFields;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(id)description;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setState:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(NSArray *)lineItems;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLastUpdatedDate:(NSDate *)arg1 ;
-(NSURL *)supportURL;
-(NSDecimalNumber *)totalAmount;
-(NSArray *)summaryItems;
-(BOOL)isEqual:(id)arg1 ;
-(void)updateWithBundle:(id)arg1 ;
-(BOOL)isEqualToTransactionReceipt:(id)arg1 ;
-(PKCurrencyAmount *)subtotalCurrencyAmount;
-(void)setSupportURL:(NSURL *)arg1 ;
-(PKCurrencyAmount *)totalCurrencyAmount;
-(NSString *)receiptProviderIdentifier;
-(void)setReceiptProviderIdentifier:(NSString *)arg1 ;
-(NSString *)receiptIdentifier;
-(NSDecimalNumber *)subtotalAmount;
-(void)setReceiptIdentifier:(NSString *)arg1 ;
-(void)setSubtotalAmount:(NSDecimalNumber *)arg1 ;
-(void)setTotalAmount:(NSDecimalNumber *)arg1 ;
-(NSData *)pdfReceiptData;
-(NSData *)htmlReceiptData;
@end

