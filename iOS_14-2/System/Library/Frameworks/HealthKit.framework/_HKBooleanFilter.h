/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@interface _HKBooleanFilter : _HKFilter {

	BOOL _value;

}

@property (nonatomic,readonly) BOOL value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)trueFilter;
+(id)falseFilter;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithValue:(BOOL)arg1 ;
-(long long)acceptsActivitySummary:(id)arg1 ;
-(long long)acceptsDataObjectWithStartTimestamp:(double)arg1 endTimestamp:(double)arg2 valueInCanonicalUnit:(double)arg3 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)value;
-(BOOL)isEqual:(id)arg1 ;
@end

