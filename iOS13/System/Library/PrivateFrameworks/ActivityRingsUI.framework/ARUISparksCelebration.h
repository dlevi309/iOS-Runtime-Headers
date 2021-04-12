/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <ActivityRingsUI/ARUICelebration.h>

@protocol MTLBuffer;
@class CAMediaTimingFunction, ARUIAngularSparkEmitter, NSArray;

@interface ARUISparksCelebration : ARUICelebration {

	float _angularRotationDuration;
	float _angularTime;
	float _angularAlpha;
	float _angularAlphaAnimationBeginTime;
	float _angularAlphaAnimationEndTime;
	float _angularAlphaFadeFraction;
	CAMediaTimingFunction* _angularAlphaTimingFunction;
	CAMediaTimingFunction* _angularTimingFunction;
	ARUIAngularSparkEmitter* _angularSparkEmitter;
	NSArray* _kineticSparkEmitters;
	CAMediaTimingFunction* _kineticEasingFunction;
	float _kineticEasingTarget;
	unsigned long long _numberOfEmitters;
	unsigned long long _tangentalParticleCount;
	unsigned long long _burstParticleCount;
	float _completionTime;
	/*^block*/id _completion;
	id<MTLBuffer> _angularVertexBuffer;
	id<MTLBuffer> _angularIndexBuffer;
	unsigned long long _numAngularIndicies;
	unsigned long long _angularParticleCount;
	id<MTLBuffer> _angularSparks;
	id<MTLBuffer> _kineticVertexBuffer;
	id<MTLBuffer> _kineticIndexBuffer;
	unsigned long long _numKineticIndicies;
	unsigned long long _kineticParticleCount;
	id<MTLBuffer> _kineticSparks;
	id<MTLBuffer> _uniformsBuffer;

}

@property (nonatomic,readonly) id<MTLBuffer> angularVertexBuffer;                    //@synthesize angularVertexBuffer=_angularVertexBuffer - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> angularIndexBuffer;                     //@synthesize angularIndexBuffer=_angularIndexBuffer - In the implementation block
@property (nonatomic,readonly) unsigned long long numAngularIndicies;                //@synthesize numAngularIndicies=_numAngularIndicies - In the implementation block
@property (nonatomic,readonly) unsigned long long angularParticleCount;              //@synthesize angularParticleCount=_angularParticleCount - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> angularSparks;                          //@synthesize angularSparks=_angularSparks - In the implementation block
@property (nonatomic,readonly) float angularTime;                                    //@synthesize angularTime=_angularTime - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> kineticVertexBuffer;                    //@synthesize kineticVertexBuffer=_kineticVertexBuffer - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> kineticIndexBuffer;                     //@synthesize kineticIndexBuffer=_kineticIndexBuffer - In the implementation block
@property (nonatomic,readonly) unsigned long long numKineticIndicies;                //@synthesize numKineticIndicies=_numKineticIndicies - In the implementation block
@property (nonatomic,readonly) unsigned long long kineticParticleCount;              //@synthesize kineticParticleCount=_kineticParticleCount - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> kineticSparks;                          //@synthesize kineticSparks=_kineticSparks - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> uniformsBuffer;                         //@synthesize uniformsBuffer=_uniformsBuffer - In the implementation block
-(id)init;
-(unsigned long long)type;
-(void)endWithCompletion:(/*^block*/id)arg1 ;
-(void)update:(double)arg1 ;
-(id<MTLBuffer>)uniformsBuffer;
-(void)_generateAngularSparks;
-(void)_setupKineticSparkEmitters;
-(void)_applyAngularSparkUpdate:(id)arg1 ;
-(void)_applyKineticSparkUpdate:(id)arg1 ;
-(void)setTopColor:;
-(4)screenBlendedColorFromColor:(unsigned long long)arg1 ;
-(void*)angularTimeBytes;
-(void*)angularAlphaBytes;
-(unsigned long long)uniformsBufferOffsetForType:(unsigned long long)arg1 ;
-(void)storeCelebration:(id)arg1 withRing:(id)arg2 ;
-(id<MTLBuffer>)angularVertexBuffer;
-(id<MTLBuffer>)angularIndexBuffer;
-(unsigned long long)numAngularIndicies;
-(unsigned long long)angularParticleCount;
-(id<MTLBuffer>)angularSparks;
-(float)angularTime;
-(id<MTLBuffer>)kineticVertexBuffer;
-(id<MTLBuffer>)kineticIndexBuffer;
-(unsigned long long)numKineticIndicies;
-(unsigned long long)kineticParticleCount;
-(id<MTLBuffer>)kineticSparks;
@end

