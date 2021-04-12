/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealth.framework/SleepHealth
*/

#import <SleepHealth/SleepHealth-Structs.h>
#import <libobjc.A.dylib/HKRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateInterval, NSArray, NSString;

@interface HKSHSleepPeriod : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying> {

	NSDateInterval* _dateInterval;
	NSArray* _segments;

}

@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSArray * segments;                         //@synthesize segments=_segments - In the implementation block
@property (copy,readonly) NSString * hk_redactedDescription; 
+(BOOL)supportsSecureCoding;
+(id)sleepPeriodWithDateInterval:(id)arg1 segments:(id)arg2 ;
-(NSDateInterval *)dateInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)segments;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)hk_redactedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)durationForCategory:(long long)arg1 overlappingDateInterval:(id)arg2 ;
@end

