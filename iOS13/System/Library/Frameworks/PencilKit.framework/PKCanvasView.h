/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <libobjc.A.dylib/PKTiledViewDelegate.h>
#import <libobjc.A.dylib/PKRulerHostingDelegate.h>
#import <libobjc.A.dylib/PKToolPickerObserver.h>

@protocol PKRulerHostingDelegate;
@class PKTiledView, PKCanvasAttachmentView, UIScrollView, UIView, PKDrawing, PKInk, UIGestureRecognizer, PKTool, NSString;

@interface PKCanvasView : UIScrollView <PKTiledViewDelegate, PKRulerHostingDelegate, PKToolPickerObserver> {

	PKTiledView* _tiledView;
	PKCanvasAttachmentView* _pageView;
	UIScrollView* _fixedPixelSizeScrollView;
	UIView* _fixedPixelSizeScrollViewWrapper;
	struct {
		unsigned delegateCanvasViewDrawingDidChange : 1;
		unsigned delegateCanvasViewDidFinishRendering : 1;
		unsigned delegateCanvasViewDidBeginDrawing : 1;
		unsigned delegateCanvasViewDidEndDrawing : 1;
		unsigned delegateCanvasViewDidBeginUsingTool : 1;
		unsigned delegateCanvasViewDidEndUsingTool : 1;
		unsigned delegateCanvasViewBeganStroke : 1;
		unsigned delegateCanvasViewUpdatedStroke : 1;
		unsigned delegateCanvasViewEndedStroke : 1;
		unsigned delegateCanvasViewCancelledStroke : 1;
		unsigned delegateShouldBeginDrawingWithTouch : 1;
		unsigned delegateCanvasViewWillBeginDrawing : 1;
	}  _canvasViewFlags;
	BOOL _disableWideGamut;
	UIView* _contentView;
	id<PKRulerHostingDelegate> _rulerHostingDelegate;
	CGAffineTransform _drawingTransform;

}

