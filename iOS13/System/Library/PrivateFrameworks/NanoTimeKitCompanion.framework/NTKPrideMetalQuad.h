/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <ClockKitUI/CLKUIQuad.h>

@protocol MTLRenderPipelineState, MTLComputePipelineState;
@class CLKDevice;

@interface NTKPrideMetalQuad : CLKUIQuad {

	double _currentTime;
	double _renderUntil;
	id<MTLRenderPipelineState> _mtlPipelineState;
	id<MTLComputePipelineState> _mtlComputePipelineState;
	CLKDevice* _clkDevice;
	double _startTime;
	float _timeScale;

}

@property (assign,nonatomic) float timeScale;              //@synthesize timeScale=_timeScale - In the implementation block
-(void)dealloc;
-(double)currentTime;
-(float)timeScale;
-(void)setTimeScale:(float)arg1 ;
-(void)setupForQuadView:(id)arg1 ;
-(BOOL)prepareForTime:(double)arg1 ;
-(void)performOffscreenPassesWithCommandBuffer:(id)arg1 ;
-(void)renderForDisplayWithEncoder:(id)arg1 ;
-(void)renderWithEncoder:(id)arg1 ;
-(id)computePipelineManager;
-(id)computeShaderName;
-(id)renderPipelineManager;
-(id)renderPipelineName;
-(id)vertexShaderName;
-(id)fragmentShaderName;
-(void)loadMetalTexturesAndBuffersWithDevice:(id)arg1 ;
-(void)computeWithEncoder:(id)arg1 pipelineState:(id)arg2 ;
-(BOOL)preSemaphoreComputeForTime:(double)arg1 ;
-(BOOL)postSemaphoreComputeForTime:(double)arg1 ;
-(id)initWithDevice:(id)arg1 initialSemaphoreCount:(int)arg2 ;
-(id)clkDevice;
-(void)handleScreenOff;
@end

