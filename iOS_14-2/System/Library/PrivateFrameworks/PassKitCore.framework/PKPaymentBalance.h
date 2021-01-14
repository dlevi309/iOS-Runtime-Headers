/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSString* _preformattedString;

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
@property (nonatomic,copy) NSString * preformattedString;                     //@synthesize preformattedString=_preformattedString - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)lastUpdateDate;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(BOOL)isPrimary;
-(NSString *)currencyCode;
-(NSString *)localizedTitle;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(PKCurrencyAmount *)currencyValue;
-(long long)exponent;
-(void)setValue:(NSDecimalNumber *)arg1 ;
-(BOOL)isCurrency;
-(void)setExponent:(long long)arg1 ;
-(id)description;
-(NSString *)localizedDescription;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(NSString *)preformattedString;
-(void)_setValueWithRounding:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 forCurrencyAmount:(id)arg2 ;
-(void)setPreformattedString:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 forValue:(id)arg2 roundingToExponent:(long long)arg3 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIsPrimary:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)formattedValue;
-(NSDecimalNumber *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

