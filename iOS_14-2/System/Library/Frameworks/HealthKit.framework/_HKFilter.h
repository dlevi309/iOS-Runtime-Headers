/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _HKFilter : NSObject <NSSecureCoding, NSCopying>
+(BOOL)supportsSecureCoding;
+(BOOL)filter:(id)arg1 acceptsDataObject:(id)arg2 ;
+(BOOL)filter:(id)arg1 acceptsActivitySummary:(id)arg2 ;
+(BOOL)filter:(id)arg1 acceptsDataObjectWithStartTimestamp:(double)arg2 endTimestamp:(double)arg3 valueInCanonicalUnit:(double)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)acceptsActivitySummary:(id)arg1 ;
-(long long)acceptsDataObjectWithStartTimestamp:(double)arg1 endTimestamp:(double)arg2 valueInCanonicalUnit:(double)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

