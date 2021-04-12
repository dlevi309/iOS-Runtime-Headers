/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePipelineDescriptor.h>

@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor {

	MTLComputePipelineDescriptorPrivate _private;

}
-(BOOL)supportIndirectCommandBuffers;
-(long long)textureWriteRoundingMode;
-(unsigned long long)resourceIndex;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)binaryArchives;
-(void)setDriverCompilerOptions:(id)arg1 ;
-(BOOL)threadGroupSizeIsMultipleOfThreadExecutionWidth;
-(id)binaryLibraries;
-(BOOL)needsCustomBorderColorSamplers;
-(void)setForceResourceIndex:(BOOL)arg1 ;
-(id)init;
-(void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(BOOL)arg1 ;
-(void)setFunctionPointers:(id)arg1 ;
-(void)setBinaryArchives:(id)arg1 ;
-(const MTLComputePipelineDescriptorPrivate*)_descriptorPrivate;
-(id)stageInputDescriptor;
-(unsigned long long)maxStackCallDepth;
-(BOOL)forceResourceIndex;
-(id)newSerializedComputeData;
-(id)computeFunction;
-(id)functionPointerGroups;
-(id)dynamicLibraries;
-(id)pluginData;
-(void)setMaxStackCallDepth:(unsigned long long)arg1 ;
-(void)setMaxCallStackDepth:(unsigned long long)arg1 ;
-(id)description;
-(void)setStageInputDescriptor:(id)arg1 ;
-(void)setInsertLibraries:(id)arg1 ;
-(id)newSerializedComputeDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)linkedFunctions;
-(void)setFunctionPointerGroups:(id)arg1 ;
-(unsigned long long)maxCallStackDepth;
-(BOOL)openCLModeEnabled;
-(void)setOpenCLModeEnabled:(BOOL)arg1 ;
-(id)functionPointers;
-(void)setOpenGLModeEnabled:(BOOL)arg1 ;
-(long long)textureWriteFPRoundingMode;
-(void)setSupportAddingBinaryFunctions:(BOOL)arg1 ;
-(void)setDynamicLibraries:(id)arg1 ;
-(unsigned long long)hash;
-(void)reset;
-(BOOL)validateWithDevice:(id)arg1 error:(id*)arg2 ;
-(id)driverCompilerOptions;
-(void)setLabel:(id)arg1 ;
-(BOOL)supportAddingBinaryFunctions;
-(void)setPipelineLibrary:(id)arg1 ;
-(void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1 ;
-(void)setTextureWriteRoundingMode:(long long)arg1 ;
-(BOOL)openGLModeEnabled;
-(id)pipelineLibrary;
-(void)setBinaryLibraries:(id)arg1 ;
-(id)buffers;
-(id)insertLibraries;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(void)setSupportIndirectCommandBuffers:(BOOL)arg1 ;
-(void)setLinkedFunctions:(id)arg1 ;
-(void)validateWithDevice:(id)arg1 ;
-(void)setNeedsCustomBorderColorSamplers:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPluginData:(id)arg1 ;
-(id)label;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(void)setComputeFunction:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setTextureWriteFPRoundingMode:(long long)arg1 ;
@end

