/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class NSString, HKQuantityType, HKQuantity;

@interface _HKDiscreteQuantitySampleQuantityFilter : _HKFilter {

	NSString* _keyPath;
	unsigned long long _operatorType;
	HKQuantityType* _quantityType;
	HKQuantity* _comparisonQuantity;

}

@property (nonatomic,copy,readonly) NSString * keyPath;                           //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) unsigned long long operatorType;                   //@synthesize operatorType=_operatorType - In the implementation block
@property (nonatomic,copy,readonly) HKQuantityType * quantityType;                //@synthesize quantityType=_quantityType - In the implementation block
@property (nonatomic,copy,readonly) HKQuantity * comparisonQuantity;              //@synthesize comparisonQuantity=_comparisonQuantity - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(id)_allowedKeyPaths;
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 comparisonQuantity:(id)arg3 quantityType:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)operatorType;
-(NSString *)keyPath;
-(HKQuantityType *)quantityType;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(HKQuantity *)comparisonQuantity;
-(id)_quantityFromQuantitySample:(id)arg1 ;
@end

