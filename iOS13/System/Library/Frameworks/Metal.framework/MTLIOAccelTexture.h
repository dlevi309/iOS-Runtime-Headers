/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLIOAccelResource.h>

@class MTLIOAccelBuffer, MTLIOAccelResource;

@interface MTLIOAccelTexture : MTLIOAccelResource {

	MTLIOAccelTexture* _parentTexture;
	unsigned long long _parentRelativeLevel;
	unsigned long long _parentRelativeSlice;
	MTLIOAccelBuffer* _buffer;
	unsigned _swizzle;
	BOOL _writeSwizzleEnabled;
	BOOL _isCompressed;
	MTLIOAccelBuffer* _masterBuffer;
	IOSurfaceRef _iosurface;
	unsigned long long _iosurfacePlane;
	unsigned long long _textureType;
	unsigned long long _pixelFormat;
	unsigned long long _usage;
	unsigned long long _rotation;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _depth;
	unsigned long long _mipmapLevelCount;
	unsigned long long _sampleCount;
	unsigned long long _arrayLength;
	unsigned long long _numFaces;
	BOOL _shareable;
	BOOL _framebufferOnly;
	BOOL _isDrawable;
	BOOL _rootResourceIsSuballocatedBuffer;
	short _masterHeapIndex;
	short _masterBufferIndex;
	unsigned long long _masterBufferOffset;
	unsigned long long _length;
	unsigned long long _bufferOffset;
	unsigned long long _bufferBytesPerRow;
	void* _pointer;
	/*^block*/id _deallocator;
	BOOL _allowGPUOptimizedContents;

}

