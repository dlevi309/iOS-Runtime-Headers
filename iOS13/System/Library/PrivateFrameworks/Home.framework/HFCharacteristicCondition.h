/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFCondition.h>

@class HMCharacteristic;

@interface HFCharacteristicCondition : HFCondition {

	HMCharacteristic* _characteristic;
	unsigned long long _operatorType;
	id _value;

}

@property (nonatomic,readonly) HMCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) unsigned long long operatorType;                //@synthesize operatorType=_operatorType - In the implementation block
@property (nonatomic,readonly) id value;                                       //@synthesize value=_value - In the implementation block
+(id)_characteristicPredicateInCompoundPredicate:(id)arg1 ;
+(id)_valuePredicateInCompoundPredicate:(id)arg1 ;
-(unsigned long long)operatorType;
-(id)value;
-(id)initWithPredicate:(id)arg1 ;
-(HMCharacteristic *)characteristic;
-(id)initWithCharacteristic:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3 ;
@end

