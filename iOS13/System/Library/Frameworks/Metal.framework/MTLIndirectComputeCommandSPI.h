/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@protocol MTLIndirectComputeCommandSPI <MTLIndirectComputeCommand>
@required
-(unsigned long long)getCommandType;
-(unsigned long long)getPipelineStateUniqueIdentifier;
-(void*)getKernelBufferAtIndex:(unsigned long long)arg1;
-(id)dispatchThreadgroupsArguments;
-(id)dispatchThreadsArguments;
-(unsigned long long)getThreadgroupMemoryLengthAtIndex:(unsigned long long)arg1;
-(SCD_Struct_MT30*)getStageInRegion;
-(BOOL)hasBarrier;

@end

