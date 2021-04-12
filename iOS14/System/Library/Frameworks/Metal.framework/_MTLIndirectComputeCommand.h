/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLIndirectComputeCommandSPI.h>

@class NSString;

@interface _MTLIndirectComputeCommand : NSObject <MTLIndirectComputeCommandSPI>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(void)setStageInRegion:(SCD_Struct_MT49)arg1 ;
-(void)setBarrier;
-(void)setKernelBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)concurrentDispatchThreadgroups:(SCD_Struct_MT31)arg1 threadsPerThreadgroup:(SCD_Struct_MT31)arg2 ;
-(void)concurrentDispatchThreads:(SCD_Struct_MT31)arg1 threadsPerThreadgroup:(SCD_Struct_MT31)arg2 ;
-(void)clearBarrier;
-(void*)getKernelBufferAtIndex:(unsigned long long)arg1 ;
-(id)dispatchThreadgroupsArguments;
-(id)dispatchThreadsArguments;
-(SCD_Struct_MT49)getStageInRegion;
-(unsigned long long)getThreadgroupMemoryLengthAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasBarrier;
-(id)getImageBlockSize;
-(void)setKernelArgument:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setComputePipelineState:(id)arg1 ;
-(void)reset;
-(unsigned long long)getCommandType;
-(unsigned long long)getOptimizedStatus;
-(unsigned long long)getPipelineStateUniqueIdentifier;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
@end

