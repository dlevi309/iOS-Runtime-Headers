/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@interface HDDemoDataOtherAndAdditionalSampleGenerator : HDDemoDataBaseSampleGenerator {

	double _nextToothbrushingSampleTime;

}

@property (assign,nonatomic) double nextToothbrushingSampleTime;              //@synthesize nextToothbrushingSampleTime=_nextToothbrushingSampleTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(id)_dateComponentsByAddingHours:(long long)arg1 toDate:(id)arg2 ;
-(double)nextToothbrushingSampleTime;
-(void)_generateToothbrushingSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(id)_morningDateFromDate:(id)arg1 calendar:(id)arg2 ;
-(id)_eveningDateFromDate:(id)arg1 calendar:(id)arg2 ;
-(id)_generateToothbrushingSampleForDate:(id)arg1 ;
-(void)setNextToothbrushingSampleTime:(double)arg1 ;
@end

