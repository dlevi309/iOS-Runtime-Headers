/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMDynamicShutterControlDelegate <NSObject>
@optional
-(BOOL)dynamicShutterControlShouldBeginGesture:(id)arg1;
-(void)dynamicShutterControlDidShortPress:(id)arg1;
-(void)dynamicShutterControlGesturesDidEnd:(id)arg1;
-(void)dynamicShutterControlDidPressLockButton:(id)arg1;
-(void)dynamicShutterControlDidPresentCounter:(id)arg1;
-(void)shutterControlTouchAttemptedWhileDisabled:(id)arg1;
-(void)dynamicShutterControlGesturesDidCancel:(id)arg1;
-(void)dynamicShutterControlDidStop:(id)arg1;
-(BOOL)dynamicShutterControlCanStartOnTouchDown:(id)arg1;
-(void)dynamicShutterControlDidStart:(id)arg1 withGesture:(long long)arg2;
-(void)dynamicShutterControlGesturesDidBegin:(id)arg1;
-(void)dynamicShutterControlDidDismissCounter:(id)arg1;
-(void)dynamicShutterControlDidStart:(id)arg1;

@end

