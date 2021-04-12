/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DisparityV3.bundle/DisparityV3
*/


@protocol MTLDevice, MTLCommandQueue, MTLSamplerState, MTLRenderPipelineState, MTLBuffer;
#import <DisparityV3/DisparityV3-Structs.h>
@class FigMetalContext;

@interface GDCProcessor : NSObject {

	id<MTLDevice> _mtlDevice;
	id<MTLCommandQueue> _mtlCommandQueue;
	id<MTLSamplerState> _samplers[3];
	id<MTLRenderPipelineState> _pipelineStates[2];
	FigMetalContext* _metalContext;
	id<MTLBuffer> _distortUniforms;
	id<MTLBuffer> _unDistortUniforms;

}
-(id)initWithMetalContext:(id)arg1 ;
-(void)dealloc;
-(int)compileShadersWithLib:(id)arg1 ;
-(int)setSamplers:(BOOL)arg1 ;
-(int)GDCFrom:(id)arg1 to:(id)arg2 parameters:(SCD_Struct_GD19*)arg3 ;
-(int)GDCFrom:(id)arg1 to:(id)arg2 parameters:(SCD_Struct_GD19*)arg3 commandBuffer:(id)arg4 ;
-(int)GDCDistort:(id)arg1 to:(id)arg2 parameters:(SCD_Struct_GD19*)arg3 ;
-(int)GDCDistort:(id)arg1 to:(id)arg2 parameters:(SCD_Struct_GD19*)arg3 commandBuffer:(id)arg4 ;
-(int)GDCFromPixelBuffer:(CVBufferRef)arg1 toPixelBuffer:(CVBufferRef)arg2 parameters:(SCD_Struct_GD19*)arg3 ;
-(int)GDCDistortPixelBuffer:(CVBufferRef)arg1 toPixelBuffer:(CVBufferRef)arg2 parameters:(SCD_Struct_GD19*)arg3 ;
-(int)initMetal;
@end

