/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol MTLDevice, MTLCommandQueue, MTLLibrary, MTLCommandBuffer, MTLPipelineLibrarySPI, MTLBuffer;
#import <CMCapture/CMCapture-Structs.h>
@class FigMetalAllocator, MTLVertexDescriptor, FigMetalExecutionStatus;

@interface FigMetalContext : NSObject {

	BOOL _dryRun;
	BOOL _allowCommandBufferCommitsOnlyByForceCommit;
	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLLibrary> _library;
	id<MTLCommandBuffer> _commandBuffer;
	id<MTLPipelineLibrarySPI> _pipelineLibrary;
	FigMetalAllocator* _allocator;
	id<MTLBuffer> _fullRangeVertexBuf;
	MTLVertexDescriptor* _fullRangeVertexDesc;

}

@property (nonatomic,retain) id<MTLDevice> device;                                         //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) id<MTLCommandQueue> commandQueue;                             //@synthesize commandQueue=_commandQueue - In the implementation block
@property (nonatomic,retain) id<MTLLibrary> library;                                       //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) id<MTLCommandBuffer> commandBuffer;                           //@synthesize commandBuffer=_commandBuffer - In the implementation block
@property (nonatomic,retain) id<MTLPipelineLibrarySPI> pipelineLibrary;                    //@synthesize pipelineLibrary=_pipelineLibrary - In the implementation block
@property (nonatomic,retain) FigMetalAllocator * allocator;                                //@synthesize allocator=_allocator - In the implementation block
@property (assign,nonatomic) BOOL dryRun;                                                  //@synthesize dryRun=_dryRun - In the implementation block
@property (nonatomic,retain) FigMetalExecutionStatus * executionStatus; 
@property (assign,nonatomic) BOOL allowCommandBufferCommitsOnlyByForceCommit;              //@synthesize allowCommandBufferCommitsOnlyByForceCommit=_allowCommandBufferCommitsOnlyByForceCommit - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> fullRangeVertexBuf;                             //@synthesize fullRangeVertexBuf=_fullRangeVertexBuf - In the implementation block
@property (nonatomic,retain) MTLVertexDescriptor * fullRangeVertexDesc;                    //@synthesize fullRangeVertexDesc=_fullRangeVertexDesc - In the implementation block
+(id)createMetalDevice;
-(int)setQueuePriority:(int)arg1 ;
-(id<MTLLibrary>)library;
-(void)setDryRun:(BOOL)arg1 ;
-(void)commit;
-(void)setAllocator:(FigMetalAllocator *)arg1 ;
-(id<MTLCommandQueue>)commandQueue;
-(void)insertDebugCaptureBoundary;
-(id)init;
-(void)forceCommit;
-(unsigned long long)getPixelSizeInBytes:(unsigned long long)arg1 ;
-(id<MTLDevice>)device;
-(id)bindIOSurfaceToMTL2DTexture:(IOSurfaceRef)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 plane:(unsigned long long)arg6 ;
-(void)setAllowCommandBufferCommitsOnlyByForceCommit:(BOOL)arg1 ;
-(int)commonInitWithOptionalCommandQueue:(id)arg1 ;
-(void)prewarmInternalMetalShadersForFormatsList:(id)arg1 ;
-(BOOL)ReadMetalTextureFromFile:(const char*)arg1 texture:(id)arg2 ;
-(id)computePipelineStateFor:(id)arg1 constants:(id)arg2 ;
-(void)setFullRangeVertexBuf:(id<MTLBuffer>)arg1 ;
-(void)setCommandBuffer:(id<MTLCommandBuffer>)arg1 ;
-(id)rebindTex:(id)arg1 format:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(int)arg4 xFactor:(int)arg5 ;
-(id<MTLCommandBuffer>)commandBuffer;
-(void)setLibrary:(id<MTLLibrary>)arg1 ;
-(BOOL)ReadMetalTextureFromFile:(const char*)arg1 texture:(id)arg2 mipmapLevel:(int)arg3 ;
-(void)waitForSchedule;
-(void)commitAndWait;
-(id)CreateMetalTextureFromFile:(const char*)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 ;
-(BOOL)WriteMetalTextureToFile:(const char*)arg1 texture:(id)arg2 ;
-(void)waitForIdle;
-(BOOL)WriteMetalTextureToFile:(const char*)arg1 texture:(id)arg2 mipmapLevel:(int)arg3 ;
-(FigMetalExecutionStatus *)executionStatus;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(unsigned long long)arg4 alignmentFactor:(unsigned long long)arg5 ;
-(id)create2DTextureFromBuffer:(id)arg1 offset:(unsigned long long)arg2 width:(int)arg3 height:(int)arg4 format:(unsigned long long)arg5 usage:(unsigned long long)arg6 ;
-(void)setPipelineLibrary:(id<MTLPipelineLibrarySPI>)arg1 ;
-(BOOL)dryRun;
-(FigMetalAllocator *)allocator;
-(int)initRangeVertex;
-(id<MTLPipelineLibrarySPI>)pipelineLibrary;
-(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 textureSize:(CGSize)arg4 plane:(unsigned long long)arg5 ;
-(id<MTLBuffer>)fullRangeVertexBuf;
-(id)initWithbundle:(id)arg1 andOptionalCommandQueue:(id)arg2 ;
-(MTLVertexDescriptor *)fullRangeVertexDesc;
-(id)initWithLibraryData:(char*)arg1 ofSize:(unsigned long long)arg2 andOptionalCommandQueue:(id)arg3 ;
-(void)setCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(unsigned long long)arg4 ;
-(BOOL)allowCommandBufferCommitsOnlyByForceCommit;
-(void)setFullRangeVertexDesc:(MTLVertexDescriptor *)arg1 ;
-(void)setExecutionStatus:(FigMetalExecutionStatus *)arg1 ;
@end

