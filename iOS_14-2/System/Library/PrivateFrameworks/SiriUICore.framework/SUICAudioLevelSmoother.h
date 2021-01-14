/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/


@interface SUICAudioLevelSmoother : NSObject {

	float _minimumPower;
	float _maximumPower;
	long long _historyLength;
	long long _samplesSinceLastCleared;
	float* _runningPowerLevels;
	unsigned _powerPointer;
	float _previousLevel;
	float _attackVelocity;
	float _decayVelocity;
	BOOL _usesExponentialCurve;
	BOOL _usesAttackAndDecaySpeed;
	float _attackSpeed;
	float _decaySpeed;
	float _baseValue;
	float _exponentMultiplier;

}

@property (nonatomic,readonly) BOOL usesExponentialCurve;                 //@synthesize usesExponentialCurve=_usesExponentialCurve - In the implementation block
@property (nonatomic,readonly) BOOL usesAttackAndDecaySpeed;              //@synthesize usesAttackAndDecaySpeed=_usesAttackAndDecaySpeed - In the implementation block
@property (assign,nonatomic) float minimumPower;                          //@synthesize minimumPower=_minimumPower - In the implementation block
@property (assign,nonatomic) float maximumPower;                          //@synthesize maximumPower=_maximumPower - In the implementation block
@property (assign,nonatomic) float attackSpeed;                           //@synthesize attackSpeed=_attackSpeed - In the implementation block
@property (assign,nonatomic) float decaySpeed;                            //@synthesize decaySpeed=_decaySpeed - In the implementation block
@property (assign,nonatomic) float baseValue;                             //@synthesize baseValue=_baseValue - In the implementation block
@property (assign,nonatomic) float exponentMultiplier;                    //@synthesize exponentMultiplier=_exponentMultiplier - In the implementation block
-(float)smoothedLevelForMicPower:(float)arg1 ;
-(void)setMaximumPower:(float)arg1 ;
-(float)baseValue;
-(float)maximumPower;
-(float)decaySpeed;
-(id)initWithMinimumPower:(float)arg1 maximumPower:(float)arg2 historyLength:(long long)arg3 ;
-(void)clearHistory;
-(float)exponentMultiplier;
-(BOOL)usesAttackAndDecaySpeed;
-(id)_initWithHistoryLength:(long long)arg1 ;
-(id)initWithMinimumPower:(float)arg1 maximumPower:(float)arg2 historyLength:(long long)arg3 attackSpeed:(float)arg4 decaySpeed:(float)arg5 ;
-(void)setExponentMultiplier:(float)arg1 ;
-(void)setBaseValue:(float)arg1 ;
-(void)setAttackSpeed:(float)arg1 ;
-(void)setMinimumPower:(float)arg1 ;
-(void)setDecaySpeed:(float)arg1 ;
-(float)_updateMedianWithNewValue:(float)arg1 ;
-(float)minimumPower;
-(BOOL)usesExponentialCurve;
-(void)dealloc;
-(id)initWithBaseValue:(float)arg1 exponentMultiplier:(float)arg2 historyLength:(long long)arg3 ;
-(float)attackSpeed;
@end

