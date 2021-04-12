/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@interface ARUIAngularSparkEmitter : NSObject {

	long long _particleCount;
	float _particleLength;
	float _rotationDuration;
	float _angularVelocity;
	 _startPosition;
	float _spawnRate;
	float _midScalePoint;
	 _thickness;
	 _velocityNoise;
	float _firstWindowFinalBirthTime;
	float _firstWindowFinalDeathTime;
	float _secondWindowFinalBirthTime;
	float _secondWindowFinalDeathTime;

}
-(id)updateForTime:(float)arg1 ;
-(id)initWithParticleCount:(unsigned long long)arg1 rotationDuration:(float)arg2 particleLength:(float)arg3 ;
-(id)generateSparks;
-(id)updateWithStartTime:(float)arg1 particleCount:(unsigned long long)arg2 bufferOffset:(unsigned long long)arg3 ;
@end

