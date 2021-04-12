/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSExternalEventHandling.h>
#import <libobjc.A.dylib/SBLockScreenApplicationLaunching.h>
#import <libobjc.A.dylib/CSApplicationLaunching.h>
#import <libobjc.A.dylib/CSCameraPrewarming.h>

@class SBInProcessSecureAppAction, CSCoverSheetViewController, SBSecureAppManager, NSString;

@interface SBDashBoardApplicationLauncher : NSObject <CSExternalEventHandling, SBLockScreenApplicationLaunching, CSApplicationLaunching, CSCameraPrewarming> {

	SBInProcessSecureAppAction* _secureAppAction;
	BOOL _cameraIsPrewarming;
	BOOL _cameraPrewarmSucceeded;
	CSCoverSheetViewController* _coverSheetViewController;
	SBSecureAppManager* _secureAppManager;

}

@property (nonatomic,retain) CSCoverSheetViewController * coverSheetViewController;              //@synthesize coverSheetViewController=_coverSheetViewController - In the implementation block
@property (assign,nonatomic,__weak) SBSecureAppManager * secureAppManager;                       //@synthesize secureAppManager=_secureAppManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(void)dealloc;
-(BOOL)handleEvent:(id)arg1 ;
-(long long)participantState;
-(void)prewarmCameraHardware:(BOOL)arg1 andApplication:(BOOL)arg2 ;
-(void)notePrewarmRequestWasUseful;
-(void)notePrewarmRequestEnded;
-(CSCoverSheetViewController *)coverSheetViewController;
-(void)setCoverSheetViewController:(CSCoverSheetViewController *)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(NSString *)coverSheetIdentifier;
-(void)_activateCameraAnimated:(BOOL)arg1 actions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)launchQuickNote;
-(BOOL)handleTransitionRequest:(id)arg1 ;
-(void)_prewarmCamera;
-(void)_coolCameraIfNecessary;
-(BOOL)_canHandleTransitionRequest:(id)arg1 outActivatingSceneEntity:(id*)arg2 ;
-(void)_presentApplicationSceneEntity:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)_launchQuickNote;
-(BOOL)_backgroundLaunchCamera;
-(void)_reallyActivateAppSceneWithEntity:(id)arg1 interactive:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_attemptToUnlockToCameraCompletion:(/*^block*/id)arg1 ;
-(void)_activateAppSceneBelowDashBoard:(id)arg1 secureAppType:(unsigned long long)arg2 withActions:(id)arg3 interactive:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(SBSecureAppManager *)secureAppManager;
-(void)setSecureAppManager:(SBSecureAppManager *)arg1 ;
@end

