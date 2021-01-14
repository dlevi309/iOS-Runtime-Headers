/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@interface HDDemoDataOtherAndAdditionalSampleGenerator : HDDemoDataBaseSampleGenerator {

	double _nextToothbrushingSampleTime;
	double _nextHandwashingSampleTime;

}

@property (assign,nonatomic) double nextToothbrushingSampleTime;              //@synthesize nextToothbrushingSampleTime=_nextToothbrushingSampleTime - In the implementation block
@property (assign,nonatomic) double nextHandwashingSampleTime;                //@synthesize nextHandwashingSampleTime=_nextHandwashingSampleTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(id)_dateComponentsByAddingHours:(long long)arg1 toDate:(id)arg2 ;
-(double)nextToothbrushingSampleTime;
-(double)nextHandwashingSampleTime;
-(void)_generateToothbrushingSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)_generateHandwashingSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(id)_morningDateFromDate:(id)arg1 calendar:(id)arg2 ;
-(id)_eveningDateFromDate:(id)arg1 calendar:(id)arg2 ;
-(id)_generateToothbrushingSampleForDate:(id)arg1 demoPerson:(id)arg2 atTime:(double)arg3 ;
-(void)setNextToothbrushingSampleTime:(double)arg1 ;
-(id)_generateHandwashingSampleForDate:(id)arg1 demoPerson:(id)arg2 atTime:(double)arg3 ;
-(void)setNextHandwashingSampleTime:(double)arg1 ;
@end

