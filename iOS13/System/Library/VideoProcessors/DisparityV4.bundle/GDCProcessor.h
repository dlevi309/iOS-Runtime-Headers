/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/DisparityV4.bundle/DisparityV4
*/


@protocol MTLDevice, MTLCommandQueue, MTLSamplerState, MTLRenderPipelineState, MTLBuffer;
#import <DisparityV4/DisparityV4-Structs.h>
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
-(void)dealloc;
-(id)initWithMetalContext:(id)arg1 ;
-(int)compileShadersWithLib:(id)arg1 ;
-(int)setSamplers:(BOOL)arg1 ;
-(int)GDCFrom:(id)arg1 to:(id)arg2 parameters:(SCD_Struct_GD22*)arg3 ;
-(int)GDCFrom:(id)arg1 to:(id)arg2 parameters:(SCD_Struct_GD22*)arg3 commandBuffer:(id)arg4 ;
-(int)GDCDistort:(id)arg1 to:(id)arg2 parameters:(SCD_Struct_GD22*)arg3 ;
-(int)GDCDistort:(id)arg1 to:(id)arg2 parameters:(SCD_Struct_GD22*)arg3 commandBuffer:(id)arg4 ;
-(int)GDCFromPixelBuffer:(CVBufferRef)arg1 toPixelBuffer:(CVBufferRef)arg2 parameters:(SCD_Struct_GD22*)arg3 ;
-(int)GDCDistortPixelBuffer:(CVBufferRef)arg1 toPixelBuffer:(CVBufferRef)arg2 parameters:(SCD_Struct_GD22*)arg3 ;
-(int)initMetal;
@end

