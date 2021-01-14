/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MTLTileRenderPipelineColorAttachmentDescriptorArray, MTLPipelineBufferDescriptorArray, NSArray;

@interface MTLTileRenderPipelineDescriptor : NSObject <NSCopying>

@property (nonatomic,copy) NSString * label; 
@property (nonatomic,retain) id<MTLFunction> tileFunction; 
@property (assign,nonatomic) unsigned long long rasterSampleCount; 
@property (readonly) MTLTileRenderPipelineColorAttachmentDescriptorArray * colorAttachments; 
@property (assign,nonatomic) BOOL threadgroupSizeMatchesTileSize; 
@property (readonly) MTLPipelineBufferDescriptorArray * tileBuffers; 
@property (assign,nonatomic) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (nonatomic,copy) NSArray * binaryArchives; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

