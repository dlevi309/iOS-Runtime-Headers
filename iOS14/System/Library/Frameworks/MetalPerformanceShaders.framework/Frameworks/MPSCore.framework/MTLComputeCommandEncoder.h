/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/


@protocol MTLComputeCommandEncoder <MTLCommandEncoder>
@property (readonly) unsigned long long dispatchType; 
@required
-(void)setAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;
-(void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(SCD_Struct_MP0)arg3;
-(void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2;
-(void)setIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
-(void)setVisibleFunctionTables:(const id*)arg1 withBufferRange:(NSRange)arg2;
-(void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
-(void)setSamplerStates:(const id*)arg1 withRange:(NSRange)arg2;
-(void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
-(unsigned long long)dispatchType;
-(void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
-(void)setStageInRegion:(SCD_Struct_MP1)arg1;
-(void)setSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4;
-(void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;
-(void)dispatchThreads:(SCD_Struct_MP0)arg1 threadsPerThreadgroup:(SCD_Struct_MP0)arg2;
-(void)updateFence:(id)arg1;
-(void)setTextures:(const id*)arg1 withRange:(NSRange)arg2;
-(void)setComputePipelineState:(id)arg1;
-(void)setBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
-(void)dispatchThreadgroups:(SCD_Struct_MP0)arg1 threadsPerThreadgroup:(SCD_Struct_MP0)arg2;
-(void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)executeCommandsInBuffer:(id)arg1 withRange:(NSRange)arg2;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2;
-(void)waitForFence:(id)arg1;
-(void)useHeap:(id)arg1;
-(void)memoryBarrierWithScope:(unsigned long long)arg1;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
-(void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;
-(void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(BOOL)arg3;
-(void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
-(void)memoryBarrierWithResources:(const id*)arg1 count:(unsigned long long)arg2;
-(void)setIntersectionFunctionTables:(const id*)arg1 withBufferRange:(NSRange)arg2;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
-(void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;

@end

