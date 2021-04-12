/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <TSReading/TSDAutoscrollDelegate.h>
#import <TSReading/TSDTrackerManipulator.h>

@class TSDInteractiveCanvasController, TSDAutoscroll, TSDiOSCanvasViewController, UITouch, TSDKnobTracker, TSDRep;

@interface TSDKnobDragGestureRecognizer : UIGestureRecognizer <TSDAutoscrollDelegate, TSDTrackerManipulator> {

	TSDiOSCanvasViewController* mCVC;
	TSDInteractiveCanvasController* mICC;
	UITouch* mTouch;
	CGPoint mKnobToTouchOffset;
	TSDKnobTracker* mTracker;
	BOOL mKnobTouchHasMoved;
	BOOL mDelayHasElapsed;
	CGPoint mOriginalPointInWindow;
	UITouch* mSecondTouch;
	TSDRep* mLastHitRep;
	BOOL mTouchesMoved;
	TSDAutoscroll* mAutoscroll;
	CGPoint mAutoscrollPoint;

}

@property (nonatomic,readonly) TSDInteractiveCanvasController * interactiveCanvasController; 
@property (nonatomic,readonly) TSDInteractiveCanvasController * icc; 
@property (nonatomic,retain) TSDAutoscroll * autoscroll; 
@property (assign,nonatomic) CGPoint autoscrollPoint; 
-(void)dealloc;
-(void)reset;
-(void)setState:(long long)arg1 ;
-(id)tracker;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)autoscrollWillNotStart;
-(TSDAutoscroll *)autoscroll;
-(void)setAutoscroll:(TSDAutoscroll *)arg1 ;
-(TSDInteractiveCanvasController *)icc;
-(TSDInteractiveCanvasController *)interactiveCanvasController;
-(id)initWithInteractiveCanvasController:(id)arg1 ;
-(void)p_cancelDelayedKnobTracking;
-(CGPoint)p_pointInUnscaledCanvas;
-(void)p_requestDelayedKnobTracking:(double)arg1 ;
-(void)p_triggerDelayedKnobTracking:(id)arg1 ;
-(void)updateAfterAutoscroll:(id)arg1 ;
-(double)unscaledStartAutoscrollThreshold;
-(int)allowedAutoscrollDirections;
-(CGPoint)autoscrollPoint;
-(void)setAutoscrollPoint:(CGPoint)arg1 ;
-(BOOL)allowTrackerManipulatorToTakeControl:(id)arg1 ;
-(BOOL)readyToEndOperation;
-(void)operationDidEnd;
-(void)cancelBecauseOfRotation;
-(BOOL)p_hitRepIsValid:(id)arg1 ;
@end

