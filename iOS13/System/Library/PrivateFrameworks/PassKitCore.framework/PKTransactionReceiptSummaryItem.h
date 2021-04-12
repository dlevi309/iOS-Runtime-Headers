/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDecimalNumber, PKCurrencyAmount;

@interface PKTransactionReceiptSummaryItem : NSObject <NSSecureCoding, NSCopying> {

	long long _type;
	NSString* _label;
	NSDecimalNumber* _amount;
	NSString* _currencyCode;

}

@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * label;                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * amount;                         //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                            //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,readonly) PKCurrencyAmount * currencyAmount; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(PKCurrencyAmount *)currencyAmount;
-(BOOL)isEqualToTransactionReceiptSummaryItem:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
@end

