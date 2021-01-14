/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKSampleType, NSDateInterval;

@interface HKSampleTypeChange : NSObject <NSSecureCoding> {

	BOOL _hasUnfrozenSeries;
	HKSampleType* _sampleType;
	double _startTime;
	double _endTime;
	long long _queryStrategy;

}

@property (nonatomic,readonly) double startTime;                                //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime;                                  //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) long long queryStrategy;                         //@synthesize queryStrategy=_queryStrategy - In the implementation block
@property (nonatomic,copy,readonly) HKSampleType * sampleType;                  //@synthesize sampleType=_sampleType - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) BOOL hasUnfrozenSeries;                          //@synthesize hasUnfrozenSeries=_hasUnfrozenSeries - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sampleTypeChangeWithSampleType:(id)arg1 dateInterval:(id)arg2 hasUnfrozenSeries:(BOOL)arg3 ;
-(NSDateInterval *)dateInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)queryStrategy;
-(void)_extendDateIntervalWithSample:(id)arg1 ;
-(id)_initWithSampleType:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 hasUnfrozenSeries:(BOOL)arg4 queryStrategy:(long long)arg5 ;
-(BOOL)hasUnfrozenSeries;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(double)endTime;
-(HKSampleType *)sampleType;
-(double)startTime;
-(BOOL)isEqual:(id)arg1 ;
@end

