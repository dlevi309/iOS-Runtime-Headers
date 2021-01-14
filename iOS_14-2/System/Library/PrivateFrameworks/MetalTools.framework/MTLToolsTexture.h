/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsResource.h>
#import <libobjc.A.dylib/MTLTextureImplementation.h>

@protocol MTLTexture, MTLBuffer;
@class NSString;

@interface MTLToolsTexture : MTLToolsResource <MTLTextureImplementation> {

	id<MTLTexture> _parentTexture;
	id<MTLBuffer> _buffer;

}

@property (readonly) id<MTLTexture> parentTexture;                               //@synthesize parentTexture=_parentTexture - In the implementation block
@property (readonly) id<MTLBuffer> buffer;                                       //@synthesize buffer=_buffer - In the implementation block
@property (readonly) unsigned long long bufferOffset; 
@property (readonly) unsigned long long bufferBytesPerRow; 
@property (readonly) IOSurfaceRef iosurface; 
@property (readonly) unsigned long long iosurfacePlane; 
@property (readonly) unsigned long long rotation; 
@property (readonly) BOOL isCompressed; 
@property (readonly) long long compressionFeedback; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,readonly) unsigned long long resourceIndex; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (readonly) unsigned swizzleKey; 
@property (readonly) unsigned long long numFaces; 
@property (readonly) BOOL isDrawable; 
@property (readonly) unsigned long long sparseSurfaceDefaultValue; 
@property (readonly) id<MTLResource> rootResource; 
@property (readonly) unsigned long long parentRelativeLevel; 
@property (readonly) unsigned long long parentRelativeSlice; 
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
@property (nonatomic,readonly) SCD_Struct_MT59 swizzle; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) id<MTLHeap> heap; 
@property (readonly) unsigned long long heapOffset; 
@property (readonly) unsigned long long allocatedSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) int responsibleProcess; 
@property (readonly) unsigned long long allocationID; 
@property (readonly) unsigned long long protectionOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
-(unsigned long long)resourceIndex;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)textureType;
-(unsigned long long)arrayLength;
-(unsigned long long)usage;
-(void)replaceRegion:(SCD_Struct_MT8)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void*)arg3 bytesPerRow:(unsigned long long)arg4 ;
-(unsigned long long)width;
-(void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(SCD_Struct_MT8)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6 ;
-(unsigned long long)rotation;
-(unsigned)swizzleKey;
-(unsigned long long)pixelFormat;
-(BOOL)isDrawable;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 ;
-(unsigned long long)uniqueIdentifier;
-(BOOL)isShareable;
-(unsigned long long)sparseSurfaceDefaultValue;
-(void)generateMipmapLevel:(unsigned long long)arg1 slice:(unsigned long long)arg2 ;
-(unsigned long long)height;
-(void)copyFromSlice:(unsigned long long)arg1 mipmapLevel:(unsigned long long)arg2 origin:(SCD_Struct_MT0)arg3 size:(SCD_Struct_MT0)arg4 toPixels:(void*)arg5 rowBytes:(unsigned long long)arg6 imageBytes:(unsigned long long)arg7 ;
-(id)newSharedTextureHandle;
-(id)newCompressedTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 level:(unsigned long long)arg3 slice:(unsigned long long)arg4 ;
-(long long)compressionFeedback;
-(unsigned long long)firstMipmapInTail;
-(void)copyFromPixels:(const void*)arg1 rowBytes:(unsigned long long)arg2 imageBytes:(unsigned long long)arg3 toSlice:(unsigned long long)arg4 mipmapLevel:(unsigned long long)arg5 origin:(SCD_Struct_MT0)arg6 size:(SCD_Struct_MT0)arg7 ;
-(unsigned long long)bufferOffset;
-(unsigned long long)gpuAddress;
-(BOOL)allowGPUOptimizedContents;
-(id<MTLBuffer>)buffer;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 swizzle:(SCD_Struct_MT59)arg5 ;
-(void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(SCD_Struct_MT8)arg3 mipmapLevel:(unsigned long long)arg4 ;
-(unsigned long long)sampleCount;
-(SCD_Struct_MT59)swizzle;
-(unsigned long long)tailSize;
-(BOOL)isFramebufferOnly;
-(unsigned long long)parentRelativeSlice;
-(id<MTLResource>)rootResource;
-(IOSurfaceRef)iosurface;
-(unsigned long long)mipmapLevelCount;
-(BOOL)isSparse;
-(unsigned long long)iosurfacePlane;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 ;
-(unsigned long long)depth;
-(BOOL)isCompressed;
-(id<MTLTexture>)parentTexture;
-(unsigned long long)bufferBytesPerRow;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2 ;
-(unsigned long long)parentRelativeLevel;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 resourceIndex:(unsigned long long)arg5 ;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 swizzle:(SCD_Struct_MT59)arg5 resourceIndex:(unsigned long long)arg6 ;
-(unsigned long long)tailSizeInBytes;
-(unsigned long long)numFaces;
-(void)replaceRegion:(SCD_Struct_MT8)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 ;
-(void)dealloc;
-(BOOL)canGenerateMipmapLevels;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 buffer:(id)arg3 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 parentTexture:(id)arg3 ;
-(id)realRootResource;
@end

