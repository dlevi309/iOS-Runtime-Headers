/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsComputeCommandEncoder.h>

@protocol MTLComputePipelineState;
@interface MTLDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder {

	SCD_Struct_MT63 _buffers[31];
	SCD_Struct_MT63 _textures[128];
	SCD_Struct_MT63 _samplers[16];
	SCD_Struct_MT63 _threadgroupMemoryLengths[31];
	SCD_Struct_MT64 _imageBlockSize;
	const SCD_Struct_MT65* _limits;
	BOOL canDealloc;
	BOOL canEndEncoding;
	BOOL canSetComputePipelineState;
	BOOL hasEndEncoding;
	BOOL hasSetComputePipelineState;
	BOOL hasSetStageInRegion;
	SCD_Struct_MT66 stageInRegion;
	BOOL hasIndirectSetStageInRegion;
	deque<id, std::__1::allocator<id> >* updatedFences;
	id<MTLComputePipelineState> _computePipelineState;

}

@property (nonatomic,readonly) id<MTLComputePipelineState> computePipelineState;              //@synthesize computePipelineState=_computePipelineState - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setComputePipelineState:(id<MTLComputePipelineState>)arg1 ;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dispatchThreadgroups:(SCD_Struct_MT64)arg1 threadsPerThreadgroup:(SCD_Struct_MT64)arg2 ;
-(void)endEncoding;
-(void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(SCD_Struct_MT64)arg3 ;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 ;
-(void)dispatchThreads:(SCD_Struct_MT64)arg1 threadsPerThreadgroup:(SCD_Struct_MT64)arg2 ;
-(void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4 ;
-(void)setSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(void)setStageInRegion:(SCD_Struct_MT66)arg1 ;
-(void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 ;
-(void)updateFence:(id)arg1 ;
-(void)waitForFence:(id)arg1 ;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 ;
-(void)useHeap:(id)arg1 ;
-(void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)executeCommandsInBuffer:(id)arg1 withRange:(NSRange)arg2 ;
-(void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3 ;
-(void)memoryBarrierWithScope:(unsigned long long)arg1 ;
-(void)memoryBarrierWithResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)filterCounterRangeWithFirstBatch:(unsigned)arg1 lastBatch:(unsigned)arg2 filterIndex:(unsigned)arg3 ;
-(id<MTLComputePipelineState>)computePipelineState;
-(void)_setDefaults;
-(id)initWithComputeCommandEncoder:(id)arg1 commandBuffer:(id)arg2 ;
-(void)_validateThreadsPerThreadgroup:(SCD_Struct_MT64)arg1 ;
-(void)validateStageInRegion:(SCD_Struct_MT64)arg1 ;
-(void)_resourceTrackingRecordDispatchAccesses;
-(void)_validateAllFunctionArguments;
-(void)enumerateBuffersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateTexturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSamplersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateThreadgroupMemoryLengthsUsingBlock:(/*^block*/id)arg1 ;
@end

