/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSString* _preformattedString;

}

@property (nonatomic,copy) NSDecimalNumber * amount;                   //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * currency;                        //@synthesize currency=_currency - In the implementation block
@property (assign,nonatomic) long long exponent;                       //@synthesize exponent=_exponent - In the implementation block
@property (nonatomic,copy) NSString * preformattedString;              //@synthesize preformattedString=_preformattedString - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithAmount:(id)arg1 exponent:(long long)arg2 preformattedString:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToCurrencyAmount:(id)arg1 ;
-(id)minimalFormattedStringValueInLocale:(id)arg1 ;
-(id)initWithAmount:(id)arg1 currency:(id)arg2 ;
-(id)absoluteValue;
-(id)negativeValue;
-(NSString *)currency;
-(long long)exponent;
-(BOOL)isCurrency;
-(void)setExponent:(long long)arg1 ;
-(id)description;
-(NSString *)preformattedString;
-(void)setPreformattedString:(NSString *)arg1 ;
-(id)initWithAmount:(id)arg1 currency:(id)arg2 exponent:(long long)arg3 ;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDecimalNumber *)amount;
-(long long)compareToCurrencyCode:(id)arg1 amount:(id)arg2 ;
-(void)setCurrency:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)minimalFormattedStringValue;
-(id)formattedStringValue;
-(BOOL)isEqual:(id)arg1 ;
@end

