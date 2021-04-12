/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _HKFilter : NSObject <NSSecureCoding, NSCopying>
+(BOOL)supportsSecureCoding;
+(id)compoundFilterWithFilter:(id)arg1 otherFilter:(id)arg2 ;
+(id)filterByCombiningFilters:(id)arg1 compoundType:(unsigned long long)arg2 ;
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(BOOL)filter:(id)arg1 acceptsDataObject:(id)arg2 ;
+(id)trueFilter;
+(id)falseFilter;
+(BOOL)filter:(id)arg1 acceptsActivitySummary:(id)arg2 ;
+(BOOL)filter:(id)arg1 acceptsDataObjectWithStartTimestamp:(double)arg2 endTimestamp:(double)arg3 valueInCanonicalUnit:(double)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(BOOL)acceptsActivitySummary:(id)arg1 ;
-(BOOL)acceptsDataObjectWithStartTimestamp:(double)arg1 endTimestamp:(double)arg2 valueInCanonicalUnit:(double)arg3 ;
-(id)_subfilters;
-(id)filterByApplyingTransformation:(/*^block*/id)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 subfilters:(id)arg2 ;
@end

