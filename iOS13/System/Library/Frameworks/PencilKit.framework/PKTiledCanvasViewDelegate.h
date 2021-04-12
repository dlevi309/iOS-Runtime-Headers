/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKTiledCanvasViewDelegate <NSObject>
@optional
-(void)canvasViewDidBeginDrawing:(id)arg1;
-(void)canvasViewDidEndDrawing:(id)arg1;
-(void)_canvasViewWillBeginDrawing:(id)arg1;
-(void)canvasView:(id)arg1 beganStroke:(id)arg2;
-(void)canvasView:(id)arg1 endedStroke:(id)arg2;
-(void)canvasView:(id)arg1 cancelledStroke:(id)arg2;
-(BOOL)canvasView:(id)arg1 shouldBeginDrawingWithTouch:(id)arg2;
-(void)canvasViewWillBeginNewStroke:(id)arg1 withTouch:(id)arg2;
-(void)canvasView:(id)arg1 drawingDidChange:(id)arg2;
-(void)canvasViewDrawingMoved:(id)arg1;
-(void)canvasViewDidFinishAnimatingStrokes:(id)arg1;
-(void)_canvasView:(id)arg1 didFinishRenderingStrokeOnRenderQueue:(id)arg2 inDrawing:(id)arg3;
-(void)_canvasViewDidEraseStrokes:(id)arg1;
-(void)canvasView:(id)arg1 registerUndoCommand:(id)arg2;
-(void)_canvasView:(id)arg1 showEditMenuFromLocation:(CGPoint)arg2;

@end

