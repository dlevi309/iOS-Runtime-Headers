/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsCommandEncoder.h>
#import <libobjc.A.dylib/MTLRenderCommandEncoderSPI.h>

@class NSString;

@interface MTLToolsRenderCommandEncoder : MTLToolsCommandEncoder <MTLRenderCommandEncoderSPI>

@property (readonly) unsigned long long tileWidth; 
@property (readonly) unsigned long long tileHeight; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLineWidth:(float)arg1 ;
-(void)setDepthStoreAction:(unsigned long long)arg1 ;
-(void)setViewport:(SCD_Struct_MT9)arg1 ;
-(void)memoryBarrierWithScope:(unsigned long long)arg1 afterStages:(unsigned long long)arg2 beforeStages:(unsigned long long)arg3 ;
-(void)setVertexTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setVertexSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4 ;
-(void)setVertexBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8 ;
-(unsigned long long)tileHeight;
-(void)setVertexSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setViewports:(const SCD_Struct_MT9*)arg1 count:(unsigned long long)arg2 ;
-(void)setScissorRects:(const SCD_Struct_MT10*)arg1 count:(unsigned long long)arg2 ;
-(void)setFragmentTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setFragmentSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4 ;
-(void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 stages:(unsigned long long)arg4 ;
-(void)setFragmentSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setStencilFrontReferenceValue:(unsigned)arg1 backReferenceValue:(unsigned)arg2 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 ;
-(void)setTileBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned long long)arg6 ;
-(void)setTessellationFactorBuffer:(id)arg1 offset:(unsigned long long)arg2 instanceStride:(unsigned long long)arg3 ;
-(void)setTessellationFactorScale:(float)arg1 ;
-(void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7 ;
-(void)drawPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 indirectBuffer:(id)arg4 indirectBufferOffset:(unsigned long long)arg5 ;
-(void)setTileBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setTileTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9 ;
-(void)setTileBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setTileSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)drawIndexedPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 controlPointIndexBuffer:(id)arg4 controlPointIndexBufferOffset:(unsigned long long)arg5 indirectBuffer:(id)arg6 indirectBufferOffset:(unsigned long long)arg7 ;
-(void)setTileSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4 ;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setTileSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setDepthStoreActionOptions:(unsigned long long)arg1 ;
-(unsigned long long)tileWidth;
-(BOOL)isMemorylessRender;
-(void)executeCommandsInBuffer:(id)arg1 withRange:(NSRange)arg2 ;
-(void)setDepthCleared;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 ;
-(void)setPointSize:(float)arg1 ;
-(void)useHeap:(id)arg1 ;
-(void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setVisibilityResultMode:(unsigned long long)arg1 offset:(unsigned long long)arg2 ;
-(void)setDepthStencilState:(id)arg1 ;
-(void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(void)setTriangleFillMode:(unsigned long long)arg1 ;
-(void)setCullMode:(unsigned long long)arg1 ;
-(void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3 ;
-(void)setFrontFacingWinding:(unsigned long long)arg1 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 ;
-(void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2 stages:(unsigned long long)arg3 ;
-(void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 ;
-(void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 ;
-(void)setRenderPipelineState:(id)arg1 ;
-(void)setFragmentTexture:(id)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id)arg3 atSamplerIndex:(unsigned long long)arg4 ;
-(void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setScissorRect:(SCD_Struct_MT10)arg1 ;
-(void)useHeap:(id)arg1 stages:(unsigned long long)arg2 ;
-(void)setStencilCleared;
-(void)setVertexAmplificationCount:(unsigned long long)arg1 viewMappings:(const GPUDebugThreadgroupTableEntry*)arg2 ;
-(void)setStencilReferenceValue:(unsigned)arg1 ;
-(void)setDepthClipMode:(unsigned long long)arg1 ;
-(void)setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setVertexSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFragmentBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 ;
-(void)setDepthClipModeSPI:(unsigned long long)arg1 ;
-(void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3 ;
-(void)waitForFence:(id)arg1 beforeStages:(unsigned long long)arg2 ;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3 ;
-(void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(BOOL)arg3 ;
-(void)updateFence:(id)arg1 afterStages:(unsigned long long)arg2 ;
-(void)memoryBarrierWithResources:(const id*)arg1 count:(unsigned long long)arg2 afterStages:(unsigned long long)arg3 beforeStages:(unsigned long long)arg4 ;
-(void)setFragmentBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setVertexBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setStencilStoreActionOptions:(unsigned long long)arg1 ;
-(void)setStencilStoreAction:(unsigned long long)arg1 ;
-(void)setTileTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setTileSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setTileBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dispatchThreadsPerTile:(SCD_Struct_MT0)arg1 ;
-(id)initWithRenderCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 ;
-(void)setVertexAmplificationMode:(unsigned long long)arg1 value:(unsigned long long)arg2 ;
-(void)setColorResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 atIndex:(unsigned long long)arg5 ;
-(void)setDepthResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 ;
-(void)setDepthResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(BOOL)arg5 ;
-(void)setStencilResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 ;
-(void)setStencilResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(BOOL)arg5 ;
-(void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5 ;
-(void)setCommandDataCorruptModeSPI:(unsigned long long)arg1 ;
-(void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5 ;
-(void)setAlphaTestReferenceValue:(float)arg1 ;
-(void)setClipPlane:(float)arg1 p2:(float)arg2 p3:(float)arg3 p4:(float)arg4 atIndex:(unsigned long long)arg5 ;
-(void)setViewportTransformEnabled:(BOOL)arg1 ;
-(void)setProvokingVertexMode:(unsigned long long)arg1 ;
-(void)setPrimitiveRestartEnabled:(BOOL)arg1 ;
-(void)setPrimitiveRestartEnabled:(BOOL)arg1 index:(unsigned long long)arg2 ;
-(void)setTriangleFrontFillMode:(unsigned long long)arg1 backFillMode:(unsigned long long)arg2 ;
-(void)setTransformFeedbackState:(unsigned long long)arg1 ;
-(void)addSplitHandler:(/*^block*/id)arg1 ;
-(void)useRenderPipelineState:(id)arg1 ;
-(void)useRenderPipelineStates:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)setColorResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 atIndex:(unsigned long long)arg5 yInvert:(BOOL)arg6 ;
@end

