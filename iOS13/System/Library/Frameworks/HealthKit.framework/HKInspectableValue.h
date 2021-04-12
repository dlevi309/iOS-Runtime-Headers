/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSObjectNSSecureCoding;
@class HKUCUMUnitDisplayConverter, NSString, HKCodedQuantity, HKRatioValue, HKMedicalDate, HKMedicalDateInterval, NSDateComponents, NSArray, HKCodedValueCollection, HKConcept;

@interface HKInspectableValue : NSObject <NSSecureCoding, NSCopying> {

	long long _valueType;
	id<NSObject><NSSecureCoding> _value;

}

@property (nonatomic,readonly) HKUCUMUnitDisplayConverter * converter; 
@property (nonatomic,readonly) id<NSObject><NSSecureCoding> value; 
@property (nonatomic,readonly) long long valueType;                                                //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) HKCodedQuantity * codedQuantityValue; 
@property (nonatomic,copy,readonly) HKRatioValue * ratioValue; 
@property (nonatomic,copy,readonly) HKMedicalDate * medicalDateValue; 
@property (nonatomic,copy,readonly) HKMedicalDateInterval * medicalDateIntervalValue; 
@property (nonatomic,copy,readonly) NSDateComponents * dateComponentsValue; 
@property (nonatomic,copy,readonly) NSArray * medicalCodings; 
@property (nonatomic,copy,readonly) HKCodedValueCollection * codedValueCollection; 
@property (nonatomic,copy,readonly) NSArray * dataAbsentReasonCodings; 
@property (nonatomic,copy,readonly) HKConcept * concept; 
@property (nonatomic,copy,readonly) HKConcept * dataAbsentReason; 
@property (nonatomic,readonly) NSString * unitString; 
+(BOOL)supportsSecureCoding;
+(id)inspectableValueWithCodedQuantity:(id)arg1 ;
+(id)inspectableValueWithNull;
+(id)inspectableValueWithValueType:(long long)arg1 value:(id)arg2 ;
+(id)inspectableValueWithString:(id)arg1 ;
+(id)inspectableValueWithRatio:(id)arg1 ;
+(id)inspectableValueWithMedicalDate:(id)arg1 ;
+(id)inspectableValueWithMedicalDateInterval:(id)arg1 ;
+(id)inspectableValueWithDateComponents:(id)arg1 ;
+(id)inspectableValueWithMedicalCodings:(id)arg1 ;
+(id)inspectableValueWithCodedValueCollection:(id)arg1 ;
+(id)inspectableValueWithDataAbsentReasonCodings:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id<NSObject><NSSecureCoding>)value;
-(HKUCUMUnitDisplayConverter *)converter;
-(long long)valueType;
-(NSString *)unitString;
-(HKCodedQuantity *)codedQuantityValue;
-(HKCodedValueCollection *)codedValueCollection;
-(HKConcept *)concept;
-(id)_initWithValueType:(long long)arg1 value:(id)arg2 ;
-(void)_assertValueType;
-(id)_unitStringForCodedValueCollection:(id)arg1 ;
-(HKRatioValue *)ratioValue;
-(NSArray *)medicalCodings;
-(NSArray *)dataAbsentReasonCodings;
-(void)_assertValueClass:(Class)arg1 ;
-(HKMedicalDate *)medicalDateValue;
-(HKMedicalDateInterval *)medicalDateIntervalValue;
-(NSDateComponents *)dateComponentsValue;
-(HKConcept *)dataAbsentReason;
@end

