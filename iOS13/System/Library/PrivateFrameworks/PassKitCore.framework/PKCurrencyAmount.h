/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber, NSString;

@interface PKCurrencyAmount : NSObject <NSCopying, NSSecureCoding> {

	NSDecimalNumber* _amount;
	NSString* _currency;
	long long _exponent;

}

@property (nonatomic,copy) NSDecimalNumber * amount;              //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * currency;                   //@synthesize currency=_currency - In the implementation block
@property (assign,nonatomic) long long exponent;                  //@synthesize exponent=_exponent - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(id)formattedStringValue;
-(long long)exponent;
-(void)setExponent:(long long)arg1 ;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(id)initWithAmount:(id)arg1 currency:(id)arg2 exponent:(long long)arg3 ;
-(long long)compareToCurrencyCode:(id)arg1 amount:(id)arg2 ;
-(id)minimalFormattedStringValue;
-(BOOL)isCurrency;
-(BOOL)isEqualToCurrencyAmount:(id)arg1 ;
-(id)minimalFormattedStringValueInLocale:(id)arg1 ;
-(id)initWithAmount:(id)arg1 currency:(id)arg2 ;
-(id)absoluteValue;
-(id)negativeValue;
@end

