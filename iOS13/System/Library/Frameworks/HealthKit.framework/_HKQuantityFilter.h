/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class HKQuantity, HKQuantityType;

@interface _HKQuantityFilter : _HKFilter {

	HKQuantity* _comparisonQuantity;
	HKQuantityType* _dataType;
	unsigned long long _operatorType;

}

@property (nonatomic,readonly) HKQuantity * comparisonQuantity;              //@synthesize comparisonQuantity=_comparisonQuantity - In the implementation block
@property (nonatomic,readonly) HKQuantityType * dataType;                    //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) unsigned long long operatorType;              //@synthesize operatorType=_operatorType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(id)filterWithOperatorType:(unsigned long long)arg1 comparisonQuantity:(id)arg2 dataType:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)operatorType;
-(HKQuantityType *)dataType;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(BOOL)acceptsDataObjectWithStartTimestamp:(double)arg1 endTimestamp:(double)arg2 valueInCanonicalUnit:(double)arg3 ;
-(HKQuantity *)comparisonQuantity;
@end

