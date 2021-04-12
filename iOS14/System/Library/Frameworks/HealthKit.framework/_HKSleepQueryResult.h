/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/_HKDateBounded.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSDateInterval, NSString;

@interface _HKSleepQueryResult : NSObject <_HKDateBounded, NSSecureCoding> {

	NSDictionary* _resultsByCategoryValue;
	NSDictionary* _samplesBySource;
	NSDateInterval* _dateInterval;
	NSDateInterval* _resultInterval;

}

@property (nonatomic,readonly) NSDateInterval * resultInterval;                  //@synthesize resultInterval=_resultInterval - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * samplesBySource;              //@synthesize samplesBySource=_samplesBySource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)samplesForSamplesBySource:(id)arg1 ;
+(id)dateIntervalForSamples:(id)arg1 ;
+(id)_preferredSourceFromSources:(id)arg1 sourceOrder:(id)arg2 ;
-(id)dateInterval;
-(id)endDate;
-(id)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dateIntervalsForCategoryValue:(long long)arg1 ;
-(id)preferredDateIntervals;
-(NSDateInterval *)resultInterval;
-(id)initWithResultInterval:(id)arg1 dateIntervalsByCategoryValue:(id)arg2 samplesBySource:(id)arg3 ;
-(BOOL)_calculatePreferredDuration:(double*)arg1 categoryValue:(long long*)arg2 ;
-(NSDictionary *)samplesBySource;
@end

