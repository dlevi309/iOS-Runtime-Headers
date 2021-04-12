/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
*/


@interface IOAccessoryUserLdcmParamClass : NSObject {

	int _userBehaviorMask;
	int _fdpBehaviorMask;
	unsigned long long _minVhiDurationSec;
	unsigned long long _maxVhiDurationSec;
	unsigned long long _maxUpFluctuationMv;
	unsigned long long _numEisHalogenSamples;
	unsigned long long _wetPollingIntervalSec;
	unsigned long long _dryPollingIntervalSec;
	unsigned long long _ldcmArbiterRetrySec;
	unsigned long long _ldcmStartMeasurementsDelayMs;
	unsigned long long _ldcmStartMeasurementsRetryMs;
	unsigned long long _minDryReadings;
	unsigned long long _enableHalogenSnrTtr;
	unsigned long long _enableHalogenMitigationsAndUI;
	double _wetTransitionCapacitanceThreshold;
	double _dryTransitionCapacitanceThreshold;

}

@property (assign) unsigned long long minVhiDurationSec;                          //@synthesize minVhiDurationSec=_minVhiDurationSec - In the implementation block
@property (assign) unsigned long long maxVhiDurationSec;                          //@synthesize maxVhiDurationSec=_maxVhiDurationSec - In the implementation block
@property (assign) unsigned long long maxUpFluctuationMv;                         //@synthesize maxUpFluctuationMv=_maxUpFluctuationMv - In the implementation block
@property (assign) int userBehaviorMask;                                          //@synthesize userBehaviorMask=_userBehaviorMask - In the implementation block
@property (assign) int fdpBehaviorMask;                                           //@synthesize fdpBehaviorMask=_fdpBehaviorMask - In the implementation block
@property (assign) unsigned long long numEisHalogenSamples;                       //@synthesize numEisHalogenSamples=_numEisHalogenSamples - In the implementation block
@property (assign) unsigned long long wetPollingIntervalSec;                      //@synthesize wetPollingIntervalSec=_wetPollingIntervalSec - In the implementation block
@property (assign) unsigned long long dryPollingIntervalSec;                      //@synthesize dryPollingIntervalSec=_dryPollingIntervalSec - In the implementation block
@property (assign) unsigned long long ldcmArbiterRetrySec;                        //@synthesize ldcmArbiterRetrySec=_ldcmArbiterRetrySec - In the implementation block
@property (assign) unsigned long long ldcmStartMeasurementsDelayMs;               //@synthesize ldcmStartMeasurementsDelayMs=_ldcmStartMeasurementsDelayMs - In the implementation block
@property (assign) unsigned long long ldcmStartMeasurementsRetryMs;               //@synthesize ldcmStartMeasurementsRetryMs=_ldcmStartMeasurementsRetryMs - In the implementation block
@property (assign) unsigned long long minDryReadings;                             //@synthesize minDryReadings=_minDryReadings - In the implementation block
@property (assign) unsigned long long enableHalogenSnrTtr;                        //@synthesize enableHalogenSnrTtr=_enableHalogenSnrTtr - In the implementation block
@property (assign) unsigned long long enableHalogenMitigationsAndUI;              //@synthesize enableHalogenMitigationsAndUI=_enableHalogenMitigationsAndUI - In the implementation block
@property (assign) double wetTransitionCapacitanceThreshold;                      //@synthesize wetTransitionCapacitanceThreshold=_wetTransitionCapacitanceThreshold - In the implementation block
@property (assign) double dryTransitionCapacitanceThreshold;                      //@synthesize dryTransitionCapacitanceThreshold=_dryTransitionCapacitanceThreshold - In the implementation block
-(void)setLdcmStartMeasurementsRetryMs:(unsigned long long)arg1 ;
-(unsigned long long)minVhiDurationSec;
-(unsigned long long)ldcmStartMeasurementsDelayMs;
-(void)setLdcmArbiterRetrySec:(unsigned long long)arg1 ;
-(id)init;
-(int)fdpBehaviorMask;
-(void)setWetTransitionCapacitanceThreshold:(double)arg1 ;
-(unsigned long long)enableHalogenMitigationsAndUI;
-(int)userBehaviorMask;
-(unsigned long long)minDryReadings;
-(unsigned long long)maxUpFluctuationMv;
-(unsigned long long)numEisHalogenSamples;
-(void)setMinDryReadings:(unsigned long long)arg1 ;
-(double)wetTransitionCapacitanceThreshold;
-(void)setEnableHalogenMitigationsAndUI:(unsigned long long)arg1 ;
-(unsigned long long)ldcmArbiterRetrySec;
-(void)setMaxVhiDurationSec:(unsigned long long)arg1 ;
-(void)setMinVhiDurationSec:(unsigned long long)arg1 ;
-(double)dryTransitionCapacitanceThreshold;
-(unsigned long long)ldcmStartMeasurementsRetryMs;
-(void)setFdpBehaviorMask:(int)arg1 ;
-(void)setWetPollingIntervalSec:(unsigned long long)arg1 ;
-(void)setUserBehaviorMask:(int)arg1 ;
-(void)setDryPollingIntervalSec:(unsigned long long)arg1 ;
-(unsigned long long)dryPollingIntervalSec;
-(unsigned long long)maxVhiDurationSec;
-(void)setDryTransitionCapacitanceThreshold:(double)arg1 ;
-(void)setEnableHalogenSnrTtr:(unsigned long long)arg1 ;
-(void)setMaxUpFluctuationMv:(unsigned long long)arg1 ;
-(unsigned long long)enableHalogenSnrTtr;
-(void)setLdcmStartMeasurementsDelayMs:(unsigned long long)arg1 ;
-(void)setNumEisHalogenSamples:(unsigned long long)arg1 ;
-(unsigned long long)wetPollingIntervalSec;
@end

