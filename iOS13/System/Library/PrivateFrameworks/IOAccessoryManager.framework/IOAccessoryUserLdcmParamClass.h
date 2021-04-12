/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(unsigned long long)minVhiDurationSec;
-(void)setMinVhiDurationSec:(unsigned long long)arg1 ;
-(unsigned long long)maxVhiDurationSec;
-(void)setMaxVhiDurationSec:(unsigned long long)arg1 ;
-(unsigned long long)maxUpFluctuationMv;
-(void)setMaxUpFluctuationMv:(unsigned long long)arg1 ;
-(int)userBehaviorMask;
-(void)setUserBehaviorMask:(int)arg1 ;
-(int)fdpBehaviorMask;
-(void)setFdpBehaviorMask:(int)arg1 ;
-(unsigned long long)numEisHalogenSamples;
-(void)setNumEisHalogenSamples:(unsigned long long)arg1 ;
-(unsigned long long)wetPollingIntervalSec;
-(void)setWetPollingIntervalSec:(unsigned long long)arg1 ;
-(unsigned long long)dryPollingIntervalSec;
-(void)setDryPollingIntervalSec:(unsigned long long)arg1 ;
-(unsigned long long)ldcmArbiterRetrySec;
-(void)setLdcmArbiterRetrySec:(unsigned long long)arg1 ;
-(unsigned long long)ldcmStartMeasurementsDelayMs;
-(void)setLdcmStartMeasurementsDelayMs:(unsigned long long)arg1 ;
-(unsigned long long)ldcmStartMeasurementsRetryMs;
-(void)setLdcmStartMeasurementsRetryMs:(unsigned long long)arg1 ;
-(unsigned long long)minDryReadings;
-(void)setMinDryReadings:(unsigned long long)arg1 ;
-(unsigned long long)enableHalogenSnrTtr;
-(void)setEnableHalogenSnrTtr:(unsigned long long)arg1 ;
-(unsigned long long)enableHalogenMitigationsAndUI;
-(void)setEnableHalogenMitigationsAndUI:(unsigned long long)arg1 ;
-(double)wetTransitionCapacitanceThreshold;
-(void)setWetTransitionCapacitanceThreshold:(double)arg1 ;
-(double)dryTransitionCapacitanceThreshold;
-(void)setDryTransitionCapacitanceThreshold:(double)arg1 ;
@end

