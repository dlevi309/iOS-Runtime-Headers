/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKDrawingGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PKControllerDelegate.h>
#import <libobjc.A.dylib/PKDrawingGestureTarget.h>

@protocol PKTiledCanvasViewDelegate, PKDrawingGestureRecognizerProtocol, OS_dispatch_queue;
@class PKController, UIImage, PKDrawing, PKInk, UIGestureRecognizer, UIColor, PKSelectionController, PKRulerController, PKMetalView, CADisplayLink, PKDrawingPowerSavingController, NSMutableArray, NSMutableSet, NSObject, NSArray, PKToolPicker, PKMetalRendererController, NSString;

@interface PKTiledCanvasView : UIView <PKDrawingGestureRecognizerDelegate, PKControllerDelegate, PKDrawingGestureTarget> {

	unsigned long long _numSkippedDoubleBufferedFrames;
	struct {
		unsigned delegateSupportsDrawingDidChange : 1;
		unsigned delegateSupportsWillBeginNewStroke : 1;
		unsigned delegateSupportsBeganStroke : 1;
		unsigned delegateSupportsCancelledStroke : 1;
		unsigned delegateSupportsEndedStroke : 1;
		unsigned delegateSupportsWillBeginDrawing : 1;
		unsigned delegateSupportsDidBeginDrawing : 1;
		unsigned delegateSupportsDrawingMoved : 1;
		unsigned delegateSupportsDidEndDrawing : 1;
		unsigned delegateSupportsDidFinishRenderingStrokeOnRenderQueue : 1;
		unsigned delegateSupportsShouldBeginDrawingWithTouch : 1;
		unsigned delegateSupportsDidEraseStrokes : 1;
		unsigned delegateSupportsRegisterUndoCommand : 1;
	}  _canvasViewFlags;
	BOOL _isDrawing;
	BOOL _isErasingObjects;
	BOOL _isSelecting;
	BOOL _insertSpaceEnabled;
	BOOL _predictionDisabled;
	BOOL _allowLiveInteraction;
	BOOL _liveStrokeMode;
	BOOL _shouldPause;
	BOOL _usePrivateResourceHandler;
	BOOL __didCancelSelection;
	BOOL _hasValidOnscreenVisibleStrokes;
	BOOL _editMenuVisible;
	PKController* _drawingController;
	id<PKTiledCanvasViewDelegate> _delegate;
	UIImage* _paperTexture;
	PKDrawing* _drawing;
	PKInk* _ink;
	UIGestureRecognizer*<PKDrawingGestureRecognizerProtocol> _drawingGestureRecognizer;
	UIColor* _liveRenderingOverrideColor;
	PKSelectionController* _selectionController;
	PKRulerController* _rulerController;
	double _metalLayerContentsScaleOverride;
	PKDrawing* _currentDrawingBeingCopiedToCanvas;
	double __fixedDrawingScale;
	PKMetalView* _metalView;
	CADisplayLink* _displayLink;
	long long _maxNumPredictionPoints;
	double _drawingStartTimestamp;
	PKDrawingPowerSavingController* _powerSavingController;
	/*^block*/id _purgeResourcesBlock;
	NSMutableArray* _strokesToErase;
	NSMutableSet* _strokeIDsToErase;
	/*^block*/id _generateOnscreenVisibleStrokesBlock;
	NSObject*<OS_dispatch_queue> _onscreenVisibleStrokesQueue;
	NSArray* _onscreenVisibleStrokes;
	long long _currentGenerationCount;
	NSArray* _strokesAnimatingToDestination;
	double _liveAnimationStartTime;
	NSMutableArray* _fadeOutStrokeAnimations;
	NSMutableSet* _strokeUUIDsAboutToBeRemoved;
	PKToolPicker* _toolPickerToRestoreBackgroundMaterialUpdatingState;
	CGSize __fixedPixelSize;
	CGPoint __oldEraseLocation;
	CGPoint __drawingBeganLocation;
	CGRect _viewScissor;
	CGAffineTransform _strokeTransform;
	CGAffineTransform _paperTransform;

}

