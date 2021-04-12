/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKTransactionAmount, NSString;

@interface PKPaymentTransactionAmountModifier : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	long long _order;
	PKTransactionAmount* _amount;
	NSString* _modifierDescription;
	NSString* _typeString;

}

@property (nonatomic,copy) NSString * typeString;                       //@synthesize typeString=_typeString - In the implementation block
@property (assign,nonatomic) long long type;                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long order;                           //@synthesize order=_order - In the implementation block
@property (nonatomic,copy) PKTransactionAmount * amount;                //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * modifierDescription;              //@synthesize modifierDescription=_modifierDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)typeString;
-(id)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setAmount:(PKTransactionAmount *)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(PKTransactionAmount *)amount;
-(void)setModifierDescription:(NSString *)arg1 ;
-(NSString *)modifierDescription;
-(BOOL)isEqualToPaymentTransactionAmountModifier:(id)arg1 ;
-(void)setTypeString:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)order;
-(void)setOrder:(long long)arg1 ;
@end

