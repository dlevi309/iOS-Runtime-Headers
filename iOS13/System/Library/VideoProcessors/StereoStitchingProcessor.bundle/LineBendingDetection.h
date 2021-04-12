/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@protocol MTLComputePipelineState, MTLBuffer;
#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
@class FigMetalContext, StereoStitchingGpuUtilities;

@interface LineBendingDetection : NSObject {

	FigMetalContext* _metalContext;
	StereoStitchingGpuUtilities* _gpuUtilities;
	id<MTLComputePipelineState> _kernelSetupIndirect;
	id<MTLComputePipelineState> _kernelProcessEdges;
	id<MTLBuffer> _sharedWorkBuffer;
	unsigned long long _sharedWorkBufferOffset;
	BOOL _resourcesOnSharedWorkBufferAssigned;
	SCD_Struct_Li70 _offsets;

}
-(void)dealloc;
-(void)releaseResources;
-(int)compileShaders;
-(id)initWithMetalContext:(id)arg1 gpuUtilities:(id)arg2 ;
-(int)setSharedMetalBuffer:(id)arg1 bufferOffset:(unsigned long long)arg2 ;
-(int)setMaximumsAndComputeSizeOfSharedMetalBuffer:(unsigned long long*)arg1 ;
-(int)processWithEdgesOffset:(unsigned long long)arg1 shiftMapX:(id)arg2 shiftMapY:(id)arg3 params:(SCD_Struct_Li71)arg4 outMaxVolumeOffset:(unsigned long long)arg5 ;
-(int)privAllocateResources:(id)arg1 bufferOffset:(unsigned long long)arg2 totalSize:(unsigned long long*)arg3 ;
@end

