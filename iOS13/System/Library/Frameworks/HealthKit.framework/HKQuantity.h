/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKUnit;

@interface HKQuantity : NSObject <NSSecureCoding, NSCopying> {

	HKUnit* _unit;
	double _value;

}

@property (getter=_unit,nonatomic,readonly) HKUnit * unit;              //@synthesize unit=_unit - In the implementation block
@property (getter=_value,nonatomic,readonly) double value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)quantityWithUnit:(id)arg1 doubleValue:(double)arg2 ;
+(id)_quantityWithBeatsPerMinute:(double)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)_value;
-(id)_unit;
-(double)doubleValueForUnit:(id)arg1 ;
-(BOOL)isCompatibleWithUnit:(id)arg1 ;
-(id)_initWithUnit:(id)arg1 doubleValue:(double)arg2 ;
-(id)_quantityByAddingQuantity:(id)arg1 ;
-(BOOL)_isZero;
-(id)_foundationMeasurement;
-(BOOL)hk_isLessThanQuantity:(id)arg1 ;
-(BOOL)hk_isGreaterThanQuantity:(id)arg1 ;
-(double)_beatsPerMinute;
@end

