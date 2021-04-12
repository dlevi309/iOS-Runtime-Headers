/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDCanvasZoomTrackerDelegate <NSObject>
@required
-(void)canvasZoomTracker:(id)arg1 willBeginViewScaleFeedbackWithFastPinch:(BOOL)arg2;
-(void)canvasZoomTracker:(id)arg1 willUpdateViewScaleFeedbackWithScale:(double)arg2;
-(void)canvasZoomTrackerDidEndViewScaleFeedback:(id)arg1;
-(void)canvasZoomTrackerWillBeginFinalZoomAnimation:(id)arg1;
-(void)canvasZoomTrackerDidEndFinalZoomAnimation:(id)arg1;
-(void)canvasZoomTrackerDidFinish:(id)arg1;

@end

