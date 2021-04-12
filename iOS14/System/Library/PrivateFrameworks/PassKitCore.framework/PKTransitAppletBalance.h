/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber, NSDate;

@interface PKTransitAppletBalance : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSDecimalNumber* _balance;
	NSString* _currency;
	long long _exponent;
	NSDate* _expirationDate;

}

@property (nonatomic,copy) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * balance;              //@synthesize balance=_balance - In the implementation block
@property (nonatomic,copy) NSString * currency;                    //@synthesize currency=_currency - In the implementation block
@property (assign,nonatomic) long long exponent;                   //@synthesize exponent=_exponent - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) BOOL isCurrency; 
+(BOOL)supportsSecureCoding;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDecimalNumber *)balance;
-(void)setBalance:(NSDecimalNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)currency;
-(id)initWithDictionary:(id)arg1 ;
-(long long)exponent;
-(BOOL)isCurrency;
-(void)setExponent:(long long)arg1 ;
-(id)description;
-(NSDate *)expirationDate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setCurrency:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToBalance:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_setIdentifierFromObject:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 balance:(id)arg2 currency:(id)arg3 exponent:(long long)arg4 expirationDate:(id)arg5 ;
@end

