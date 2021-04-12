/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineDescriptor.h>

@interface MTLRenderPipelineDescriptorInternal : MTLRenderPipelineDescriptor {

	MTLRenderPipelineDescriptorPrivate* _private;

}

@property (assign,nonatomic) unsigned long long postVertexDumpBufferIndex; 
@property (assign,nonatomic) BOOL forceSoftwareVertexFetch; 
-(BOOL)supportIndirectCommandBuffers;
-(long long)textureWriteRoundingMode;
-(unsigned long long)resourceIndex;
-(unsigned long long)maxVertexAmplificationCount;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)binaryArchives;
-(unsigned long long)maxTessellationFactor;
-(BOOL)isPointSizeOutputVS;
-(void)setDriverCompilerOptions:(id)arg1 ;
-(void)setColorSampleCount:(unsigned long long)arg1 ;
-(BOOL)isAlphaToOneEnabled;
-(void)setVertexFunction:(id)arg1 ;
-(void)setInputPrimitiveTopology:(unsigned long long)arg1 ;
-(unsigned long long)inputPrimitiveTopology;
-(void)setTessellationFactorScaleEnabled:(BOOL)arg1 ;
-(void)setDepthAttachmentPixelFormat:(unsigned long long)arg1 ;
-(unsigned long long)sampleMask;
-(BOOL)needsCustomBorderColorSamplers;
-(void)setForceResourceIndex:(BOOL)arg1 ;
-(id)init;
-(void)setRasterSampleCount:(unsigned long long)arg1 ;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)postVertexDumpBufferIndex;
-(id)newSerializedFragmentDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(void)setSampleCoverageInvert:(BOOL)arg1 ;
-(void)setClipDistanceEnableMask:(unsigned char)arg1 ;
-(void)setTessellationPartitionMode:(unsigned long long)arg1 ;
-(void)setPointCoordLowerLeft:(BOOL)arg1 ;
-(void)setBinaryArchives:(id)arg1 ;
-(void)setTwoSideEnabled:(BOOL)arg1 ;
-(const MTLRenderPipelineDescriptorPrivate*)_descriptorPrivate;
-(void)attachVertexDescriptor:(id)arg1 ;
-(id)vertexBuffers;
-(void)setTessellationControlPointIndexType:(unsigned long long)arg1 ;
-(id)fragmentFunction;
-(void)setMaxVertexAmplificationCount:(unsigned long long)arg1 ;
-(BOOL)forceResourceIndex;
-(id)newSerializedVertexDataWithFlags:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)setSampleMask:(unsigned long long)arg1 ;
-(void)setAlphaToOneEnabled:(BOOL)arg1 ;
-(void)setPointSizeOutputVS:(BOOL)arg1 ;
-(unsigned long long)alphaTestFunction;
-(void)setDepthStencilWriteDisabled:(BOOL)arg1 ;
-(void)setSampleCoverage:(float)arg1 ;
-(id)colorAttachments;
-(void)setFragmentFunction:(id)arg1 ;
-(unsigned)fragmentDepthCompareClampMask;
-(void)setForceSoftwareVertexFetch:(BOOL)arg1 ;
-(unsigned long long)tessellationFactorStepFunction;
-(unsigned long long)tessellationOutputWindingOrder;
-(void)setFragmentDepthCompareClampMask:(unsigned)arg1 ;
-(unsigned long long)stencilAttachmentPixelFormat;
-(BOOL)isAlphaToCoverageEnabled;
-(void)setAlphaTestEnabled:(BOOL)arg1 ;
-(id)pluginData;
-(id)description;
-(void)setPointSmoothEnabled:(BOOL)arg1 ;
-(unsigned long long)colorSampleCount;
-(void)setVertexDepthCompareClampMask:(unsigned)arg1 ;
-(id)newSerializedVertexDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)tessellationFactorFormat;
-(void)setAlphaToCoverageEnabled:(BOOL)arg1 ;
-(void)setAlphaTestFunction:(unsigned long long)arg1 ;
-(BOOL)sampleCoverageInvert;
-(BOOL)isDepthStencilWriteDisabled;
-(void)setOpenGLModeEnabled:(BOOL)arg1 ;
-(long long)textureWriteFPRoundingMode;
-(float)sampleCoverage;
-(BOOL)isTessellationFactorScaleEnabled;
-(unsigned long long)tessellationControlPointIndexType;
-(unsigned long long)sampleCount;
-(id)serializeFragmentData;
-(unsigned long long)rasterSampleCount;
-(unsigned long long)hash;
-(BOOL)isRasterizationEnabled;
-(BOOL)isLogicOperationEnabled;
-(void)reset;
-(void)setRasterizationEnabled:(BOOL)arg1 ;
-(BOOL)validateWithDevice:(id)arg1 error:(id*)arg2 ;
-(id)driverCompilerOptions;
-(void)setVertexAmplificationMode:(unsigned long long)arg1 ;
-(BOOL)isPointSmoothEnabled;
-(BOOL)isPointCoordLowerLeft;
-(id)fragmentBuffers;
-(BOOL)forceSoftwareVertexFetch;
-(id)vertexFunction;
-(void)setLabel:(id)arg1 ;
-(unsigned long long)logicOperation;
-(unsigned char)clipDistanceEnableMask;
-(void)setPipelineLibrary:(id)arg1 ;
-(unsigned long long)vertexAmplificationMode;
-(void)setLogicOperation:(unsigned long long)arg1 ;
-(void)setTextureWriteRoundingMode:(long long)arg1 ;
-(unsigned long long)tessellationPartitionMode;
-(unsigned)vertexDepthCompareClampMask;
-(void)setTessellationFactorStepFunction:(unsigned long long)arg1 ;
-(void)setLogicOperationEnabled:(BOOL)arg1 ;
-(BOOL)openGLModeEnabled;
-(id)pipelineLibrary;
-(void)setPostVertexDumpBufferIndex:(unsigned long long)arg1 ;
-(BOOL)isAlphaTestEnabled;
-(id)vertexDescriptor;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(void)setSupportIndirectCommandBuffers:(BOOL)arg1 ;
-(BOOL)isTwoSideEnabled;
-(void)validateWithDevice:(id)arg1 ;
-(void)setNeedsCustomBorderColorSamplers:(BOOL)arg1 ;
-(void)setVertexDescriptor:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPluginData:(id)arg1 ;
-(void)setTessellationOutputWindingOrder:(unsigned long long)arg1 ;
-(void)setTessellationFactorFormat:(unsigned long long)arg1 ;
-(id)fastBlendDescriptorAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)depthAttachmentPixelFormat;
-(id)label;
-(void)setMaxTessellationFactor:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStencilAttachmentPixelFormat:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setTextureWriteFPRoundingMode:(long long)arg1 ;
@end

