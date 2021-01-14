/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsComputeCommandEncoder.h>
#import <libobjc.A.dylib/MTLGPUDebugCommandEncoder.h>

@class MTLGPUDebugComputePipelineState, NSString;

@interface MTLGPUDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder <MTLGPUDebugCommandEncoder> {

	unsigned useResourceIteration;
	Options* _options;
	MTLGPUDebugStageBufferHandles _handles;
	MTLGPUDebugThreadgroupLengths _threadgroup;
	MTLGPUDebugBufferArgumentData _buffers;
	GPUDebugEventUUIDPacket _dispatchID;
	MTLGPUDebugComputePipelineState* _currentPipeline;

}

@property (readonly) unsigned encoderID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(SCD_Struct_MT109)arg3 ;
-(void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)dispatchThreads:(SCD_Struct_MT109)arg1 threadsPerThreadgroup:(SCD_Struct_MT109)arg2 ;
-(void)setComputePipelineState:(id)arg1 ;
-(void)setBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dispatchThreadgroups:(SCD_Struct_MT109)arg1 threadsPerThreadgroup:(SCD_Struct_MT109)arg2 ;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 ;
-(void)endEncoding;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 ;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)flushBindings;
-(unsigned)encoderID;
-(void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 ;
-(id)initWithComputeCommandEncoder:(id)arg1 parent:(id)arg2 encoderID:(unsigned)arg3 ;
@end

