/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@protocol MTLComputePipelineState, MTLTexture, MTLBuffer;
#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
@class FigMetalContext, StereoStitchingGpuUtilities;

@interface PlanarSceneDetection : NSObject {

	FigMetalContext* _metalContext;
	StereoStitchingGpuUtilities* _gpuUtilities;
	id<MTLComputePipelineState> _kernelComputeFlowConfidenceAndDownscale4X;
	id<MTLComputePipelineState> _kernelConfidenceFusion;
	id<MTLComputePipelineState> _kernelDownsample2X;
	id<MTLComputePipelineState> _kernelFlowHistogram;
	id<MTLComputePipelineState> _kernelHistogramBounds;
	id<MTLComputePipelineState> _kernelIsFlatFlowScene;
	SCD_Struct_Fi63 _tuningParams;
	SCD_Struct_Pl76 _weights;
	unsigned short _exactInputWidth;
	unsigned short _exactInputHeight;
	unsigned long long _flowHistogramXOffset;
	unsigned long long _flowHistogramYOffset;
	unsigned long long _flowHistogramSumOffset;
	unsigned long long _flowHistogramBoundsOffset;
	unsigned long long _flowHistogramSize;
	id<MTLTexture> _confidence[3];
	id<MTLTexture> _downscaledNarrow[2];
	id<MTLTexture> _subsampledFlow[2];
	id<MTLTexture> _downscaledConfidence;
	id<MTLTexture> _downscaledFlow;
	id<MTLTexture> _downscaledLuma;
	id<MTLBuffer> _sharedWorkBuffer;
	unsigned long long _sharedWorkBufferOffset;
	BOOL _resourcesOnSharedWorkBufferAssigned;

}
-(void)dealloc;
-(void)releaseResources;
-(int)compileShaders;
-(id)initWithMetalContext:(id)arg1 gpuUtilities:(id)arg2 ;
-(int)setSharedMetalBuffer:(id)arg1 bufferOffset:(unsigned long long)arg2 ;
-(int)setMaximumsAndComputeSizeOfSharedMetalBuffer:(SCD_Struct_Fi63)arg1 maximumSupportedInputWidth:(unsigned)arg2 maximumSupportedInputHeight:(unsigned)arg3 sharedMetalBufferSize:(unsigned long long*)arg4 ;
-(int)process:(id)arg1 narrowLuma:(id)arg2 jbfConfidenceMap:(id)arg3 isPlanarSceneOffset:(unsigned long long)arg4 ;
-(int)privAllocateResources:(id)arg1 bufferOffset:(unsigned long long)arg2 totalSize:(unsigned long long*)arg3 inputWidth:(unsigned short)arg4 inputHeight:(unsigned short)arg5 ;
@end

