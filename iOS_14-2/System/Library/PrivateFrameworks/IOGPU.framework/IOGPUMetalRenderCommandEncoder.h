/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
*/

#import <IOGPU/IOGPU-Structs.h>
#import <IOGPU/IOGPUMetalCommandEncoder.h>

@interface IOGPUMetalRenderCommandEncoder : IOGPUMetalCommandEncoder
-(void)setDepthStoreAction:(unsigned long long)arg1 ;
-(void)setEmulationFragmentSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)memoryBarrierWithScope:(unsigned long long)arg1 afterStages:(unsigned long long)arg2 beforeStages:(unsigned long long)arg3 ;
-(void)setEmulationVertexBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void*)getVertexBufferContentsAtIndex:(unsigned long long)arg1 ;
-(void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 stages:(unsigned long long)arg4 ;
-(void)textureBarrier;
-(void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)getType;
-(void)setDepthStoreActionOptions:(unsigned long long)arg1 ;
-(id)getRenderPipelineState;
-(void)setEmulationVertexSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(BOOL)isMemorylessRender;
-(void)executeCommandsInBuffer:(id)arg1 withRange:(NSRange)arg2 ;
-(void)setDepthCleared;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 ;
-(void)setEmulationVertexTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)useHeap:(id)arg1 ;
-(void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2 stages:(unsigned long long)arg3 ;
-(void)useHeap:(id)arg1 stages:(unsigned long long)arg2 ;
-(void)setStencilCleared;
-(void)setVertexAmplificationCount:(unsigned long long)arg1 viewMappings:(const SCD_Struct_IO16*)arg2 ;
-(void)setEmulationFragmentTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 ;
-(void)setDepthClipModeSPI:(unsigned long long)arg1 ;
-(void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3 ;
-(void)waitForFence:(id)arg1 beforeStages:(unsigned long long)arg2 ;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3 ;
-(void)bindEmulationArguments;
-(id)initWithCommandBuffer:(id)arg1 descriptor:(id)arg2 ;
-(void*)getFragmentBufferContentsAtIndex:(unsigned long long)arg1 ;
-(void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(BOOL)arg3 ;
-(void)updateFence:(id)arg1 afterStages:(unsigned long long)arg2 ;
-(void)memoryBarrierWithResources:(const id*)arg1 count:(unsigned long long)arg2 afterStages:(unsigned long long)arg3 beforeStages:(unsigned long long)arg4 ;
-(void)setStencilStoreActionOptions:(unsigned long long)arg1 ;
-(void)setStencilStoreAction:(unsigned long long)arg1 ;
-(void)setEmulationFragmentBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
@end

