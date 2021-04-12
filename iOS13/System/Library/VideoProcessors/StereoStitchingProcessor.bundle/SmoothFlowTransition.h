/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;
#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
@class FigMetalContext, StereoStitchingGpuUtilities;

@interface SmoothFlowTransition : NSObject {

	FigMetalContext* _metalContext;
	StereoStitchingGpuUtilities* _gpuUtilities;
	id<MTLComputePipelineState> _kernelAdjustExtendedShiftmapAndGenTransforms;
	id<MTLComputePipelineState> _kernelReverseTransformField;
	id<MTLComputePipelineState> _kernelReverseTransformFieldDivide;
	id<MTLComputePipelineState> _kernelDoubleWarpDiff;
	id<MTLComputePipelineState> _kernelHoleFillWriteOutput;
	id<MTLComputePipelineState> _kernelHoleFillBlur;
	id<MTLComputePipelineState> _kernelHoleFillDownscale;
	id<MTLComputePipelineState> _kernelWarpNarrow;
	SCD_Struct_Fi56 _tuningParams;
	float _spatialWeights[5][5];
	unsigned short _currentShiftMapWidth;
	unsigned short _currentShiftMapHeight;
	unsigned short _currentShiftMapTargetImageWidth;
	unsigned short _currentShiftMapTargetImageHeight;
	unsigned short _maximumSupportedShiftMapWidth;
	unsigned short _maximumSupportedShiftMapHeight;
	unsigned short _maximumSupportedShiftMapTargetImageWidth;
	unsigned short _maximumSupportedShiftMapTargetImageHeight;
	id<MTLBuffer> _sharedWorkBuffer;
	unsigned long long _sharedWorkBufferOffset;
	BOOL _resourcesOnSharedWorkBufferAssigned;
	SCD_Struct_Sm77 _offsets;
	unsigned long long _XYWSize;
	unsigned long long _smallVariablesSize;
	unsigned long long _narrow2WideStride;
	id<MTLTexture> _narrow2Wide;
	id<MTLTexture> _warpedNarrow2Wide;
	id<MTLTexture> _wide2Narrow;
	id<MTLTexture> _warpedNarrow2Narrow[2];
	id<MTLTexture> _validMask[2];

}
-(void)dealloc;
-(void)releaseResources;
-(int)compileShaders;
-(id)initWithMetalContext:(id)arg1 gpuUtilities:(id)arg2 ;
-(int)setSharedMetalBuffer:(id)arg1 bufferOffset:(unsigned long long)arg2 ;
-(int)setMaximumsAndComputeSizeOfSharedMetalBuffer:(SCD_Struct_Fi56)arg1 maximumSupportedShiftMapWidth:(unsigned)arg2 maximumSupportedShiftMapHeight:(unsigned)arg3 maximumSupportedShiftMapTargetImageWidth:(unsigned)arg4 maximumSupportedShiftMapTargetImageHeight:(unsigned)arg5 sharedMetalBufferSize:(unsigned long long*)arg6 ;
-(int)processWithExtendedShiftMap:(id)arg1 shiftMap:(id)arg2 narrowY:(id)arg3 narrowUV:(id)arg4 narrowValidRect:(SCD_Struct_Fi4)arg5 warpedNarrowY:(id)arg6 warpedNarrowUV:(id)arg7 homography:(SCD_Struct_Fi8)arg8 bandWidth:(unsigned short)arg9 widthExtPx:(unsigned short)arg10 heightExtPx:(unsigned short)arg11 shiftMapTargetImageSize:(id)arg12 modifiedShiftMapX:(id)arg13 ;
-(int)privAllocateResources:(id)arg1 bufferOffset:(unsigned long long)arg2 totalSize:(unsigned long long*)arg3 shiftMapWidth:(unsigned short)arg4 shiftMapHeight:(unsigned short)arg5 shiftMapTargetImageWidth:(unsigned short)arg6 shiftMapTargetImageHeight:(unsigned short)arg7 ;
@end

