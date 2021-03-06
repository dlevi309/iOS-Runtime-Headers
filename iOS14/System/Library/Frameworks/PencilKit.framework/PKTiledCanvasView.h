/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKDrawingGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PKControllerDelegate.h>
#import <libobjc.A.dylib/PKShapeDrawingControllerDelegate.h>
#import <libobjc.A.dylib/PKDrawingGestureTarget.h>

@protocol PKTiledCanvasViewDelegate, PKDrawingGestureRecognizerProtocol;
@class NSMutableArray, UITouch, PKController, UIImage, PKDrawing, PKInk, UIGestureRecognizer, UIColor, PKSelectionController, PKRulerController, PKMetalView, CADisplayLink, PKDrawingPowerSavingController, NSMutableSet, PKAlternativeStrokesAnimation, PKInterpolateColorAnimation, PKToolPicker, PKShapeDrawingController, PKMetalRendererController, NSString;

@interface PKTiledCanvasView : UIView <PKDrawingGestureRecognizerDelegate, PKControllerDelegate, PKShapeDrawingControllerDelegate, PKDrawingGestureTarget> {

	unsigned long long _numSkippedDoubleBufferedFrames;
	struct {
		unsigned delegateSupportsDrawingDidChange : 1;
		unsigned delegateSupportsWillBeginNewStroke : 1;
		unsigned delegateSupportsBeganStroke : 1;
		unsigned delegateSupportsCancelledStroke : 1;
		unsigned delegateSupportsEndedStroke : 1;
		unsigned delegateSupportsWillBeginDrawing : 1;
		unsigned delegateSupportsDidBeginDrawing : 1;
		unsigned delegateSupportsDrawingMovedWithTouch : 1;
		unsigned delegateSupportsDidEndDrawing : 1;
		unsigned delegateSupportsDidFinishRenderingStrokesOnRenderQueue : 1;
		unsigned delegateSupportsShouldBeginDrawingWithTouch : 1;
		unsigned delegateSupportsDidEraseStrokes : 1;
		unsigned delegateSupportsRegisterUndoCommands : 1;
		unsigned long long delegateSupportsTouchView;
		unsigned delegateSupportsDidPresentWithCanvasOffset : 1;
		unsigned delegateSupportsInvalidateTiles : 1;
		unsigned delegateSupportsHasVisibleStrokesChanged : 1;
		unsigned delegateSupportsShouldDisableShapeRecognition : 1;
		unsigned delegateSupportsInkForStroke : 1;
	}  _canvasViewFlags;
	NSMutableArray* _finishedStrokes;
	long long _liveInteractionCount;
	UITouch* _currentStrokeTouch;
	BOOL _isDrawing;
	BOOL _hasVisibleStrokes;
	BOOL _isErasingObjects;
	BOOL _predictionDisabled;
	BOOL _enableCanvasOffsetSupport;
	BOOL _allowLiveInteraction;
	BOOL _liveStrokeMode;
	BOOL _disableAXDrawingAnnouncements;
	BOOL _shouldPause;
	BOOL _usePrivateResourceHandler;
	BOOL _singleComponent;
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
	NSMutableArray* _particlesToDestinationAnimations;
	NSMutableArray* _transformStrokesAnimations;
	double _liveAnimationStartTime;
	NSMutableArray* _fadeOutStrokeAnimations;
	PKAlternativeStrokesAnimation* _alternativeStrokesAnimation;
	NSMutableSet* _strokeUUIDsAboutToBeRemoved;
	NSMutableArray* _strokeRenderCachesToPurge;
	PKInterpolateColorAnimation* _liveRenderingOverrideColorAnimation;
	PKToolPicker* _toolPickerToRestoreBackgroundMaterialUpdatingState;
	PKShapeDrawingController* _shapeDrawingController;
	CGPoint _canvasOffset;
	CGSize _liveStrokeMaxSize;
	CGSize __fixedPixelSize;
	CGPoint __oldEraseLocation;
	CGRect _viewScissor;
	CGAffineTransform _strokeTransform;
	CGAffineTransform _paperTransform;

}

