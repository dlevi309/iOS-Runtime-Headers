/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineColorAttachmentDescriptor.h>

@interface MTLRenderPipelineColorAttachmentDescriptorInternal : MTLRenderPipelineColorAttachmentDescriptor {

	MTLRenderPipelineAttachmentDescriptorPrivate _private;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(BOOL)isBlendingEnabled;
-(id)init;
-(unsigned long long)writeMask;
-(unsigned long long)pixelFormat;
-(void)setSourceRGBBlendFactor:(unsigned long long)arg1 ;
-(const MTLRenderPipelineAttachmentDescriptorPrivate*)_descriptorPrivate;
-(void)setSourceAlphaBlendFactor:(unsigned long long)arg1 ;
-(void)setDestinationRGBBlendFactor:(unsigned long long)arg1 ;
-(unsigned long long)sourceAlphaBlendFactor;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(unsigned long long)destinationAlphaBlendFactor;
-(unsigned long long)destinationRGBBlendFactor;
-(id)description;
-(unsigned long long)rgbBlendOperation;
-(unsigned long long)alphaBlendOperation;
-(unsigned long long)sourceRGBBlendFactor;
-(void)setAlphaBlendOperation:(unsigned long long)arg1 ;
-(void)setBlendingEnabled:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setDestinationAlphaBlendFactor:(unsigned long long)arg1 ;
-(void)setRgbBlendOperation:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setWriteMask:(unsigned long long)arg1 ;
-(void)dealloc;
@end

