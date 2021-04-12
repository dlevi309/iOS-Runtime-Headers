/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol PGPictureInPictureProxyDelegate <NSObject>
@optional
-(long long)pictureInPictureProxyInterfaceOrientationForTransitionAnimation:(id)arg1;
-(CGRect*)pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1;
-(id)pictureInPictureProxyViewControllerWindowForTransitionAnimation:(id)arg1;
-(void)pictureInPictureProxyWillSetupPictureInPictureStop:(id)arg1;
-(void)pictureInPictureProxy:(id)arg1 willStartPictureInPictureWithAnimationType:(long long)arg2;
-(void)pictureInPictureProxy:(id)arg1 didStartPictureInPictureWithAnimationType:(long long)arg2;
-(void)pictureInPictureProxy:(id)arg1 failedToStartPictureInPictureWithAnimationType:(long long)arg2 error:(id)arg3;
-(void)pictureInPictureProxy:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2;
-(void)pictureInPictureProxy:(id)arg1 willStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
-(void)pictureInPictureProxy:(id)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
-(void)pictureInPictureProxyPictureInPictureInterruptionBegan:(id)arg1;
-(void)pictureInPictureProxyPictureInPictureInterruptionEnded:(id)arg1;
-(void)pictureInPictureProxy:(id)arg1 didReceivePlaybackCommand:(id)arg2;
-(void)pictureInPictureProxy:(id)arg1 didUpdateStashedOrUnderLockState:(BOOL)arg2;
-(void)pictureInPictureProxy:(id)arg1 didUpdateResourcesUsageReductionReasons:(unsigned long long)arg2 oldReasons:(unsigned long long)arg3;
-(void)pictureInPictureProxy:(id)arg1 didRequestFaceTimeAction:(long long)arg2;

@end

