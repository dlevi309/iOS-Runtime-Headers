/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>

@protocol SBIsolatedSceneOrientationFollowingWrapperOrientationDelegate;
@class SBDeviceApplicationSceneHandle, UIViewController, SBSecureWindow, SBWindowSelfHostWrapper, UIApplicationSceneSettingsDiffInspector, UIApplicationSceneClientSettingsDiffInspector, NSString;

@interface SBIsolatedSceneOrientationFollowingWrapperViewController : UIViewController <SBDeviceApplicationSceneHandleObserver> {

	SBDeviceApplicationSceneHandle* _sceneHandle;
	UIViewController* _contentViewController;
	SBSecureWindow* _appOverlayWindow;
	SBWindowSelfHostWrapper* _appOverlayHostWrapper;
	UIApplicationSceneSettingsDiffInspector* _sceneSettingsDiffInspector;
	UIApplicationSceneClientSettingsDiffInspector* _clientSettingsDiffInspector;
	BOOL _sceneWantsDeviceOrientationEvents;
	BOOL _rendersWhileLocked;
	id<SBIsolatedSceneOrientationFollowingWrapperOrientationDelegate> _orientationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(id)initWithContentViewController:(id)arg1 sceneHandle:(id)arg2 orientationDelegate:(id)arg3 rendersWhileLocked:(BOOL)arg4 ;
@end

