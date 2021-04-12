/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKControllerDelegate, OS_dispatch_semaphore, OS_dispatch_queue;
#import <PencilKit/PencilKit-Structs.h>
@class NSArray, NSMutableArray, NSObject, PKMetalRendererController, PKDrawing, PKStrokeGenerator;

@interface PKController : NSObject {

	NSArray* _renderedStrokes;
	NSMutableArray* _mutableRenderedStrokes;
	BOOL _liveInteraction;
	BOOL _invertColors;
	BOOL _previewsSuspended;
	BOOL _isMetal;
	NSObject*<PKControllerDelegate> _delegate;
	PKMetalRendererController* _rendererController;
	PKDrawing* _drawing;
	NSObject*<OS_dispatch_semaphore> _interactSemaphore;
	NSObject*<OS_dispatch_queue> _interactQueue;
	NSObject*<OS_dispatch_queue> _previewQueue;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	double _timeToRender;
	double _totalTiles;
	double _totalStrokes;

}

@property (nonatomic,retain) PKMetalRendererController * rendererController;                  //@synthesize rendererController=_rendererController - In the implementation block
@property (nonatomic,retain) PKDrawing * drawing;                                             //@synthesize drawing=_drawing - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> interactSemaphore;              //@synthesize interactSemaphore=_interactSemaphore - In the implementation block
@property (assign,nonatomic) BOOL previewsSuspended;                                          //@synthesize previewsSuspended=_previewsSuspended - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> interactQueue;                      //@synthesize interactQueue=_interactQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> previewQueue;                       //@synthesize previewQueue=_previewQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backgroundQueue;                    //@synthesize backgroundQueue=_backgroundQueue - In the implementation block
@property (assign) BOOL liveInteraction;                                                      //@synthesize liveInteraction=_liveInteraction - In the implementation block
@property (assign,nonatomic) double timeToRender;                                             //@synthesize timeToRender=_timeToRender - In the implementation block
@property (assign,nonatomic) double totalTiles;                                               //@synthesize totalTiles=_totalTiles - In the implementation block
@property (assign,nonatomic) double totalStrokes;                                             //@synthesize totalStrokes=_totalStrokes - In the implementation block
@property (assign,nonatomic) BOOL isMetal;                                                    //@synthesize isMetal=_isMetal - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<PKControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * renderedStrokes; 
@property (nonatomic,readonly) PKStrokeGenerator * inputController; 
@property (assign,nonatomic) BOOL invertColors;                                               //@synthesize invertColors=_invertColors - In the implementation block
+(void)updatesFrom:(id)arg1 to:(id)arg2 newStrokesToRender:(id*)arg3 redrawAllInRect:(CGRect*)arg4 ;
-(id)init;
-(NSObject*<PKControllerDelegate>)delegate;
-(void)setDelegate:(NSObject*<PKControllerDelegate>)arg1 ;
-(void)teardown;
-(PKStrokeGenerator *)inputController;
-(NSObject*<OS_dispatch_queue>)backgroundQueue;
-(void)setBackgroundQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)previewQueue;
-(PKDrawing *)drawing;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(void)imageWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithPixelSize:(CGSize)arg1 actualSize:(CGSize)arg2 renderQueue:(id)arg3 usePrivateResourceHandler:(BOOL)arg4 ;
-(void)_didUpdateMutableRenderedStrokes;
-(PKMetalRendererController *)rendererController;
-(void)resumePreviews;
-(void)cancelLongRunningRenders;
-(void)setLiveInteraction:(BOOL)arg1 ;
-(void)_renderImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 ;
-(void)_setDrawing:(id)arg1 initialDrawing:(id)arg2 withImage:(CGImageRef)arg3 andMask:(CGImageRef)arg4 setupComplete:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)_loadInitialDrawing:(id)arg1 withImage:(CGImageRef)arg2 andMask:(CGImageRef)arg3 ;
-(BOOL)_updateFrom:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_renderAllInStrokeSpaceRect:(CGRect)arg1 completion:(/*^block*/id)arg2 ;
-(void)_drawingChanged;
-(void)_renderStrokes:(id)arg1 renderIntermediateSteps:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)performAsyncInteractBlock:(/*^block*/id)arg1 ;
-(void)_updateDrawing:(id)arg1 erasedStrokes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)applyCommands:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_applyCommands:(id)arg1 interactCompletion:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_didRenderStrokes:(id)arg1 ;
-(void)removeStrokesInRect:(CGRect)arg1 from:(id)arg2 ;
-(id)strokes:(id)arg1 updateWithAdditionalStrokes:(id)arg2 ;
-(NSArray *)renderedStrokes;
-(void)_renderAllStrokes:(id)arg1 clipRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(void)setInvertColors:(BOOL)arg1 ;
-(void)didStartLiveInteractionWith:(id)arg1 ;
-(void)didEndLiveInteraction;
-(void)suspendPreviews;
-(void)setDrawing:(id)arg1 tiles:(id)arg2 tileTransform:(CGAffineTransform)arg3 setupComplete:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)setDrawing:(id)arg1 initialDrawing:(id)arg2 withImage:(CGImageRef)arg3 andMask:(CGImageRef)arg4 setupComplete:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)updateDrawing;
-(void)hideStrokesWithoutUpdating:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateDrawingWithErasedStrokes:(id)arg1 ;
-(void)updateDrawingFrom:(id)arg1 ;
-(void)applyCommand:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)renderImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 forRenderedStrokes:(id)arg3 thenRenderStrokes:(id)arg4 inStrokeSpaceClipRect:(CGRect)arg5 completion:(/*^block*/id)arg6 ;
-(void)renderImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 forRenderedStrokes:(id)arg3 thenRenderStrokes:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)renderStrokes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)renderTiles:(id)arg1 tileTransform:(CGAffineTransform)arg2 completion:(/*^block*/id)arg3 ;
-(void)renderTilesIntoTiles:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)callbackAfterTileGeneration:(/*^block*/id)arg1 ;
-(void)renderStrokes:(id)arg1 additionalStrokes:(id)arg2 intoTile:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(void)addNewRenderedStroke:(id)arg1 preDrawingChangedBlock:(/*^block*/id)arg2 ;
-(void)setRendererController:(PKMetalRendererController *)arg1 ;
-(BOOL)liveInteraction;
-(BOOL)invertColors;
-(NSObject*<OS_dispatch_semaphore>)interactSemaphore;
-(void)setInteractSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(BOOL)previewsSuspended;
-(void)setPreviewsSuspended:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)interactQueue;
-(void)setInteractQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPreviewQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(double)timeToRender;
-(void)setTimeToRender:(double)arg1 ;
-(double)totalTiles;
-(void)setTotalTiles:(double)arg1 ;
-(double)totalStrokes;
-(void)setTotalStrokes:(double)arg1 ;
-(BOOL)isMetal;
-(void)setIsMetal:(BOOL)arg1 ;
@end

