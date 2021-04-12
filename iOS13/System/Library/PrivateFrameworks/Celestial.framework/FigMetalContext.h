/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol MTLDevice, MTLCommandQueue, MTLLibrary, MTLCommandBuffer, MTLPipelineLibrarySPI, MTLBuffer;
#import <Celestial/Celestial-Structs.h>
@class MTLVertexDescriptor;

@interface FigMetalContext : NSObject {

	BOOL _allowCommandBufferCommitsOnlyByForceCommit;
	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLLibrary> _library;
	id<MTLCommandBuffer> _commandBuffer;
	id<MTLPipelineLibrarySPI> _pipelineLibrary;
	id<MTLBuffer> _fullRangeVertexBuf;
	MTLVertexDescriptor* _fullRangeVertexDesc;

}

@property (nonatomic,retain) id<MTLDevice> device;                                         //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) id<MTLCommandQueue> commandQueue;                             //@synthesize commandQueue=_commandQueue - In the implementation block
@property (nonatomic,retain) id<MTLLibrary> library;                                       //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) id<MTLCommandBuffer> commandBuffer;                           //@synthesize commandBuffer=_commandBuffer - In the implementation block
@property (nonatomic,retain) id<MTLPipelineLibrarySPI> pipelineLibrary;                    //@synthesize pipelineLibrary=_pipelineLibrary - In the implementation block
@property (assign,nonatomic) BOOL allowCommandBufferCommitsOnlyByForceCommit;              //@synthesize allowCommandBufferCommitsOnlyByForceCommit=_allowCommandBufferCommitsOnlyByForceCommit - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> fullRangeVertexBuf;                             //@synthesize fullRangeVertexBuf=_fullRangeVertexBuf - In the implementation block
@property (nonatomic,retain) MTLVertexDescriptor * fullRangeVertexDesc;                    //@synthesize fullRangeVertexDesc=_fullRangeVertexDesc - In the implementation block
-(id)init;
-(int)setQueuePriority:(int)arg1 ;
-(id<MTLDevice>)device;
-(id<MTLCommandBuffer>)commandBuffer;
-(void)commit;
-(id<MTLCommandQueue>)commandQueue;
-(void)setCommandBuffer:(id<MTLCommandBuffer>)arg1 ;
-(void)setCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(id<MTLLibrary>)library;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(void)setLibrary:(id<MTLLibrary>)arg1 ;
-(void)insertDebugCaptureBoundary;
-(int)commonInitWithOptionalCommandQueue:(id)arg1 ;
-(int)initRangeVertex;
-(void)forceCommit;
-(void)commitAndWait;
-(void)setPipelineLibrary:(id<MTLPipelineLibrarySPI>)arg1 ;
-(BOOL)WriteMetalTextureToFile:(const char*)arg1 texture:(id)arg2 mipmapLevel:(int)arg3 ;
-(BOOL)ReadMetalTextureFromFile:(const char*)arg1 texture:(id)arg2 mipmapLevel:(int)arg3 ;
-(id)CreateMetalTextureFromFile:(const char*)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 ;
-(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(unsigned long long)arg4 ;
-(id)bindIOSurfaceToMTL2DTexture:(IOSurfaceRef)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 plane:(unsigned long long)arg6 ;
-(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 textureSize:(CGSize)arg4 plane:(unsigned long long)arg5 ;
-(id)rebindTex:(id)arg1 format:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(int)arg4 xFactor:(int)arg5 ;
-(id)create2DTextureFromBuffer:(id)arg1 offset:(unsigned long long)arg2 width:(int)arg3 height:(int)arg4 format:(unsigned long long)arg5 usage:(unsigned long long)arg6 ;
-(id)initWithbundle:(id)arg1 andOptionalCommandQueue:(id)arg2 ;
-(id)initWithLibraryData:(char*)arg1 ofSize:(unsigned long long)arg2 andOptionalCommandQueue:(id)arg3 ;
-(void)waitForIdle;
-(void)waitForSchedule;
-(id)computePipelineStateFor:(id)arg1 constants:(id)arg2 ;
-(BOOL)WriteMetalTextureToFile:(const char*)arg1 texture:(id)arg2 ;
-(BOOL)ReadMetalTextureFromFile:(const char*)arg1 texture:(id)arg2 ;
-(id)CreateMetalTextureFromFile:(const char*)arg1 pixelFormat:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 ;
-(unsigned long long)getPixelSizeInBytes:(unsigned long long)arg1 ;
-(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(unsigned long long)arg4 alignmentFactor:(unsigned long long)arg5 ;
-(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 plane:(unsigned long long)arg3 ;
-(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 textureSize:(CGSize)arg3 plane:(unsigned long long)arg4 ;
-(id)bindIOSurfaceToMTL2DTexture:(IOSurfaceRef)arg1 pixelFormat:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 plane:(unsigned long long)arg5 ;
-(id)rebindTex:(id)arg1 format:(unsigned long long)arg2 plane:(int)arg3 xFactor:(int)arg4 ;
-(void)prewarmInternalMetalShadersForFormatsList:(id)arg1 ;
-(id)create2DTextureFromBuffer:(id)arg1 offset:(unsigned long long)arg2 width:(int)arg3 height:(int)arg4 format:(unsigned long long)arg5 ;
-(id<MTLPipelineLibrarySPI>)pipelineLibrary;
-(BOOL)allowCommandBufferCommitsOnlyByForceCommit;
-(void)setAllowCommandBufferCommitsOnlyByForceCommit:(BOOL)arg1 ;
-(id<MTLBuffer>)fullRangeVertexBuf;
-(void)setFullRangeVertexBuf:(id<MTLBuffer>)arg1 ;
-(MTLVertexDescriptor *)fullRangeVertexDesc;
-(void)setFullRangeVertexDesc:(MTLVertexDescriptor *)arg1 ;
@end

