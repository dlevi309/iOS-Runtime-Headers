/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class HDProfile;

@interface HDDemoDataHeartSampleGenerator : HDDemoDataBaseSampleGenerator {

	HDProfile* _profile;
	double _nextElectrocardiogramSampleTime;
	unsigned long long _nextElectrocardiogramClassification;
	double _nextRestingHeartRateSampleTime;
	double _nextWalkingHeartRateAverageSampleTime;
	double _lastRestingHeartRate;
	double _lastWalkingHeartRateAverage;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                          //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic) double nextElectrocardiogramSampleTime;                              //@synthesize nextElectrocardiogramSampleTime=_nextElectrocardiogramSampleTime - In the implementation block
@property (assign,nonatomic) unsigned long long nextElectrocardiogramClassification;              //@synthesize nextElectrocardiogramClassification=_nextElectrocardiogramClassification - In the implementation block
@property (assign,nonatomic) double nextRestingHeartRateSampleTime;                               //@synthesize nextRestingHeartRateSampleTime=_nextRestingHeartRateSampleTime - In the implementation block
@property (assign,nonatomic) double nextWalkingHeartRateAverageSampleTime;                        //@synthesize nextWalkingHeartRateAverageSampleTime=_nextWalkingHeartRateAverageSampleTime - In the implementation block
@property (assign,nonatomic) double lastRestingHeartRate;                                         //@synthesize lastRestingHeartRate=_lastRestingHeartRate - In the implementation block
@property (assign,nonatomic) double lastWalkingHeartRateAverage;                                  //@synthesize lastWalkingHeartRateAverage=_lastWalkingHeartRateAverage - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(HDProfile *)profile;
-(id)initWithCoder:(id)arg1 ;
-(void)generateFirstRunSampleForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3 ;
-(void)setupWithDemoDataGenerator:(id)arg1 ;
-(void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)setProfile:(id)arg1 provenance:(id)arg2 ;
-(id)restingHeartRateForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(id)walkingHeartRateAverageForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(id)electrocardiogramForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 ;
-(id)_generateSymptomSamplesForElectrocardiogram:(id)arg1 ;
-(double)_computeRestingHeartRateForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(double)_computeWalkingHeartRateAverageForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(id)_generateElectrocardiogramForDemoPerson:(id)arg1 atTime:(double)arg2 classification:(unsigned long long)arg3 sampleDate:(id)arg4 ;
-(double)nextElectrocardiogramSampleTime;
-(void)setNextElectrocardiogramSampleTime:(double)arg1 ;
-(unsigned long long)nextElectrocardiogramClassification;
-(void)setNextElectrocardiogramClassification:(unsigned long long)arg1 ;
-(double)nextRestingHeartRateSampleTime;
-(void)setNextRestingHeartRateSampleTime:(double)arg1 ;
-(double)nextWalkingHeartRateAverageSampleTime;
-(void)setNextWalkingHeartRateAverageSampleTime:(double)arg1 ;
-(double)lastRestingHeartRate;
-(void)setLastRestingHeartRate:(double)arg1 ;
-(double)lastWalkingHeartRateAverage;
-(void)setLastWalkingHeartRateAverage:(double)arg1 ;
@end

