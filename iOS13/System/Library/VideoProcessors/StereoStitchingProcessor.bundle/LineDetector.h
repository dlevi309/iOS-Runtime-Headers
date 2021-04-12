/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@protocol MTLBuffer, MTLComputePipelineState, MTLTexture;
#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
@class FigMetalContext, StereoStitchingGpuUtilities;

@interface LineDetector : NSObject {

	FigMetalContext* _metalContext;
	StereoStitchingGpuUtilities* _gpuUtilities;
	id<MTLBuffer> _sharedMetalBuffer;
	unsigned long long _sharedMetalBufferOffset;
	id<MTLComputePipelineState> _kernels[20];
	unsigned _maxInputWidth;
	unsigned _maxInputHeight;
	unsigned _maxMaximaLimit;
	unsigned _maxEdgeLimit;
	id<MTLTexture> _overlap1_downscalerIntermediaTexture;
	id<MTLTexture> _overlap1_gradientTexture;
	id<MTLTexture> _overlap2_downscalerOutputTexture;
	id<MTLTexture> _overlap2_normGradTexture;
	id<MTLTexture> _hmaxTexture;
	id<MTLTexture> _vmaxTexture;
	SCD_Struct_Li45 _offsets;

}
-(void)dealloc;
-(void)releaseResources;
-(int)compileShaders;
-(id)initWithMetalContext:(id)arg1 gpuUtilities:(id)arg2 ;
-(int)setSharedMetalBuffer:(id)arg1 bufferOffset:(unsigned long long)arg2 ;
-(int)setMaximumsAndComputeSizeOfSharedMetalBuffer:(unsigned)arg1 maximumImageInputHeight:(unsigned)arg2 maxMaximaLimit:(unsigned)arg3 maxEdgeLimit:(unsigned)arg4 sharedMetalBufferSize:(unsigned long long*)arg5 ;
-(int)process:(id)arg1 edgeBuffer:(id)arg2 edgeBufferOffset:(unsigned long long)arg3 tuningParameters:(SCD_Struct_Li46)arg4 cropAndDownscale4X:(BOOL)arg5 cropRegion:(SCD_Struct_Fi4)arg6 ;
-(int)internalMemoryAllocation:(id)arg1 bufferOffset:(unsigned long long)arg2 sharedMetalBufferSize:(unsigned long long*)arg3 maximumImageInputWidth:(unsigned long long)arg4 maximumImageInputHeight:(unsigned long long)arg5 maximumDownscaledWidth:(unsigned long long)arg6 maximumDownscaledHeight:(unsigned long long)arg7 maximaLimit:(unsigned)arg8 edgeLimits:(unsigned)arg9 ;
@end

