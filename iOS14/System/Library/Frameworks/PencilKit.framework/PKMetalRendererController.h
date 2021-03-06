/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKRendererVSyncControllerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, MTLTexture, CAMetalDrawable, PKMetalRendererControllerDelegate;
@class NSObject, NSMutableArray, NSArray, PKStrokeGenerator, PKLinedPaper, CAMetalLayer, PKMetalRenderer;

@interface PKMetalRendererController : NSObject <PKRendererVSyncControllerDelegate> {

	NSObject*<OS_dispatch_queue> _renderQueue;
	Ai _cancelLongRunningRenderingCount;
	Ai _cancelAllRendering;
	NSObject*<OS_dispatch_semaphore> _canBeginRenderSemaphore;
	atomic_flag _readyToBeginRender;
	Ad _lastFrameDuration;
	AQ _lastPresentationTime;
	Ai _queuedRenders;
	NSMutableArray* _postPresentCallbacks;
	BOOL _isTorndown;
	CGSize _pixelSize;
	CGSize _actualSize;
	long long _presentationCount;
	PKRunningStat _strokeLatencyStat;
	PKRunningStat _predictedTouchesLatencyStat;
	id<MTLTexture> _currentTextureTarget;
	id<CAMetalDrawable> _currentDrawable;
	CGImageRef _paperTextureImage;
	CGPoint _canvasOffset;
	CGAffineTransform _strokeTransformForRenderQueue;
	/*^block*/id _canvasOffsetBlock;
	NSArray* _liveStrokeStrokes;
	CGRect _liveStrokeStrokesAnimationBounds;
	BOOL _dirtyRectMightBeInvalid;
	BOOL _liveStrokeMode;
	BOOL _fadeOutStrokesMode;
	BOOL _invertColors;
	id<PKMetalRendererControllerDelegate> _delegate;
	unsigned long long _pixelFormat;
	PKStrokeGenerator* _inputController;
	PKLinedPaper* _linedPaper;
	double _liveStrokeElapsedTime;
	double _liveStrokeDuration;
	CAMetalLayer* _presentationLayer;
	PKMetalRenderer* _renderer;
	double _inputScale;
	double __latestLatency;
	CGSize _liveStrokeMaxSize;
	CGRect _viewScissor;
	CGAffineTransform _strokeTransform;
	CGAffineTransform _paperTransform;
	CGAffineTransform _renderTransform;

}

