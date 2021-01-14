/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/


@protocol AXGestureRecorderViewControllerDelegate <NSObject>
@required
-(double)maximumDurationOfRecordedGestureForGestureRecorderViewController:(id)arg1;
-(void)gestureRecorderViewController:(id)arg1 didStartRecordingAtomicFingerPathAtPoint:(CGPoint)arg2;
-(void)gestureRecorderViewControllerDidStopRecordingAtomicFingerPath:(id)arg1;
-(void)gestureRecorderViewControllerDidFinishReplayingRecordedGesture:(id)arg1;
-(BOOL)isChromeVisibleForGestureRecorderViewController:(id)arg1;
-(void)gestureRecorderViewController:(id)arg1 setChromeVisible:(BOOL)arg2;

@end

