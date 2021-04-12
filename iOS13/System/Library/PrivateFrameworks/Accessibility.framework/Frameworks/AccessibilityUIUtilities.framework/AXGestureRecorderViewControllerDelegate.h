/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
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

