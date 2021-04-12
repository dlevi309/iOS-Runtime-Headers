/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsResource.h>
#import <libobjc.A.dylib/MTLTextureImplementation.h>

@protocol MTLTexture, MTLBuffer;
@class MTLToolsPointerArray, NSString, MTLResourceAllocationInfo;

@interface MTLToolsTexture : MTLToolsResource <MTLTextureImplementation> {

	MTLToolsPointerArray* _views;
	id<MTLTexture> _parentTexture;
	id<MTLBuffer> _buffer;

}

@property (nonatomic,readonly) MTLToolsPointerArray * views;                        //@synthesize views=_views - In the implementation block
@property (readonly) id<MTLTexture> parentTexture;                                  //@synthesize parentTexture=_parentTexture - In the implementation block
@property (readonly) id<MTLBuffer> buffer;                                          //@synthesize buffer=_buffer - In the implementation block
@property (readonly) unsigned long long bufferOffset; 
@property (readonly) unsigned long long bufferBytesPerRow; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) id<MTLHeap> heap; 
@property (readonly) unsigned long long heapOffset; 
@property (readonly) unsigned long long allocatedSize; 
@property (readonly) id<MTLResource> rootResource; 
@property (readonly) unsigned long long parentRelativeLevel; 
@property (readonly) unsigned long long parentRelativeSlice; 
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
@property (nonatomic,readonly) SCD_Struct_MT17 swizzle; 
@property (assign) int responsibleProcess; 
@property (readonly) MTLResourceAllocationInfo * sharedAllocationInfo; 
@property (readonly) MTLResourceAllocationInfo * cachedAllocationInfo; 
@property (readonly) unsigned long long allocationID; 
@property (readonly) unsigned long long protectionOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
@property (readonly) unsigned long long rotation; 
@property (readonly) BOOL isCompressed; 
@property (readonly) long long compressionFeedback; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (assign,nonatomic) unsigned long long resourceIndex; 
@property (readonly) unsigned swizzleKey; 
@property (readonly) unsigned long long numFaces; 
@property (readonly) BOOL isDrawable; 
@property (readonly) unsigned long long sparseSurfaceDefaultValue; 
-(void)dealloc;
-(unsigned long long)depth;
-(unsigned long long)uniqueIdentifier;
-(unsigned long long)width;
-(unsigned long long)height;
-(void)replaceRegion:(SCD_Struct_MT5)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void*)arg3 bytesPerRow:(unsigned long long)arg4 ;
-(unsigned long long)textureType;
-(IOSurfaceRef)iosurface;
-(id<MTLBuffer>)buffer;
-(unsigned long long)pixelFormat;
-(void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(SCD_Struct_MT5)arg3 mipmapLevel:(unsigned long long)arg4 ;
-(unsigned long long)usage;
-(BOOL)isDrawable;
-(unsigned long long)rotation;
-(unsigned long long)arrayLength;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 ;
-(unsigned long long)mipmapLevelCount;
-(unsigned long long)sampleCount;
-(MTLToolsPointerArray *)views;
-(unsigned long long)bufferOffset;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 ;
-(void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(SCD_Struct_MT5)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6 ;
-(void)replaceRegion:(SCD_Struct_MT5)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 ;
-(BOOL)isCompressed;
-(unsigned long long)resourceIndex;
-(unsigned long long)bufferBytesPerRow;
-(unsigned long long)iosurfacePlane;
-(BOOL)isShareable;
-(BOOL)isSparse;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)newSharedTextureHandle;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 swizzle:(SCD_Struct_MT17)arg5 ;
-(id<MTLResource>)rootResource;
-(id<MTLTexture>)parentTexture;
-(unsigned long long)parentRelativeLevel;
-(unsigned long long)parentRelativeSlice;
-(BOOL)isFramebufferOnly;
-(unsigned long long)firstMipmapInTail;
-(unsigned long long)tailSizeInBytes;
-(BOOL)allowGPUOptimizedContents;
-(SCD_Struct_MT17)swizzle;
-(unsigned long long)sparseSurfaceDefaultValue;
-(unsigned)swizzleKey;
-(unsigned long long)numFaces;
-(void)copyFromSlice:(unsigned long long)arg1 mipmapLevel:(unsigned long long)arg2 origin:(SCD_Struct_MT0)arg3 size:(SCD_Struct_MT0)arg4 toPixels:(void*)arg5 rowBytes:(unsigned long long)arg6 imageBytes:(unsigned long long)arg7 ;
-(void)copyFromPixels:(const void*)arg1 rowBytes:(unsigned long long)arg2 imageBytes:(unsigned long long)arg3 toSlice:(unsigned long long)arg4 mipmapLevel:(unsigned long long)arg5 origin:(SCD_Struct_MT0)arg6 size:(SCD_Struct_MT0)arg7 ;
-(long long)compressionFeedback;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(SCD_Struct_MT5)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6 options:(unsigned long long)arg7 ;
-(void)replaceRegion:(SCD_Struct_MT5)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 options:(unsigned long long)arg7 ;
-(id)newCompressedTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 level:(unsigned long long)arg3 slice:(unsigned long long)arg4 ;
-(BOOL)canGenerateMipmapLevels;
-(void)generateMipmapLevel:(unsigned long long)arg1 slice:(unsigned long long)arg2 ;
-(void)acceptVisitor:(id)arg1 ;
-(unsigned long long)tailSize;
-(id)realRootResource;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 buffer:(id)arg3 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 parentTexture:(id)arg3 ;
@end

