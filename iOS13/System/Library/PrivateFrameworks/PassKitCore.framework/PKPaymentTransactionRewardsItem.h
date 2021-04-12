/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(id)jsonDictionaryRepresentation;
-(void)_initWithRewardsDictionary:(id)arg1 ;
-(BOOL)isEqualToRewardsItem:(id)arg1 ;
-(NSDecimalNumber *)eligibleValue;
-(void)setEligibleValue:(NSDecimalNumber *)arg1 ;
-(unsigned long long)eligibleValueUnit;
-(void)setEligibleValueUnit:(unsigned long long)arg1 ;
@end