@property (nonatomic,retain) PKMetalRenderer * renderer;                                         //@synthesize renderer=_renderer - In the implementation block
@property (assign) CGAffineTransform renderTransform;                                            //@synthesize renderTransform=_renderTransform - In the implementation block
@property (assign) double inputScale;                                                            //@synthesize inputScale=_inputScale - In the implementation block
@property (assign,nonatomic) double _latestLatency;                                              //@synthesize _latestLatency=__latestLatency - In the implementation block
@property (assign,nonatomic,__weak) id<PKMetalRendererControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue; 
@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned long long pixelFormat;                                   //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> renderQueue;                         //@synthesize renderQueue=_renderQueue - In the implementation block
@property (assign,nonatomic) CGAffineTransform strokeTransform;                                  //@synthesize strokeTransform=_strokeTransform - In the implementation block
@property (nonatomic,readonly) PKStrokeGenerator * inputController;                              //@synthesize inputController=_inputController - In the implementation block
@property (assign,nonatomic) double backboardPaperMultiply; 
@property (nonatomic,retain) PKLinedPaper * linedPaper;                                          //@synthesize linedPaper=_linedPaper - In the implementation block
@property (assign,nonatomic) CGRect viewScissor;                                                 //@synthesize viewScissor=_viewScissor - In the implementation block
@property (assign,nonatomic) CGAffineTransform paperTransform;                                   //@synthesize paperTransform=_paperTransform - In the implementation block
@property (nonatomic,readonly) CGSize actualSize;                                                //@synthesize actualSize=_actualSize - In the implementation block
@property (nonatomic,readonly) CGSize pixelSize;                                                 //@synthesize pixelSize=_pixelSize - In the implementation block
@property (assign,nonatomic) BOOL liveStrokeMode;                                                //@synthesize liveStrokeMode=_liveStrokeMode - In the implementation block
@property (assign,nonatomic) CGSize liveStrokeMaxSize;                                           //@synthesize liveStrokeMaxSize=_liveStrokeMaxSize - In the implementation block
@property (assign,nonatomic) BOOL fadeOutStrokesMode;                                            //@synthesize fadeOutStrokesMode=_fadeOutStrokesMode - In the implementation block
@property (assign,nonatomic) double liveStrokeElapsedTime;                                       //@synthesize liveStrokeElapsedTime=_liveStrokeElapsedTime - In the implementation block
@property (assign,nonatomic) double liveStrokeDuration;                                          //@synthesize liveStrokeDuration=_liveStrokeDuration - In the implementation block
@property (assign,nonatomic,__weak) CAMetalLayer * presentationLayer;                            //@synthesize presentationLayer=_presentationLayer - In the implementation block
@property (assign,nonatomic) BOOL invertColors;                                                  //@synthesize invertColors=_invertColors - In the implementation block
-(void)clear;
-(void)setup;
-(id<MTLCommandQueue>)commandQueue;
-(id<PKMetalRendererControllerDelegate>)delegate;
-(unsigned long long)pixelFormat;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(double)inputScale;
-(id<MTLDevice>)device;
-(PKMetalRenderer *)renderer;
-(void)setRenderer:(PKMetalRenderer *)arg1 ;
-(void)setDelegate:(id<PKMetalRendererControllerDelegate>)arg1 ;
-(void)setInputScale:(double)arg1 ;
-(CGAffineTransform)renderTransform;
-(void)teardown;
-(CAMetalLayer *)presentationLayer;
-(CGSize)pixelSize;
-(NSObject*<OS_dispatch_queue>)renderQueue;
-(PKStrokeGenerator *)inputController;
-(void)dealloc;
-(id)initWithPixelSize:(CGSize)arg1 actualSize:(CGSize)arg2 renderQueue:(id)arg3 usePrivateResourceHandler:(BOOL)arg4 pixelFormat:(unsigned long long)arg5 ;
-(void)cancelAllRendering;
-(void)cancelLongRunningRenders;
-(void)renderTiles:(id)arg1 tileTransform:(CGAffineTransform)arg2 ;
-(void)drawImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 ;
-(CGAffineTransform)strokeTransform;
-(void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 useLayerContext:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)drawImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 clippedToStrokeSpaceRect:(CGRect)arg3 ;
-(void)drawStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(void)drawStrokes:(id)arg1 renderIntermediateSteps:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(CGImageRef)newCGImage;
-(void)setInvertColors:(BOOL)arg1 ;
-(BOOL)invertColors;
-(void)flushMemoryIfPossible;
-(void)setLinedPaper:(PKLinedPaper *)arg1 ;
-(void)setStrokeTransform:(CGAffineTransform)arg1 ;
-(void)setViewScissor:(CGRect)arg1 ;
-(void)setPaperTransform:(CGAffineTransform)arg1 ;
-(void)_copyIntoTilesFromRenderQueue:(id)arg1 tileTransform:(CGAffineTransform)arg2 ;
-(void)replaceInkTexture:(id)arg1 image:(CGImageRef)arg2 ;
-(double)_latestLatency;
-(PKLinedPaper *)linedPaper;
-(void)setPaperTextureImage:(CGImageRef)arg1 ;
-(void)setLiveRenderingOverrideColor:(CGColorRef)arg1 ;
-(void)setFadeOutStrokesMode:(BOOL)arg1 ;
-(void)setLiveStrokeMode:(BOOL)arg1 ;
-(void)setLiveStrokeMaxSize:(CGSize)arg1 ;
-(void)setResourceCacheSize:(unsigned long long)arg1 ;
-(void)setBackboardPaperMultiply:(double)arg1 ;
-(void)setPresentationLayer:(CAMetalLayer *)arg1 ;
-(void)setPixelSize:(CGSize)arg1 actualSize:(CGSize)arg2 ;
-(BOOL)liveStrokeMode;
-(void)purgeOriginalBackFramebuffer;
-(void)purgeRenderCachesForStrokes:(id)arg1 ;
-(void)setLiveStrokeElapsedTime:(double)arg1 ;
-(void)setLiveStrokeStrokes:(id)arg1 animationBounds:(CGRect)arg2 ;
-(void)setAlternativeStrokes:(id)arg1 alpha:(double)arg2 originalStrokeAlpha:(double)arg3 ;
-(BOOL)prerenderWithTransform:(CGAffineTransform)arg1 inputScale:(double)arg2 at:(double)arg3 ;
-(void)didFinishRendering:(/*^block*/id)arg1 ;
-(void)changeRenderSize;
-(void)callBlockAfterPresenting:(/*^block*/id)arg1 ;
-(void)setCanvasOffsetPresentationOffsetBlock:(/*^block*/id)arg1 ;
-(void)drawingBeganWithStroke:(id)arg1 ;
-(void)drawingEnded:(id)arg1 finishStrokeBlock:(/*^block*/id)arg2 ;
-(void)drawingCancelled;
-(void)drawingCancelledWithCompletion:(/*^block*/id)arg1 ;
-(void)liveStrokeParticlesToFrame:(CGRect)arg1 strokes:(id)arg2 startTime:(double)arg3 duration:(double)arg4 ;
-(void)setCanvasOffset:(CGPoint)arg1 ;
-(CGAffineTransform)paperTransform;
-(CGRect)viewScissor;
-(CGSize)liveStrokeMaxSize;
-(void)signalVSyncSemaphore:(double)arg1 presentationTime:(unsigned long long)arg2 ;
-(BOOL)isAllRenderingCancelled;
-(double)backboardPaperMultiply;
-(BOOL)fadeOutStrokesMode;
-(void)resumeLongRunningRenders;
-(void)setupSync;
-(unsigned long long)_drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 useLayerContext:(BOOL)arg4 progress:(id)arg5 ;
-(CGImageRef)newCGImageWithClipRect:(CGRect)arg1 ;
-(void)_drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 useLayerContext:(BOOL)arg4 renderCompletion:(/*^block*/id)arg5 ;
-(void)buildRenderCacheForStrokes:(id)arg1 ;
-(BOOL)isLongRunningRenderingCancelled;
-(void)_updateRendererStrokeTransformWithTransform:(CGAffineTransform)arg1 offset:(CGPoint)arg2 ;
-(void)_renderAndPresent:(BOOL)arg1 withTransform:(CGAffineTransform)arg2 ;
-(void)set_latestLatency:(double)arg1 ;
-(BOOL)_setupCurrentDrawable;
-(void)_present:(double)arg1 setDirtyRect:(BOOL)arg2 ;
-(void)setRenderTransform:(CGAffineTransform)arg1 ;
-(BOOL)_renderAheadWithTransform:(CGAffineTransform)arg1 at:(double)arg2 ;
-(void)_renderDrawPoints;
-(void)_renderLiveStrokeAndPresentWithTransform:(CGAffineTransform)arg1 at:(double)arg2 setDirtyRect:(BOOL)arg3 ;
-(void)pokeEventDispatcher;
-(id)initWithPixelSize:(CGSize)arg1 actualSize:(CGSize)arg2 renderQueue:(id)arg3 usePrivateResourceHandler:(BOOL)arg4 ;
-(void)teardownSync;
-(void)resumeLongRunningRendersAfterAllWorkIsDone;
-(CGImageRef)renderStrokesSync:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 imageClipRect:(CGRect)arg4 ;
-(void)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 imageClipRect:(CGRect)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)drawStrokes:(id)arg1 intoTile:(id)arg2 renderCount:(long long)arg3 ;
-(void)copyIntoTiles:(id)arg1 ;
-(void)renderTilesIntoTiles:(id)arg1 ;
-(void)drawTexture:(id)arg1 ;
-(void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(void)renderWithTransform:(CGAffineTransform)arg1 inputScale:(double)arg2 at:(double)arg3 ;
-(void)generateSmartFillMaskForStroke:(id)arg1 maskPaths:(const vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >*)arg2 completionBlock:(/*^block*/id)arg3 ;
-(CGSize)actualSize;
-(double)liveStrokeElapsedTime;
-(double)liveStrokeDuration;
-(void)setLiveStrokeDuration:(double)arg1 ;
@end

