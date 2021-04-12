/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol MTLDevice, MTLCommandQueueSPI, MTLTexture, MTLBuffer;
#import <PencilKit/PencilKit-Structs.h>
@class PKMetalRenderState, PKMetalFramebuffer, PKMetalResourceHandler, CIContext, PKMetalShader, PKLinedPaper;

@interface PKMetalRenderer : NSObject {

	PKMetalRenderState* _currentRenderState;
	unsigned long long _currentCacheSize;
	id<MTLDevice> _device;
	id<MTLCommandQueueSPI> _commandQueue;
	PKMetalFramebuffer* _originalBackFramebuffer;
	BOOL _shouldClearOriginalBackFramebuffer;
	PKMetalFramebuffer* _paintFramebuffer;
	PKMetalFramebuffer* _alwaysMemorylessPaintFramebuffer;
	PKMetalFramebuffer* _paintFramebufferAccumulator;
	PKMetalFramebuffer* _maskMSAAFramebuffer;
	PKMetalResourceHandler* _resourceHandler;
	PKMetalFramebuffer* _dummyPaintFramebuffer;
	PKMetalFramebuffer* _dummyColorFramebuffer;
	CGSize _drawingPixelSize;
	CGColorRef _backgroundColor;
	CGSize _actualSize;
	double _fromStrokeSpaceScale;
	CGAffineTransform _strokeTransform;
	CGRect _viewScissor;
	BOOL _lastPointForEraserIsValid;
	PKStrokePoint _lastPointForEraser;
	vector<(anonymous namespace)::StrokeVertex, std::__1::allocator<(anonymous namespace)::StrokeVertex> >* _strokeBuffer;
	unsigned long long _strokeBufferCount;
	CIContext* _coreImageContext;
	id<MTLTexture> _paperTexture;
	CGSize _paperTextureSize;
	unsigned long long _pixelFormat;
	unsigned long long _paintAndParticlePixelFormat;
	vector<PKMetalParticleStrokePoint, std::__1::allocator<PKMetalParticleStrokePoint> >* _particleStrokePointBuffer;
	vector<PKMetalPaintStrokePoint, std::__1::allocator<PKMetalPaintStrokePoint> >* _paintStrokePointBuffer;
	vector<PKMetalLiveStrokePaintStrokePoint, std::__1::allocator<PKMetalLiveStrokePaintStrokePoint> >* _liveStrokeStrokePointBuffer;
	vector<(anonymous namespace)::AnimatingStroke, std::__1::allocator<(anonymous namespace)::AnimatingStroke> >* _animatingStrokes;
	CGRect _paintFramebufferDirtyRect;
	PKMetalShader* _paintShader;
	PKMetalShader* _particleShader;
	PKMetalShader* _particleShaderWithAspectRatioSupport;
	id<MTLBuffer> _particleIndexBuffer;
	id<MTLBuffer> _randomNumberBuffer;
	unsigned long long _renderMaskMSAASampleCount;
	BOOL _needRestartWorkaroundForOldIntelDrivers;
	BOOL _useComputeRenderCaches;
	BOOL _solidColorBackboard;
	BOOL _oneRenderPassForLiveRendering;
	BOOL _liveStrokeMode;
	BOOL _invertColors;
	PKLinedPaper* _linedPaper;
	CGColorRef _liveRenderingOverrideColor;
	double _backboardPaperMultiply;
	double _inputScale;
	double _eraserIndicatorAlpha;
	double _liveStrokeElapsedTime;
	double _liveStrokeDuration;
	CGAffineTransform _paperTransform;

}

