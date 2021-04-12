/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKMapGestureControllerDelegate <NSObject>
@optional
-(double)gestureController:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;

@required
-(void)gestureControllerWillStartUserInteraction:(id)arg1;
-(void)gestureControllerDidStopUserInteraction:(id)arg1;
-(CGPoint*)gestureController:(id)arg1 focusPointForPoint:(CGPoint)arg2 gestureKind:(long long)arg3;
-(void)gestureControllerWillStartTilting:(id)arg1;
-(void)gestureControllerDidStopTilting:(id)arg1 willDecelerate:(BOOL)arg2 tiltDirection:(long long)arg3;
-(void)gestureControllerDidStopRotating:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)gestureControllerWillStartRotating:(id)arg1;
-(void)gestureControllerDidStopRotatingDecelerating:(id)arg1;
-(void)gestureControllerWillStartZooming:(id)arg1 animated:(BOOL)arg2;
-(void)gestureControllerDidStopZooming:(id)arg1 direction:(long long)arg2 type:(long long)arg3 willDecelerate:(BOOL)arg4;
-(void)gestureControllerWillStartTwoFingerLongPress:(id)arg1;
-(void)gestureControllerDidStopTwoFingerLongPress:(id)arg1;
-(void)gestureControllerDidStopZoomingDecelerating:(id)arg1 direction:(long long)arg2 type:(long long)arg3;
-(void)gestureControllerWillStartPanning:(id)arg1;
-(void)gestureControllerDidStopPanningDecelerating:(id)arg1;
-(void)gestureControllerDidStopPanning:(id)arg1 willDecelerate:(BOOL)arg2;
-(CGRect*)gestureControllerSignificantViewFrame:(id)arg1;
-(void)gestureControllerDidStopZooming:(id)arg1 direction:(long long)arg2 willDecelerate:(BOOL)arg3;
-(void)gestureControllerDidStopZoomingDecelerating:(id)arg1 direction:(long long)arg2;
-(BOOL)gestureController:(id)arg1 shouldReceiveTouch:(id)arg2;
-(void)gestureControllerDidStopTiltingDecelerating:(id)arg1;

@end

