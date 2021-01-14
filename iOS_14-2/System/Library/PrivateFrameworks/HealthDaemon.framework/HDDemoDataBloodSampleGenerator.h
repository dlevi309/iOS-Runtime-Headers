/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@interface HDDemoDataBloodSampleGenerator : HDDemoDataBaseSampleGenerator {

	double _nextBloodAlcoholContentSampleTime;

}

@property (assign,nonatomic) double nextBloodAlcoholContentSampleTime;              //@synthesize nextBloodAlcoholContentSampleTime=_nextBloodAlcoholContentSampleTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setupWithDemoDataGenerator:(id)arg1 ;
-(void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(id)bloodAlcoholContentForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(double)_computeNumDrinksTodayForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(double)nextBloodAlcoholContentSampleTime;
-(void)setNextBloodAlcoholContentSampleTime:(double)arg1 ;
@end

