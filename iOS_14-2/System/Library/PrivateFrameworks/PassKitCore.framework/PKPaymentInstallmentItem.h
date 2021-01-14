/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber, NSString;

@interface PKPaymentInstallmentItem : NSObject <NSSecureCoding> {

	long long _installmentItemType;
	NSDecimalNumber* _amount;
	NSString* _currencyCode;
	NSString* _programIdentifier;
	NSDecimalNumber* _apr;
	NSString* _programTerms;

}

@property (assign,nonatomic) long long installmentItemType;              //@synthesize installmentItemType=_installmentItemType - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                     //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                      //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,copy) NSString * programIdentifier;                 //@synthesize programIdentifier=_programIdentifier - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * apr;                        //@synthesize apr=_apr - In the implementation block
@property (nonatomic,copy) NSString * programTerms;                      //@synthesize programTerms=_programTerms - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDecimalNumber *)apr;
-(NSString *)currencyCode;
-(void)setApr:(NSDecimalNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToInstallmentItem:(id)arg1 ;
-(long long)installmentItemType;
-(void)setInstallmentItemType:(long long)arg1 ;
-(void)setProgramIdentifier:(NSString *)arg1 ;
-(void)setProgramTerms:(NSString *)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(NSString *)programTerms;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(NSString *)programIdentifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDecimalNumber *)amount;
-(BOOL)isEqual:(id)arg1 ;
@end

