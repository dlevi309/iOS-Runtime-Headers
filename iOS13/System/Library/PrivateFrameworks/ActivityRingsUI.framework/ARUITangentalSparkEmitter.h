/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <libobjc.A.dylib/ARUIKineticSparkEmitter.h>

@class NSString;

@interface ARUITangentalSparkEmitter : NSObject <ARUIKineticSparkEmitter> {

	float _angle;
	unsigned long long _particleCount;
	unsigned long long _bufferOffset;
	 _position;
	 _tangent;
	float _tangentalBirthRate;
	float _tangentalGravity;
	 _tangentalVelocity;
	 _tangentalSizeX;
	 _tangentalSizeY;
	 _tangentalLifeSpan;
	float _firstWindowFinalBirthTime;
	float _firstWindowFinalDeathTime;
	float _secondWindowFinalBirthTime;
	float _secondWindowFinalDeathTime;
	float _emitterStartTime;

}

@property (assign,nonatomic) float emitterStartTime;                //@synthesize emitterStartTime=_emitterStartTime - In the implementation block
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
-(float)emitterStartTime;
-(id)_updateWithStartTime:(float)arg1 particleCount:(unsigned long long)arg2 bufferOffset:(unsigned long long)arg3 ;
@end