@property (readonly) unsigned long long uniqueIdentifier; 
@property (readonly) MTLIOAccelResource * rootResource; 
@property (readonly) MTLIOAccelTexture * parentTexture;                          //@synthesize parentTexture=_parentTexture - In the implementation block
@property (readonly) unsigned long long parentRelativeLevel;                     //@synthesize parentRelativeLevel=_parentRelativeLevel - In the implementation block
@property (readonly) unsigned long long parentRelativeSlice;                     //@synthesize parentRelativeSlice=_parentRelativeSlice - In the implementation block
@property (readonly) MTLIOAccelBuffer * buffer;                                  //@synthesize buffer=_buffer - In the implementation block
@property (readonly) unsigned long long bufferOffset; 
@property (readonly) unsigned long long bufferBytesPerRow; 
@property (readonly) IOSurfaceRef iosurface;                                     //@synthesize iosurface=_iosurface - In the implementation block
@property (readonly) unsigned long long iosurfacePlane;                          //@synthesize iosurfacePlane=_iosurfacePlane - In the implementation block
@property (readonly) unsigned long long rotation;                                //@synthesize rotation=_rotation - In the implementation block
@property (readonly) SCD_Struct_MT35 swizzle; 
@property (readonly) unsigned swizzleKey; 
@property (readonly) BOOL isCompressed;                                          //@synthesize isCompressed=_isCompressed - In the implementation block
@property (readonly) long long compressionFeedback; 
@property (readonly) unsigned long long textureType;                             //@synthesize textureType=_textureType - In the implementation block
@property (readonly) unsigned long long pixelFormat;                             //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (readonly) unsigned long long usage;                                   //@synthesize usage=_usage - In the implementation block
@property (readonly) unsigned long long width;                                   //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long height;                                  //@synthesize height=_height - In the implementation block
@property (readonly) unsigned long long depth;                                   //@synthesize depth=_depth - In the implementation block
@property (readonly) unsigned long long mipmapLevelCount;                        //@synthesize mipmapLevelCount=_mipmapLevelCount - In the implementation block
@property (readonly) unsigned long long sampleCount;                             //@synthesize sampleCount=_sampleCount - In the implementation block
@property (readonly) unsigned long long arrayLength;                             //@synthesize arrayLength=_arrayLength - In the implementation block
@property (readonly) unsigned long long numFaces;                                //@synthesize numFaces=_numFaces - In the implementation block
@property (getter=isShareable,readonly) BOOL shareable;                          //@synthesize shareable=_shareable - In the implementation block
@property (getter=isFramebufferOnly,readonly) BOOL framebufferOnly;              //@synthesize framebufferOnly=_framebufferOnly - In the implementation block
@property (readonly) BOOL isDrawable;                                            //@synthesize isDrawable=_isDrawable - In the implementation block
@property (readonly) BOOL rootResourceIsSuballocatedBuffer;                      //@synthesize rootResourceIsSuballocatedBuffer=_rootResourceIsSuballocatedBuffer - In the implementation block
@property (readonly) BOOL allowGPUOptimizedContents;                             //@synthesize allowGPUOptimizedContents=_allowGPUOptimizedContents - In the implementation block
+(void)initNewTextureDataWithDevice:(id)arg1 descriptor:(id)arg2 sysMemSize:(unsigned long long)arg3 sysMemRowBytes:(unsigned long long)arg4 vidMemSize:(unsigned long long)arg5 vidMemRowBytes:(unsigned long long)arg6 args:(IOAccelNewResourceArgs*)arg7 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)depth;
-(unsigned long long)uniqueIdentifier;
-(unsigned long long)width;
-(unsigned long long)height;
-(void)replaceRegion:(SCD_Struct_MT30)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void*)arg3 bytesPerRow:(unsigned long long)arg4 ;
-(unsigned long long)textureType;
-(IOSurfaceRef)iosurface;
-(MTLIOAccelBuffer *)buffer;
-(unsigned long long)pixelFormat;
-(void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(SCD_Struct_MT30)arg3 mipmapLevel:(unsigned long long)arg4 ;
-(unsigned long long)usage;
-(BOOL)isDrawable;
-(unsigned long long)rotation;
-(unsigned long long)arrayLength;
-(unsigned long long)mipmapLevelCount;
-(unsigned long long)sampleCount;
-(unsigned long long)bufferOffset;
-(BOOL)isCompressed;
-(unsigned long long)bufferBytesPerRow;
-(unsigned long long)iosurfacePlane;
-(BOOL)isShareable;
-(BOOL)isSparse;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(BOOL)isAliasable;
-(void)makeAliasable;
-(unsigned long long)hazardTrackingMode;
-(id)newSharedTextureHandle;
-(MTLIOAccelResource *)rootResource;
-(MTLIOAccelTexture *)parentTexture;
-(unsigned long long)parentRelativeLevel;
-(unsigned long long)parentRelativeSlice;
-(BOOL)isFramebufferOnly;
-(BOOL)allowGPUOptimizedContents;
-(SCD_Struct_MT35)swizzle;
-(unsigned)swizzleKey;
-(unsigned long long)numFaces;
-(id)initWithTextureInternal:(id)arg1 pixelFormat:(unsigned long long)arg2 textureType:(unsigned long long)arg3 levels:(NSRange)arg4 slices:(NSRange)arg5 swizzle:(SCD_Struct_MT35)arg6 compressedView:(BOOL)arg7 ;
-(id)initWithBuffer:(id)arg1 descriptor:(id)arg2 sysMemOffset:(unsigned long long)arg3 sysMemRowBytes:(unsigned long long)arg4 vidMemSize:(unsigned long long)arg5 vidMemRowBytes:(unsigned long long)arg6 args:(IOAccelNewResourceArgs*)arg7 argsSize:(unsigned)arg8 isStrideTexture:(BOOL)arg9 ;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 sysMemSize:(unsigned long long)arg3 sysMemRowBytes:(unsigned long long)arg4 vidMemSize:(unsigned long long)arg5 vidMemRowBytes:(unsigned long long)arg6 args:(IOAccelNewResourceArgs*)arg7 argsSize:(unsigned)arg8 ;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 sysMemPointer:(void*)arg3 sysMemSize:(unsigned long long)arg4 sysMemLength:(unsigned long long)arg5 sysMemRowBytes:(unsigned long long)arg6 args:(IOAccelNewResourceArgs*)arg7 argsSize:(unsigned)arg8 deallocator:(/*^block*/id)arg9 ;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 iosurface:(IOSurfaceRef)arg3 plane:(unsigned)arg4 field:(unsigned)arg5 args:(IOAccelNewResourceArgs*)arg6 argsSize:(unsigned)arg7 ;
-(id)initWithTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 ;
-(id)initWithTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 textureType:(unsigned long long)arg3 levels:(NSRange)arg4 slices:(NSRange)arg5 ;
-(id)initWithCompressedTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 textureType:(unsigned long long)arg3 level:(unsigned long long)arg4 slice:(unsigned long long)arg5 ;
-(id)initWithTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 textureType:(unsigned long long)arg3 levels:(NSRange)arg4 slices:(NSRange)arg5 swizzle:(SCD_Struct_MT35)arg6 ;
-(id)initWithBuffer:(id)arg1 descriptor:(id)arg2 sysMemOffset:(unsigned long long)arg3 sysMemRowBytes:(unsigned long long)arg4 vidMemSize:(unsigned long long)arg5 vidMemRowBytes:(unsigned long long)arg6 args:(IOAccelNewResourceArgs*)arg7 argsSize:(unsigned)arg8 ;
-(id)initWithBuffer:(id)arg1 descriptor:(id)arg2 offset:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 ;
-(id)initWithHeap:(id)arg1 resource:(id)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4 device:(id)arg5 descriptor:(id)arg6 ;
-(id)initWithMasterBuffer:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(unsigned long long)arg4 length:(unsigned long long)arg5 descriptor:(id)arg6 sysMemRowBytes:(unsigned long long)arg7 vidMemSize:(unsigned long long)arg8 vidMemRowBytes:(unsigned long long)arg9 args:(IOAccelNewResourceArgs*)arg10 argsSize:(unsigned)arg11 ;
-(void)copyFromSlice:(unsigned long long)arg1 mipmapLevel:(unsigned long long)arg2 origin:(SCD_Struct_MT11)arg3 size:(SCD_Struct_MT11)arg4 toPixels:(void*)arg5 rowBytes:(unsigned long long)arg6 imageBytes:(unsigned long long)arg7 ;
-(void)copyFromPixels:(const void*)arg1 rowBytes:(unsigned long long)arg2 imageBytes:(unsigned long long)arg3 toSlice:(unsigned long long)arg4 mipmapLevel:(unsigned long long)arg5 origin:(SCD_Struct_MT11)arg6 size:(SCD_Struct_MT11)arg7 ;
-(CFArrayRef)copyAnnotations;
-(long long)compressionFeedback;
-(BOOL)rootResourceIsSuballocatedBuffer;
@end

