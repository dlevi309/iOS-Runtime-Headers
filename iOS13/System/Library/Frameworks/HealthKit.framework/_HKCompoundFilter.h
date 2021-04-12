/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class NSArray;

@interface _HKCompoundFilter : _HKFilter {

	NSArray* _subfilters;
	unsigned long long _compoundType;

}

@property (nonatomic,copy,readonly) NSArray * subfilters;                    //@synthesize subfilters=_subfilters - In the implementation block
@property (nonatomic,readonly) unsigned long long compoundType;              //@synthesize compoundType=_compoundType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)filterWithSubfilters:(id)arg1 compoundType:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)compoundType;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(BOOL)acceptsActivitySummary:(id)arg1 ;
-(BOOL)acceptsDataObjectWithStartTimestamp:(double)arg1 endTimestamp:(double)arg2 valueInCanonicalUnit:(double)arg3 ;
-(id)_subfilters;
-(id)_copyWithZone:(NSZone*)arg1 subfilters:(id)arg2 ;
-(BOOL)_compoundFilterAcceptsObjectWithEvaluation:(/*^block*/id)arg1 ;
-(NSArray *)subfilters;
@end

