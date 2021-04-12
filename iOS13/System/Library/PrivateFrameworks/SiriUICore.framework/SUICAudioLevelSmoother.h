/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)clearHistory;
-(id)initWithMinimumPower:(float)arg1 maximumPower:(float)arg2 historyLength:(long long)arg3 attackSpeed:(float)arg4 decaySpeed:(float)arg5 ;
-(void)setDecaySpeed:(float)arg1 ;
-(float)smoothedLevelForMicPower:(float)arg1 ;
-(id)_initWithHistoryLength:(long long)arg1 ;
-(id)initWithMinimumPower:(float)arg1 maximumPower:(float)arg2 historyLength:(long long)arg3 ;
-(float)_updateMedianWithNewValue:(float)arg1 ;
-(id)initWithBaseValue:(float)arg1 exponentMultiplier:(float)arg2 historyLength:(long long)arg3 ;
-(BOOL)usesExponentialCurve;
-(BOOL)usesAttackAndDecaySpeed;
-(float)minimumPower;
-(void)setMinimumPower:(float)arg1 ;
-(float)maximumPower;
-(void)setMaximumPower:(float)arg1 ;
-(float)attackSpeed;
-(void)setAttackSpeed:(float)arg1 ;
-(float)decaySpeed;
-(float)baseValue;
-(void)setBaseValue:(float)arg1 ;
-(float)exponentMultiplier;
-(void)setExponentMultiplier:(float)arg1 ;
@end

