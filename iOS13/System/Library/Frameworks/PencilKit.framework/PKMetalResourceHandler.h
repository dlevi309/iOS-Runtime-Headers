/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol MTLComputePipelineState, MTLBuffer, MTLLibrary, MTLTexture, OS_dispatch_queue, MTLPipelineLibrarySPI, MTLDevice;
#import <PencilKit/PencilKit-Structs.h>
@class PKMetalShader, NSMutableDictionary, MTLRenderPipelineDescriptor, PKLRUCache, NSObject, PKMetalResourceHandlerBuffer, MTLPipelineBufferDescriptor;

@interface PKMetalResourceHandler : NSObject {

	id<MTLComputePipelineState> _particleShaderKernelPipelineState;
	id<MTLComputePipelineState> _particleShaderKernelPipelineStateWithVariableSpacing;
	id<MTLComputePipelineState> _paintShaderKernelPipelineState;
	id<MTLComputePipelineState> _paintShaderKernelPipelineStateWithLiveStroke;
	PKMetalShader* _particleShader;
	PKMetalShader* _particleShaderWithAspectRatioSupport;
	PKMetalShader* _paintShader;
	PKMetalShader* _particleShaderForAccumulator;
	PKMetalShader* _particleShaderForAccumulatorWithAspectRatioSupport;
	PKMetalShader* _paintShaderForAccumulator;
	PKMetalShader* _erasePaintShader;
	PKMetalShader* _erasePaintAccumulatorShader;
	PKMetalShader* _eraseOriginalBackShader;
	PKMetalShader* _paperShader;
	PKMetalShader* _blitIntoPaintShader;
	PKMetalShader* _blitShader;
	PKMetalShader* _singleAttachmentBlitShader;
	PKMetalShader* _eraseShader;
	PKMetalShader* _copyAccumulatorIntoPaintShader;
	PKMetalShader* _linesShader;
	PKMetalShader* _paintCircleShader;
	PKMetalShader* _invertShader;
	id<MTLBuffer> _cachedQuadVertexBuffer;
	id<MTLBuffer> _cachedQuadTexCoordBuffer;
	NSMutableDictionary* _inkTextures;
	unordered_map<unsigned long long, PKMetalShader *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, PKMetalShader *> > >* _uberShaders;
	id<MTLLibrary> _defaultLibrary;
	id<MTLTexture> _paperTexture;
	CGSize _paperTextureSize;
	MTLRenderPipelineDescriptor* _sharedPipelineDescriptor;
	MTLRenderPipelineDescriptor* _singleColorPipelineDescriptor;
	MTLRenderPipelineDescriptor* _singlePaintPipelineDescriptor;
	PKLRUCache* _strokeRenderCache;
	id<MTLBuffer> _particleIndexBuffer;
	id<MTLBuffer> _randomNumberBuffer;
	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _signpost_id;
	PKMetalResourceHandlerBuffer* _purgeableResourceBuffer;
	PKMetalResourceHandlerBuffer* _resourceBuffer;
	PKMetalResourceHandlerBuffer* _gpuResourceBuffer;
	id<MTLPipelineLibrarySPI> _pipelineLibrary;
	id<MTLDevice> _device;
	unsigned long long _pixelFormat;
	unsigned long long _paintAndParticlePixelFormat;
	unsigned long long _stencilPixelFormat;

}

