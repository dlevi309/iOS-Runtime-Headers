/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

@class NSString;


@protocol MTLComputePipelineState <NSObject>
@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) unsigned long long threadExecutionWidth; 
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
@required
-(BOOL)supportIndirectCommandBuffers;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg1;
-(id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id*)arg2;
-(id<MTLDevice>)device;
-(unsigned long long)threadExecutionWidth;
-(id)functionHandleWithFunction:(id)arg1;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg1;
-(unsigned long long)imageblockMemoryLengthForDimensions:(SCD_Struct_MT31)arg1;
-(NSString *)label;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(unsigned long long)staticThreadgroupMemoryLength;

@end

