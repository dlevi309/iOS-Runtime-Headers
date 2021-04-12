/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDecimalNumber, NSString;

@interface PKInstallmentPlanLineItem : NSObject <NSSecureCoding, NSCopying> {

	long long _type;
	NSDecimalNumber* _amount;
	unsigned long long _duration;
	NSString* _itemDescription;
	long long _state;
	NSString* _identifier;
	NSDecimalNumber* _paymentsToDateAmount;

}

@property (assign,nonatomic) long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * amount;                            //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) unsigned long long duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * itemDescription;                            //@synthesize itemDescription=_itemDescription - In the implementation block
@property (assign,nonatomic) long long state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * paymentsToDateAmount;              //@synthesize paymentsToDateAmount=_paymentsToDateAmount - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setItemDescription:(NSString *)arg1 ;
-(BOOL)isEqualToInstallmentPlanLineItem:(id)arg1 ;
-(NSDecimalNumber *)paymentsToDateAmount;
-(void)setPaymentsToDateAmount:(NSDecimalNumber *)arg1 ;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(long long)type;
-(void)setState:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(NSDecimalNumber *)amount;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)itemDescription;
-(unsigned long long)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

