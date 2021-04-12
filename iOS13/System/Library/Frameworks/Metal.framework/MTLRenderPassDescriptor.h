/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLRenderPassColorAttachmentDescriptorArray, MTLRenderPassDepthAttachmentDescriptor, MTLRenderPassStencilAttachmentDescriptor;

@interface MTLRenderPassDescriptor : NSObject <NSCopying> {

	unsigned long long _imageblockSampleLength;
	unsigned long long _threadgroupMemoryLength;
	unsigned long long _tileWidth;
	unsigned long long _tileHeight;

}

@property (readonly) MTLRenderPassColorAttachmentDescriptorArray * colorAttachments; 
@property (nonatomic,copy) MTLRenderPassDepthAttachmentDescriptor * depthAttachment; 
@property (nonatomic,copy) MTLRenderPassStencilAttachmentDescriptor * stencilAttachment; 
@property (nonatomic,retain) id<MTLBuffer> visibilityResultBuffer; 
@property (assign,nonatomic) unsigned long long renderTargetArrayLength; 
@property (assign,nonatomic) unsigned long long imageblockSampleLength;                               //@synthesize imageblockSampleLength=_imageblockSampleLength - In the implementation block
@property (assign,nonatomic) unsigned long long threadgroupMemoryLength;                              //@synthesize threadgroupMemoryLength=_threadgroupMemoryLength - In the implementation block
@property (assign,nonatomic) unsigned long long tileWidth;                                            //@synthesize tileWidth=_tileWidth - In the implementation block
@property (assign,nonatomic) unsigned long long tileHeight;                                           //@synthesize tileHeight=_tileHeight - In the implementation block
@property (assign,nonatomic) unsigned long long defaultRasterSampleCount; 
@property (assign,nonatomic) unsigned long long renderTargetWidth; 
@property (assign,nonatomic) unsigned long long renderTargetHeight; 
@property (nonatomic,retain) id<MTLRasterizationRateMap> rasterizationRateMap; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)renderPassDescriptor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)imageblockSampleLength;
-(void)setImageblockSampleLength:(unsigned long long)arg1 ;
-(unsigned long long)tileWidth;
-(unsigned long long)tileHeight;
-(void)setSamplePositions:(const SCD_Struct_MT15*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)getSamplePositions:(SCD_Struct_MT15*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)threadgroupMemoryLength;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 ;
-(void)setTileWidth:(unsigned long long)arg1 ;
-(void)setTileHeight:(unsigned long long)arg1 ;
@end

