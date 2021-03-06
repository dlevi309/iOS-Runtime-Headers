/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsComputeCommandEncoder.h>

@class MTLTelemetryDevice, MTLTelemetryCommandBuffer;

@interface MTLTelemetryComputeCommandEncoder : MTLToolsComputeCommandEncoder {

	MTLTelemetryDevice* _telemetryDevice;
	MTLTelemetryCommandBuffer* _telemetryCommandBuffer;
	unsigned _ceDispatches;

}
-(void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(SCD_Struct_MT109)arg3 ;
-(void)dispatchThreads:(SCD_Struct_MT109)arg1 threadsPerThreadgroup:(SCD_Struct_MT109)arg2 ;
-(void)setTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setComputePipelineState:(id)arg1 ;
-(void)dispatchThreadgroups:(SCD_Struct_MT109)arg1 threadsPerThreadgroup:(SCD_Struct_MT109)arg2 ;
-(void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)endEncoding;
-(void)memoryBarrierWithScope:(unsigned long long)arg1 ;
-(void)memoryBarrierWithResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 ;
-(id)initWithComputeCommandEncoder:(id)arg1 commandBuffer:(id)arg2 ;
-(void)accumDispatchDistribution:(unsigned long long)arg1 threadgroupsPerGrid:(SCD_Struct_MT109)arg2 threadsPerThreadgroup:(SCD_Struct_MT109)arg3 threadsPerGrid:(SCD_Struct_MT109)arg4 ;
@end

