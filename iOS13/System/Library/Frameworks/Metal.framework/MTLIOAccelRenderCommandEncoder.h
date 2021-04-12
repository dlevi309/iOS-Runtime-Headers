/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLIOAccelCommandEncoder.h>

@interface MTLIOAccelRenderCommandEncoder : MTLIOAccelCommandEncoder
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 ;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 ;
-(void)useHeap:(id)arg1 ;
-(void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)executeCommandsInBuffer:(id)arg1 withRange:(NSRange)arg2 ;
-(void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3 ;
-(void)setVertexAmplificationCount:(unsigned long long)arg1 viewMappings:(const SCD_Struct_MT31*)arg2 ;
-(void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDepthStoreAction:(unsigned long long)arg1 ;
-(void)setStencilStoreAction:(unsigned long long)arg1 ;
-(void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDepthStoreActionOptions:(unsigned long long)arg1 ;
-(void)setStencilStoreActionOptions:(unsigned long long)arg1 ;
-(void)textureBarrier;
-(void)updateFence:(id)arg1 afterStages:(unsigned long long)arg2 ;
-(void)waitForFence:(id)arg1 beforeStages:(unsigned long long)arg2 ;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3 ;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 stages:(unsigned long long)arg4 ;
-(void)useHeap:(id)arg1 stages:(unsigned long long)arg2 ;
-(void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2 stages:(unsigned long long)arg3 ;
-(void)memoryBarrierWithScope:(unsigned long long)arg1 afterStages:(unsigned long long)arg2 beforeStages:(unsigned long long)arg3 ;
-(void)memoryBarrierWithResources:(const id*)arg1 count:(unsigned long long)arg2 afterStages:(unsigned long long)arg3 beforeStages:(unsigned long long)arg4 ;
-(unsigned long long)getType;
-(void)bindEmulationArguments;
-(BOOL)isMemorylessRender;
-(id)getRenderPipelineState;
-(void*)getVertexBufferContentsAtIndex:(unsigned long long)arg1 ;
-(void)setEmulationVertexBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setEmulationVertexTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setEmulationVertexSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void*)getFragmentBufferContentsAtIndex:(unsigned long long)arg1 ;
-(void)setEmulationFragmentBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setEmulationFragmentTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setEmulationFragmentSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(id)initWithCommandBuffer:(id)arg1 descriptor:(id)arg2 ;
-(void)setDepthClipModeSPI:(unsigned long long)arg1 ;
-(void)setDepthCleared;
-(void)setStencilCleared;
@end

