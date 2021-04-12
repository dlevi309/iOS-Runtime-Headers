/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(CGSize)size;
-(void)finish;
-(void)setPriority:(int)arg1 ;
-(void)addFilter:(id)arg1 ;
-(unsigned)framebuffer;
-(unsigned)chromaTexture;
-(id)initWithSize:(CGSize)arg1 useOpenGLES3:(BOOL)arg2 ;
-(void)setFinishTransactionsSynchronously:(BOOL)arg1 ;
-(void)setBlockOnLastBuffer:(BOOL)arg1 ;
-(void)setFillExtendedRowsInOutputBuffer:(BOOL)arg1 ;
-(void)renderWithPixelBuffer:(CVBufferRef)arg1 pixelBufferValidRect:(CGRect*)arg2 outputPixelBuffer:(CVBufferRef)arg3 ;
-(void)cacheSourcePixelBuffer:(CVBufferRef)arg1 ;
-(SurfaceCacheRef)surfaceCache;
-(unsigned)framebuffer2;
-(void)executeFillKernelForDesc:(SCD_Struct_AC5*)arg1 ioSurface:(IOSurfaceRef)arg2 topFillSize:(unsigned)arg3 bottomFillSize:(unsigned)arg4 ;
-(void)resizeContext:(CGSize)arg1 pixelFormat:(unsigned)arg2 ;
-(int)GPUOutputMode;
-(BOOL)singlePlane;
-(void)resizeRenderBuffer:(CGSize)arg1 pixelFormat:(unsigned)arg2 plane:(int)arg3 ;
-(void)updateTextureMode:(int)arg1 ;
-(void)updateFBOMode:(int)arg1 ;
-(void)setLastInputBuffer:(CVBufferRef)arg1 ;
-(CVBufferRef)lastInputBuffer;
-(void)fillExtendedRowsInPixelBufferIfNecessary:(CVBufferRef)arg1 ;
-(void)fillTopBottomRowsInPixelBufferIfNecessary:(CVBufferRef)arg1 pixelBufferValidRect:(CGRect*)arg2 ;
-(void)bindTexture:(unsigned)arg1 toUnit:(unsigned)arg2 ;
-(void)nextFilter;
-(id)glContext;
-(unsigned)renderbuffer;
-(unsigned)renderbuffer2;
-(unsigned)lumaTexture;
-(CGRect)lumaRect;
-(CGRect)chromaRect;
-(CGRect)bgraRect;
-(int)GPUMode;
-(BOOL)directTexture;
-(void)setDirectTexture:(BOOL)arg1 ;
-(BOOL)directFBO;
-(void)setDirectFBO:(BOOL)arg1 ;
-(SurfaceCacheRef)outputSurfaceCache;
-(void)setOperationFence;
-(void)waitForLastInputBufferToFinish:(BOOL)arg1 ;
-(BOOL)finishTransactionsSynchronously;
-(BOOL)blockOnLastBuffer;
@end

