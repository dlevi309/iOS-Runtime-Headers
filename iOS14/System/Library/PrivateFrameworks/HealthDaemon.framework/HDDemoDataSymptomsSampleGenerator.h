/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@interface HDDemoDataSymptomsSampleGenerator : HDDemoDataBaseSampleGenerator {

	double _nextCommonColdSymptomsTime;
	double _nextFoodPoisoningSymptomsTime;
	double _nextSingleRandomSymptomTime;

}

@property (assign,nonatomic) double nextCommonColdSymptomsTime;                 //@synthesize nextCommonColdSymptomsTime=_nextCommonColdSymptomsTime - In the implementation block
@property (assign,nonatomic) double nextFoodPoisoningSymptomsTime;              //@synthesize nextFoodPoisoningSymptomsTime=_nextFoodPoisoningSymptomsTime - In the implementation block
@property (assign,nonatomic) double nextSingleRandomSymptomTime;                //@synthesize nextSingleRandomSymptomTime=_nextSingleRandomSymptomTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setupWithDemoDataGenerator:(id)arg1 ;
-(void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(double)nextCommonColdSymptomsTime;
-(double)nextFoodPoisoningSymptomsTime;
-(double)nextSingleRandomSymptomTime;
-(void)generateSingleSymptomSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)generateSymptomSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 nextTime:(double)arg4 condition:(long long)arg5 sampleTypes:(id)arg6 frequency:(double)arg7 objectCollection:(id)arg8 ;
-(void)setNextCommonColdSymptomsTime:(double)arg1 ;
-(void)setNextFoodPoisoningSymptomsTime:(double)arg1 ;
-(void)setNextSingleRandomSymptomTime:(double)arg1 ;
@end

