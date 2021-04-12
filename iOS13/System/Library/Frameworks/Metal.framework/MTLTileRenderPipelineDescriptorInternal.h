/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLTileRenderPipelineDescriptor.h>

@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor {

	MTLTileRenderPipelineDescriptorPrivate _private;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(void)setLabel:(id)arg1 ;
-(id)label;
-(id)colorAttachments;
-(void)setTileFunction:(id)arg1 ;
-(void)setThreadgroupSizeMatchesTileSize:(BOOL)arg1 ;
-(unsigned long long)sampleCount;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(BOOL)threadgroupSizeMatchesTileSize;
-(void)setRasterSampleCount:(unsigned long long)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLTileRenderPipelineDescriptorPrivate*)_descriptorPrivate;
-(unsigned long long)rasterSampleCount;
-(unsigned long long)colorSampleCount;
-(void)setColorSampleCount:(unsigned long long)arg1 ;
-(id)tileBuffers;
-(id)tileFunction;
-(void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1 ;
-(void)validateWithDevice:(id)arg1 ;
@end

