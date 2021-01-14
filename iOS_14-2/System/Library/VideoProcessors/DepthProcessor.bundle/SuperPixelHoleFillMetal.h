/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
*/


@protocol MTLComputePipelineState, MTLBuffer;
#import <DepthProcessor/DepthProcessor-Structs.h>
@class FigMetalContext;

@interface SuperPixelHoleFillMetal : NSObject {

	FigMetalContext* _metalContext;
	id<MTLComputePipelineState> _kernelConvertToRbga;
	id<MTLComputePipelineState> _kernelComputeStage0;
	id<MTLComputePipelineState> _kernelComputeStage1;
	id<MTLComputePipelineState> _kernelComputeStage2;
	id<MTLComputePipelineState> _kernelComputeStage4;
	id<MTLComputePipelineState> _kernelComputeStage5;
	id<MTLComputePipelineState> _kernelFindLabelRoi;
	id<MTLComputePipelineState> _kernelSuperPixel2Image;
	id<MTLComputePipelineState> _kernelComputeConfidence;
	id<MTLBuffer> _workMem;
	id<MTLBuffer> _superPixelsBoundaries;
	char* _solverMemoryPointer;
	unsigned _maxNumSuperPixels;
	SCD_Struct_Su29* _matrixAtA;
	SCD_Struct_Su30* _vectorAtB;
	SCD_Struct_Su30* _vectorX;

}
-(id)initWithMetalContext:(id)arg1 ;
-(void)releaseResources;
-(void)dealloc;
-(int)allocateResources:(unsigned)arg1 ;
-(int)convertFrom420fPixelBuffer:(SCD_Struct_Su31)arg1 lumaTexture:(id)arg2 chromaTexture:(id)arg3 toSlicRgbaTexture:(id)arg4 ;
-(int)computeStage0:(SCD_Struct_Su31)arg1 inImageTexture:(id)arg2 inLabelTexture:(id)arg3 inBodyMaskTexture:(id)arg4 inConfMapTexture:(id)arg5 ;
-(int)computeStage4:(SCD_Struct_Su31)arg1 inLabelTexture:(id)arg2 inDepthTex:(id)arg3 inConfTex:(id)arg4 inDistanceTransformMapTex:(id)arg5 maxDist:(float)arg6 sigma_den:(float)arg7 ;
-(int)computeStageSolver:(SCD_Struct_Su31)arg1 inLabelTexture:(id)arg2 inConfTex:(id)arg3 inImageTex:(id)arg4 outDepthTex:(id)arg5 outConfTex:(id)arg6 ;
-(int)RunSolver:(float)arg1 ;
@end

