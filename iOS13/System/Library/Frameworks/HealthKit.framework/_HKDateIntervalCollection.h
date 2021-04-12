/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)anchorDate;
-(NSDateComponents *)intervalComponents;
-(id)dateIntervalAtIndex:(long long)arg1 ;
-(id)dateIntervalContainingDate:(id)arg1 index:(long long*)arg2 ;
-(id)initWithAnchorDate:(id)arg1 intervalComponents:(id)arg2 ;
-(id)dateIntervalForIntervalsContainingInterval:(id)arg1 ;
@end

