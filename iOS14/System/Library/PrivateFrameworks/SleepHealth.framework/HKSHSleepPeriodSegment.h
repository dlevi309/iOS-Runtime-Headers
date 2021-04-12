/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealth.framework/SleepHealth
*/

#import <SleepHealth/SleepHealth-Structs.h>
#import <libobjc.A.dylib/HKRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDateInterval, NSArray;

@interface HKSHSleepPeriodSegment : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying> {

	NSDateInterval* _dateInterval;
	NSArray* _sampleIntervals;
	long long _category;

}

@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sampleIntervals;                  //@synthesize sampleIntervals=_sampleIntervals - In the implementation block
@property (nonatomic,readonly) long long category;                              //@synthesize category=_category - In the implementation block
@property (copy,readonly) NSString * hk_redactedDescription; 
+(BOOL)supportsSecureCoding;
+(id)sleepPeriodSegmentWithDateInterval:(id)arg1 sampleIntervals:(id)arg2 category:(long long)arg3 ;
+(id)sleepPeriodSegmentWithDateInterval:(id)arg1 category:(long long)arg2 ;
-(NSDateInterval *)dateInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)category;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)hk_redactedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)sampleIntervals;
@end

