/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(HKInspectableValueCollection *)currentValue;
-(NSString *)unitString;
-(void)_assertValidRange;
-(id)_initValueInRangeWithLow:(id)arg1 high:(id)arg2 currentValue:(id)arg3 unit:(id)arg4 ;
-(HKInspectableValue *)lowValue;
-(HKInspectableValue *)highValue;
-(double)_doubleForValue:(id)arg1 ;
-(double)lowValueDoubleRepresentation;
-(double)highValueDoubleRepresentation;
-(long long)currentValueRelation;
-(BOOL)hasRenderableContent;
-(double)_doubleForValueCollection:(id)arg1 ;
-(void)_setUnitString:(id)arg1 ;
@end

