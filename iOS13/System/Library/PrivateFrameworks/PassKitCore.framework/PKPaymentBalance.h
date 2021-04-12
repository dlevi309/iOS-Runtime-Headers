/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber, NSDate, PKCurrencyAmount;

@interface PKPaymentBalance : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isPrimary;
	NSString* _identifier;
	NSDecimalNumber* _value;
	NSString* _currencyCode;
	long long _exponent;
	NSString* _localizedTitle;
	NSString* _localizedDescription;
	NSDate* _lastUpdateDate;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * value;                           //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                           //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,readonly) PKCurrencyAmount * currencyValue; 
@property (nonatomic,readonly) BOOL isCurrency; 
@property (assign,nonatomic) long long exponent;                              //@synthesize exponent=_exponent - In the implementation block
@property (nonatomic,readonly) NSString * formattedValue; 
@property (nonatomic,copy) NSString * localizedTitle;                         //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                   //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (assign,nonatomic) BOOL isPrimary;                                  //@synthesize isPrimary=_isPrimary - In the implementation block
@property (nonatomic,copy) NSDate * lastUpdateDate;                           //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)currencyCode;
-(NSString *)identifier;
-(NSDecimalNumber *)value;
-(void)setValue:(NSDecimalNumber *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSDate *)lastUpdateDate;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(BOOL)isPrimary;
-(long long)exponent;
-(void)setExponent:(long long)arg1 ;
-(void)setIsPrimary:(BOOL)arg1 ;
-(void)_setValueWithRounding:(id)arg1 ;
-(BOOL)isCurrency;
-(PKCurrencyAmount *)currencyValue;
-(NSString *)formattedValue;
-(id)initWithIdentifier:(id)arg1 forCurrencyAmount:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 forValue:(id)arg2 roundingToExponent:(long long)arg3 ;
@end

