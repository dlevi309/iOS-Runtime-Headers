/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePipelineDescriptor.h>

@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor {

	MTLComputePipelineDescriptorPrivate* _private;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(void)setLabel:(id)arg1 ;
-(id)label;
-(void)setComputeFunction:(id)arg1 ;
-(BOOL)supportIndirectCommandBuffers;
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(void)setPipelineLibrary:(id)arg1 ;
-(id)pipelineLibrary;
-(id)buffers;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLComputePipelineDescriptorPrivate*)_descriptorPrivate;
-(void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1 ;
-(void)validateWithDevice:(id)arg1 ;
-(void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(BOOL)arg1 ;
-(void)setSupportIndirectCommandBuffers:(BOOL)arg1 ;
-(id)stageInputDescriptor;
-(void)setStageInputDescriptor:(id)arg1 ;
-(BOOL)forceResourceIndex;
-(void)setForceResourceIndex:(BOOL)arg1 ;
-(id)newSerializedComputeDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)computeFunction;
-(void)setDriverCompilerOptions:(id)arg1 ;
-(id)driverCompilerOptions;
-(BOOL)threadGroupSizeIsMultipleOfThreadExecutionWidth;
-(id)newSerializedComputeData;
@end