@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue;                      //@synthesize commandQueue=_commandQueue - In the implementation block
@property (nonatomic,readonly) id<MTLDevice> device;                                  //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) PKLinedPaper * linedPaper;                               //@synthesize linedPaper=_linedPaper - In the implementation block
@property (assign,nonatomic) CGAffineTransform paperTransform;                        //@synthesize paperTransform=_paperTransform - In the implementation block
@property (assign,nonatomic) CGColorRef backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) CGColorRef liveRenderingOverrideColor;                   //@synthesize liveRenderingOverrideColor=_liveRenderingOverrideColor - In the implementation block
@property (assign,nonatomic) BOOL solidColorBackboard;                                //@synthesize solidColorBackboard=_solidColorBackboard - In the implementation block
@property (assign,nonatomic) BOOL oneRenderPassForLiveRendering;                      //@synthesize oneRenderPassForLiveRendering=_oneRenderPassForLiveRendering - In the implementation block
@property (assign,nonatomic) CGRect viewScissor;                                      //@synthesize viewScissor=_viewScissor - In the implementation block
@property (assign,nonatomic) CGAffineTransform strokeTransform;                       //@synthesize strokeTransform=_strokeTransform - In the implementation block
@property (assign,nonatomic) CGSize actualSize;                                       //@synthesize actualSize=_actualSize - In the implementation block
@property (assign,nonatomic) double backboardPaperMultiply;                           //@synthesize backboardPaperMultiply=_backboardPaperMultiply - In the implementation block
@property (nonatomic,readonly) PKMetalResourceHandler * resourceHandler;              //@synthesize resourceHandler=_resourceHandler - In the implementation block
@property (assign,nonatomic) double inputScale;                                       //@synthesize inputScale=_inputScale - In the implementation block
@property (assign,nonatomic) double eraserIndicatorAlpha;                             //@synthesize eraserIndicatorAlpha=_eraserIndicatorAlpha - In the implementation block
@property (assign,nonatomic) BOOL liveStrokeMode;                                     //@synthesize liveStrokeMode=_liveStrokeMode - In the implementation block
@property (assign,nonatomic) double liveStrokeElapsedTime;                            //@synthesize liveStrokeElapsedTime=_liveStrokeElapsedTime - In the implementation block
@property (assign,nonatomic) double liveStrokeDuration;                               //@synthesize liveStrokeDuration=_liveStrokeDuration - In the implementation block
@property (nonatomic,readonly) BOOL isFinishedRendering; 
@property (nonatomic,readonly) double latestTimestamp; 
@property (assign,nonatomic) BOOL invertColors;                                       //@synthesize invertColors=_invertColors - In the implementation block
+(BOOL)useBlitEncoder;
-(void)dealloc;
-(void)clear;
-(id<MTLDevice>)device;
-(double)inputScale;
-(void)setInputScale:(double)arg1 ;
-(id<MTLCommandQueue>)commandQueue;
-(CGColorRef)backgroundColor;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(void)setup;
-(PKMetalResourceHandler *)resourceHandler;
-(CGAffineTransform)strokeTransform;
-(CGImageRef)newCGImage;
-(void)setInvertColors:(BOOL)arg1 ;
-(BOOL)invertColors;
-(void)flushMemoryIfPossible;
-(void)setLinedPaper:(PKLinedPaper *)arg1 ;
-(void)setStrokeTransform:(CGAffineTransform)arg1 ;
-(void)setViewScissor:(CGRect)arg1 ;
-(void)setPaperTransform:(CGAffineTransform)arg1 ;
-(PKLinedPaper *)linedPaper;
-(void)setPaperTextureImage:(CGImageRef)arg1 ;
-(void)setLiveRenderingOverrideColor:(CGColorRef)arg1 ;
-(void)setLiveStrokeMode:(BOOL)arg1 ;
-(void)setLiveStrokeDuration:(double)arg1 ;
-(void)setBackboardPaperMultiply:(double)arg1 ;
-(void)purgeOriginalBackFramebuffer;
-(void)setLiveStrokeElapsedTime:(double)arg1 ;
-(BOOL)liveStrokeMode;
-(void)drawingBeganWithStroke:(id)arg1 ;
-(CGColorRef)liveRenderingOverrideColor;
-(void)drawingEnded:(id)arg1 finishStrokeBlock:(/*^block*/id)arg2 ;
-(void)drawingCancelled;
-(CGAffineTransform)paperTransform;
-(CGRect)viewScissor;
-(id)initWithDrawingPixelSize:(CGSize)arg1 actualSize:(CGSize)arg2 device:(id)arg3 resourceHandler:(id)arg4 ;
-(void)setActualSize:(CGSize)arg1 ;
-(double)backboardPaperMultiply;
-(CGImageRef)newCGImageWithClipRect:(CGRect)arg1 ;
-(void)buildRenderCacheForStrokes:(id)arg1 ;
-(unsigned long long)clearAndRenderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 stopBlock:(/*^block*/id)arg4 ;
-(void)generateLiveStrokeCachesForStrokes:(id)arg1 destinationLocations:(const vector<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >, std::__1::allocator<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > > >*)arg2 strokeInterval:(float)arg3 liveStrokeFrame:(CGRect)arg4 liveStrokeTexture:(id)arg5 ;
-(void)clearTile:(id)arg1 waitUntilCompleted:(BOOL)arg2 ;
-(void)setShouldClearOriginalFramebuffer;
-(void)copyIntoTile:(id)arg1 tileTransform:(CGAffineTransform)arg2 waitUntilCompleted:(BOOL)arg3 ;
-(void)clearAndRenderTiles:(id)arg1 tileTransform:(CGAffineTransform)arg2 waitUntilCompleted:(BOOL)arg3 ;
-(void)renderTiles:(id)arg1 intoTile:(id)arg2 waitUntilCompleted:(BOOL)arg3 ;
-(void)renderTexture:(id)arg1 ;
-(void)renderImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 ;
-(void)renderImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 clippedToStrokeSpaceRect:(CGRect)arg3 ;
-(unsigned long long)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 stopBlock:(/*^block*/id)arg4 ;
-(unsigned long long)renderStrokes:(id)arg1 stopBlock:(/*^block*/id)arg2 ;
-(void)getAndRenderNewPoints:(id)arg1 ;
-(double)eraserIndicatorAlpha;
-(void)setEraserIndicatorAlpha:(double)arg1 ;
-(void)renderAheadWithTransform:(CGAffineTransform)arg1 onPaper:(BOOL)arg2 renderBufferSize:(CGSize)arg3 destinationTexture:(id)arg4 ;
-(double)latestTimestamp;
-(void)finishLiveStrokeAndPresentDrawable:(id)arg1 waitUntilScheduled:(BOOL)arg2 ;
-(void)renderLiveStrokeWithTransform:(CGAffineTransform)arg1 renderBufferSize:(CGSize)arg2 ;
-(void)setOneRenderPassForLiveRendering:(BOOL)arg1 ;
-(BOOL)isFinishedRendering;
-(CGSize)actualSize;
-(double)liveStrokeElapsedTime;
-(double)liveStrokeDuration;
-(double)alphaForStroke:(id)arg1 ;
-(id)CIImageFromTexture:(id)arg1 ;
-(void)teardownDrawingFramebuffers;
-(void)drawNewPointsAt:(double)arg1 ;
-(void)clearPaintFramebuffers;
-(unsigned long long)renderStroke:(PKStrokePointSlice*)arg1 animatingStroke:(AnimatingStroke*)arg2 accumulating:(BOOL)arg3 combinedRendering:(BOOL)arg4 renderEncoder:(id)arg5 computeEncoder:(id)arg6 renderCache:(id)arg7 ;
-(BOOL)applyStrokeSpaceClipRect:(CGRect)arg1 strokeTransform:(CGAffineTransform)arg2 ;
-(unsigned long long)_renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 stopBlock:(/*^block*/id)arg4 ;
-(void)disableClippingForRenderEncoder:(id)arg1 ;
-(void)setupRenderStateForRenderingStrokes:(id)arg1 ;
-(void)teardownRenderStateIfNecessary;
-(void)setupDrawingFramebuffersIfNecessaryLiveRendering:(BOOL)arg1 ;
-(id)renderCommandEncoderForCommandBuffer:(id)arg1 backBufferLoadAction:(unsigned long long)arg2 backBufferStoreAction:(unsigned long long)arg3 paintBufferLoadAction:(unsigned long long)arg4 accumulatorBufferLoadAction:(unsigned long long)arg5 accumulatorBufferStoreAction:(unsigned long long)arg6 destinationLoadAction:(unsigned long long)arg7 ;
-(void)setupRenderStateForStrokeRenderingNeedPaintBuffer:(BOOL)arg1 needRenderMask:(BOOL)arg2 ;
-(BOOL)shouldAccumulateLiveStroke;
-(void)setupRenderStateForLiveRenderingDestinationTexture:(id)arg1 destinationLoadAction:(unsigned long long)arg2 accumLoadAction:(unsigned long long)arg3 accumStoreAction:(unsigned long long)arg4 backBufferLoadAction:(unsigned long long)arg5 backBufferStoreAction:(unsigned long long)arg6 ;
-(void)resetPaintFramebufferAccumulate:(BOOL)arg1 ;
-(void)renderAnimatingStrokesWithTransform:(CGAffineTransform)arg1 renderBufferSize:(CGSize)arg2 ;
-(BOOL)oneRenderPassForLiveRendering;
-(void)renderWithTransform:(CGAffineTransform)arg1 animatingStroke:(AnimatingStroke*)arg2 mode:(long long)arg3 clipped:(BOOL)arg4 renderBufferSize:(CGSize)arg5 renderEncoder:(id)arg6 ;
-(void)purgePaintFramebuffers;
-(void)finishRenderingClippedToStrokeSpaceRect:(CGRect)arg1 forStroke:(AnimatingStroke*)arg2 renderEncoder:(id)arg3 ;
-(void)finishStroke;
-(void)renderFullscreenQuadWithShader:(id)arg1 renderEncoder:(id)arg2 ;
-(void)renderStroke:(id)arg1 withTransform:(CGAffineTransform)arg2 mode:(long long)arg3 flipped:(BOOL)arg4 renderBufferSize:(CGSize)arg5 renderEncoder:(id)arg6 currentClipRect:(CGRect)arg7 needRenderMask:(BOOL)arg8 ;
-(void)copyFromFramebuffer:(id)arg1 toFramebuffer:(id)arg2 clipRect:(CGRect)arg3 renderEncoder:(id)arg4 ;
-(void)setupForDefaultUberVertexShaderInRenderEncoder:(id)arg1 ;
-(void)renderTexture:(id)arg1 intoFramebuffer:(id)arg2 sourceRect:(CGRect)arg3 destinationRect:(CGRect)arg4 renderState:(id)arg5 ;
-(void)renderTexture:(id)arg1 intoFramebuffer:(id)arg2 sourceRect:(CGRect)arg3 destinationPosition:(CGPoint)arg4 renderState:(id)arg5 ;
-(BOOL)ensureOriginalBackFramebufferHasContents;
-(CGImageRef)newCGImageFromTexture:(id)arg1 clipRect:(CGRect)arg2 copyImage:(BOOL)arg3 ;
-(CGImageRef)newCGImageWithClipRect:(CGRect)arg1 copyImage:(BOOL)arg2 ;
-(void)setupUberVertexShaderWithTransform:(CGAffineTransform)arg1 paperTransform:(CGAffineTransform)arg2 renderEncoder:(id)arg3 ;
-(CGAffineTransform)strokeRenderTransformForFramebufferSize:(CGSize)arg1 flipped:(BOOL)arg2 ;
-(void)setupOriginalBackFramebufferIfNecessary;
-(void)setupCachedResourcesIfNecessary;
-(void)renderEraserIndicator:(PKStrokePoint)arg1 withTransform:(CGAffineTransform)arg2 ;
-(void)finishRenderingNoTeardownForStroke:(AnimatingStroke*)arg1 clippedToPixelSpaceRect:(CGRect)arg2 renderEncoder:(id)arg3 ;
-(void)finishRendering;
-(BOOL)setupClippingForStrokeClipRect:(CGRect)arg1 clippedToPixelSpaceRect:(CGRect)arg2 renderEncoder:(id)arg3 outNewClipRect:(CGRect*)arg4 ;
-(void)clearPaintFramebuffersWithRenderEncoder:(id)arg1 ;
-(void)setPaperTextureOnRenderEncoder:(id)arg1 fragmentUniforms:(PKMetalUberFragmentUniforms*)arg2 ;
-(BOOL)solidColorBackboard;
-(void)renderPaperTransform:(CGAffineTransform)arg1 paperTransform:(CGAffineTransform)arg2 flipped:(BOOL)arg3 multiply:(double)arg4 renderEncoder:(id)arg5 ;
-(void)renderLinesRenderBufferSize:(CGSize)arg1 renderEncoder:(id)arg2 ;
-(void)renderBrushIndicatorForStroke:(id)arg1 withTransform:(CGAffineTransform)arg2 mode:(long long)arg3 ;
-(void)setupRenderEncoder:(id)arg1 forParticleStroke:(AnimatingStroke*)arg2 ;
-(void)setupRenderEncoder:(id)arg1 forPenStroke:(AnimatingStroke*)arg2 ;
-(unsigned long long)renderPaintRenderCache:(id)arg1 renderEncoder:(id)arg2 computeEncoder:(id)arg3 animatingStroke:(AnimatingStroke*)arg4 ;
-(unsigned long long)renderLiveStrokePaintRenderCache:(id)arg1 renderEncoder:(id)arg2 computeEncoder:(id)arg3 animatingStroke:(AnimatingStroke*)arg4 ;
-(unsigned long long)renderStrokeRenderCache:(id)arg1 renderEncoder:(id)arg2 animatingStroke:(AnimatingStroke*)arg3 indexed:(BOOL)arg4 ;
-(unsigned long long)renderPenStroke:(PKStrokePointSlice*)arg1 animatingStroke:(AnimatingStroke*)arg2 combinedRendering:(BOOL)arg3 renderEncoder:(id)arg4 ;
-(unsigned long long)renderParticleRenderCache:(id)arg1 renderEncoder:(id)arg2 computeEncoder:(id)arg3 animatingStroke:(AnimatingStroke*)arg4 ;
-(unsigned long long)renderParticleStroke:(PKStrokePointSlice*)arg1 animatingStroke:(AnimatingStroke*)arg2 starts:(BOOL)arg3 ends:(BOOL)arg4 combinedRendering:(BOOL)arg5 renderEncoder:(id)arg6 ;
-(void)setVertexBuffersForVertices:(const StrokeVertex*)arg1 numVertices:(unsigned long long)arg2 renderEncoder:(id)arg3 ;
-(CGAffineTransform)strokeRenderTransform;
-(void)setupStrokeBufferIfNecessary;
-(void)renderStrokeVertices:(const StrokeVertex*)arg1 numVertices:(unsigned long long)arg2 numIndices:(unsigned long long)arg3 renderEncoder:(id)arg4 ;
-(CGRect)clipRectForVertices:(const StrokeVertex*)arg1 numVertices:(unsigned long long)arg2 ;
-(void)addBufferForRenderCache:(id)arg1 strokeVertices:(StrokeVertex*)arg2 numVertices:(unsigned long long)arg3 ;
-(unsigned long long)renderVerticies:(StrokeVertex*)arg1 size:(unsigned long long)arg2 numRenderedVertices:(unsigned long long)arg3 numIndices:(unsigned long long)arg4 localClipRect:(CGRect)arg5 animatingStroke:(AnimatingStroke*)arg6 combinedRendering:(BOOL)arg7 renderEncoder:(id)arg8 ;
-(id)dummyPaintFramebuffer;
-(id)dummyColorFramebuffer;
-(BOOL)generateBSplineInComputeForStroke:(id)arg1 ;
-(id)generateCacheForStroke:(AnimatingStroke*)arg1 points:(PKStrokePointSlice*)arg2 segmentSteps:(const vector<int, std::__1::allocator<int> >*)arg3 ;
-(void)setupRenderState:(id)arg1 needCompute:(BOOL)arg2 clearPaint:(BOOL)arg3 ;
-(id)cacheForMask:(id)arg1 strokeRenderCache:(id)arg2 purgeableResources:(id)arg3 ;
-(id)renderCacheItemForStroke:(AnimatingStroke*)arg1 bsplineFilter:(PKBSplineFilter*)arg2 purgeableResources:(id)arg3 strokeRenderCache:(id)arg4 ;
-(void)setupRenderState:(id)arg1 needCompute:(BOOL)arg2 ;
-(BOOL)canRenderStroke:(id)arg1 combinedWith:(id)arg2 ;
-(void)clearNowWithStrokeSpaceClipRect:(CGRect)arg1 strokeTransform:(CGAffineTransform)arg2 ;
-(id)generatePaintCacheForStroke:(PKStrokePointSlice*)arg1 animatingStroke:(AnimatingStroke*)arg2 segmentSteps:(const vector<int, std::__1::allocator<int> >*)arg3 liveStrokePoints:(const 4*)arg4 liveStrokeStartTime:(float)arg5 strokeInterval:(float)arg6 ;
-(id)generateCacheForPenStroke:(AnimatingStroke*)arg1 points:(PKStrokePointSlice*)arg2 ;
-(id)generateCacheForParticleStroke:(AnimatingStroke*)arg1 points:(PKStrokePointSlice*)arg2 startPt:(BOOL)arg3 endPt:(BOOL)arg4 ;
-(id)generateParticleCacheForStroke:(PKStrokePointSlice*)arg1 animatingStroke:(AnimatingStroke*)arg2 starts:(BOOL)arg3 ends:(BOOL)arg4 ;
-(id)generateCacheForMask:(id)arg1 ;
-(void)renderMaskForStroke:(id)arg1 renderCache:(id)arg2 ;
-(id)framebufferForTile:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)clearFramebuffer:(id)arg1 waitUntilCompleted:(BOOL)arg2 ;
-(void)renderTexture:(id)arg1 intoFramebuffer:(id)arg2 clipRect:(CGRect)arg3 renderState:(id)arg4 ;
-(void)renderTile:(id)arg1 tileTransform:(CGAffineTransform)arg2 renderState:(id)arg3 ;
-(void)renderImage:(CGImageRef)arg1 intoFramebuffer:(id)arg2 clipRect:(CGRect)arg3 ;
-(void)cancelLiveStroke;
-(unsigned long long)colorAttachmentIndexFromFramebuffer:(id)arg1 ;
-(void)copyIntoPaintFromTexture:(id)arg1 clipRect:(CGRect)arg2 renderEncoder:(id)arg3 ;
-(void)debugFramebuffers;
-(void)setSolidColorBackboard:(BOOL)arg1 ;
@end