@property (nonatomic,readonly) id<MTLDevice> device;                                                //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelFormat;                                      //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (nonatomic,readonly) unsigned long long paintAndParticlePixelFormat;                      //@synthesize paintAndParticlePixelFormat=_paintAndParticlePixelFormat - In the implementation block
@property (nonatomic,readonly) unsigned long long stencilPixelFormat;                               //@synthesize stencilPixelFormat=_stencilPixelFormat - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> paperTexture; 
@property (nonatomic,readonly) CGSize paperTextureSize; 
@property (nonatomic,readonly) MTLPipelineBufferDescriptor * sharedPipelineDescriptor; 
+(id)sharedResourceHandlerWithDevice:(id)arg1 ;
+(id)sharedResourceHandlerWithDevice:(id)arg1 pixelFormat:(unsigned long long)arg2 paintAndParticlePixelFormat:(unsigned long long)arg3 stencilPixelFormat:(unsigned long long)arg4 ;
+(id)inkBundle;
-(id)init;
-(id<MTLDevice>)device;
-(unsigned long long)pixelFormat;
-(id)initWithDevice:(id)arg1 ;
-(id<MTLTexture>)paperTexture;
-(void)replaceInkTexture:(id)arg1 image:(CGImageRef)arg2 ;
-(id)strokeRenderCache;
-(id)newPurgeableBufferWithLength:(unsigned long long)arg1 bytes:(const void*)arg2 outOffset:(unsigned long long*)arg3 ;
-(unsigned long long)paintAndParticlePixelFormat;
-(id)erasePaintAccumulatorShader;
-(id)erasePaintShader;
-(id)copyAccumulatorIntoPaintShader;
-(id)blitIntoPaintShader;
-(id)singleAttachmentBlitShader;
-(id)blitShader;
-(id)cachedQuadVertexBuffer;
-(id)cachedQuadTexCoordBuffer;
-(id)paintShader;
-(id)particleShader;
-(id)particleShaderWithAspectRatioSupport;
-(id)particleIndexBuffer;
-(id)randomNumberBuffer;
-(id)paintCircleShader;
-(id)paperShader;
-(id)linesShader;
-(id)compositeOverShaderWithMode:(long long)arg1 clipping:(BOOL)arg2 colorAttachmentIndex:(unsigned long long)arg3 renderMask:(BOOL)arg4 ;
-(id)compositeSoftWhiteShaderWithMode:(long long)arg1 clipping:(BOOL)arg2 colorAttachmentIndex:(unsigned long long)arg3 renderMask:(BOOL)arg4 ;
-(id)compositeMultiplyShaderWithMode:(long long)arg1 clipping:(BOOL)arg2 targetMultiple:(BOOL)arg3 colorAttachmentIndex:(unsigned long long)arg4 renderMask:(BOOL)arg5 ;
-(id)compositeEraseShaderWithMode:(long long)arg1 clipping:(BOOL)arg2 colorAttachmentIndex:(unsigned long long)arg3 ;
-(id)compositePaperShaderWithMode:(long long)arg1 colorAttachmentIndex:(unsigned long long)arg2 ;
-(CGSize)paperTextureSize;
-(id)paintShaderKernelPipelineState;
-(id)newGPUBufferWithLength:(unsigned long long)arg1 outOffset:(unsigned long long*)arg2 ;
-(id)paintShaderKernelPipelineStateWithLiveStroke;
-(id)particleShaderKernelPipelineStateWithVariableSpacing;
-(id)particleShaderKernelPipelineState;
-(id)newBufferWithLength:(unsigned long long)arg1 bytes:(const void*)arg2 outOffset:(unsigned long long*)arg3 ;
-(id)invertShader;
-(id)paintShaderForAccumulator;
-(id)particleShaderForAccumulatorWithAspectRatioSupport;
-(id)particleShaderForAccumulator;
-(id)inkTextureNamed:(id)arg1 ;
-(const float*)randomNumberArray;
-(id)eraseShader;
-(id)eraseOriginalBackShader;
-(unsigned long long)stencilPixelFormat;
-(id)initWithDevice:(id)arg1 pixelFormat:(unsigned long long)arg2 paintAndParticlePixelFormat:(unsigned long long)arg3 stencilPixelFormat:(unsigned long long)arg4 ;
-(id)_signpostLog;
-(void)_setupCachedQuad;
-(void)_preloadShaders;
-(id)newComputePipelineDescriptor;
-(id)newPaintCircleShader;
-(id)newInvertShader;
-(id)eraseShaderWithColorAttachmentIndex:(unsigned)arg1 sharedPipelineDescriptor:(BOOL)arg2 ;
-(id)newRenderPipelineDescriptor;
-(id)particleShaderWithColorAttachmentIndex:(unsigned)arg1 aspectRatioSupport:(BOOL)arg2 ;
-(id)paintShaderWithColorAttachmentIndex:(unsigned)arg1 ;
-(id)eraseShaderWithColorAttachmentIndex:(unsigned)arg1 ;
-(id)newPaperShader;
-(id)blitShaderWithColorAttachmentIndex:(unsigned)arg1 sharedPipelineDescriptor:(BOOL)arg2 ;
-(id)newLinesShader;
-(id)copyFramebufferShaderWithSourceColorAttachmentIndex:(unsigned)arg1 destinationColorAttachmentIndex:(unsigned)arg2 ;
-(id)_inkTextureNamed:(id)arg1 ;
-(id)uberShaderForKey:(SCD_Struct_PK60)arg1 ;
-(id)constantValuesForKey:(long long)arg1 clipping:(BOOL)arg2 colorAttachmentIndex:(unsigned)arg3 renderMask:(BOOL)arg4 ;
-(id)_uberShaderForKey:(SCD_Struct_PK60)arg1 ;
-(void)_preloadUberShadersForBaseKey:(SCD_Struct_PK60)arg1 ;
-(id)textureByUnpremultiplyingAlphaInTexture:(id)arg1 ;
-(void)_setupPaperTextureIfNecessary;
-(void)_setupRandomNumberBufferIfNecessary;
-(void)_setupParticleIndexBufferIfNecessary;
-(void)_preloadInkTextures;
-(MTLPipelineBufferDescriptor *)sharedPipelineDescriptor;
-(void)_preloadUberShaders;
-(void)preloadPaperTexture;
-(void)preloadParticleResources;
@end

