/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsComputeCommandEncoder.h>

@protocol MTLComputePipelineState;
@class MTLDebugCommandBuffer;

@interface MTLDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder {

	SCD_Struct_MT108 _buffers[31];
	SCD_Struct_MT108 _textures[128];
	SCD_Struct_MT108 _samplers[16];
	SCD_Struct_MT108 _threadgroupMemoryLengths[31];
	SCD_Struct_MT109 _imageBlockSize;
	MTLDebugCommandBuffer* _commandBuffer;
	BOOL canDealloc;
	BOOL canEndEncoding;
	BOOL canSetComputePipelineState;
	BOOL hasEndEncoding;
	BOOL hasSetComputePipelineState;
	BOOL hasSetStageInRegion;
	SCD_Struct_MT110 stageInRegion;
	BOOL hasIndirectSetStageInRegion;
	BOOL allowsNullBufferBinds;
	deque<id, std::__1::allocator<id> >* updatedFences;
	id<MTLComputePipelineState> _computePipelineState;

}

@property (nonatomic,readonly) id<MTLComputePipelineState> computePipelineState;              //@synthesize computePipelineState=_computePipelineState - In the implementation block
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2 ;
-(void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(SCD_Struct_MT109)arg3 ;
-(void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)setIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2 ;
-(void)setVisibleFunctionTables:(const id*)arg1 withBufferRange:(NSRange)arg2 ;
-(void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4 ;
-(void)setStageInRegion:(SCD_Struct_MT110)arg1 ;
-(void)setSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 ;
-(void)dispatchThreads:(SCD_Struct_MT109)arg1 threadsPerThreadgroup:(SCD_Struct_MT109)arg2 ;
-(void)filterCounterRangeWithFirstBatch:(unsigned)arg1 lastBatch:(unsigned)arg2 filterIndex:(unsigned)arg3 ;
-(void)updateFence:(id)arg1 ;
-(id)description;
-(void)setTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setComputePipelineState:(id<MTLComputePipelineState>)arg1 ;
-(void)setBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dispatchThreadgroups:(SCD_Struct_MT109)arg1 threadsPerThreadgroup:(SCD_Struct_MT109)arg2 ;
-(void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)executeCommandsInBuffer:(id)arg1 withRange:(NSRange)arg2 ;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 ;
-(void)waitForFence:(id)arg1 ;
-(void)endEncoding;
-(void)useHeap:(id)arg1 ;
-(void)memoryBarrierWithScope:(unsigned long long)arg1 ;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 ;
-(void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3 ;
-(void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(BOOL)arg3 ;
-(void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2 ;
-(void)memoryBarrierWithResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)setIntersectionFunctionTables:(const id*)arg1 withBufferRange:(NSRange)arg2 ;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_setDefaults;
-(id<MTLComputePipelineState>)computePipelineState;
-(void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 ;
-(void)enableNullBufferBinds:(BOOL)arg1 ;
-(id)initWithComputeCommandEncoder:(id)arg1 commandBuffer:(id)arg2 ;
-(void)_validateThreadsPerThreadgroup:(SCD_Struct_MT109)arg1 ;
-(void)validateStageInRegion:(SCD_Struct_MT109)arg1 ;
-(void)_validateAllFunctionArguments;
-(void)enumerateBuffersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateTexturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSamplersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateThreadgroupMemoryLengthsUsingBlock:(/*^block*/id)arg1 ;
@end

