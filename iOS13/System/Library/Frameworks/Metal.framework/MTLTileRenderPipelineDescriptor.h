/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MTLTileRenderPipelineColorAttachmentDescriptorArray, MTLPipelineBufferDescriptorArray;

@interface MTLTileRenderPipelineDescriptor : NSObject <NSCopying>

@property (nonatomic,copy) NSString * label; 
@property (nonatomic,retain) id<MTLFunction> tileFunction; 
@property (assign,nonatomic) unsigned long long rasterSampleCount; 
@property (readonly) MTLTileRenderPipelineColorAttachmentDescriptorArray * colorAttachments; 
@property (assign,nonatomic) BOOL threadgroupSizeMatchesTileSize; 
@property (readonly) MTLPipelineBufferDescriptorArray * tileBuffers; 
@property (assign,nonatomic) unsigned long long maxTotalThreadsPerThreadgroup; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
@end

