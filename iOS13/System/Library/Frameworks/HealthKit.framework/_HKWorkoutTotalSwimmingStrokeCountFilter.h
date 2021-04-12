/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class HKQuantity;

@interface _HKWorkoutTotalSwimmingStrokeCountFilter : _HKFilter {

	HKQuantity* _totalSwimmingStrokeCount;
	unsigned long long _operatorType;

}

@property (nonatomic,readonly) HKQuantity * totalSwimmingStrokeCount;              //@synthesize totalSwimmingStrokeCount=_totalSwimmingStrokeCount - In the implementation block
@property (nonatomic,readonly) unsigned long long operatorType;                    //@synthesize operatorType=_operatorType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(id)filterWithTotalSwimmingStrokeCount:(id)arg1 operatorType:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)operatorType;
-(HKQuantity *)totalSwimmingStrokeCount;
-(BOOL)acceptsDataObject:(id)arg1 ;
@end