@property (nonatomic,retain) PKMetalView * metalView;                                                                        //@synthesize metalView=_metalView - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                                                    //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) BOOL shouldPause;                                                                               //@synthesize shouldPause=_shouldPause - In the implementation block
@property (assign,nonatomic) BOOL isDrawing;                                                                                 //@synthesize isDrawing=_isDrawing - In the implementation block
@property (assign,nonatomic) BOOL usePrivateResourceHandler;                                                                 //@synthesize usePrivateResourceHandler=_usePrivateResourceHandler - In the implementation block
@property (assign,nonatomic) BOOL singleComponent;                                                                           //@synthesize singleComponent=_singleComponent - In the implementation block
@property (assign,nonatomic) CGSize _fixedPixelSize;                                                                         //@synthesize _fixedPixelSize=__fixedPixelSize - In the implementation block
@property (assign,nonatomic) double _fixedDrawingScale;                                                                      //@synthesize _fixedDrawingScale=__fixedDrawingScale - In the implementation block
@property (assign,nonatomic) long long maxNumPredictionPoints;                                                               //@synthesize maxNumPredictionPoints=_maxNumPredictionPoints - In the implementation block
@property (assign) double drawingStartTimestamp;                                                                             //@synthesize drawingStartTimestamp=_drawingStartTimestamp - In the implementation block
@property (nonatomic,retain) PKDrawingPowerSavingController * powerSavingController;                                         //@synthesize powerSavingController=_powerSavingController - In the implementation block
@property (nonatomic,copy) id purgeResourcesBlock;                                                                           //@synthesize purgeResourcesBlock=_purgeResourcesBlock - In the implementation block
@property (assign,nonatomic) BOOL isErasingObjects;                                                                          //@synthesize isErasingObjects=_isErasingObjects - In the implementation block
@property (assign,nonatomic) CGPoint _oldEraseLocation;                                                                      //@synthesize _oldEraseLocation=__oldEraseLocation - In the implementation block
@property (nonatomic,retain) NSMutableArray * strokesToErase;                                                                //@synthesize strokesToErase=_strokesToErase - In the implementation block
@property (nonatomic,retain) NSMutableSet * strokeIDsToErase;                                                                //@synthesize strokeIDsToErase=_strokeIDsToErase - In the implementation block
@property (nonatomic,retain) NSMutableArray * particlesToDestinationAnimations;                                              //@synthesize particlesToDestinationAnimations=_particlesToDestinationAnimations - In the implementation block
@property (nonatomic,retain) NSMutableArray * transformStrokesAnimations;                                                    //@synthesize transformStrokesAnimations=_transformStrokesAnimations - In the implementation block
@property (assign,nonatomic) double liveAnimationStartTime;                                                                  //@synthesize liveAnimationStartTime=_liveAnimationStartTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * fadeOutStrokeAnimations;                                                       //@synthesize fadeOutStrokeAnimations=_fadeOutStrokeAnimations - In the implementation block
@property (nonatomic,retain) PKAlternativeStrokesAnimation * alternativeStrokesAnimation;                                    //@synthesize alternativeStrokesAnimation=_alternativeStrokesAnimation - In the implementation block
@property (nonatomic,retain) NSMutableSet * strokeUUIDsAboutToBeRemoved;                                                     //@synthesize strokeUUIDsAboutToBeRemoved=_strokeUUIDsAboutToBeRemoved - In the implementation block
@property (nonatomic,retain) NSMutableArray * strokeRenderCachesToPurge;                                                     //@synthesize strokeRenderCachesToPurge=_strokeRenderCachesToPurge - In the implementation block
@property (nonatomic,retain) PKInterpolateColorAnimation * liveRenderingOverrideColorAnimation;                              //@synthesize liveRenderingOverrideColorAnimation=_liveRenderingOverrideColorAnimation - In the implementation block
@property (assign,nonatomic,__weak) PKToolPicker * toolPickerToRestoreBackgroundMaterialUpdatingState;                       //@synthesize toolPickerToRestoreBackgroundMaterialUpdatingState=_toolPickerToRestoreBackgroundMaterialUpdatingState - In the implementation block
@property (nonatomic,retain) PKShapeDrawingController * shapeDrawingController;                                              //@synthesize shapeDrawingController=_shapeDrawingController - In the implementation block
@property (assign,nonatomic,__weak) id<PKTiledCanvasViewDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * paperTexture;                                                                         //@synthesize paperTexture=_paperTexture - In the implementation block
@property (nonatomic,retain) PKDrawing * drawing;                                                                            //@synthesize drawing=_drawing - In the implementation block
@property (nonatomic,retain) PKInk * ink;                                                                                    //@synthesize ink=_ink - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer*<PKDrawingGestureRecognizerProtocol> drawingGestureRecognizer;              //@synthesize drawingGestureRecognizer=_drawingGestureRecognizer - In the implementation block
@property (nonatomic,readonly) BOOL hasVisibleStrokes;                                                                       //@synthesize hasVisibleStrokes=_hasVisibleStrokes - In the implementation block
@property (assign,nonatomic) BOOL useLuminanceColorFilter; 
@property (nonatomic,retain) UIColor * liveRenderingOverrideColor;                                                           //@synthesize liveRenderingOverrideColor=_liveRenderingOverrideColor - In the implementation block
@property (nonatomic,readonly) PKController * _drawingController;                                                            //@synthesize drawingController=_drawingController - In the implementation block
@property (nonatomic,readonly) PKMetalRendererController * _rendererController; 
@property (assign,nonatomic,__weak) PKSelectionController * selectionController;                                             //@synthesize selectionController=_selectionController - In the implementation block
@property (assign,nonatomic,__weak) PKRulerController * rulerController;                                                     //@synthesize rulerController=_rulerController - In the implementation block
@property (nonatomic,readonly) BOOL wantsCanvasVisible; 
@property (assign,nonatomic) BOOL predictionDisabled;                                                                        //@synthesize predictionDisabled=_predictionDisabled - In the implementation block
@property (assign,nonatomic) double metalLayerContentsScaleOverride;                                                         //@synthesize metalLayerContentsScaleOverride=_metalLayerContentsScaleOverride - In the implementation block
@property (assign,nonatomic) CGAffineTransform strokeTransform;                                                              //@synthesize strokeTransform=_strokeTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform paperTransform;                                                               //@synthesize paperTransform=_paperTransform - In the implementation block
@property (assign,nonatomic) BOOL enableCanvasOffsetSupport;                                                                 //@synthesize enableCanvasOffsetSupport=_enableCanvasOffsetSupport - In the implementation block
@property (assign,nonatomic) CGPoint canvasOffset;                                                                           //@synthesize canvasOffset=_canvasOffset - In the implementation block
@property (assign,nonatomic) CGRect viewScissor;                                                                             //@synthesize viewScissor=_viewScissor - In the implementation block
@property (assign) BOOL allowLiveInteraction;                                                                                //@synthesize allowLiveInteraction=_allowLiveInteraction - In the implementation block
@property (assign,nonatomic) BOOL liveStrokeMode;                                                                            //@synthesize liveStrokeMode=_liveStrokeMode - In the implementation block
@property (assign,nonatomic) CGSize liveStrokeMaxSize;                                                                       //@synthesize liveStrokeMaxSize=_liveStrokeMaxSize - In the implementation block
@property (nonatomic,readonly) CGRect renderedStrokesBounds; 
@property (nonatomic,readonly) CGRect visibleStrokesBounds; 
@property (assign,nonatomic) BOOL disableAXDrawingAnnouncements;                                                             //@synthesize disableAXDrawingAnnouncements=_disableAXDrawingAnnouncements - In the implementation block
@property (nonatomic,readonly) PKDrawing * activeDrawing; 
@property (assign,nonatomic,__weak) PKDrawing * currentDrawingBeingCopiedToCanvas;                                           //@synthesize currentDrawingBeingCopiedToCanvas=_currentDrawingBeingCopiedToCanvas - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)setupDefaults;
+(void)prewarmFutureCanvasesIfNecessary;
-(void)setOpaque:(BOOL)arg1 ;
-(PKInk *)ink;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PKTiledCanvasViewDelegate>)delegate;
-(BOOL)shouldPause;
-(void)setHidden:(BOOL)arg1 ;
-(double)_inputScale;
-(void)setShouldPause:(BOOL)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(PKSelectionController *)selectionController;
-(void)setDelegate:(id<PKTiledCanvasViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(PKDrawing *)drawing;
-(void)setInk:(PKInk *)arg1 ;
-(BOOL)isDrawing;
-(void)setupDisplayLink;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(PKMetalView *)metalView;
-(void)dealloc;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(void)setupGestures;
-(void)setAllowLiveInteraction:(BOOL)arg1 ;
-(void)setNeedsDrawingDisplay;
-(CGAffineTransform)strokeTransform;
-(void)drawingChanged:(id)arg1 ;
-(PKMetalRendererController *)_rendererController;
-(double)layerContentsScale;
-(UIGestureRecognizer*<PKDrawingGestureRecognizerProtocol>)drawingGestureRecognizer;
-(void)setSelectionController:(PKSelectionController *)arg1 ;
-(void)setRulerController:(PKRulerController *)arg1 ;
-(void)setPaperTexture:(UIImage *)arg1 ;
-(UIImage *)paperTexture;
-(id)currentStroke;
-(BOOL)isErasingObjects;
-(void)setStrokeTransform:(CGAffineTransform)arg1 ;
-(PKDrawing *)activeDrawing;
-(BOOL)wantsCanvasVisible;
-(void)setCurrentDrawingBeingCopiedToCanvas:(PKDrawing *)arg1 ;
-(void)_setFixedPointSize:(CGSize)arg1 drawingScale:(double)arg2 ;
-(PKRulerController *)rulerController;
-(PKDrawing *)currentDrawingBeingCopiedToCanvas;
-(void)setViewScissor:(CGRect)arg1 ;
-(void)setPaperTransform:(CGAffineTransform)arg1 ;
-(void)_setDrawing:(id)arg1 tiles:(id)arg2 tileTransform:(CGAffineTransform)arg3 setupComplete:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(PKController *)_drawingController;
-(void)_drawingDisplay:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 usePrivateResourceHandler:(BOOL)arg2 singleComponent:(BOOL)arg3 ;
-(void)setupDrawing;
-(void)cancelPurgeResourcesBlock;
-(CGSize)_fixedPixelSize;
-(double)_fixedDrawingScale;
-(void)setupViewWithPixelSize:(CGSize)arg1 drawingSize:(CGSize)arg2 ;
-(void)setLiveRenderingOverrideColor:(id)arg1 animated:(BOOL)arg2 ;
-(double)liveAnimationStartTime;
-(void)setLiveAnimationStartTime:(double)arg1 ;
-(void)setLiveRenderingOverrideColor:(UIColor *)arg1 ;
-(void)setUseLuminanceColorFilter:(BOOL)arg1 ;
-(BOOL)useLuminanceColorFilter;
-(BOOL)_isLiveAnimating;
-(void)setDrawingGestureRecognizer:(UIGestureRecognizer*<PKDrawingGestureRecognizerProtocol>)arg1 ;
-(void)setLiveStrokeMode:(BOOL)arg1 ;
-(void)setLiveStrokeMaxSize:(CGSize)arg1 ;
-(CGRect)renderedStrokesBounds;
-(void)setResourceCacheSize:(unsigned long long)arg1 ;
-(void)adjustedPixelSize:(CGSize*)arg1 drawingSize:(CGSize*)arg2 ;
-(BOOL)usePrivateResourceHandler;
-(void)setupMetalViewForPixelFormat:(unsigned long long)arg1 withPixelSize:(CGSize)arg2 ;
-(void)resizeBackingBuffersForPixelSize:(CGSize)arg1 drawingScale:(double)arg2 ;
-(void)set_fixedPixelSize:(CGSize)arg1 ;
-(void)set_fixedDrawingScale:(double)arg1 ;
-(BOOL)liveStrokeMode;
-(void)setPurgeResourcesBlock:(id)arg1 ;
-(id)purgeResourcesBlock;
-(void)schedulePurgeResourcesBlock;
-(void)handleDrawingShouldPause:(BOOL)arg1 ;
-(PKShapeDrawingController *)shapeDrawingController;
-(double)drawingStartTimestamp;
-(PKDrawingPowerSavingController *)powerSavingController;
-(NSMutableArray *)particlesToDestinationAnimations;
-(NSMutableArray *)transformStrokesAnimations;
-(NSMutableSet *)strokeUUIDsAboutToBeRemoved;
-(void)checkAnimationsDidEndAtTime:(double)arg1 ;
-(void)delayCompletionBlockUntilPresentation:(/*^block*/id)arg1 ;
-(void)updateHasVisibleStrokes;
-(BOOL)enableCanvasOffsetSupport;
-(BOOL)_isShapeRecognitionEnabled;
-(BOOL)eraserBegan:(id)arg1 ;
-(void)willBeginLiveInteractionWithTouch:(id)arg1 ;
-(void)setIsDrawing:(BOOL)arg1 ;
-(void)setDrawingStartTimestamp:(double)arg1 ;
-(id)_touchView;
-(CGPoint)applyTransformToTouchLocation:(CGPoint)arg1 ;
-(void)setPowerSavingController:(PKDrawingPowerSavingController *)arg1 ;
-(void)_postBeganSketchingAXAnnouncement;
-(void)drawingBegan:(id)arg1 ;
-(void)eraserMoved:(id)arg1 ;
-(void)drawingMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)predictionDisabled;
-(void)_endAlternativeStrokeIfNecessaryAccepted:(BOOL)arg1 ;
-(void)eraserEnded:(id)arg1 ;
-(void)drawingEnded:(id)arg1 ;
-(void)_handleEndOfStroke:(id)arg1 undoCommand:(id)arg2 detectedShapeUndoCommand:(id)arg3 invalidateTiles:(BOOL)arg4 ;
-(void)didEndLiveInteractionWithStrokes:(id)arg1 drawing:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)_postEndedSketchingAXAnnouncement;
-(void)eraserCancelled;
-(void)drawingCancelled;
-(void)eraseStrokesForPoint:(CGPoint)arg1 prevPoint:(CGPoint)arg2 ;
-(void)set_oldEraseLocation:(CGPoint)arg1 ;
-(void)_postBeganErasingAXAnnouncement;
-(CGPoint)_oldEraseLocation;
-(void)_didFinishErasingStrokes:(BOOL)arg1 ;
-(void)_postEndedErasingAXAnnouncement;
-(void)animateStrokes:(id)arg1 destinationFrame:(CGRect)arg2 duration:(double)arg3 particles:(BOOL)arg4 ;
-(id)_strokeUUIDsForStrokes:(id)arg1 ;
-(void)fadeOutAndHideStrokes:(id)arg1 duration:(double)arg2 ;
-(void)setCanvasOffset:(CGPoint)arg1 ;
-(void)setAlternativeStrokesAnimation:(PKAlternativeStrokesAnimation *)arg1 ;
-(BOOL)disableAXDrawingAnnouncements;
-(void)_postAXAnnouncement:(id)arg1 ;
-(BOOL)drawingGestureRecognizer:(id)arg1 shouldBeginDrawingWithTouches:(id)arg2 event:(id)arg3 ;
-(void)drawingGestureRecognizer:(id)arg1 touchesEndedWithDrawingTouch:(id)arg2 ;
-(id)shapeDrawingControllerRendererController:(id)arg1 ;
-(void)shapeDrawingControllerShapeGestureDetected:(id)arg1 ;
-(void)shapeDrawingControllerShapeDetectionCancelled:(id)arg1 ;
-(void)drawingEstimatedPropertiesUpdated:(id)arg1 ;
-(void)_replayDrawingBegan:(SCD_Struct_PK6)arg1 ;
-(void)_replayDrawingMoved:(SCD_Struct_PK6)arg1 ;
-(void)_replayDrawingEnded;
-(void)_replayDrawingCancelled;
-(void)enumerateRenderedStrokesBounds:(/*^block*/id)arg1 ;
-(CGRect)visibleStrokesBounds;
-(void)setCanvasBackgroundColor:(id)arg1 ;
-(void)setMetalLayerContentsScaleOverride:(double)arg1 ;
-(id)currentStrokeWithStrokeDataCopy;
-(void)cancelCurrentStroke;
-(void)liveStrokeParticlesToDestinationFrame:(CGRect)arg1 ;
-(void)testHideOldestStroke;
-(void)removeStuckStrokesAndSimulateCrashIfNecessary;
-(CGSize)_metalViewDrawableSize;
-(CGSize)_rendererControllerPixelSize;
-(BOOL)hasVisibleStrokes;
-(UIColor *)liveRenderingOverrideColor;
-(void)setIsErasingObjects:(BOOL)arg1 ;
-(void)setPredictionDisabled:(BOOL)arg1 ;
-(double)metalLayerContentsScaleOverride;
-(CGAffineTransform)paperTransform;
-(void)setEnableCanvasOffsetSupport:(BOOL)arg1 ;
-(CGPoint)canvasOffset;
-(CGRect)viewScissor;
-(BOOL)allowLiveInteraction;
-(CGSize)liveStrokeMaxSize;
-(void)setDisableAXDrawingAnnouncements:(BOOL)arg1 ;
-(void)setMetalView:(PKMetalView *)arg1 ;
-(void)setUsePrivateResourceHandler:(BOOL)arg1 ;
-(BOOL)singleComponent;
-(void)setSingleComponent:(BOOL)arg1 ;
-(long long)maxNumPredictionPoints;
-(void)setMaxNumPredictionPoints:(long long)arg1 ;
-(NSMutableArray *)strokesToErase;
-(void)setStrokesToErase:(NSMutableArray *)arg1 ;
-(NSMutableSet *)strokeIDsToErase;
-(void)setStrokeIDsToErase:(NSMutableSet *)arg1 ;
-(void)setParticlesToDestinationAnimations:(NSMutableArray *)arg1 ;
-(void)setTransformStrokesAnimations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)fadeOutStrokeAnimations;
-(void)setFadeOutStrokeAnimations:(NSMutableArray *)arg1 ;
-(PKAlternativeStrokesAnimation *)alternativeStrokesAnimation;
-(void)setStrokeUUIDsAboutToBeRemoved:(NSMutableSet *)arg1 ;
-(NSMutableArray *)strokeRenderCachesToPurge;
-(void)setStrokeRenderCachesToPurge:(NSMutableArray *)arg1 ;
-(PKInterpolateColorAnimation *)liveRenderingOverrideColorAnimation;
-(void)setLiveRenderingOverrideColorAnimation:(PKInterpolateColorAnimation *)arg1 ;
-(PKToolPicker *)toolPickerToRestoreBackgroundMaterialUpdatingState;
-(void)setToolPickerToRestoreBackgroundMaterialUpdatingState:(PKToolPicker *)arg1 ;
-(void)setShapeDrawingController:(PKShapeDrawingController *)arg1 ;
@end

