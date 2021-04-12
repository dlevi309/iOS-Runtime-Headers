/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

@class NSString;


@protocol MTLRenderPipelineState <NSObject>
@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) BOOL threadgroupSizeMatchesTileSize; 
@property (readonly) unsigned long long imageblockSampleLength; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
@required
-(id<MTLDevice>)device;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(NSString *)label;
-(unsigned long long)imageblockSampleLength;
-(unsigned long long)imageblockMemoryLengthForDimensions:(SCD_Struct_MT11)arg1;
-(BOOL)supportIndirectCommandBuffers;
-(BOOL)threadgroupSizeMatchesTileSize;

@end

