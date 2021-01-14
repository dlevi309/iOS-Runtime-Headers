/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PKCurrencyAmount, NSDecimalNumber;

@interface PKPaymentTransactionRewardsItem : NSObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	unsigned long long _type;
	unsigned long long _state;
	PKCurrencyAmount* _currencyAmount;
	NSDecimalNumber* _eligibleValue;
	unsigned long long _eligibleValueUnit;

}

@property (nonatomic,retain) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long state;                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * currencyAmount;                 //@synthesize currencyAmount=_currencyAmount - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * eligibleValue;                   //@synthesize eligibleValue=_eligibleValue - In the implementation block
@property (assign,nonatomic) unsigned long long eligibleValueUnit;              //@synthesize eligibleValueUnit=_eligibleValueUnit - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(id)description;
-(NSDecimalNumber *)eligibleValue;
-(void)_initWithRewardsDictionary:(id)arg1 ;
-(BOOL)isEqualToRewardsItem:(id)arg1 ;
-(void)setEligibleValue:(NSDecimalNumber *)arg1 ;
-(unsigned long long)eligibleValueUnit;
-(void)setEligibleValueUnit:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(id)jsonDictionaryRepresentation;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

