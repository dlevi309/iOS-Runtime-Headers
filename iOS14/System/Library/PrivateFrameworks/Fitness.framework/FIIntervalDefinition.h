/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
*/

#import <libobjc.A.dylib/FIDictionaryRepresentable.h>

@class HKQuantity;

@interface FIIntervalDefinition : NSObject <FIDictionaryRepresentable> {

	long long _type;
	HKQuantity* _quantity;

}

@property (nonatomic,readonly) long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) HKQuantity * quantity;              //@synthesize quantity=_quantity - In the implementation block
+(id)intervalDefinitionWithTypeIdentifier:(long long)arg1 quantity:(id)arg2 ;
+(id)definitionFromDictionary:(id)arg1 error:(id*)arg2 ;
-(id)dictionaryRepresentation;
-(HKQuantity *)quantity;
-(long long)type;
-(id)initWithTypeIdentifier:(long long)arg1 quantity:(id)arg2 ;
-(id)byChangingType:(long long)arg1 quantity:(id)arg2 ;
@end

