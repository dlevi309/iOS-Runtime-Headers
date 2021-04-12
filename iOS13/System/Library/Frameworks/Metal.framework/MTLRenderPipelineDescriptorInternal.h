/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineDescriptor.h>

@interface MTLRenderPipelineDescriptorInternal : MTLRenderPipelineDescriptor {

	MTLRenderPipelineDescriptorPrivate* _private;

}

@property (assign,nonatomic) unsigned long long postVertexDumpBufferIndex; 
@property (assign,nonatomic) BOOL forceSoftwareVertexFetch; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(void)setLabel:(id)arg1 ;
-(id)label;
-(id)colorAttachments;
-(unsigned long long)sampleCount;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(void)setVertexDescriptor:(id)arg1 ;
-(void)setVertexFunction:(id)arg1 ;
-(void)setFragmentFunction:(id)arg1 ;
-(id)fragmentFunction;
-(id)vertexFunction;
-(id)vertexBuffers;
-(id)vertexDescriptor;
-(unsigned long long)maxTessellationFactor;
-(unsigned long long)maxVertexAmplificationCount;
-(BOOL)supportIndirectCommandBuffers;
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(void)setPipelineLibrary:(id)arg1 ;
-(id)pipelineLibrary;
-(void)setDepthAttachmentPixelFormat:(unsigned long long)arg1 ;
-(void)setStencilAttachmentPixelFormat:(unsigned long long)arg1 ;
-(void)setAlphaToCoverageEnabled:(BOOL)arg1 ;
-(unsigned long long)stencilAttachmentPixelFormat;
-(void)setRasterSampleCount:(unsigned long long)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLRenderPipelineDescriptorPrivate*)_descriptorPrivate;
-(unsigned long long)rasterSampleCount;
-(unsigned long long)colorSampleCount;
-(void)setColorSampleCount:(unsigned long long)arg1 ;
-(void)validateWithDevice:(id)arg1 ;
-(void)setSupportIndirectCommandBuffers:(BOOL)arg1 ;
-(void)setAlphaToOneEnabled:(BOOL)arg1 ;
-(void)setRasterizationEnabled:(BOOL)arg1 ;
-(void)setSampleCoverage:(float)arg1 ;
-(void)setSampleMask:(unsigned long long)arg1 ;
-(void)setInputPrimitiveTopology:(unsigned long long)arg1 ;
-(void)setTessellationPartitionMode:(unsigned long long)arg1 ;
-(void)setMaxTessellationFactor:(unsigned long long)arg1 ;
-(void)setTessellationFactorScaleEnabled:(BOOL)arg1 ;
-(void)setTessellationFactorFormat:(unsigned long long)arg1 ;
-(void)setTessellationControlPointIndexType:(unsigned long long)arg1 ;
-(void)setTessellationFactorStepFunction:(unsigned long long)arg1 ;
-(void)setTessellationOutputWindingOrder:(unsigned long long)arg1 ;
-(void)setVertexEnabled:(BOOL)arg1 ;
-(id)fragmentBuffers;
-(BOOL)forceResourceIndex;
-(void)setForceResourceIndex:(BOOL)arg1 ;
-(id)newSerializedVertexDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)setOpenGLModeEnabled:(BOOL)arg1 ;
-(BOOL)openGLModeEnabled;
-(void)setDriverCompilerOptions:(id)arg1 ;
-(id)driverCompilerOptions;
-(id)newSerializedFragmentDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(BOOL)forceSoftwareVertexFetch;
-(void)setForceSoftwareVertexFetch:(BOOL)arg1 ;
-(unsigned long long)tessellationPartitionMode;
-(BOOL)isTessellationFactorScaleEnabled;
-(unsigned long long)tessellationFactorFormat;
-(unsigned long long)tessellationControlPointIndexType;
-(unsigned long long)tessellationFactorStepFunction;
-(unsigned long long)tessellationOutputWindingOrder;
-(unsigned long long)postVertexDumpBufferIndex;
-(void)setPostVertexDumpBufferIndex:(unsigned long long)arg1 ;
-(unsigned long long)sampleMask;
-(float)sampleCoverage;
-(BOOL)isAlphaToCoverageEnabled;
-(BOOL)isAlphaToOneEnabled;
-(BOOL)isRasterizationEnabled;
-(unsigned long long)vertexAmplificationMode;
-(void)setVertexAmplificationMode:(unsigned long long)arg1 ;
-(void)setMaxVertexAmplificationCount:(unsigned long long)arg1 ;
-(BOOL)isVertexEnabled;
-(BOOL)isLogicOperationEnabled;
-(void)setLogicOperationEnabled:(BOOL)arg1 ;
-(unsigned long long)logicOperation;
-(void)setLogicOperation:(unsigned long long)arg1 ;
-(BOOL)isAlphaTestEnabled;
-(void)setAlphaTestEnabled:(BOOL)arg1 ;
-(unsigned long long)alphaTestFunction;
-(void)setAlphaTestFunction:(unsigned long long)arg1 ;
-(void)setClipDistanceEnableMask:(unsigned char)arg1 ;
-(unsigned char)clipDistanceEnableMask;
-(BOOL)isPointSmoothEnabled;
-(void)setPointSmoothEnabled:(BOOL)arg1 ;
-(BOOL)isPointCoordLowerLeft;
-(void)setPointCoordLowerLeft:(BOOL)arg1 ;
-(BOOL)isPointSizeOutputVS;
-(void)setPointSizeOutputVS:(BOOL)arg1 ;
-(BOOL)isTwoSideEnabled;
-(void)setTwoSideEnabled:(BOOL)arg1 ;
-(unsigned)vertexDepthCompareClampMask;
-(void)setVertexDepthCompareClampMask:(unsigned)arg1 ;
-(unsigned)fragmentDepthCompareClampMask;
-(void)setFragmentDepthCompareClampMask:(unsigned)arg1 ;
-(BOOL)sampleCoverageInvert;
-(void)setSampleCoverageInvert:(BOOL)arg1 ;
-(BOOL)isDepthStencilWriteDisabled;
-(void)setDepthStencilWriteDisabled:(BOOL)arg1 ;
-(unsigned long long)inputPrimitiveTopology;
-(id)fastBlendDescriptorAtIndex:(unsigned long long)arg1 ;
-(void)attachVertexDescriptor:(id)arg1 ;
-(unsigned long long)depthAttachmentPixelFormat;
-(id)serializeFragmentData;
-(id)newSerializedVertexDataWithFlags:(unsigned long long)arg1 error:(id*)arg2 ;
@end

