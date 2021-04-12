/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(long long)exponent;
-(void)setExponent:(long long)arg1 ;
-(NSDecimalNumber *)balance;
-(void)setBalance:(NSDecimalNumber *)arg1 ;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(BOOL)isCurrency;
-(void)_setIdentifierFromObject:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 balance:(id)arg2 currency:(id)arg3 exponent:(long long)arg4 expirationDate:(id)arg5 ;
@end

