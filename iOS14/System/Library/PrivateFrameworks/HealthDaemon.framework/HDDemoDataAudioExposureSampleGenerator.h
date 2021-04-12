/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class NSDate;

@interface HDDemoDataAudioExposureSampleGenerator : HDDemoDataBaseSampleGenerator {

	BOOL _didGenerateEnvironmentalAudioExposureSamples;
	BOOL _didGenerateHeadphoneAudioExposureSamples;
	double _nextEnvironmentalAudioExposureSampleTime;
	NSDate* _lastEnvironmentalSampleEndDate;
	double _nextHeadphoneAudioExposureSampleTime;
	NSDate* _lastHeadphoneSampleEndDate;

}

@property (assign,nonatomic) double nextEnvironmentalAudioExposureSampleTime;                //@synthesize nextEnvironmentalAudioExposureSampleTime=_nextEnvironmentalAudioExposureSampleTime - In the implementation block
@property (assign,nonatomic) BOOL didGenerateEnvironmentalAudioExposureSamples;              //@synthesize didGenerateEnvironmentalAudioExposureSamples=_didGenerateEnvironmentalAudioExposureSamples - In the implementation block
@property (nonatomic,retain) NSDate * lastEnvironmentalSampleEndDate;                        //@synthesize lastEnvironmentalSampleEndDate=_lastEnvironmentalSampleEndDate - In the implementation block
@property (assign,nonatomic) double nextHeadphoneAudioExposureSampleTime;                    //@synthesize nextHeadphoneAudioExposureSampleTime=_nextHeadphoneAudioExposureSampleTime - In the implementation block
@property (assign,nonatomic) BOOL didGenerateHeadphoneAudioExposureSamples;                  //@synthesize didGenerateHeadphoneAudioExposureSamples=_didGenerateHeadphoneAudioExposureSamples - In the implementation block
@property (nonatomic,retain) NSDate * lastHeadphoneSampleEndDate;                            //@synthesize lastHeadphoneSampleEndDate=_lastHeadphoneSampleEndDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_makeAirPods;
-(id)_makeEarPods;
-(id)_makeBeatsHeadphones;
-(id)_makeUnknownHeadphones;
-(void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(double)nextEnvironmentalAudioExposureSampleTime;
-(BOOL)didGenerateEnvironmentalAudioExposureSamples;
-(double)nextHeadphoneAudioExposureSampleTime;
-(BOOL)didGenerateHeadphoneAudioExposureSamples;
-(NSDate *)lastHeadphoneSampleEndDate;
-(NSDate *)lastEnvironmentalSampleEndDate;
-(void)_generateEnvironmentalAudioExposureSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)_generateHeadphoneAudioExposureSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)setDidGenerateEnvironmentalAudioExposureSamples:(BOOL)arg1 ;
-(id)_makeNormallyDistributedAudioExposureLevelsWithCount:(unsigned long long)arg1 headphones:(BOOL)arg2 loudData:(BOOL)arg3 ;
-(id)_makeEnvironmentalSamplesWithType:(id)arg1 rawSampleValues:(id)arg2 sampleUnit:(id)arg3 initialSampleDate:(id)arg4 sampleDuration:(double)arg5 distanceBetweenSamples:(double)arg6 ;
-(void)setNextEnvironmentalAudioExposureSampleTime:(double)arg1 ;
-(void)setLastEnvironmentalSampleEndDate:(NSDate *)arg1 ;
-(void)setDidGenerateHeadphoneAudioExposureSamples:(BOOL)arg1 ;
-(id)_makeQuantitySeriesSamplesWithType:(id)arg1 rawSampleValues:(id)arg2 sampleUnit:(id)arg3 initialSampleDate:(id)arg4 sampleDuration:(double)arg5 distanceBetweenSamples:(double)arg6 demoPerson:(id)arg7 ;
-(id)_makeHeadphoneSamplesWithType:(id)arg1 rawSampleValues:(id)arg2 sampleUnit:(id)arg3 initialSampleDate:(id)arg4 sampleDuration:(double)arg5 distanceBetweenSamples:(double)arg6 demoPerson:(id)arg7 ;
-(void)setNextHeadphoneAudioExposureSampleTime:(double)arg1 ;
-(void)setLastHeadphoneSampleEndDate:(NSDate *)arg1 ;
-(id)_allPossibleAudioExposureLevels;
-(id)_randomlySelectedAudioExposureLevelFromPossibleValues:(id)arg1 ;
-(double)_randomlySelectedGaussianWithMean:(double)arg1 deviation:(double)arg2 ;
-(id)_headphoneProvenanceWithPerson:(id)arg1 ;
-(id)_headphoneAudioExposureMetadata;
-(id)_makeQuantitySampleWithType:(id)arg1 value:(id)arg2 unit:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 metadata:(id)arg6 ;
-(id)_makeAlertSampleWithStartDate:(id)arg1 endDate:(id)arg2 value:(id)arg3 limit:(id)arg4 ;
-(id)_dateComponentsByAddingHours:(long long)arg1 toDate:(id)arg2 ;
@end
