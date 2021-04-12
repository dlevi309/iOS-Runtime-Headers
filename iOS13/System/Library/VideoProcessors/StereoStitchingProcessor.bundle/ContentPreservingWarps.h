/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@protocol MTLComputePipelineState, MTLBuffer;
#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
@class FigMetalContext, StereoStitchingGpuUtilities;

@interface ContentPreservingWarps : NSObject {

	FigMetalContext* _metalContext;
	StereoStitchingGpuUtilities* _gpuUtilities;
	id<MTLComputePipelineState> _kernelGenerateEd;
	id<MTLComputePipelineState> _kernelGenerateEs;
	id<MTLComputePipelineState> _kernelCalcATALowerTriColumnCounts;
	id<MTLComputePipelineState> _kernelCalcATALowerTriColumns;
	id<MTLComputePipelineState> _kernelCompressExpansionColumns;
	id<MTLComputePipelineState> _kernelPackExpansionColumns;
	id<MTLComputePipelineState> _kernelCalcD;
	id<MTLComputePipelineState> _kernelScan;
	id<MTLComputePipelineState> _kernelScanNoGroupSum;
	id<MTLComputePipelineState> _kernelScanApplyAdjustment;
	id<MTLComputePipelineState> _kernelColStartsAdjustment;
	id<MTLComputePipelineState> _kernelIncrementColOffset;
	id<MTLBuffer> _sharedWorkBuffer;
	unsigned long long _sharedWorkBufferOffset;
	BOOL _resourcesOnSharedWorkBufferAssigned;
	unsigned long long _C_column_starts_offset;
	unsigned long long _C_row_indices_offset;
	unsigned long long _C_data_offset;
	unsigned long long _expanded_rowIndicies_offset;
	unsigned long long _expanded_columnCounts_offset;
	unsigned long long _expanded_columnStarts_offset;
	unsigned long long _expanded_entries_offset;
	unsigned long long _compressed_columnCounts_offset;
	unsigned long long _compressed_columnStarts_offset;
	unsigned long long _columnSums_offset;
	unsigned long long _columnGroupSums_offset;
	unsigned long long _EdEsT_columnStarts_offset;
	unsigned long long _EdEsT_rowIndices_offset;
	unsigned long long _EdEsT_data_offset;
	unsigned long long _column_offset_offset;
	unsigned long long _d_offset;
	unsigned long long _sparse_malloc_offset;
	unsigned _currentPoints;
	 _currentMeshResolution;
	unsigned _maxPoints;
	 _maxMeshResolution;
	unsigned _maxNonZeroElements;
	unsigned _maxNonZeroPerColumn;
	unsigned long long _maxSparseSolverMemSize;
	unsigned _ataExpansionGroups;
	unsigned _maxATAExpansionElements;

}
-(void)dealloc;
-(void)releaseResources;
-(int)compileShaders;
-(id)initWithMetalContext:(id)arg1 gpuUtilities:(id)arg2 ;
-(int)privAllocateResources:(id)arg1 bufferOffset:(unsigned long long)arg2 totalSize:(unsigned long long*)arg3 points:(unsigned)arg4 ;
-(int)commonSolverCode:(char*)arg1 C:(SCD_Struct_Co36*)arg2 d:(SCD_Struct_Co37*)arg3 buffers:(SCD_Struct_Co38)arg4 EdEs_cols:(unsigned)arg5 ;
-(int)processUsingGPUWithCommandBuffer:(id)arg1 buffers:(SCD_Struct_Co38)arg2 alpha:(float)arg3 points:(unsigned)arg4 ;
-(int)setMaximumsAndComputeSizeOfSharedMetalBuffer:(unsigned)arg1 maxMeshResolution:(unsigned)arg2 maxNonZeroElements:(unsigned)arg3 maxNonZeroPerColumn:(unsigned long long)arg4 maxSparseSolverMemSize:(unsigned)arg5 ataExpansionGroups:(unsigned)arg6 maxATAExpansionElements:(unsigned long long*)arg7 ;
-(int)setSharedMetalBuffer:(id)arg1 baseOffset:(unsigned long long)arg2 ;
-(int)processWithCommandBuffer:(id)arg1 buffers:(SCD_Struct_Co38)arg2 alpha:(float)arg3 points:(unsigned)arg4 ;
@end