@property (nonatomic,readonly) UIView * contentView;                                               //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy) PKDrawing * nonNullDrawing; 
@property (nonatomic,retain) PKInk * ink; 
@property (assign,nonatomic) long long _maxFileFormatVersion; 
@property (assign,nonatomic) BOOL disableWideGamut;                                                //@synthesize disableWideGamut=_disableWideGamut - In the implementation block
@property (assign,nonatomic) BOOL rulerEnabled; 
@property (assign,nonatomic,__weak) id drawingUndoTarget; 
@property (assign,nonatomic) SEL drawingUndoSelector; 
@property (assign,nonatomic) BOOL predictionDisabled; 
@property (nonatomic,readonly) UIView * selectionView; 
@property (nonatomic,readonly) UIView * rulerView; 
@property (assign,nonatomic,__weak) id<PKRulerHostingDelegate> rulerHostingDelegate;               //@synthesize rulerHostingDelegate=_rulerHostingDelegate - In the implementation block
@property (nonatomic,readonly) CGSize _fixedPixelSize; 
@property (assign,nonatomic) CGAffineTransform drawingTransform;                                   //@synthesize drawingTransform=_drawingTransform - In the implementation block
@property (nonatomic,readonly) CGAffineTransform strokeTransform; 
@property (assign,getter=isFingerDrawingEnabled,nonatomic) BOOL fingerDrawingEnabled; 
@property (nonatomic,readonly) UIGestureRecognizer * _drawingGestureRecognizer; 
@property (assign,nonatomic,__weak) id<PKCanvasViewDelegate> delegate; 
@property (nonatomic,copy) PKDrawing * drawing; 
@property (nonatomic,copy) PKTool * tool; 
@property (assign,getter=isRulerActive,nonatomic) BOOL rulerActive; 
@property (nonatomic,readonly) UIGestureRecognizer * drawingGestureRecognizer; 
@property (assign,nonatomic) BOOL allowsFingerDrawing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<PKCanvasViewDelegate>)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(UIView *)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(UIView *)selectionView;
-(void)paste:(id)arg1 ;
-(void)awakeFromNib;
-(void)setMaximumZoomScale:(double)arg1 ;
-(id)_pinchGestureRecognizer;
-(id)_getDelegateZoomView;
-(void)setRulerHostingDelegate:(id<PKRulerHostingDelegate>)arg1 ;
-(id)rulerHostingView;
-(BOOL)rulerHostWantsSharedRuler;
-(BOOL)_hasSelection;
-(id)_selectionController;
-(void)_flushCaches;
-(PKInk *)ink;
-(void)setInk:(PKInk *)arg1 ;
-(PKDrawing *)drawing;
-(void)setRulerActive:(BOOL)arg1 ;
-(void)setDrawingUndoTarget:(id)arg1 ;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 fixedPixelSize:(CGSize)arg2 drawingScale:(double)arg3 layerFixedPixelSize:(BOOL)arg4 ;
-(void)setDisableWideGamut:(BOOL)arg1 ;
-(void)setFingerDrawingEnabled:(BOOL)arg1 ;
-(id)drawingUndoTarget;
-(void)performUndo:(id)arg1 ;
-(void)setDrawingUndoSelector:(SEL)arg1 ;
-(CGSize)_fixedPixelSize;
-(void)_setFixedPixelSize:(CGSize)arg1 drawingScale:(double)arg2 ;
-(CGAffineTransform)drawingTransform;
-(BOOL)isFingerDrawingEnabled;
-(UIGestureRecognizer *)drawingGestureRecognizer;
-(void)canvasViewDidBeginDrawing:(id)arg1 ;
-(void)canvasViewDidEndDrawing:(id)arg1 ;
-(id<PKRulerHostingDelegate>)rulerHostingDelegate;
-(void)_setDrawing:(id)arg1 alreadyRenderedDrawing:(id)arg2 imageForAlreadyRenderedDrawing:(id)arg3 fullyRenderedCompletionBlock:(/*^block*/id)arg4 ;
-(void)imageWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)commitSelectionIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isRulerActive;
-(CGAffineTransform)strokeTransform;
-(id)_currentStroke;
-(UIView *)rulerView;
-(void)set_maxFileFormatVersion:(long long)arg1 ;
-(void)_canvasViewWillBeginDrawing:(id)arg1 ;
-(void)canvasView:(id)arg1 beganStroke:(id)arg2 ;
-(void)canvasView:(id)arg1 endedStroke:(id)arg2 ;
-(void)canvasView:(id)arg1 cancelledStroke:(id)arg2 ;
-(void)canvasViewDidEraseStrokes:(id)arg1 ;
-(BOOL)canvasView:(id)arg1 shouldBeginDrawingWithTouch:(id)arg2 ;
-(SEL)drawingUndoSelector;
-(BOOL)rulerEnabled;
-(void)setRulerEnabled:(BOOL)arg1 ;
-(long long)_maxFileFormatVersion;
-(void)set_fixedPixelSize:(CGSize)arg1 ;
-(BOOL)predictionDisabled;
-(CGSize)_metalViewDrawableSize;
-(CGSize)_rendererControllerPixelSize;
-(void)setPredictionDisabled:(BOOL)arg1 ;
-(UIGestureRecognizer *)_drawingGestureRecognizer;
-(void)setDrawingTransform:(CGAffineTransform)arg1 ;
-(void)setTool:(PKTool *)arg1 ;
-(void)toolPickerSelectedToolDidChange:(id)arg1 ;
-(void)toolPickerIsRulerActiveDidChange:(id)arg1 ;
-(void)_toolPicker:(id)arg1 didChangeColor:(id)arg2 ;
-(PKTool *)tool;
-(void)_drawingDidChange;
-(void)_fullyRendered;
-(id)initWithFrame:(CGRect)arg1 drawingWidth:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 drawingWidth:(double)arg2 fixedPixelSizeScrollView:(id)arg3 ;
-(void)setupDrawingWidth:(double)arg1 fixedPixelSizeScrollView:(id)arg2 ;
-(void)_setChildrenOpaque:(BOOL)arg1 ;
-(void)_setChildrenBackgroundColor:(id)arg1 ;
-(void)updateFixedPixelSizeViewForBounds:(CGRect)arg1 ;
-(void)_setContentViewOpaqueBackgroundColorIfApplicable;
-(void)updateSubviewsForBounds:(CGRect)arg1 ;
-(void)_setSelectedStrokesColor:(id)arg1 ;
-(void)_setDrawing:(id)arg1 fullyRenderedCompletionBlock:(/*^block*/id)arg2 ;
-(PKDrawing *)nonNullDrawing;
-(void)setNonNullDrawing:(PKDrawing *)arg1 ;
-(BOOL)allowsFingerDrawing;
-(void)setAllowsFingerDrawing:(BOOL)arg1 ;
-(BOOL)shouldToolPickerBecomeVisibleWhenFirstResponder:(id)arg1 ;
-(void)_updateCanvas;
-(BOOL)disableWideGamut;
@end

