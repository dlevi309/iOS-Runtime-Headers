/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
*/

#import <WelcomeKitUI/WelcomeKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WLSourceDevicesDelegate.h>

@class WLSourceDevicesController, WLIntroViewController, WLPairingViewController, WLMigrationProgressViewController, WLMigrationCompletedViewController, WLRetryViewController, WLWelcomeViewControllerMetrics;

@interface WLWelcomeViewController : UIViewController <WLSourceDevicesDelegate> {

	BOOL _forceUITestMode;
	BOOL _forceUITestModeDownloadError;
	WLSourceDevicesController* _sourceDevicesController;
	WLIntroViewController* _introViewController;
	WLPairingViewController* _pairingViewController;
	WLMigrationProgressViewController* _progressViewController;
	WLMigrationCompletedViewController* _completedViewController;
	WLRetryViewController* _retryViewController;
	WLWelcomeViewControllerMetrics* _metrics;
	BOOL _dismissAfterTimeout;
	BOOL _userDidChooseRetry;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(void)allowedToDisplay:(/*^block*/id)arg1 ;
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)sourceDeviceController:(id)arg1 didDiscoverDevice:(id)arg2 ;
-(void)wifiAndDeviceDiscoveryDidGetInterrupted;
-(void)_loadIntroGroupView;
-(CGRect)_frameForGroupView;
-(void)_addGroupViewController:(id)arg1 ;
-(void)_startConnectivity;
-(CGRect)_frameForIncomingGroupViewBeforeAnimation;
-(CGRect)_frameForOutgoingGroupViewAfterAnimation;
-(void)_removeGroupViewController:(id)arg1 ;
-(void)_transitionToPairingCodeViewControllerWithPairingCode:(id)arg1 wifiPSK:(id)arg2 ssid:(id)arg3 ;
-(void)_completeWithSuccess:(BOOL)arg1 ;
-(void)_animateFromGroupViewController:(id)arg1 toGroupViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_authenticationPeriodDidEnd;
-(void)_progressViewControllerDidFinishWithSuccess:(BOOL)arg1 retry:(BOOL)arg2 ;
-(void)_migrationDidBegin;
-(void)_transitionToCompletedViewController;
-(void)_transitionToRetryViewController;
-(void)_swapFromGroupViewController:(id)arg1 toGroupViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_transitionToProgressViewControllerWithSourceDevice:(id)arg1 ;
-(id)initForUITestWithForceDownloadError:(BOOL)arg1 ;
-(void)_uiTestModeStartFakePairing;
@end

