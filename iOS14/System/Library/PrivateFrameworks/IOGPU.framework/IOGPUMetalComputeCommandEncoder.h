/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
*/

#import <IOGPU/IOGPU-Structs.h>
#import <IOGPU/IOGPUMetalCommandEncoder.h>

@interface IOGPUMetalComputeCommandEncoder : IOGPUMetalCommandEncoder
-(void)setAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2 ;
-(void)setFunctionTables:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)setEmulationBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2 ;
-(void)setFunctionTable:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setVisibleFunctionTables:(const id*)arg1 withBufferRange:(NSRange)arg2 ;
-(void)setEmulationSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(unsigned long long)getType;
-(void)updateFence:(id)arg1 ;
-(void)executeCommandsInBuffer:(id)arg1 withRange:(NSRange)arg2 ;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 ;
-(void)waitForFence:(id)arg1 ;
-(void)setEmulationTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void*)getBufferContentsAtIndex:(unsigned long long)arg1 ;
-(void)useHeap:(id)arg1 ;
-(void)memoryBarrierWithScope:(unsigned long long)arg1 ;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 ;
-(void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3 ;
-(void)bindEmulationArguments;
-(void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(BOOL)arg3 ;
-(void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2 ;
-(void)memoryBarrierWithResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)getComputePipelineState;
-(void)setIntersectionFunctionTables:(const id*)arg1 withBufferRange:(NSRange)arg2 ;
@end

