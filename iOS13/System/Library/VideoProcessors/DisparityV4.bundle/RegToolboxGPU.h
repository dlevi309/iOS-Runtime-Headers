/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/DisparityV4.bundle/DisparityV4
*/


@protocol MTLComputePipelineState, MTLTexture, MTLBuffer;
#import <DisparityV4/DisparityV4-Structs.h>
@class FigMetalContext;

@interface RegToolboxGPU : NSObject {

	FigMetalContext* _metalContext;
	BOOL _resourcesAvailable;
	unsigned _numPyrLevels;
	unsigned _imageWidth;
	unsigned _imageHeight;
	SCD_Struct_Re0 _nccParmsFixed;
	unsigned _searchArea;
	unsigned _gridWidth;
	unsigned _gridHeight;
	unsigned _gridNumCells;
	SCD_Struct_Re1 _pyramidLevelsDim[8];
	id<MTLComputePipelineState> _pplnDownscale2to1;
	id<MTLComputePipelineState> _pplnDownscale2to1WithMapping;
	SCD_Struct_Re4 _infoDownscale2to1;
	id<MTLComputePipelineState> _pplnSimple3x3BoxFilter;
	SCD_Struct_Re4 _infoSimple3x3BoxFilter;
	id<MTLComputePipelineState> _pplnCornerResponse;
	SCD_Struct_Re4 _infoCornerResponse;
	id<MTLComputePipelineState> _pplnCornerDetectionFirstPass4x4;
	SCD_Struct_Re4 _infoCornerDetectionFirstPass4x4;
	id<MTLComputePipelineState> _pplnCornerDetectionFinalPass;
	SCD_Struct_Re3 _infoCornerDetectionFinalPass;
	id<MTLComputePipelineState> _pplnNccMatch[4];
	SCD_Struct_Re3 _infoNccMatch[4];
	id<MTLComputePipelineState> _pplnRigidSolver;
	id<MTLComputePipelineState> _pplnAffineSolver;
	id<MTLComputePipelineState> _pplnHomographySolver;
	id<MTLComputePipelineState> _pplnWarpImage;
	SCD_Struct_Re3 _infoWarpImage;
	id<MTLComputePipelineState> _pplnSpecialImageConverterA;
	id<MTLTexture> _referenceImage;
	BOOL _referenceImagePixelMappingFlag;
	float _referenceImagePixelHistCoef;
	unsigned char _referenceImagePixelMapping[256];
	id<MTLTexture> _pyramid1Image[8];
	id<MTLTexture> _pyramid2Image[8];
	id<MTLTexture> _pyramid1Initial;
	id<MTLTexture> _pyramid1CornerResponse;
	id<MTLBuffer> _pyramid1Corners;
	id<MTLTexture> _cornerDetectIntermediateTexture;
	id<MTLBuffer> _pyramid2Corners;
	id<MTLBuffer> _nccWorkStorage;
	id<MTLBuffer> _internalTransformResults;
	id<MTLBuffer> _internalSolverElemList;

}
-(void)dealloc;
-(id)initWithMetalContext:(id)arg1 ;
-(int)AllocateResources:(unsigned)arg1 imageWidth:(unsigned)arg2 imageHeight:(unsigned)arg3 gridWidth:(unsigned)arg4 gridHeight:(unsigned)arg5 templateRadius:(unsigned)arg6 searchRadius:(unsigned)arg7 minNCCThreshold:(float)arg8 ;
-(int)ReleaseResources;
-(int)computeTransformInternal:(id)arg1 solverKernel:(id)arg2 solverOutputResults:(id)arg3 histogram:(SCD_Struct_Re6*)arg4 roi:(CGRect*)arg5 waitForCompletion:(BOOL)arg6 ;
-(int)AllocateResourcesSimple:(unsigned)arg1 imageHeight:(unsigned)arg2 numberOfCorners:(unsigned*)arg3 ;
-(int)ProcessReferenceImage:(id)arg1 histogram:(SCD_Struct_Re6*)arg2 doWaitForIdle:(BOOL)arg3 ;
-(int)warpTargetImage:(id)arg1 outTexChma:(id)arg2 inTexLuma:(id)arg3 inTexChma:(id)arg4 solverSelector:(int)arg5 histogram:(SCD_Struct_Re6*)arg6 roi:(CGRect*)arg7 doWaitForIdle:(BOOL)arg8 ;
-(int)computeTransform:(id)arg1 transform:(SCD_Struct_Re7*)arg2 outputCorners:(SCD_Struct_Re8*)arg3 solverSelector:(int)arg4 histogram:(SCD_Struct_Re6*)arg5 roi:(CGRect*)arg6 ;
-(int)specialImageConverterA:(CVBufferRef)arg1 outTexture1:(CVBufferRef)arg2 outTexture2:(CVBufferRef)arg3 outTexture3:(CVBufferRef)arg4 doWaitForIdle:(BOOL)arg5 ;
@end

