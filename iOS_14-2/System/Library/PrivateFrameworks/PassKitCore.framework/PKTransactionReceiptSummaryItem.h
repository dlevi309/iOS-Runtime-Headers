/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)currencyCode;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(PKCurrencyAmount *)currencyAmount;
-(id)description;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setLabel:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToTransactionReceiptSummaryItem:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
@end

