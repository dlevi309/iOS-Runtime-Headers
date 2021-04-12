/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <UIKitCore/UIPinchGestureRecognizer.h>

@interface TSDCanvasZoomPinchGestureRecognizer : UIPinchGestureRecognizer {

	BOOL mZoomTimedOut;

}
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)p_stopCancellationTimer;
-(void)p_startCancellationTimer;
-(void)p_cancelAfterDelay;
@end

