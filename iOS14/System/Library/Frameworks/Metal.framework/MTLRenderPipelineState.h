/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)supportIndirectCommandBuffers;
-(id<MTLDevice>)device;
-(unsigned long long)imageblockSampleLength;
-(BOOL)threadgroupSizeMatchesTileSize;
-(unsigned long long)imageblockMemoryLengthForDimensions:(SCD_Struct_MT31)arg1;
-(NSString *)label;
-(unsigned long long)maxTotalThreadsPerThreadgroup;

@end

