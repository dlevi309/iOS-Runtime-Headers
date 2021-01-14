/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKTiledViewDelegate
@required
-(void)_canvasViewWillBeginDrawing:(id)arg1;
-(void)canvasViewDidBeginDrawing:(id)arg1;
-(void)canvasViewDidEndDrawing:(id)arg1;
-(void)canvasView:(id)arg1 beganStroke:(id)arg2;
-(void)canvasView:(id)arg1 endedStroke:(id)arg2;
-(void)canvasView:(id)arg1 cancelledStroke:(id)arg2;
-(void)canvasViewDidEraseStrokes:(id)arg1;
-(BOOL)canvasView:(id)arg1 shouldBeginDrawingWithTouch:(id)arg2;

@end

