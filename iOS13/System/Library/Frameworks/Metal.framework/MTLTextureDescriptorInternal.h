/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLTextureDescriptor.h>

@interface MTLTextureDescriptorInternal : MTLTextureDescriptor {

	MTLTextureDescriptorPrivate _private;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)depth;
-(void)setMipmapLevelCount:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(void)setUsage:(unsigned long long)arg1 ;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned long long)textureType;
-(unsigned long long)pixelFormat;
-(void)setStorageMode:(unsigned long long)arg1 ;
-(unsigned long long)usage;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(BOOL)isDrawable;
-(unsigned long long)rotation;
-(void)setRotation:(unsigned long long)arg1 ;
-(unsigned long long)arrayLength;
-(void)setTextureType:(unsigned long long)arg1 ;
-(void)setArrayLength:(unsigned long long)arg1 ;
-(unsigned long long)storageMode;
-(void)setDepth:(unsigned long long)arg1 ;
-(unsigned long long)mipmapLevelCount;
-(unsigned long long)sampleCount;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)resourceOptions;
-(void)setResourceOptions:(unsigned long long)arg1 ;
-(void)setFramebufferOnly:(BOOL)arg1 ;
-(void)setCpuCacheMode:(unsigned long long)arg1 ;
-(unsigned long long)cpuCacheMode;
-(void)setAllowGPUOptimizedContents:(BOOL)arg1 ;
-(BOOL)framebufferOnly;
-(void)setIsDrawable:(BOOL)arg1 ;
-(unsigned long long)protectionOptions;
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(void)setProtectionOptions:(unsigned long long)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(BOOL)validateWithDevice:(id)arg1 ;
-(unsigned long long)hazardTrackingMode;
-(BOOL)allowGPUOptimizedContents;
-(SCD_Struct_MT35)swizzle;
-(unsigned long long)sparseSurfaceDefaultValue;
-(void)setSparseSurfaceDefaultValue:(unsigned long long)arg1 ;
-(BOOL)forceResourceIndex;
-(void)setForceResourceIndex:(BOOL)arg1 ;
-(void)setHazardTrackingMode:(unsigned long long)arg1 ;
-(unsigned long long)textureUsage;
-(void)setTextureUsage:(unsigned long long)arg1 ;
-(void)setSwizzle:(SCD_Struct_MT35)arg1 ;
-(void)setSwizzleKey:(unsigned)arg1 ;
-(unsigned)swizzleKey;
-(void)setWriteSwizzleEnabled:(BOOL)arg1 ;
-(BOOL)writeSwizzleEnabled;
-(unsigned long long)compressionMode;
-(void)setCompressionMode:(unsigned long long)arg1 ;
-(const MTLTextureDescriptorPrivate*)descriptorPrivate;
@end

