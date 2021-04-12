/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassDescriptor.h>

@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor {

	MTLRenderPassDescriptorPrivate _private;

}
+(id)renderPassDescriptor;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)imageblockSampleLength;
-(void)setImageblockSampleLength:(unsigned long long)arg1 ;
-(id)colorAttachments;
-(void)setDefaultColorSampleCount:(unsigned long long)arg1 ;
-(void)setRenderTargetWidth:(unsigned long long)arg1 ;
-(void)setRenderTargetHeight:(unsigned long long)arg1 ;
-(unsigned long long)tileWidth;
-(unsigned long long)tileHeight;
-(void)setFineGrainedBackgroundVisibilityEnabled:(BOOL)arg1 ;
-(id)depthAttachment;
-(id)stencilAttachment;
-(void)setVisibilityResultBuffer:(id)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLRenderPassDescriptorPrivate*)_descriptorPrivate;
-(void)setSamplePositions:(const SCD_Struct_MT60*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)getSamplePositions:(SCD_Struct_MT60*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)threadgroupMemoryLength;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 ;
-(void)setTileWidth:(unsigned long long)arg1 ;
-(void)setTileHeight:(unsigned long long)arg1 ;
-(void)setDepthAttachment:(id)arg1 ;
-(void)setStencilAttachment:(id)arg1 ;
-(id)visibilityResultBuffer;
-(void)setRenderTargetArrayLength:(unsigned long long)arg1 ;
-(unsigned long long)renderTargetArrayLength;
-(unsigned long long)renderTargetWidth;
-(unsigned long long)renderTargetHeight;
-(unsigned long long)defaultColorSampleCount;
-(BOOL)fineGrainedBackgroundVisibilityEnabled;
-(void)setDitherEnabled:(BOOL)arg1 ;
-(BOOL)isDitherEnabled;
-(void)setOpenGLModeEnabled:(BOOL)arg1 ;
-(BOOL)openGLModeEnabled;
-(void)setDefaultRasterSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)defaultRasterSampleCount;
-(id)rasterizationRateMap;
-(void)setRasterizationRateMap:(id)arg1 ;
-(BOOL)validate:(id)arg1 width:(unsigned long long*)arg2 height:(unsigned long long*)arg3 ;
@end

