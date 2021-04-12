/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <ActivityRingsUI/ARUICelebration.h>

@protocol MTLBuffer;
@class CAMediaTimingFunction;

@interface ARUIWavesCelebration : ARUICelebration {

	BOOL _active;
	CAMediaTimingFunction* _timingFunction;
	float _transitionDuration;
	float _completionBeginTime;
	float _completionEndTime;
	/*^block*/id _completion;
	float _revealPercent;
	unsigned _waveCount;
	unsigned _pointCount;
	unsigned _computeCount;
	id<MTLBuffer> _waveVertexBuffer;
	id<MTLBuffer> _waveIndexBuffer;
	unsigned long long _numWaveIndicies;
	id<MTLBuffer> _waveComputeUniforms;
	id<MTLBuffer> _wavePoints;
	id<MTLBuffer> _waveFragmentUniforms;

}

@property (nonatomic,readonly) id<MTLBuffer> waveVertexBuffer;                  //@synthesize waveVertexBuffer=_waveVertexBuffer - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> waveIndexBuffer;                   //@synthesize waveIndexBuffer=_waveIndexBuffer - In the implementation block
@property (nonatomic,readonly) unsigned long long numWaveIndicies;              //@synthesize numWaveIndicies=_numWaveIndicies - In the implementation block
@property (nonatomic,readonly) float revealPercent;                             //@synthesize revealPercent=_revealPercent - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> waveComputeUniforms;               //@synthesize waveComputeUniforms=_waveComputeUniforms - In the implementation block
@property (nonatomic,readonly) unsigned waveCount;                              //@synthesize waveCount=_waveCount - In the implementation block
@property (nonatomic,readonly) unsigned pointCount;                             //@synthesize pointCount=_pointCount - In the implementation block
@property (nonatomic,readonly) unsigned computeCount;                           //@synthesize computeCount=_computeCount - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> wavePoints;                        //@synthesize wavePoints=_wavePoints - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> waveFragmentUniforms;              //@synthesize waveFragmentUniforms=_waveFragmentUniforms - In the implementation block
-(id)init;
-(unsigned long long)type;
-(unsigned)pointCount;
-(void)endWithCompletion:(/*^block*/id)arg1 ;
-(void)update:(double)arg1 ;
-(unsigned)computeCount;
-(void)setTopColor:;
-(void)storeCelebration:(id)arg1 withRing:(id)arg2 ;
-(void)setBottomColor:;
-(void)setContrastColor:;
-(void)_setupWavePoints;
-(void)_updateComputeUniforms;
-(unsigned long long)waveComputeUniformsOffsetForType:(unsigned long long)arg1 ;
-(unsigned long long)wavePointsOffsetForWaveAtIndex:(unsigned)arg1 ;
-(unsigned long long)waveFragmentOffsetForWaveAtIndex:(unsigned)arg1 ;
-(id<MTLBuffer>)waveVertexBuffer;
-(id<MTLBuffer>)waveIndexBuffer;
-(unsigned long long)numWaveIndicies;
-(float)revealPercent;
-(id<MTLBuffer>)waveComputeUniforms;
-(unsigned)waveCount;
-(id<MTLBuffer>)wavePoints;
-(id<MTLBuffer>)waveFragmentUniforms;
@end

