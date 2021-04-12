/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;
#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
@class FigMetalContext, StereoStitchingGpuUtilities, ContentPreservingWarps;

@interface ShiftmapExtension : NSObject {

	FigMetalContext* _metalContext;
	StereoStitchingGpuUtilities* _gpuUtilities;
	id<MTLComputePipelineState> _kernelAdjustConfidenceMap;
	id<MTLComputePipelineState> _kernelUniformGridGen;
	id<MTLComputePipelineState> _kernelVhatkAndWeightsGen;
	id<MTLComputePipelineState> _kernelPkGen;
	id<MTLComputePipelineState> _kernelShiftmapExtendedGen;
	id<MTLBuffer> _sharedWorkBuffer;
	unsigned long long _sharedWorkBufferOffset;
	BOOL _resourcesOnSharedWorkBufferAssigned;
	ContentPreservingWarps* _contentPreservingWarps;
	unsigned long long _contentPreservingWarpsOffset;
	SCD_Struct_Sh39 _cpw_buffers;
	unsigned long long _contentPreservingWarpsMemSize;
	id<MTLTexture> _adjustedConfidenceMap;
	SCD_Struct_Fi5 _params;
	unsigned short _maxCropNarrowImageWidth;
	unsigned short _maxCropNarrowImageHeight;
	unsigned _maxOutputPoints;
	unsigned short _currentCropNarrowImageWidth;
	unsigned short _currentCropNarrowImageHeight;

}
-(void)dealloc;
-(void)releaseResources;
-(int)compileShaders;
-(id)initWithMetalContext:(id)arg1 gpuUtilities:(id)arg2 ;
-(int)setSharedMetalBuffer:(id)arg1 bufferOffset:(unsigned long long)arg2 ;
-(int)setMaximumsAndComputeSizeOfSharedMetalBuffer:(SCD_Struct_Fi5)arg1 maxCropNarrowImageWidth:(unsigned)arg2 maxCropNarrowImageHeight:(unsigned)arg3 sharedMetalBufferSize:(unsigned long long*)arg4 ;
-(int)processWithShiftMap:(id)arg1 confidenceMap:(id)arg2 cropNarrowLumaTex:(id)arg3 regPyrHomography:(SCD_Struct_Fi8)arg4 widthExtPx:(unsigned)arg5 heightExtPx:(unsigned)arg6 extendedShiftmap:(id)arg7 isPlanarSceneOffset:(unsigned long long)arg8 ;
-(int)privAllocateResources:(id)arg1 bufferOffset:(unsigned long long)arg2 totalSize:(unsigned long long*)arg3 params:(SCD_Struct_Fi5)arg4 cropNarrowImageWidth:(unsigned short)arg5 cropNarrowImageHeight:(unsigned short)arg6 ;
@end

