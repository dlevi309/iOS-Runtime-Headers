/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLComputePipelineState;
@class FigMetalContext, VideoDefringingTuningParameters;

@interface DefringeStage : NSObject {

	FigMetalContext* _metalContext;
	id<MTLComputePipelineState> _pipelineStates[2];
	VideoDefringingTuningParameters* _tuningParameters;

}
+(int)prewarmShaders:(id)arg1 tuningParameters:(id)arg2 ;
-(id)initWithMetalContext:(id)arg1 ;
-(int)_compileShaders;
-(int)defringePyramid:(id)arg1 outputPyramid:(id)arg2 chromaScratch:(id)arg3 tuningParameters:(id)arg4 ;
-(void)_copyFromTexture:(id)arg1 toTexture:(id)arg2 ;
-(id)_functionNameForProgram:(int)arg1 ;
-(void)_defringeLuma:(id)arg1 chroma:(id)arg2 into:(id)arg3 ;
-(void)_collapseFilteredChroma:(id)arg1 usingInputDown:(id)arg2 inputUp:(id)arg3 into:(id)arg4 ;
@end

