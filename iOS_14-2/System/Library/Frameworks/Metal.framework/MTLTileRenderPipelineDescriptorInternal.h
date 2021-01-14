/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLTileRenderPipelineDescriptor.h>

@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor {

	MTLTileRenderPipelineDescriptorPrivate _private;

}
-(long long)textureWriteRoundingMode;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)binaryArchives;
-(void)setColorSampleCount:(unsigned long long)arg1 ;
-(id)init;
-(void)setRasterSampleCount:(unsigned long long)arg1 ;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(void)setBinaryArchives:(id)arg1 ;
-(const MTLTileRenderPipelineDescriptorPrivate*)_descriptorPrivate;
-(id)colorAttachments;
-(id)pluginData;
-(id)description;
-(unsigned long long)colorSampleCount;
-(BOOL)threadgroupSizeMatchesTileSize;
-(long long)textureWriteFPRoundingMode;
-(unsigned long long)sampleCount;
-(unsigned long long)rasterSampleCount;
-(unsigned long long)hash;
-(void)reset;
-(BOOL)validateWithDevice:(id)arg1 error:(id*)arg2 ;
-(void)setLabel:(id)arg1 ;
-(void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1 ;
-(void)setTextureWriteRoundingMode:(long long)arg1 ;
-(id)tileBuffers;
-(id)tileFunction;
-(id)newSerializedTileDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)validateWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPluginData:(id)arg1 ;
-(id)label;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setTextureWriteFPRoundingMode:(long long)arg1 ;
-(void)setTileFunction:(id)arg1 ;
-(void)setThreadgroupSizeMatchesTileSize:(BOOL)arg1 ;
@end

