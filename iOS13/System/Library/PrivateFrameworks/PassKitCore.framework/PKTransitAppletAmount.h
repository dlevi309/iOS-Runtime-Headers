/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber;

@interface PKTransitAppletAmount : NSObject <NSCopying, NSSecureCoding> {

	NSString* _currency;
	long long _exponent;
	NSDecimalNumber* _amount;

}

@property (nonatomic,copy) NSString * currency;                   //@synthesize currency=_currency - In the implementation block
@property (assign,nonatomic) long long exponent;                  //@synthesize exponent=_exponent - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;              //@synthesize amount=_amount - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(long long)exponent;
-(void)setExponent:(long long)arg1 ;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(id)initWithAmount:(id)arg1 currency:(id)arg2 exponent:(long long)arg3 ;
@end

