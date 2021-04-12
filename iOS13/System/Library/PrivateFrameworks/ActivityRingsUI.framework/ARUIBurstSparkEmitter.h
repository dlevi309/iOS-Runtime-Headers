/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <libobjc.A.dylib/ARUIKineticSparkEmitter.h>

@class NSString;

@interface ARUIBurstSparkEmitter : NSObject <ARUIKineticSparkEmitter> {

	float _angle;
	float _emitterStartTime;
	float _steadyStateStartTime;
	unsigned long long _particleCount;
	unsigned long long _bufferOffset;
	 _position;
	 _burstVector;
	 _burstSwing;
	 _omnidirectionalBurstSwing;
	float _initialBurstStartTimeSkewFactorMultiplier;
	unsigned long long _maximumBurstCount;
	float _burstGravity;
	float _initialBurstRate;
	float _steadyStateBurstRate;
	 _burstVelocity;
	 _burstSizeX;
	 _burstSizeY;
	 _burstLifeSpan;
	 _burstAlpha;
	float _firstWindowFinalBirthTime;
	float _firstWindowFinalDeathTime;
	float _secondWindowFinalBirthTime;
	float _secondWindowFinalDeathTime;
	BOOL _omnidirectionalBurst;
	float _angularRotationTime;

}

@property (assign,nonatomic) BOOL omnidirectionalBurst;              //@synthesize omnidirectionalBurst=_omnidirectionalBurst - In the implementation block
@property (assign,nonatomic) float emitterStartTime;                 //@synthesize emitterStartTime=_emitterStartTime - In the implementation block
@property (assign,nonatomic) float angularRotationTime;              //@synthesize angularRotationTime=_angularRotationTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(float)angle;
-(void)setAngle:(float)arg1 ;
-(unsigned long long)bufferOffset;
-(void)setParticleCount:(unsigned long long)arg1 ;
-(unsigned long long)particleCount;
-(void)setBufferOffset:(unsigned long long)arg1 ;
-(id)updateForTime:(float)arg1 ;
-(id)generateSparks;
-(void)setEmitterStartTime:(float)arg1 ;
-(void)setOmnidirectionalBurst:(BOOL)arg1 ;
-(void)setAngularRotationTime:(float)arg1 ;
-(void)_updateSteadyStateStartTime;
-(unsigned long long)initialBurstCount;
-(float)initialBurstRate;
-(id)updateWithCount:(unsigned long long)arg1 bufferOffset:(unsigned long long)arg2 length:(float)arg3 startTime:(float)arg4 startTimeSkewFactor:(float)arg5 ;
-(2)_rotationSwing:(float)arg1 ;
-(BOOL)omnidirectionalBurst;
-(float)emitterStartTime;
-(float)angularRotationTime;
@end

