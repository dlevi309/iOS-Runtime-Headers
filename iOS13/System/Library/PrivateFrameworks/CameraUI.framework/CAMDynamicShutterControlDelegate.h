/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMDynamicShutterControlDelegate <NSObject>
@optional
-(BOOL)dynamicShutterControlShouldBeginGesture:(id)arg1;
-(void)dynamicShutterControlDidShortPress:(id)arg1;
-(void)dynamicShutterControlGesturesDidBegin:(id)arg1;
-(void)dynamicShutterControlGesturesDidEnd:(id)arg1;
-(void)dynamicShutterControlGesturesDidCancel:(id)arg1;
-(void)dynamicShutterControlDidStart:(id)arg1;
-(void)dynamicShutterControlDidStop:(id)arg1;
-(void)dynamicShutterControlDidPressLockButton:(id)arg1;
-(void)dynamicShutterControlDidPresentCounter:(id)arg1;
-(void)dynamicShutterControlDidDismissCounter:(id)arg1;
-(void)shutterControlTouchAttemptedWhileDisabled:(id)arg1;

@end

