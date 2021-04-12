/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneOverlayViewController.h>

@protocol SBIsolatedSceneOrientationFollowingWrapperOrientationDelegate;
@class SBDeviceApplicationSceneHandle, UIViewController, SBIsolatedSceneOrientationFollowingWindow, SBWindowSelfHostWrapper, SBIsolatedSceneOrientationFollowingContainerView, UIApplicationSceneSettingsDiffInspector, UIApplicationSceneClientSettingsDiffInspector, NSString;

@interface SBIsolatedSceneOrientationFollowingWrapperViewController : UIViewController <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneOverlayViewController> {

	SBDeviceApplicationSceneHandle* _sceneHandle;
	UIViewController* _contentViewController;
	SBIsolatedSceneOrientationFollowingWindow* _appOverlayWindow;
	SBWindowSelfHostWrapper* _appOverlayHostWrapper;
	SBIsolatedSceneOrientationFollowingContainerView* _containerView;
	UIApplicationSceneSettingsDiffInspector* _sceneSettingsDiffInspector;
	UIApplicationSceneClientSettingsDiffInspector* _clientSettingsDiffInspector;
	BOOL _sceneWantsDeviceOrientationEvents;
	BOOL _rendersWhileLocked;
	BOOL _needsDeferredOverlayWindowRotation;
	id<SBIsolatedSceneOrientationFollowingWrapperOrientationDelegate> _orientationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView*<SBDeviceApplicationSceneOverlayView> overlayView; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(UIView*<SBDeviceApplicationSceneOverlayView>)overlayView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)dealloc;
-(long long)_orientationBasedOnScene;
-(long long)_effectiveSceneOrientation;
-(id)initWithContentViewController:(id)arg1 sceneHandle:(id)arg2 orientationDelegate:(id)arg3 rendersWhileLocked:(BOOL)arg4 ;
-(void)_containerViewDidSetCenter:(CGPoint)arg1 ;
-(void)_containerViewDidSetBounds:(CGRect)arg1 ;
-(BOOL)_isSceneStatusBarHidden;
-(CGRect)_boundsForOverlayRootView;
@end

