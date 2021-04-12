/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMFocusDelegate <NSObject>
@optional
-(double)captureControllerDelayBeforeResettingFocusAndExposureAfterCapture:(id)arg1;

@required
-(void)captureController:(id)arg1 didOutputFocusResult:(id)arg2;
-(void)captureControllerWillResetFocusAndExposure:(id)arg1;
-(BOOL)captureController:(id)arg1 shouldResetFocusAndExposureForReason:(long long)arg2;

@end

