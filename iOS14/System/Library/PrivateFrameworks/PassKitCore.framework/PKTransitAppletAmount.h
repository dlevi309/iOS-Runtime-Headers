/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber;

@interface PKTransitAppletAmount : NSObject <NSCopying, NSSecureCoding> {

	NSString* _balanceIdentifier;
	NSString* _currency;
	long long _exponent;
	NSDecimalNumber* _amount;

}

@property (nonatomic,copy) NSString * balanceIdentifier;              //@synthesize balanceIdentifier=_balanceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * currency;                       //@synthesize currency=_currency - In the implementation block
@property (assign,nonatomic) long long exponent;                      //@synthesize exponent=_exponent - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                  //@synthesize amount=_amount - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)balanceIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)currency;
-(id)initWithDictionary:(id)arg1 ;
-(long long)exponent;
-(void)setExponent:(long long)arg1 ;
-(id)initWithAmount:(id)arg1 currency:(id)arg2 exponent:(long long)arg3 identifier:(id)arg4 ;
-(void)setBalanceIdentifier:(NSString *)arg1 ;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setCurrency:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

