/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKInspectableValue, HKInspectableValueCollection, NSString, NSDate;

@interface HKInspectableValueInRange : NSObject <NSSecureCoding> {

	HKInspectableValue* _lowValue;
	HKInspectableValue* _highValue;
	HKInspectableValueCollection* _currentValue;
	NSString* _unitString;
	NSDate* _date;

}

@property (nonatomic,readonly) HKInspectableValue * lowValue;                            //@synthesize lowValue=_lowValue - In the implementation block
@property (nonatomic,readonly) HKInspectableValue * highValue;                           //@synthesize highValue=_highValue - In the implementation block
@property (nonatomic,readonly) HKInspectableValueCollection * currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * unitString;                               //@synthesize unitString=_unitString - In the implementation block
@property (nonatomic,readonly) double lowValueDoubleRepresentation; 
@property (nonatomic,readonly) double highValueDoubleRepresentation; 
@property (nonatomic,readonly) long long currentValueRelation; 
@property (nonatomic,readonly) BOOL hasRenderableContent; 
@property (nonatomic,retain) NSDate * date;                                              //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)valueInRangeWithLow:(id)arg1 high:(id)arg2 currentValue:(id)arg3 unit:(id)arg4 ;
-(NSString *)unitString;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(HKInspectableValue *)lowValue;
-(id)description;
-(void)_assertValidRange;
-(id)_initValueInRangeWithLow:(id)arg1 high:(id)arg2 currentValue:(id)arg3 unit:(id)arg4 ;
-(double)_doubleForValue:(id)arg1 ;
-(long long)currentValueRelation;
-(double)lowValueDoubleRepresentation;
-(double)highValueDoubleRepresentation;
-(BOOL)hasRenderableContent;
-(double)_doubleForValueCollection:(id)arg1 ;
-(void)_setUnitString:(id)arg1 ;
-(HKInspectableValue *)highValue;
-(id)initWithCoder:(id)arg1 ;
-(HKInspectableValueCollection *)currentValue;
-(NSDate *)date;
@end

