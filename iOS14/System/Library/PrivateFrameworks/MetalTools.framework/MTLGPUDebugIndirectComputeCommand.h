/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsIndirectComputeCommand.h>

@interface MTLGPUDebugIndirectComputeCommand : MTLToolsIndirectComputeCommand {

	unsigned long long _commandIndex;

}
-(void)setKernelBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)concurrentDispatchThreadgroups:(SCD_Struct_MT0)arg1 threadsPerThreadgroup:(SCD_Struct_MT0)arg2 ;
-(void)concurrentDispatchThreads:(SCD_Struct_MT0)arg1 threadsPerThreadgroup:(SCD_Struct_MT0)arg2 ;
-(void)flushBindings;
-(id)initWithIndirectComputeCommand:(id)arg1 commandIndex:(unsigned long long)arg2 indirectCommandBuffer:(id)arg3 ;
@end

