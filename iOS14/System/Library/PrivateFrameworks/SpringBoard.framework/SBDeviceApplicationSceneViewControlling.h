/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class SBDeviceApplicationSceneHandle, SBHomeGrabberView;


@protocol SBDeviceApplicationSceneViewControlling <SBApplicationSceneViewControlling,SBSceneLayoutStatusBarAssertionProviding>
@property (nonatomic,retain) UIView*<SBApplicationSceneBackgroundView> backgroundView; 
@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * sceneHandle; 
@property (nonatomic,readonly) SBHomeGrabberView * homeGrabberView; 
@property (assign,nonatomic) long long homeGrabberDisplayMode; 
@required
-(void)setBackgroundView:(id)arg1;
-(UIView*<SBApplicationSceneBackgroundView>)backgroundView;
-(void)setHomeGrabberDisplayMode:(long long)arg1;
-(SBDeviceApplicationSceneHandle *)sceneHandle;
-(SBHomeGrabberView *)homeGrabberView;
-(long long)homeGrabberDisplayMode;

@end

