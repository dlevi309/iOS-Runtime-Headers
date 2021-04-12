/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <ClockKitUI/CLKUIQuad.h>

@class NTKPromise, CLKDevice;

@interface NTKPrideMetalQuad : CLKUIQuad {

	double _currentTime;
	double _renderUntil;
	NTKPromise* _mtlPipelineState;
	NTKPromise* _mtlComputePipelineState;
	CLKDevice* _clkDevice;
	double _startTime;
	float _timeScale;

}

@property (assign,nonatomic) float timeScale;              //@synthesize timeScale=_timeScale - In the implementation block
-(float)timeScale;
-(void)setTimeScale:(float)arg1 ;
-(double)currentTime;
-(void)dealloc;
-(id)clkDevice;
-(BOOL)preSemaphoreComputeForTime:(double)arg1 ;
-(id)renderPipelineManager;
-(id)vertexShaderName;
-(id)fragmentShaderName;
-(id)renderPipelineName;
-(BOOL)additiveBlendingEnabled;
-(void)renderWithEncoder:(id)arg1 ;
-(id)computePipelineManager;
-(id)computeShaderName;
-(void)loadMetalTexturesAndBuffersWithDevice:(id)arg1 ;
-(void)computeWithEncoder:(id)arg1 pipelineState:(id)arg2 ;
-(BOOL)postSemaphoreComputeForTime:(double)arg1 ;
-(id)initWithDevice:(id)arg1 initialSemaphoreCount:(int)arg2 ;
-(void)setupForQuadView:(id)arg1 ;
-(void)performOffscreenPassesWithCommandBuffer:(id)arg1 ;
-(void)renderForDisplayWithEncoder:(id)arg1 ;
-(void)handleScreenOff;
-(BOOL)prepareForTime:(double)arg1 ;
@end

