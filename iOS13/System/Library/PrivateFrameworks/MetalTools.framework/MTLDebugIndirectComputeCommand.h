/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsIndirectComputeCommand.h>

@protocol MTLIndirectCommandBufferSPI;
@class MTLIndirectCommandBufferDescriptor;

@interface MTLDebugIndirectComputeCommand : MTLToolsIndirectComputeCommand {

	MTLIndirectCommandBufferDescriptor* _desc;
	unsigned long long _index;
	id<MTLIndirectCommandBufferSPI> _iCB;

}

@property (readonly) unsigned long long index; 
@property (readonly) id<MTLIndirectCommandBuffer> indirectCommandBuffer; 
-(void)dealloc;
-(unsigned long long)index;
-(void)setComputePipelineState:(id)arg1 ;
-(void)setKernelBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)concurrentDispatchThreadgroups:(SCD_Struct_MT0)arg1 threadsPerThreadgroup:(SCD_Struct_MT0)arg2 ;
-(void)concurrentDispatchThreads:(SCD_Struct_MT0)arg1 threadsPerThreadgroup:(SCD_Struct_MT0)arg2 ;
-(id)initWithBaseObject:(id)arg1 descriptor:(id)arg2 indexCount:(unsigned long long)arg3 indirectCommandBuffer:(id)arg4 ;
-(id<MTLIndirectCommandBuffer>)indirectCommandBuffer;
@end

