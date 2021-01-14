/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


@protocol MTLIndirectComputeCommandSPI <MTLIndirectComputeCommand>
@required
-(void*)getKernelBufferAtIndex:(unsigned long long)arg1;
-(id)dispatchThreadgroupsArguments;
-(id)dispatchThreadsArguments;
-(SCD_Struct_MT8*)getStageInRegion;
-(unsigned long long)getThreadgroupMemoryLengthAtIndex:(unsigned long long)arg1;
-(BOOL)hasBarrier;
-(id)getImageBlockSize;
-(unsigned long long)getCommandType;
-(unsigned long long)getOptimizedStatus;
-(unsigned long long)getPipelineStateUniqueIdentifier;

@end

