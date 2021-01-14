/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLSamplerDescriptor.h>

@interface MTLSamplerDescriptorInternal : MTLSamplerDescriptor {

	MTLSamplerDescriptorPrivate _private;

}

@property (assign,nonatomic) unsigned long long borderColorSPI; 
@property (assign,nonatomic) unsigned customBorderColorValue_0; 
@property (assign,nonatomic) unsigned customBorderColorValue_1; 
@property (assign,nonatomic) unsigned customBorderColorValue_2; 
@property (assign,nonatomic) unsigned customBorderColorValue_3; 
@property (assign,nonatomic) BOOL forceSeamsOnCubemapFiltering; 
-(unsigned long long)resourceIndex;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setMipFilter:(unsigned long long)arg1 ;
-(void)setForceResourceIndex:(BOOL)arg1 ;
-(id)init;
-(unsigned long long)borderColorSPI;
-(unsigned long long)borderColor;
-(void)setMagFilter:(unsigned long long)arg1 ;
-(unsigned long long)pixelFormat;
-(unsigned long long)tAddressMode;
-(BOOL)forceSeamsOnCubemapFiltering;
-(unsigned)customBorderColorValue_0;
-(const MTLSamplerDescriptorPrivate*)descriptorPrivate;
-(BOOL)forceResourceIndex;
-(unsigned long long)rAddressMode;
-(BOOL)lodAverage;
-(void)setLodBias:(float)arg1 ;
-(unsigned long long)sAddressMode;
-(void)setCustomBorderColorValue_2:(unsigned)arg1 ;
-(void)setLodAverage:(BOOL)arg1 ;
-(unsigned)customBorderColorValue_2;
-(void)setCustomBorderColorValue_0:(unsigned)arg1 ;
-(unsigned long long)mipFilter;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(unsigned long long)minFilter;
-(id)description;
-(unsigned long long)maxAnisotropy;
-(void)setForceSeamsOnCubemapFiltering:(BOOL)arg1 ;
-(unsigned)customBorderColorValue_3;
-(void)setSAddressMode:(unsigned long long)arg1 ;
-(BOOL)supportArgumentBuffers;
-(void)setTAddressMode:(unsigned long long)arg1 ;
-(void)setCustomBorderColorValue_1:(unsigned)arg1 ;
-(void)setLodMaxClamp:(float)arg1 ;
-(void)setMinFilter:(unsigned long long)arg1 ;
-(unsigned)customBorderColorValue_1;
-(unsigned long long)compareFunction;
-(void)setNormalizedCoordinates:(BOOL)arg1 ;
-(void)setMaxAnisotropy:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(float)lodBias;
-(void)setBorderColorSPI:(unsigned long long)arg1 ;
-(void)setSupportArgumentBuffers:(BOOL)arg1 ;
-(void)setLabel:(id)arg1 ;
-(void)setLodMinClamp:(float)arg1 ;
-(BOOL)normalizedCoordinates;
-(float)lodMaxClamp;
-(float)lodMinClamp;
-(void)setCustomBorderColorValue_3:(unsigned)arg1 ;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(void)setCompareFunction:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBorderColor:(unsigned long long)arg1 ;
-(id)label;
-(unsigned long long)magFilter;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setRAddressMode:(unsigned long long)arg1 ;
@end

