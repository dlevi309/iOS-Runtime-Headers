/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol MTLTexture <MTLResource>
@property (readonly) id<MTLResource> rootResource; 
@property (readonly) id<MTLTexture> parentTexture; 
@property (readonly) unsigned long long parentRelativeLevel; 
@property (readonly) unsigned long long parentRelativeSlice; 
@property (readonly) id<MTLBuffer> buffer; 
@property (readonly) unsigned long long bufferOffset; 
@property (readonly) unsigned long long bufferBytesPerRow; 
@property (readonly) IOSurfaceRef iosurface; 
@property (readonly) unsigned long long iosurfacePlane; 
@property (readonly) unsigned long long textureType; 
@property (readonly) unsigned long long pixelFormat; 
@property (readonly) unsigned long long width; 
@property (readonly) unsigned long long height; 
@property (readonly) unsigned long long depth; 
@property (readonly) unsigned long long mipmapLevelCount; 
@property (readonly) unsigned long long sampleCount; 
@property (readonly) unsigned long long arrayLength; 
@property (readonly) unsigned long long usage; 
@property (getter=isShareable,readonly) BOOL shareable; 
@property (getter=isFramebufferOnly,readonly) BOOL framebufferOnly; 
@property (readonly) unsigned long long firstMipmapInTail; 
@property (readonly) unsigned long long tailSizeInBytes; 
@property (readonly) BOOL isSparse; 
@property (readonly) BOOL allowGPUOptimizedContents; 
@property (nonatomic,readonly) SCD_Struct_Fi111 swizzle; 
@required
-(unsigned long long)textureType;
-(unsigned long long)arrayLength;
-(unsigned long long)usage;
-(void)replaceRegion:(SCD_Struct_Fi112)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void*)arg3 bytesPerRow:(unsigned long long)arg4;
-(unsigned long long)width;
-(void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(SCD_Struct_Fi112)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6;
-(unsigned long long)pixelFormat;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4;
-(BOOL)isShareable;
-(unsigned long long)height;
-(id)newSharedTextureHandle;
-(unsigned long long)firstMipmapInTail;
-(unsigned long long)bufferOffset;
-(BOOL)allowGPUOptimizedContents;
-(id<MTLBuffer>)buffer;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 swizzle:(SCD_Struct_Fi111)arg5;
-(void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(SCD_Struct_Fi112)arg3 mipmapLevel:(unsigned long long)arg4;
-(unsigned long long)sampleCount;
-(SCD_Struct_Fi111)swizzle;
-(BOOL)isFramebufferOnly;
-(unsigned long long)parentRelativeSlice;
-(id<MTLResource>)rootResource;
-(IOSurfaceRef)iosurface;
-(unsigned long long)mipmapLevelCount;
-(BOOL)isSparse;
-(unsigned long long)iosurfacePlane;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1;
-(unsigned long long)depth;
-(id<MTLTexture>)parentTexture;
-(unsigned long long)bufferBytesPerRow;
-(unsigned long long)parentRelativeLevel;
-(unsigned long long)tailSizeInBytes;
-(void)replaceRegion:(SCD_Struct_Fi112)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;

@end

