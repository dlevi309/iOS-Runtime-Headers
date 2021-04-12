/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLSamplerDescriptor.h>

@interface MTLSamplerDescriptorInternal : MTLSamplerDescriptor {

	MTLSamplerDescriptorPrivate _private;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLabel:(id)arg1 ;
-(id)label;
-(void)setMinFilter:(unsigned long long)arg1 ;
-(void)setMagFilter:(unsigned long long)arg1 ;
-(void)setSAddressMode:(unsigned long long)arg1 ;
-(void)setTAddressMode:(unsigned long long)arg1 ;
-(void)setNormalizedCoordinates:(BOOL)arg1 ;
-(void)setMaxAnisotropy:(unsigned long long)arg1 ;
-(void)setMipFilter:(unsigned long long)arg1 ;
-(void)setRAddressMode:(unsigned long long)arg1 ;
-(void)setLodMinClamp:(float)arg1 ;
-(void)setLodMaxClamp:(float)arg1 ;
-(void)setCompareFunction:(unsigned long long)arg1 ;
-(void)setSupportArgumentBuffers:(BOOL)arg1 ;
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(unsigned long long)minFilter;
-(unsigned long long)magFilter;
-(unsigned long long)mipFilter;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(BOOL)forceResourceIndex;
-(void)setForceResourceIndex:(BOOL)arg1 ;
-(const MTLSamplerDescriptorPrivate*)descriptorPrivate;
-(BOOL)lodAverage;
-(void)setLodAverage:(BOOL)arg1 ;
-(unsigned long long)maxAnisotropy;
-(unsigned long long)sAddressMode;
-(unsigned long long)tAddressMode;
-(unsigned long long)rAddressMode;
-(BOOL)normalizedCoordinates;
-(float)lodMinClamp;
-(float)lodMaxClamp;
-(float)lodBias;
-(void)setLodBias:(float)arg1 ;
-(unsigned long long)compareFunction;
-(BOOL)supportArgumentBuffers;
@end

