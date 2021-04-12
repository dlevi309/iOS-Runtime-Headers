/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <AssistantUI/AFUISceneHostingViewController.h>
#import <libobjc.A.dylib/SRSiriViewControllerHosting.h>
#import <libobjc.A.dylib/SiriUIPresentationRemoteControlling.h>

@protocol AFUISiriRemoteSceneViewControllerDataSource, AFUISiriRemoteSceneViewControllerDelegate;
@class NSArray, AFApplicationInfo, NSXPCConnection, NSString;

@interface AFUISiriRemoteSceneViewController : AFUISceneHostingViewController <SRSiriViewControllerHosting, SiriUIPresentationRemoteControlling> {

	BOOL _connectionHasBeenResumed;
	NSArray* _audioCategoriesDisablingVolumeHUD;
	BOOL _expectingInvalidation;
	id<AFUISiriRemoteSceneViewControllerDataSource> _dataSource;
	id<AFUISiriRemoteSceneViewControllerDelegate> _delegate;
	AFApplicationInfo* _viewServiceApplicationInfo;
	NSXPCConnection* _remoteConnection;

}

@property (nonatomic,retain) NSXPCConnection * remoteConnection;                                             //@synthesize remoteConnection=_remoteConnection - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriRemoteSceneViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriRemoteSceneViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) AFApplicationInfo * viewServiceApplicationInfo;                               //@synthesize viewServiceApplicationInfo=_viewServiceApplicationInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)remoteObjectInterface;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)_connection;
-(id<AFUISiriRemoteSceneViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AFUISiriRemoteSceneViewControllerDelegate>)arg1 ;
-(void)setSession:(id)arg1 ;
-(id<AFUISiriRemoteSceneViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<AFUISiriRemoteSceneViewControllerDataSource>)arg1 ;
-(void)_invalidated;
-(void)_interrupted;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)serviceViewControllerProxy;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(void)setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)serviceViewControllerProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setRequestOptions:(id)arg1 ;
-(void)setRemoteConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)remoteConnection;
-(void)applicationWillEnterForeground;
-(id)sessionDelegate;
-(void)handlePasscodeUnlockWithCompletion:(/*^block*/id)arg1 ;
-(void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2 lockState:(unsigned long long)arg3 ;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(void)emitUIStateTransitionForSiriDismissal:(int)arg1 withDismissalReason:(int)arg2 ;
-(void)setWaitingForTelephonyToStart:(BOOL)arg1 ;
-(void)extendCurrentTTSRequested;
-(void)setRunningPPT:(BOOL)arg1 withTestName:(id)arg2 testOptions:(id)arg3 ;
-(void)preloadPluginBundles;
-(void)updateRemoteSceneWithFrontMostAppInterfaceOrientation:(long long)arg1 ;
-(void)_audioCategoriesDisablingVolumeHUDDidChangeTo:(id)arg1 ;
-(void)_handleInvalidationForReason:(unsigned long long)arg1 explanation:(id)arg2 ;
-(void)sceneController:(id)arg1 willInvalidateScene:(id)arg2 forReason:(unsigned long long)arg3 ;
-(void)startHostingSceneForConfiguration:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setStatusViewHidden:(BOOL)arg1 ;
-(void)setCarDisplaySnippetMode:(long long)arg1 ;
-(void)setStatusViewUserInteractionEnabled:(BOOL)arg1 ;
-(void)setBugReportingAvailable:(BOOL)arg1 ;
-(void)setHelpButtonEmphasized:(BOOL)arg1 ;
-(void)pulseHelpButton;
-(void)serviceRequestsActivationSourceWithReplyHandler:(/*^block*/id)arg1 ;
-(void)serviceRequestsDismissalWithDelayForTTS:(BOOL)arg1 userInfo:(id)arg2 withDismissalReason:(unsigned long long)arg3 ;
-(void)serviceStartGuidedAccess;
-(void)serviceBulletinWithIdentifier:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)serviceDidReadBulletinWithIdentifier:(id)arg1 ;
-(void)serviceStartRequestWithOptions:(id)arg1 ;
-(void)serviceUserRelevantEventDidOccur;
-(void)serviceLaunchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 launchOptions:(long long)arg3 replyHandler:(/*^block*/id)arg4 ;
-(void)siriIdleAndQuietStatusDidChange:(BOOL)arg1 ;
-(void)setStatusViewDisabled:(BOOL)arg1 ;
-(void)serviceWillPresentViewControllerWithStatusBarStyle:(long long)arg1 ;
-(void)serviceDidPresentViewControllerWithStatusBarStyle:(long long)arg1 ;
-(void)serviceWillDismissViewControllerWithStatusBarStyle:(long long)arg1 ;
-(void)serviceDidDismissViewControllerWithStatusBarStyle:(long long)arg1 ;
-(void)setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)serviceOpenURL:(id)arg1 delaySessionEndForTTS:(BOOL)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)serviceOpenURL:(id)arg1 appBundleID:(id)arg2 allowSiriDismissal:(BOOL)arg3 ;
-(void)getScreenshotWithReplyHandler:(/*^block*/id)arg1 ;
-(void)serviceDidPresentUserInterface;
-(void)serviceDidPresentConversationFromBreadcrumb;
-(void)serviceDidDetectMicButtonTap;
-(void)serviceDidDetectMicButtonLongPressBegan;
-(void)serviceDidDetectMicButtonLongPressEnded;
-(void)servicePresentationDidChangePeekMode:(unsigned long long)arg1 ;
-(void)serviceWillStartTest:(id)arg1 ;
-(void)serviceDidFinishTest:(id)arg1 ;
-(void)serviceFailTest:(id)arg1 withReason:(id)arg2 ;
-(void)serviceDidEnterUITrackingMode;
-(void)serviceDidExitUITrackingMode;
-(void)serviceDidDetectAudioRoutePickerTap;
-(void)serviceViewControllerRequestKeyboardForTapToEditWithCompletion:(/*^block*/id)arg1 ;
-(void)serviceDidRequestKeyboard:(BOOL)arg1 minimized:(BOOL)arg2 ;
-(void)serviceDidRequestKeyboard:(BOOL)arg1 ;
-(void)serviceDidResetTextInput;
-(void)serviceWillBeginTapToEdit;
-(void)serviceDidEndTaptoEdit;
-(void)serviceDidRequestCurrentTextInput:(/*^block*/id)arg1 ;
-(void)serviceViewControllerRequestsPresentation:(/*^block*/id)arg1 ;
-(void)serviceViewControllerRequestsDismissalWithDismissalReason:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)servicePresentedIntentWithBundleId:(id)arg1 ;
-(void)setTypeToSiriViewHidden:(BOOL)arg1 ;
-(void)updateToPresentationWithIdentifier:(id)arg1 presentationProperties:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)preloadPresentationBundleWithIdentifier:(id)arg1 ;
-(void)siriWillShowPasscodeUnlockAndCancelRequest:(BOOL)arg1 ;
-(void)siriWillHidePasscodeUnlockForResult:(long long)arg1 ;
-(void)siriDidHidePasscodeUnlock;
-(void)startRequestForText:(id)arg1 ;
-(void)siriKeyboardViewDidChange:(SCD_Struct_AF1*)arg1 ;
-(void)setSpeechSynthesis:(id)arg1 ;
-(void)didReceiveHelpAction;
-(void)didReceiveReportBugAction;
-(void)didReceiveBugButtonLongPress;
-(void)didReceiveShortTapAction;
-(id)speechSynthesisDelegate;
-(void)siriWillShowPasscodeUnlock;
-(void)setStatusBarFrame:(CGRect)arg1 ;
-(void)setStatusViewHeight:(double)arg1 ;
-(AFApplicationInfo *)viewServiceApplicationInfo;
@end

