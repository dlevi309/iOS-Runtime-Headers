/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassDescriptor.h>

@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor {

	MTLRenderPassDescriptorPrivate _private;

}
+(id)renderPassDescriptor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setSamplePositions:(const SCD_Struct_MT96*)arg1 count:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)defaultRasterSampleCount;
-(unsigned long long)tileHeight;
-(id)depthAttachment;
-(void)setTileHeight:(unsigned long long)arg1 ;
-(void)setDepthAttachment:(id)arg1 ;
-(void)setPointCoordYFlipEnabled:(BOOL)arg1 ;
-(void)setRenderTargetHeight:(unsigned long long)arg1 ;
-(id)stencilAttachment;
-(void)setFineGrainedBackgroundVisibilityEnabled:(BOOL)arg1 ;
-(const MTLRenderPassDescriptorPrivate*)_descriptorPrivate;
-(unsigned long long)renderTargetWidth;
-(unsigned long long)threadgroupMemoryLength;
-(id)colorAttachments;
-(void)setRenderTargetWidth:(unsigned long long)arg1 ;
-(void)setDefaultRasterSampleCount:(unsigned long long)arg1 ;
-(void)setRasterizationRateMap:(id)arg1 ;
-(unsigned long long)renderTargetArrayLength;
-(id)description;
-(unsigned long long)tileWidth;
-(id)visibilityResultBuffer;
-(void)setRenderTargetArrayLength:(unsigned long long)arg1 ;
-(unsigned long long)imageblockSampleLength;
-(void)setDitherEnabled:(BOOL)arg1 ;
-(unsigned long long)defaultColorSampleCount;
-(void)setOpenGLModeEnabled:(BOOL)arg1 ;
-(unsigned long long)renderTargetHeight;
-(void)setVisibilityResultBuffer:(id)arg1 ;
-(void)setTileWidth:(unsigned long long)arg1 ;
-(unsigned long long)getSamplePositions:(SCD_Struct_MT96*)arg1 count:(unsigned long long)arg2 ;
-(id)rasterizationRateMap;
-(unsigned long long)hash;
-(BOOL)validate:(id)arg1 width:(unsigned long long*)arg2 height:(unsigned long long*)arg3 ;
-(id)sampleBufferAttachments;
-(BOOL)pointCoordYFlipEnabled;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 ;
-(BOOL)openGLModeEnabled;
-(void)setDefaultColorSampleCount:(unsigned long long)arg1 ;
-(BOOL)isDitherEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStencilAttachment:(id)arg1 ;
-(void)setImageblockSampleLength:(unsigned long long)arg1 ;
-(BOOL)fineGrainedBackgroundVisibilityEnabled;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

