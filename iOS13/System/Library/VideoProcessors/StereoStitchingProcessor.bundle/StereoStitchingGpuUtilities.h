/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@protocol MTLComputePipelineState;
#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
@class FigMetalContext, MPSImageBilinearScale;

@interface StereoStitchingGpuUtilities : NSObject {

	FigMetalContext* _mtlCtxt;
	id<MTLComputePipelineState> _kernel_warpImage;
	id<MTLComputePipelineState> _kernel_cropLumaImage;
	id<MTLComputePipelineState> _kernel_lumaDownscaleWithOffset;
	id<MTLComputePipelineState> _kernel_lumaCropAndDownscale4X;
	id<MTLComputePipelineState> _kernel_zeroBuffer1;
	id<MTLComputePipelineState> _kernel_zeroBuffer16;
	id<MTLComputePipelineState> _kernel_shiftmapGaussianFilterPass1;
	id<MTLComputePipelineState> _kernel_shiftmapGaussianFilterPass2;
	MPSImageBilinearScale* _bilinearScale;

}
+(char*)lockMetalBuffer:(id)arg1 context:(SCD_Struct_St54*)arg2 ;
+(void)unlockMetalBuffer:(SCD_Struct_St54*)arg1 ;
-(void)dealloc;
-(void)releaseResources;
-(id)initWithMetalContext:(id)arg1 ;
-(int)compileShaders:(BOOL)arg1 ;
-(unsigned long long)computeTextureStrideForBufferAllocation:(unsigned long long)arg1 format:(unsigned long long)arg2 ;
-(int)applyGaussianFilterToShiftmap:(id)arg1 sharedMetalBuffer:(id)arg2 bufferOffset:(unsigned long long)arg3 ;
-(id)textureFromBuffer:(id)arg1 stride:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 format:(unsigned long long)arg5 offset:(unsigned long long)arg6 ;
-(int)warpImage:(SCD_Struct_Di33*)arg1 inputImageLuma:(id)arg2 inputImageChroma:(id)arg3 outputImageLuma:(id)arg4 outputImageChroma:(id)arg5 inputShiftmap:(id)arg6 ;
-(int)prewarmMPSShader:(id)arg1 inOutFormatPairs:(id)arg2 ;
-(id)createTexture:(id)arg1 fromBuffer:(id)arg2 offset:(unsigned*)arg3 ;
-(int)bilinearScaleWithCommandBuffer:(id)arg1 inTex:(id)arg2 outTex:(id)arg3 ;
-(int)bilinearScaleWithCommandBuffer:(id)arg1 inROI:(SCD_Struct_Fi4*)arg2 inTex:(id)arg3 outTex:(id)arg4 ;
-(int)zeroMetalBuffer:(id)arg1 range:(NSRange)arg2 commandEncoder:(id)arg3 ;
-(int)bilinearScaleWithCommandBuffer:(id)arg1 inROI:(SCD_Struct_Fi4*)arg2 outROI:(SCD_Struct_Fi4*)arg3 inTex:(id)arg4 outTex:(id)arg5 ;
-(int)clearTexture:(id)arg1 commandBuffer:(id)arg2 ;
-(int)lumaCropAndDownscale4X:(id)arg1 outputLumaTexture:(id)arg2 region:(SCD_Struct_Fi4)arg3 ;
-(int)verifyTextures:(id)arg1 and:(id)arg2 name:(const char*)arg3 ;
-(id)textureFromBuffer:(id)arg1 stride:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 format:(unsigned long long)arg5 offset:(unsigned long long)arg6 usage:(unsigned long long)arg7 ;
-(int)cropLumaImage:(id)arg1 outputLumaTexture:(id)arg2 region:(SCD_Struct_Fi4)arg3 ;
-(int)lumaDownscaleWithOffset:(id)arg1 outputLumaTexture:(id)arg2 region:(SCD_Struct_Fi4)arg3 ;
@end

