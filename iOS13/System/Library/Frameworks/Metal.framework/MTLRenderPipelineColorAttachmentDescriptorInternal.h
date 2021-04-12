/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineColorAttachmentDescriptor.h>

@interface MTLRenderPipelineColorAttachmentDescriptorInternal : MTLRenderPipelineColorAttachmentDescriptor {

	MTLRenderPipelineAttachmentDescriptorPrivate _private;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)pixelFormat;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(void)setDestinationAlphaBlendFactor:(unsigned long long)arg1 ;
-(void)setDestinationRGBBlendFactor:(unsigned long long)arg1 ;
-(void)setSourceRGBBlendFactor:(unsigned long long)arg1 ;
-(void)setRgbBlendOperation:(unsigned long long)arg1 ;
-(void)setSourceAlphaBlendFactor:(unsigned long long)arg1 ;
-(void)setAlphaBlendOperation:(unsigned long long)arg1 ;
-(void)setBlendingEnabled:(BOOL)arg1 ;
-(void)setWriteMask:(unsigned long long)arg1 ;
-(unsigned long long)writeMask;
-(BOOL)isBlendingEnabled;
-(unsigned long long)rgbBlendOperation;
-(unsigned long long)alphaBlendOperation;
-(unsigned long long)sourceRGBBlendFactor;
-(unsigned long long)sourceAlphaBlendFactor;
-(unsigned long long)destinationRGBBlendFactor;
-(unsigned long long)destinationAlphaBlendFactor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLRenderPipelineAttachmentDescriptorPrivate*)_descriptorPrivate;
@end

