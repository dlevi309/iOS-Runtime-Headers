/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKTiledViewDelegate
@required
-(void)canvasViewDidBeginDrawing:(id)arg1;
-(void)canvasViewDidEndDrawing:(id)arg1;
-(void)_canvasViewWillBeginDrawing:(id)arg1;
-(void)canvasView:(id)arg1 beganStroke:(id)arg2;
-(void)canvasView:(id)arg1 endedStroke:(id)arg2;
-(void)canvasView:(id)arg1 cancelledStroke:(id)arg2;
-(void)canvasViewDidEraseStrokes:(id)arg1;
-(BOOL)canvasView:(id)arg1 shouldBeginDrawingWithTouch:(id)arg2;

@end

