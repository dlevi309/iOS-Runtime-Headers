/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLTextureDescriptor.h>

@interface MTLTextureDescriptorInternal : MTLTextureDescriptor {

	MTLTextureDescriptorPrivate _private;

}
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned long long)cpuCacheMode;
-(unsigned long long)resourceIndex;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)textureType;
-(void)setResourceOptions:(unsigned long long)arg1 ;
-(void)setCpuCacheMode:(unsigned long long)arg1 ;
-(void)setMipmapLevelCount:(unsigned long long)arg1 ;
-(unsigned long long)arrayLength;
-(unsigned long long)protectionOptions;
-(unsigned long long)usage;
-(void)setProtectionOptions:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(void)setRotation:(unsigned long long)arg1 ;
-(void)setForceResourceIndex:(BOOL)arg1 ;
-(id)init;
-(void)setSwizzleKey:(unsigned)arg1 ;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)rotation;
-(unsigned)swizzleKey;
-(void)setCompressionMode:(unsigned long long)arg1 ;
-(unsigned long long)storageMode;
-(unsigned long long)pixelFormat;
-(void)setAllowGPUOptimizedContents:(BOOL)arg1 ;
-(BOOL)isDrawable;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setIsDrawable:(BOOL)arg1 ;
-(void)setWriteSwizzleEnabled:(BOOL)arg1 ;
-(const MTLTextureDescriptorPrivate*)descriptorPrivate;
-(unsigned long long)sparseSurfaceDefaultValue;
-(void)setDepth:(unsigned long long)arg1 ;
-(unsigned long long)height;
-(BOOL)forceResourceIndex;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(id)description;
-(void)setFramebufferOnly:(BOOL)arg1 ;
-(BOOL)framebufferOnly;
-(unsigned long long)textureUsage;
-(BOOL)allowGPUOptimizedContents;
-(void)setTextureUsage:(unsigned long long)arg1 ;
-(unsigned long long)sampleCount;
-(SCD_Struct_MT58)swizzle;
-(void)setArrayLength:(unsigned long long)arg1 ;
-(unsigned long long)hazardTrackingMode;
-(unsigned long long)hash;
-(void)setTextureType:(unsigned long long)arg1 ;
-(unsigned long long)compressionMode;
-(void)setStorageMode:(unsigned long long)arg1 ;
-(unsigned long long)mipmapLevelCount;
-(void)setUsage:(unsigned long long)arg1 ;
-(void)setSwizzle:(SCD_Struct_MT58)arg1 ;
-(unsigned long long)depth;
-(void)setSparseSurfaceDefaultValue:(unsigned long long)arg1 ;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(BOOL)validateWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)resourceOptions;
-(void)setHazardTrackingMode:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)writeSwizzleEnabled;
@end

