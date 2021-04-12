/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<MTLDevice>)device;
-(unsigned long long)threadExecutionWidth;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(NSString *)label;
-(unsigned long long)imageblockMemoryLengthForDimensions:(SCD_Struct_MT11)arg1;
-(unsigned long long)staticThreadgroupMemoryLength;
-(BOOL)supportIndirectCommandBuffers;

@end

