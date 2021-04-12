/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIResponder.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, CAMViewfinderViewController, CAMCameraRollController, CUCaptureController, CAMTimelapseController, CAMPersistenceController, CAMMotionController, CAMLocationController, CAMPowerController, CAMBurstController, CAMKeepAliveController, CAMProtectionController, CAMRemoteShutterController, CAMNebulaDaemonProxyManager, CAMIrisVideoController, NSString;

@interface CAMApplicationDelegate : UIResponder <UNUserNotificationCenterDelegate, UIApplicationDelegate> {

	UIWindow* _window;
	CAMViewfinderViewController* _viewfinderViewController;
	CAMCameraRollController* _cameraRollController;
	CUCaptureController* _captureController;
	CAMTimelapseController* _timelapseController;
	CAMPersistenceController* _persistenceController;
	CAMMotionController* _motionController;
	CAMLocationController* _locationController;
	CAMPowerController* _powerController;
	CAMBurstController* _burstController;
	CAMKeepAliveController* _keepAliveController;
	CAMProtectionController* _protectionController;
	CAMRemoteShutterController* _remoteShutterController;
	CAMNebulaDaemonProxyManager* _nebulaDaemonProxyManager;
	CAMIrisVideoController* _irisVideoController;

}

@property (nonatomic,retain) UIWindow * window;                                                     //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) CAMViewfinderViewController * viewfinderViewController;              //@synthesize viewfinderViewController=_viewfinderViewController - In the implementation block
@property (nonatomic,readonly) CAMCameraRollController * cameraRollController;                      //@synthesize cameraRollController=_cameraRollController - In the implementation block
@property (nonatomic,readonly) CUCaptureController * captureController;                             //@synthesize captureController=_captureController - In the implementation block
@property (nonatomic,readonly) CAMTimelapseController * timelapseController;                        //@synthesize timelapseController=_timelapseController - In the implementation block
@property (nonatomic,readonly) CAMPersistenceController * persistenceController;                    //@synthesize persistenceController=_persistenceController - In the implementation block
@property (nonatomic,readonly) CAMMotionController * motionController;                              //@synthesize motionController=_motionController - In the implementation block
@property (nonatomic,readonly) CAMLocationController * locationController;                          //@synthesize locationController=_locationController - In the implementation block
@property (nonatomic,readonly) CAMPowerController * powerController;                                //@synthesize powerController=_powerController - In the implementation block
@property (nonatomic,readonly) CAMBurstController * burstController;                                //@synthesize burstController=_burstController - In the implementation block
@property (nonatomic,readonly) CAMKeepAliveController * keepAliveController;                        //@synthesize keepAliveController=_keepAliveController - In the implementation block
@property (nonatomic,readonly) CAMProtectionController * protectionController;                      //@synthesize protectionController=_protectionController - In the implementation block
@property (nonatomic,readonly) CAMRemoteShutterController * remoteShutterController;                //@synthesize remoteShutterController=_remoteShutterController - In the implementation block
@property (nonatomic,readonly) CAMNebulaDaemonProxyManager * nebulaDaemonProxyManager;              //@synthesize nebulaDaemonProxyManager=_nebulaDaemonProxyManager - In the implementation block
@property (nonatomic,readonly) CAMIrisVideoController * irisVideoController;                        //@synthesize irisVideoController=_irisVideoController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applicationWillResignActive:(id)arg1 ;
-(void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(CAMIrisVideoController *)irisVideoController;
-(void)setWindow:(UIWindow *)arg1 ;
-(CAMPowerController *)powerController;
-(BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(CAMTimelapseController *)timelapseController;
-(CAMCameraRollController *)cameraRollController;
-(CUCaptureController *)captureController;
-(void)updateShortcutItemsForApplication:(id)arg1 ;
-(CAMPersistenceController *)persistenceController;
-(CAMRemoteShutterController *)remoteShutterController;
-(CAMLocationController *)locationController;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(CAMKeepAliveController *)keepAliveController;
-(UIWindow *)window;
-(CAMViewfinderViewController *)viewfinderViewController;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg1 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(BOOL)_createSubsystemsWithLaunchOptions:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(CAMMotionController *)motionController;
-(CAMBurstController *)burstController;
-(CAMProtectionController *)protectionController;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(CAMNebulaDaemonProxyManager *)nebulaDaemonProxyManager;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

