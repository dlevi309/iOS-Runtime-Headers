/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKTiledCanvasViewDelegate <NSObject>
@optional
-(void)_canvasViewWillBeginDrawing:(id)arg1;
-(void)canvasViewDidBeginDrawing:(id)arg1;
-(void)canvasViewDidEndDrawing:(id)arg1;
-(void)canvasView:(id)arg1 beganStroke:(id)arg2;
-(void)canvasView:(id)arg1 endedStroke:(id)arg2;
-(void)canvasView:(id)arg1 cancelledStroke:(id)arg2;
-(BOOL)canvasView:(id)arg1 shouldBeginDrawingWithTouch:(id)arg2;
-(void)canvasViewWillBeginNewStroke:(id)arg1 withTouch:(id)arg2;
-(void)canvasView:(id)arg1 drawingDidChange:(id)arg2;
-(void)canvasViewDrawingMoved:(id)arg1 withTouch:(id)arg2;
-(void)canvasViewDidFinishAnimatingStrokes:(id)arg1;
-(void)canvasViewHasVisibleStrokesChanged:(id)arg1;
-(void)_canvasView:(id)arg1 didFinishRenderingStrokesOnRenderQueue:(id)arg2 inDrawing:(id)arg3;
-(void)_canvasViewDidEraseStrokes:(id)arg1;
-(void)canvasView:(id)arg1 registerUndoCommands:(id)arg2;
-(id)canvasViewTouchView:(id)arg1;
-(void)canvasView:(id)arg1 didPresentWithCanvasOffset:(CGPoint)arg2;
-(void)canvasViewInvalidateTiles:(id)arg1;
-(BOOL)canvasViewShouldDisableShapeRecognition:(id)arg1;
-(void)replayCanvasViewDrawingMoved:(id)arg1 inputPoint:(SCD_Struct_PK6)arg2;
-(id)canvasView:(id)arg1 inkForStroke:(id)arg2;

@end

