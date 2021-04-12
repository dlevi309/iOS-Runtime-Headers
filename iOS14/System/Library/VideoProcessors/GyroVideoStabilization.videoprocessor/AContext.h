/*
* Generated on Thursday, January 14, 2021 at 2:28:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GyroVideoStabilization.videoprocessor
*/


@protocol MTLComputePipelineState;
#import <GyroVideoStabilization.videoprocessor/GyroVideoStabilization.videoprocessor-Structs.h>
@class EAGLContext, NSMutableArray, FigMetalContext;

@interface AContext : NSObject {

	EAGLContext* _glContext;
	unsigned _framebuffer[2];
	unsigned _renderbuffer[2];
	unsigned _lumaTexture;
	unsigned _chromaTexture;
	unsigned _uniformLuma;
	unsigned _uniformChroma;
	float _lumaQuadVertices[8];
	float _chromaQuadVertices[8];
	NSMutableArray* _filters;
	int _currentFilter;
	CGSize _size;
	CGRect _lumaRect;
	CGRect _chromaRect;
	CGRect _bgraRect;
	unsigned _pixelFormat;
	int _GPUMode;
	int _GPUOutputMode;
	SurfaceCacheRef _surfaceCache;
	SurfaceCacheRef _outputSurfaceCache;
	BOOL _directTexture;
	BOOL _directFBO;
	CVBufferRef _lastInputBuffer;
	unsigned _glFence;
	BOOL _singlePlane;
	BOOL _wasSinglePlane;
	BOOL _finishTransactionsSynchronously;
	BOOL _blockOnLastBuffer;
	BOOL _fillExtendedRowsInOutputBuffer;
	FigMetalContext* _metal;
	id<MTLComputePipelineState> _fillExtendedRowsKernel;

}
-(void)finish;
-(void)setBlockOnLastBuffer:(BOOL)arg1 ;
-(CGSize)size;
-(unsigned)lumaTexture;
-(CGRect)bgraRect;
-(void)nextFilter;
-(void)executeFillKernelForDesc:(SCD_Struct_AC11*)arg1 ioSurface:(IOSurfaceRef)arg2 topFillSize:(unsigned)arg3 bottomFillSize:(unsigned)arg4 ;
-(BOOL)blockOnLastBuffer;
-(void)setLastInputBuffer:(CVBufferRef)arg1 ;
-(void)addFilter:(id)arg1 ;
-(unsigned)chromaTexture;
-(id)glContext;
-(void)updateFBOMode:(int)arg1 ;
-(unsigned)renderbuffer2;
-(void)setDirectTexture:(BOOL)arg1 ;
-(int)GPUMode;
-(void)fillTopBottomRowsInPixelBufferIfNecessary:(CVBufferRef)arg1 pixelBufferValidRect:(CGRect*)arg2 ;
-(void)resizeContext:(CGSize)arg1 pixelFormat:(unsigned)arg2 ;
-(BOOL)singlePlane;
-(void)setDirectFBO:(BOOL)arg1 ;
-(unsigned)renderbuffer;
-(void)fillExtendedRowsInPixelBufferIfNecessary:(CVBufferRef)arg1 ;
-(void)bindTexture:(unsigned)arg1 toUnit:(unsigned)arg2 ;
-(CVBufferRef)lastInputBuffer;
-(BOOL)directTexture;
-(unsigned)framebuffer2;
-(CGRect)lumaRect;
-(void)renderWithPixelBuffer:(CVBufferRef)arg1 pixelBufferValidRect:(CGRect*)arg2 outputPixelBuffer:(CVBufferRef)arg3 ;
-(void)cacheSourcePixelBuffer:(CVBufferRef)arg1 ;
-(SurfaceCacheRef)surfaceCache;
-(void)setFillExtendedRowsInOutputBuffer:(BOOL)arg1 ;
-(void)updateTextureMode:(int)arg1 ;
-(void)setOperationFence;
-(int)GPUOutputMode;
-(void)waitForLastInputBufferToFinish:(BOOL)arg1 ;
-(void)resizeRenderBuffer:(CGSize)arg1 pixelFormat:(unsigned)arg2 plane:(int)arg3 ;
-(SurfaceCacheRef)outputSurfaceCache;
-(unsigned)framebuffer;
-(void)setPriority:(int)arg1 ;
-(BOOL)directFBO;
-(CGRect)chromaRect;
-(void)setFinishTransactionsSynchronously:(BOOL)arg1 ;
-(id)initWithSize:(CGSize)arg1 useOpenGLES3:(BOOL)arg2 metalLibrary:(char*)arg3 metalLibrarySize:(unsigned)arg4 ;
-(void)dealloc;
-(BOOL)finishTransactionsSynchronously;
@end