@property (nonatomic,retain) PKMetalView * metalView;                                                                        //@synthesize metalView=_metalView - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                                                    //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) BOOL shouldPause;                                                                               //@synthesize shouldPause=_shouldPause - In the implementation block
@property (assign,nonatomic) BOOL isDrawing;                                                                                 //@synthesize isDrawing=_isDrawing - In the implementation block
@property (assign,nonatomic) BOOL usePrivateResourceHandler;                                                                 //@synthesize usePrivateResourceHandler=_usePrivateResourceHandler - In the implementation block
@property (assign,nonatomic) CGSize _fixedPixelSize;                                                                         //@synthesize _fixedPixelSize=__fixedPixelSize - In the implementation block
@property (assign,nonatomic) double _fixedDrawingScale;                                                                      //@synthesize _fixedDrawingScale=__fixedDrawingScale - In the implementation block
@property (assign,nonatomic) long long maxNumPredictionPoints;                                                               //@synthesize maxNumPredictionPoints=_maxNumPredictionPoints - In the implementation block
@property (assign) double drawingStartTimestamp;                                                                             //@synthesize drawingStartTimestamp=_drawingStartTimestamp - In the implementation block
@property (nonatomic,retain) PKDrawingPowerSavingController * powerSavingController;                                         //@synthesize powerSavingController=_powerSavingController - In the implementation block
@property (nonatomic,copy) id purgeResourcesBlock;                                                                           //@synthesize purgeResourcesBlock=_purgeResourcesBlock - In the implementation block
@property (assign,nonatomic) BOOL isErasingObjects;                                                                          //@synthesize isErasingObjects=_isErasingObjects - In the implementation block
@property (assign,nonatomic) BOOL isSelecting;                                                                               //@synthesize isSelecting=_isSelecting - In the implementation block
@property (assign,nonatomic) CGPoint _oldEraseLocation;                                                                      //@synthesize _oldEraseLocation=__oldEraseLocation - In the implementation block
@property (assign,nonatomic) BOOL _didCancelSelection;                                                                       //@synthesize _didCancelSelection=__didCancelSelection - In the implementation block
@property (nonatomic,retain) NSMutableArray * strokesToErase;                                                                //@synthesize strokesToErase=_strokesToErase - In the implementation block
@property (nonatomic,retain) NSMutableSet * strokeIDsToErase;                                                                //@synthesize strokeIDsToErase=_strokeIDsToErase - In the implementation block
@property (assign,nonatomic) CGPoint _drawingBeganLocation;                                                                  //@synthesize _drawingBeganLocation=__drawingBeganLocation - In the implementation block
@property (nonatomic,copy) id generateOnscreenVisibleStrokesBlock;                                                           //@synthesize generateOnscreenVisibleStrokesBlock=_generateOnscreenVisibleStrokesBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> onscreenVisibleStrokesQueue;                                       //@synthesize onscreenVisibleStrokesQueue=_onscreenVisibleStrokesQueue - In the implementation block
@property (assign,nonatomic) BOOL hasValidOnscreenVisibleStrokes;                                                            //@synthesize hasValidOnscreenVisibleStrokes=_hasValidOnscreenVisibleStrokes - In the implementation block
@property (nonatomic,retain) NSArray * onscreenVisibleStrokes;                                                               //@synthesize onscreenVisibleStrokes=_onscreenVisibleStrokes - In the implementation block
@property (assign,nonatomic) long long currentGenerationCount;                                                               //@synthesize currentGenerationCount=_currentGenerationCount - In the implementation block
@property (nonatomic,copy) NSArray * strokesAnimatingToDestination;                                                          //@synthesize strokesAnimatingToDestination=_strokesAnimatingToDestination - In the implementation block
@property (assign,nonatomic) double liveAnimationStartTime;                                                                  //@synthesize liveAnimationStartTime=_liveAnimationStartTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * fadeOutStrokeAnimations;                                                       //@synthesize fadeOutStrokeAnimations=_fadeOutStrokeAnimations - In the implementation block
@property (nonatomic,retain) NSMutableSet * strokeUUIDsAboutToBeRemoved;                                                     //@synthesize strokeUUIDsAboutToBeRemoved=_strokeUUIDsAboutToBeRemoved - In the implementation block
@property (assign,nonatomic) BOOL editMenuVisible;                                                                           //@synthesize editMenuVisible=_editMenuVisible - In the implementation block
@property (assign,nonatomic,__weak) PKToolPicker * toolPickerToRestoreBackgroundMaterialUpdatingState;                       //@synthesize toolPickerToRestoreBackgroundMaterialUpdatingState=_toolPickerToRestoreBackgroundMaterialUpdatingState - In the implementation block
@property (assign,nonatomic,__weak) id<PKTiledCanvasViewDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * paperTexture;                                                                         //@synthesize paperTexture=_paperTexture - In the implementation block
@property (nonatomic,retain) PKDrawing * drawing;                                                                            //@synthesize drawing=_drawing - In the implementation block
@property (nonatomic,retain) PKInk * ink;                                                                                    //@synthesize ink=_ink - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer*<PKDrawingGestureRecognizerProtocol> drawingGestureRecognizer;              //@synthesize drawingGestureRecognizer=_drawingGestureRecognizer - In the implementation block
@property (nonatomic,readonly) BOOL hasVisibleStrokes; 
@property (nonatomic,retain) UIColor * liveRenderingOverrideColor;                                                           //@synthesize liveRenderingOverrideColor=_liveRenderingOverrideColor - In the implementation block
@property (nonatomic,readonly) PKController * _drawingController;                                                            //@synthesize drawingController=_drawingController - In the implementation block
@property (nonatomic,readonly) PKMetalRendererController * _rendererController; 
@property (assign,nonatomic,__weak) PKSelectionController * selectionController;                                             //@synthesize selectionController=_selectionController - In the implementation block
@property (assign,nonatomic,__weak) PKRulerController * rulerController;                                                     //@synthesize rulerController=_rulerController - In the implementation block
@property (assign,nonatomic) BOOL insertSpaceEnabled;                                                                        //@synthesize insertSpaceEnabled=_insertSpaceEnabled - In the implementation block
@property (assign,nonatomic) BOOL predictionDisabled;                                                                        //@synthesize predictionDisabled=_predictionDisabled - In the implementation block
@property (assign,nonatomic) double metalLayerContentsScaleOverride;                                                         //@synthesize metalLayerContentsScaleOverride=_metalLayerContentsScaleOverride - In the implementation block
@property (assign,nonatomic) CGAffineTransform strokeTransform;                                                              //@synthesize strokeTransform=_strokeTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform paperTransform;                                                               //@synthesize paperTransform=_paperTransform - In the implementation block
@property (assign,nonatomic) CGRect viewScissor;                                                                             //@synthesize viewScissor=_viewScissor - In the implementation block
@property (assign) BOOL allowLiveInteraction;                                                                                //@synthesize allowLiveInteraction=_allowLiveInteraction - In the implementation block
@property (assign,nonatomic) BOOL liveStrokeMode;                                                                            //@synthesize liveStrokeMode=_liveStrokeMode - In the implementation block
@property (nonatomic,readonly) CGRect renderedStrokesBounds; 
@property (assign,nonatomic,__weak) PKDrawing * currentDrawingBeingCopiedToCanvas;                                           //@synthesize currentDrawingBeingCopiedToCanvas=_currentDrawingBeingCopiedToCanvas - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)setupDefaults;
-(void)dealloc;
-(id<PKTiledCanvasViewDelegate>)delegate;
-(void)setDelegate:(id<PKTiledCanvasViewDelegate>)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)layoutSubviews;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)setupDisplayLink;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(BOOL)isSelecting;
-(PKSelectionController *)selectionController;
-(void)setSelectionController:(PKSelectionController *)arg1 ;
-(PKInk *)ink;
-(void)setInk:(PKInk *)arg1 ;
-(PKDrawing *)drawing;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(CGSize)_fixedPixelSize;
-(UIGestureRecognizer*<PKDrawingGestureRecognizerProtocol>)drawingGestureRecognizer;
-(CGAffineTransform)strokeTransform;
-(void)setAllowLiveInteraction:(BOOL)arg1 ;
-(void)setNeedsDrawingDisplay;
-(void)drawingChanged:(id)arg1 ;
-(PKMetalRendererController *)_rendererController;
-(double)layerContentsScale;
-(void)setInsertSpaceEnabled:(BOOL)arg1 ;
-(void)setRulerController:(PKRulerController *)arg1 ;
-(void)setPaperTexture:(UIImage *)arg1 ;
-(UIImage *)paperTexture;
-(id)currentStroke;
-(BOOL)isErasingObjects;
-(void)setStrokeTransform:(CGAffineTransform)arg1 ;
-(BOOL)isDrawing;
-(void)setCurrentDrawingBeingCopiedToCanvas:(PKDrawing *)arg1 ;
-(void)_setFixedPointSize:(CGSize)arg1 drawingScale:(double)arg2 ;
-(PKRulerController *)rulerController;
-(PKDrawing *)currentDrawingBeingCopiedToCanvas;
-(void)setViewScissor:(CGRect)arg1 ;
-(void)setPaperTransform:(CGAffineTransform)arg1 ;
-(void)_setDrawing:(id)arg1 tiles:(id)arg2 tileTransform:(CGAffineTransform)arg3 setupComplete:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)insertSpaceEnabled;
-(PKController *)_drawingController;
-(void)_drawingDisplay:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 usePrivateResourceHandler:(BOOL)arg2 ;
-(void)setupDrawing;
-(void)cancelPurgeResourcesBlock;
-(id)generateOnscreenVisibleStrokesBlock;
-(void)setGenerateOnscreenVisibleStrokesBlock:(id)arg1 ;
-(void)setupGestures;
-(double)_fixedDrawingScale;
-(void)setupViewWithPixelSize:(CGSize)arg1 drawingSize:(CGSize)arg2 ;
-(void)setLiveRenderingOverrideColor:(UIColor *)arg1 ;
-(void)setDrawingGestureRecognizer:(UIGestureRecognizer*<PKDrawingGestureRecognizerProtocol>)arg1 ;
-(void)setLiveStrokeMode:(BOOL)arg1 ;
-(void)setResourceCacheSize:(unsigned long long)arg1 ;
-(void)setupMetalViewForWideGamut:(BOOL)arg1 withPixelSize:(CGSize)arg2 ;
-(void)adjustedPixelSize:(CGSize*)arg1 drawingSize:(CGSize*)arg2 ;
-(BOOL)usePrivateResourceHandler;
-(void)resizeBackingBuffersForPixelSize:(CGSize)arg1 drawingScale:(double)arg2 ;
-(void)set_fixedPixelSize:(CGSize)arg1 ;
-(void)set_fixedDrawingScale:(double)arg1 ;
-(double)liveAnimationStartTime;
-(BOOL)_isLiveAnimating;
-(void)setPurgeResourcesBlock:(id)arg1 ;
-(id)purgeResourcesBlock;
-(void)schedulePurgeResourcesBlock;
-(void)handleDrawingShouldPause:(BOOL)arg1 ;
-(PKMetalView *)metalView;
-(double)drawingStartTimestamp;
-(PKDrawingPowerSavingController *)powerSavingController;
-(BOOL)liveStrokeMode;
-(NSArray *)strokesAnimatingToDestination;
-(NSMutableSet *)strokeUUIDsAboutToBeRemoved;
-(void)checkAnimationsDidEndAtTime:(double)arg1 ;
-(void)delayCompletionBlockUntilPresentation:(/*^block*/id)arg1 ;
-(BOOL)eraserBegan:(id)arg1 ;
-(BOOL)lassoShouldClearSelectionOrToggleMenu:(id)arg1 ;
-(void)generateOnscreenVisibleStrokesForCanvas;
-(void)setIsDrawing:(BOOL)arg1 ;
-(void)setDrawingStartTimestamp:(double)arg1 ;
-(CGPoint)applyTransformToTouchLocation:(CGPoint)arg1 ;
-(SCD_Struct_PK7)drawingInputPoint:(CGPoint)arg1 forTouch:(id)arg2 predicted:(BOOL)arg3 ;
-(void)setPowerSavingController:(PKDrawingPowerSavingController *)arg1 ;
-(BOOL)isRulerSupportedForCurrentInk;
-(void)drawingBegan:(id)arg1 ;
-(CGPoint)clampInputPointForSelection:(CGPoint)arg1 ;
-(void)eraserMoved:(id)arg1 ;
-(void)drawingMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)predictionDisabled;
-(void)eraserEnded:(id)arg1 ;
-(BOOL)_didCancelSelection;
-(void)set_didCancelSelection:(BOOL)arg1 ;
-(void)drawingEnded:(id)arg1 ;
-(void)lassoEnded:(id)arg1 ;
-(UIColor *)liveRenderingOverrideColor;
-(void)eraserCancelled;
-(void)selectionCancelled;
-(void)clearOnscreenVisibleStrokeCacheAndCancelBlockIfNecessary;
-(void)drawingCancelled;
-(BOOL)hasValidOnscreenVisibleStrokes;
-(NSArray *)onscreenVisibleStrokes;
-(void)eraseStrokesForPoint:(CGPoint)arg1 prevPoint:(CGPoint)arg2 ;
-(void)set_oldEraseLocation:(CGPoint)arg1 ;
-(CGPoint)_oldEraseLocation;
-(void)_didFinishErasingStrokes:(BOOL)arg1 ;
-(void)generateStrokesOnCanvasForVisibleFrame:(CGRect)arg1 inDrawing:(id)arg2 ;
-(void)cancelGenerateVisibleStrokesBlockIfNecessary;
-(long long)currentGenerationCount;
-(void)setCurrentGenerationCount:(long long)arg1 ;
-(void)setHasValidOnscreenVisibleStrokes:(BOOL)arg1 ;
-(void)setOnscreenVisibleStrokes:(NSArray *)arg1 ;
-(void)findOnscreenVisibleStrokesForFrame:(CGRect)arg1 inDrawing:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissEditMenuIfNecessary;
-(void)set_drawingBeganLocation:(CGPoint)arg1 ;
-(BOOL)_isLassoAddingSpace:(id)arg1 ;
-(void)_addSpaceBelowDrawingForStroke:(id)arg1 touch:(id)arg2 ;
-(void)selectionBegan:(id)arg1 ;
-(void)toggleEditMenuAtLocation:(CGPoint)arg1 ;
-(CGPoint)_drawingBeganLocation;
-(id)_strokeUUIDsForStrokes:(id)arg1 ;
-(void)setStrokesAnimatingToDestination:(NSArray *)arg1 ;
-(void)setLiveAnimationStartTime:(double)arg1 ;
-(void)fadeOutAndHideStrokes:(id)arg1 duration:(double)arg2 ;
-(void)drawingEstimatedPropertiesUpdated:(id)arg1 ;
-(CGRect)renderedStrokesBounds;
-(void)setCanvasBackgroundColor:(id)arg1 ;
-(void)setMetalLayerContentsScaleOverride:(double)arg1 ;
-(BOOL)hasVisibleStrokes;
-(void)testLiveStrokeToDestinationFrame:(CGRect)arg1 destinationTexture:(CGImageRef)arg2 ;
-(void)testHideOldestStroke;
-(CGSize)_metalViewDrawableSize;
-(CGSize)_rendererControllerPixelSize;
-(void)setIsErasingObjects:(BOOL)arg1 ;
-(void)setIsSelecting:(BOOL)arg1 ;
-(void)setPredictionDisabled:(BOOL)arg1 ;
-(double)metalLayerContentsScaleOverride;
-(CGAffineTransform)paperTransform;
-(CGRect)viewScissor;
-(BOOL)allowLiveInteraction;
-(void)setMetalView:(PKMetalView *)arg1 ;
-(BOOL)shouldPause;
-(void)setShouldPause:(BOOL)arg1 ;
-(void)setUsePrivateResourceHandler:(BOOL)arg1 ;
-(long long)maxNumPredictionPoints;
-(void)setMaxNumPredictionPoints:(long long)arg1 ;
-(NSMutableArray *)strokesToErase;
-(void)setStrokesToErase:(NSMutableArray *)arg1 ;
-(NSMutableSet *)strokeIDsToErase;
-(void)setStrokeIDsToErase:(NSMutableSet *)arg1 ;
-(NSObject*<OS_dispatch_queue>)onscreenVisibleStrokesQueue;
-(void)setOnscreenVisibleStrokesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)fadeOutStrokeAnimations;
-(void)setFadeOutStrokeAnimations:(NSMutableArray *)arg1 ;
-(void)setStrokeUUIDsAboutToBeRemoved:(NSMutableSet *)arg1 ;
-(BOOL)editMenuVisible;
-(void)setEditMenuVisible:(BOOL)arg1 ;
-(PKToolPicker *)toolPickerToRestoreBackgroundMaterialUpdatingState;
-(void)setToolPickerToRestoreBackgroundMaterialUpdatingState:(PKToolPicker *)arg1 ;
@end

