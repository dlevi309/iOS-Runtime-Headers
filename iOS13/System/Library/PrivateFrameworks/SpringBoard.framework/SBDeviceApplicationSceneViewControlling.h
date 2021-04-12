/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class SBDeviceApplicationSceneHandle, SBHomeGrabberView;


@protocol SBDeviceApplicationSceneViewControlling <SBApplicationSceneViewControlling>
@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * sceneHandle; 
@property (nonatomic,readonly) SBHomeGrabberView * homeGrabberView; 
@required
-(SBDeviceApplicationSceneHandle *)sceneHandle;
-(SBHomeGrabberView *)homeGrabberView;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg1 atLevel:(unsigned long long)arg2;

@end

