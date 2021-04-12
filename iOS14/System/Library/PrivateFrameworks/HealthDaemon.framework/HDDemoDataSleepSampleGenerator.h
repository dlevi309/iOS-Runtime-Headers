/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@interface HDDemoDataSleepSampleGenerator : HDDemoDataBaseSampleGenerator {

	double _nextSleepDurationSampleTime;

}

@property (assign,nonatomic) double nextSleepDurationSampleTime;              //@synthesize nextSleepDurationSampleTime=_nextSleepDurationSampleTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setupWithDemoDataGenerator:(id)arg1 ;
-(void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(double)computeSleepTimeFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3 ;
-(BOOL)isDemoPersonSleeping:(id)arg1 atTime:(double)arg2 ;
-(BOOL)isDemoPersonAwake:(id)arg1 atTime:(double)arg2 ;
-(void)_generateHeartRateDataForSleepSamples:(id)arg1 objectCollection:(id)arg2 demoPerson:(id)arg3 ;
-(double)computeAwakeTimeForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(double)nextSleepDurationSampleTime;
-(void)setNextSleepDurationSampleTime:(double)arg1 ;
@end

