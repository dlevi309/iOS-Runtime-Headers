/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)_computeSleepTimeFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3 ;
-(BOOL)_isDemoPersonSleeping:(id)arg1 atTime:(double)arg2 ;
-(BOOL)_isDemoPersonAwake:(id)arg1 atTime:(double)arg2 ;
-(id)sleepSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 startDate:(id)arg3 ;
-(double)_computeAwakeTimeForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(double)nextSleepDurationSampleTime;
-(void)setNextSleepDurationSampleTime:(double)arg1 ;
@end

