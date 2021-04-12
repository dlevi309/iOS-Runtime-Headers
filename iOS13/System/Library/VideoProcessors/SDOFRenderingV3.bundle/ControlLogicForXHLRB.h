/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/SDOFRenderingV3.bundle/SDOFRenderingV3
*/


@protocol MTLBuffer, MTLComputePipelineState;
#import <SDOFRenderingV3/SDOFRenderingV3-Structs.h>
@class FigMetalContext;

@interface ControlLogicForXHLRB : NSObject {

	FigMetalContext* _mtlCtx;
	id<MTLBuffer> _nClippedPixelsBuf;
	id<MTLComputePipelineState> _count_clipped_kernel;
	BOOL _shadersLoaded;

}
-(id)initWithMetalContext:(id)arg1 ;
-(int)loadShaders;
-(void)constAddFp16:(id)arg1 name:(id)arg2 value:(float)arg3 ;
-(int)validateInputsWithInputMetadata:(const xhlrb_input_image_metadata*)arg1 inputSlmParams:(id)arg2 inputShiftMap:(id)arg3 inputLuma:(id)arg4 inputChroma:(id)arg5 outputParams:(xhlrb_control_params*)arg6 ;
-(int)calculateXHLRBParamsWithInputMetadata:(const xhlrb_input_image_metadata*)arg1 controlLogicParams:(const xhlrb_control_logic_params*)arg2 inputSlmParams:(id)arg3 inputShiftMap:(id)arg4 inputLuma:(id)arg5 inputChroma:(id)arg6 outputParams:(xhlrb_control_params*)arg7 ;
-(int)enqueueControlLogicWithInputMetadata:(const xhlrb_input_image_metadata*)arg1 controlLogicParams:(const xhlrb_control_logic_params*)arg2 inputSlmParams:(id)arg3 inputShiftMap:(id)arg4 inputLuma:(id)arg5 inputChroma:(id)arg6 outputParams:(xhlrb_control_params*)arg7 ;
@end

