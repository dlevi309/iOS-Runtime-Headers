/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol CFXCameraControlsViewControllerDelegate <NSObject>
@required
-(void)insertCamBottomBar:(id)arg1;
-(id)doneButtonForCameraControlsViewController:(id)arg1;
-(id)flashButtonForCameraControlsViewController:(id)arg1;
-(BOOL)needsBlackBackgroundForCTMControls;
-(CGRect*)bottomBarCTMControlsFrameForWindowOrientation:(long long)arg1 bounds:(CGRect)arg2;
-(void)cameraControlsViewControllerEffectsButtonWasTapped:(id)arg1;
-(void)cameraControlsViewControllerShutterButtonWasTapped:(id)arg1;
-(void)cameraControlsViewControllerSwitchCameraButtonWasTapped:(id)arg1;

@end

