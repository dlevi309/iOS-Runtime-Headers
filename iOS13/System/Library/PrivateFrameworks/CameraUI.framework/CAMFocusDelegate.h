/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMFocusDelegate <NSObject>
@optional
-(double)captureControllerDelayBeforeResettingFocusAndExposureAfterCapture:(id)arg1;

@required
-(BOOL)captureController:(id)arg1 shouldResetFocusAndExposureForReason:(long long)arg2;
-(void)captureControllerWillResetFocusAndExposure:(id)arg1;
-(void)captureController:(id)arg1 didOutputFocusResult:(id)arg2;

@end

