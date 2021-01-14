/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class NSArray;

@interface _HKCompoundFilter : _HKFilter {

	unsigned long long _subfilterCount;
	unsigned long long _compoundPredicateType;
	NSArray* _subfilters;

}

@property (nonatomic,readonly) unsigned long long compoundPredicateType;              //@synthesize compoundPredicateType=_compoundPredicateType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * subfilters;                             //@synthesize subfilters=_subfilters - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)notFilterWithSubfilter:(id)arg1 ;
+(id)compoundFilterWithFilter:(id)arg1 otherFilter:(id)arg2 ;
+(id)andFilterWithSubfilters:(id)arg1 ;
+(id)orFilterWithSubfilters:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)acceptsActivitySummary:(id)arg1 ;
-(long long)acceptsDataObjectWithStartTimestamp:(double)arg1 endTimestamp:(double)arg2 valueInCanonicalUnit:(double)arg3 ;
-(unsigned long long)compoundPredicateType;
-(id)description;
-(NSArray *)subfilters;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 subfilters:(id)arg2 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

