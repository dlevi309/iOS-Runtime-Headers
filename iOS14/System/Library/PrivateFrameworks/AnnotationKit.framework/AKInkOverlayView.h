/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKCanvasViewDelegate.h>

@protocol AKInkOverlayViewDelegate, PKRulerHostingDelegate;
@class PKInk, NSHashTable, AKPageController, PKCanvasView, UIGestureRecognizer, NSString;

@interface AKInkOverlayView : UIView <PKCanvasViewDelegate> {

	PKInk* _ink;
	NSHashTable* _reportedStrokes;
	AKPageController* _pageController;
	id _drawingUndoTarget;
	PKCanvasView* _canvasView;
	id<AKInkOverlayViewDelegate> _delegate;
	id<PKRulerHostingDelegate> _rulerHostingDelegate;
	CGSize _canvasSizeInPKDrawingSpace;
	CGRect _previousPageRectInAKModel;

}

@property (__weak) id drawingUndoTarget;                                                          //@synthesize drawingUndoTarget=_drawingUndoTarget - In the implementation block
@property (assign) CGSize canvasSizeInPKDrawingSpace;                                             //@synthesize canvasSizeInPKDrawingSpace=_canvasSizeInPKDrawingSpace - In the implementation block
@property (assign,nonatomic) CGRect previousPageRectInAKModel;                                    //@synthesize previousPageRectInAKModel=_previousPageRectInAKModel - In the implementation block
@property (__weak) AKPageController * pageController;                                             //@synthesize pageController=_pageController - In the implementation block
@property (retain) PKCanvasView * canvasView;                                                     //@synthesize canvasView=_canvasView - In the implementation block
@property (__weak) id<AKInkOverlayViewDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (copy) PKInk * ink; 
@property (nonatomic,readonly) UIGestureRecognizer * drawingGestureRecognizer; 
@property (nonatomic,readonly) UIGestureRecognizer * pinchGestureRecognizer; 
@property (assign,nonatomic,__weak) id<PKRulerHostingDelegate> rulerHostingDelegate;              //@synthesize rulerHostingDelegate=_rulerHostingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)_convertRect:(CGRect)arg1 fromPageControllerModelSpace:(id)arg2 toDrawingInCanvasViewSpace:(id)arg3 ;
+(id)newAKInkOverlayViewForCurrentPlatformWithPageController:(id)arg1 drawingUndoTarget:(id)arg2 ;
+(id)newDrawingUndoTargetWithPageController:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(PKInk *)ink;
-(id)initWithFrame:(CGRect)arg1 ;
-(AKPageController *)pageController;
-(id<AKInkOverlayViewDelegate>)delegate;
-(void)didMoveToSuperview;
-(void)commonInit;
-(void)setDelegate:(id<AKInkOverlayViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(UIGestureRecognizer *)pinchGestureRecognizer;
-(void)setInk:(PKInk *)arg1 ;
-(void)setPageController:(AKPageController *)arg1 ;
-(PKCanvasView *)canvasView;
-(void)teardown;
-(void)awakeFromNib;
-(void)setCanvasView:(PKCanvasView *)arg1 ;
-(void)setRulerHostingDelegate:(id<PKRulerHostingDelegate>)arg1 ;
-(UIGestureRecognizer *)drawingGestureRecognizer;
-(void)setDrawingUndoTarget:(id)arg1 ;
-(void)canvasViewDidBeginDrawing:(id)arg1 ;
-(void)canvasViewDidEndDrawing:(id)arg1 ;
-(id)drawingUndoTarget;
-(id<PKRulerHostingDelegate>)rulerHostingDelegate;
-(void)canvasViewDrawingDidChange:(id)arg1 ;
-(void)_canvasView:(id)arg1 beganStroke:(id)arg2 ;
-(void)_canvasView:(id)arg1 endedStroke:(id)arg2 ;
-(void)_canvasView:(id)arg1 cancelledStroke:(id)arg2 ;
-(BOOL)_canvasView:(id)arg1 shouldBeginDrawingWithTouch:(id)arg2 ;
-(id)initWithPageController:(id)arg1 drawingUndoTarget:(id)arg2 ;
-(void)commonPostInit;
-(void)_updateCanvasViewInk;
-(void)_updatedSelectedStrokesWithColor:(id)arg1 ;
-(void)setupInkView;
-(void)_calculateFixedPixelSize:(CGSize*)arg1 drawingScale:(double*)arg2 ;
-(CGRect)previousPageRectInAKModel;
-(BOOL)canvasNeedsUpdate;
-(id)updatedDrawingForPageRectUpdate;
-(void)setPreviousPageRectInAKModel:(CGRect)arg1 ;
-(void)setCanvasSizeInPKDrawingSpace:(CGSize)arg1 ;
-(void)removeStrokesFromDrawing:(id)arg1 ;
-(CGSize)canvasSizeInPKDrawingSpace;
@end

