/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSDateComponents;

@interface _HKDateIntervalCollection : NSObject <NSCopying, NSSecureCoding> {

	double _approximateIntervalDuration;
	NSDate* _anchorDate;
	NSDateComponents* _intervalComponents;

}

@property (nonatomic,copy,readonly) NSDate * anchorDate;                                //@synthesize anchorDate=_anchorDate - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * intervalComponents;              //@synthesize intervalComponents=_intervalComponents - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)anchorDate;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDateComponents *)intervalComponents;
-(id)dateIntervalAtIndex:(long long)arg1 ;
-(id)dateIntervalContainingDate:(id)arg1 index:(long long*)arg2 ;
-(id)initWithAnchorDate:(id)arg1 intervalComponents:(id)arg2 ;
-(id)dateIntervalForIntervalsContainingInterval:(id)arg1 ;
@end

