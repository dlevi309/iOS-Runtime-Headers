/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBDeviceApplicationSceneOverlayViewProviderDelegate;
@class SBIsolatedSceneOrientationFollowingWrapperViewController, SBDeviceApplicationSceneHandle, UIViewController;

@interface SBDeviceApplicationSceneOverlayViewProvider : NSObject {

	SBIsolatedSceneOrientationFollowingWrapperViewController* _orientationWrapperViewController;
	id<SBDeviceApplicationSceneOverlayViewProviderDelegate> _delegate;
	SBDeviceApplicationSceneHandle* _sceneHandle;

}

@property (nonatomic,retain) SBDeviceApplicationSceneHandle * sceneHandle;                                           //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (nonatomic,__weak,readonly) id<SBDeviceApplicationSceneOverlayViewProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIViewController * overlayViewController; 
@property (nonatomic,readonly) long long preferredStatusBarStyle; 
-(void)dealloc;
-(id<SBDeviceApplicationSceneOverlayViewProviderDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredStatusBarStyle;
-(long long)preferredInterfaceOrientationForPresentation;
-(UIViewController *)overlayViewController;
-(SBDeviceApplicationSceneHandle *)sceneHandle;
-(void)setSceneHandle:(SBDeviceApplicationSceneHandle *)arg1 ;
-(id)initWithSceneHandle:(id)arg1 delegate:(id)arg2 ;
-(void)_activateIfPossible;
-(void)_deactivateIfPossible;
-(id)_realOverlayViewController;
-(BOOL)shouldFollowSceneOrientation;
@end

