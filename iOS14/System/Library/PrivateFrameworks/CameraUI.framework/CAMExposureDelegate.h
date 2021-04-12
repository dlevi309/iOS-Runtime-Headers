/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMExposureDelegate <NSObject>
@optional
-(BOOL)captureControllerUserHasAdjustedExposureTargetBiasFromBaseline:(id)arg1;

@required
-(float)baselineExposureValueForCaptureController:(id)arg1;
-(void)captureController:(id)arg1 didOutputExposureResult:(id)arg2;

@end

