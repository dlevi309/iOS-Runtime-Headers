/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@interface HDDemoDataMindfulnessSampleGenerator : HDDemoDataBaseSampleGenerator {

	BOOL _didGenerateMindfulnessMinute;
	double _nextMindfulSessionSampleTime;

}

@property (assign,nonatomic) double nextMindfulSessionSampleTime;              //@synthesize nextMindfulSessionSampleTime=_nextMindfulSessionSampleTime - In the implementation block
@property (assign,nonatomic) BOOL didGenerateMindfulnessMinute;                //@synthesize didGenerateMindfulnessMinute=_didGenerateMindfulnessMinute - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setupWithDemoDataGenerator:(id)arg1 ;
-(void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(double)nextMindfulSessionSampleTime;
-(BOOL)didGenerateMindfulnessMinute;
-(id)_mindfulSessionSampleForDemoPerson:(id)arg1 atTime:(double)arg2 startDate:(id)arg3 ;
-(id)_heartRatesFromMindfulSessionSample:(id)arg1 demoPerson:(id)arg2 atTime:(double)arg3 ;
-(void)setDidGenerateMindfulnessMinute:(BOOL)arg1 ;
-(void)setNextMindfulSessionSampleTime:(double)arg1 ;
@end

