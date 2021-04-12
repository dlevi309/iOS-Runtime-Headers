/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)hk_quantityWithSeconds:(id)arg1 ;
+(id)hk_quantityWithMinutes:(id)arg1 ;
+(id)_quantityWithBeatsPerMinute:(double)arg1 ;
-(id)_unit;
-(long long)compare:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isZero;
-(id)description;
-(BOOL)isCompatibleWithUnit:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(double)_value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)doubleValueForUnit:(id)arg1 ;
-(id)hk_secondsNumber;
-(id)hk_minutesNumber;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithUnit:(id)arg1 doubleValue:(double)arg2 ;
-(double)_valueScaledForDisplay;
-(double)_beatsPerMinute;
-(id)_quantityByAddingQuantity:(id)arg1 ;
-(id)_foundationMeasurement;
-(BOOL)hk_isLessThanQuantity:(id)arg1 ;
-(BOOL)hk_isGreaterThanQuantity:(id)arg1 ;
@end

