/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HKCodedObject.h>

@protocol NSObjectNSSecureCoding;
@class HKConcept, HKUCUMUnitDisplayConverter, NSString, HKCodedQuantity, HKRatioValue, HKMedicalDate, HKMedicalDateInterval, NSDateComponents, NSArray, HKCodedValueCollection;

@interface HKInspectableValue : NSObject <NSSecureCoding, NSCopying, HKCodedObject> {

	long long _valueType;
	id<NSObject><NSSecureCoding> _value;
	HKConcept* _concept;
	HKConcept* _dataAbsentReason;

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)inspectableValueWithCodedQuantity:(id)arg1 ;
+(id)inspectableValueWithNull;
+(id)inspectableValueWithString:(id)arg1 ;
+(id)inspectableValueWithValueType:(long long)arg1 value:(id)arg2 ;
+(id)inspectableValueWithRatio:(id)arg1 ;
+(id)inspectableValueWithMedicalDate:(id)arg1 ;
+(id)inspectableValueWithMedicalDateInterval:(id)arg1 ;
+(id)inspectableValueWithDateComponents:(id)arg1 ;
+(id)inspectableValueWithMedicalCodings:(id)arg1 ;
+(id)inspectableValueWithCodedValueCollection:(id)arg1 ;
+(id)inspectableValueWithDataAbsentReasonCodings:(id)arg1 ;
+(id)indexableKeyPathsWithPrefix:(id)arg1 ;
-(long long)valueType;
-(NSString *)unitString;
-(id)init;
-(HKConcept *)concept;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(HKRatioValue *)ratioValue;
-(id)_initWithValueType:(long long)arg1 value:(id)arg2 ;
-(void)_assertValueType;
-(id)_unitStringForCodedValueCollection:(id)arg1 ;
-(NSArray *)medicalCodings;
-(NSArray *)dataAbsentReasonCodings;
-(void)_assertValueClass:(Class)arg1 ;
-(HKMedicalDateInterval *)medicalDateIntervalValue;
-(HKMedicalDate *)medicalDateValue;
-(NSDateComponents *)dateComponentsValue;
-(void)_setDataAbsentReason:(id)arg1 ;
-(HKConcept *)dataAbsentReason;
-(NSString *)description;
-(unsigned long long)hash;
-(HKUCUMUnitDisplayConverter *)converter;
-(id)initWithCoder:(id)arg1 ;
-(void)_setConcept:(id)arg1 ;
-(HKCodedQuantity *)codedQuantityValue;
-(HKCodedValueCollection *)codedValueCollection;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSObject><NSSecureCoding>)value;
-(BOOL)isEqual:(id)arg1 ;
@end

