/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@protocol SRSiriViewControllerHosting <NSObject>
@optional
-(void)extendCurrentTTSRequested;
-(void)servicePresentedIntentWithBundleId:(id)arg1;
-(void)serviceDidPresentBugReporter;
-(void)serviceDidDismissBugReporter;
-(void)setTypeToSiriViewHidden:(BOOL)arg1;

@required
-(void)setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
-(void)handlePasscodeUnlockWithCompletion:(/*^block*/id)arg1;
-(void)setStatusViewHidden:(BOOL)arg1;
-(void)setCarDisplaySnippetMode:(long long)arg1;
-(void)setStatusViewUserInteractionEnabled:(BOOL)arg1;
-(void)setBugReportingAvailable:(BOOL)arg1;
-(void)setHelpButtonEmphasized:(BOOL)arg1;
-(void)pulseHelpButton;
-(void)serviceRequestsActivationSourceWithReplyHandler:(/*^block*/id)arg1;
-(void)serviceRequestsDismissalWithDelayForTTS:(BOOL)arg1 userInfo:(id)arg2 withDismissalReason:(unsigned long long)arg3;
-(void)serviceStartGuidedAccess;
-(void)serviceBulletinWithIdentifier:(id)arg1 replyHandler:(/*^block*/id)arg2;
-(void)serviceDidReadBulletinWithIdentifier:(id)arg1;
-(void)serviceStartRequestWithOptions:(id)arg1;
-(void)serviceUserRelevantEventDidOccur;
-(void)serviceLaunchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 launchOptions:(long long)arg3 replyHandler:(/*^block*/id)arg4;
-(void)siriIdleAndQuietStatusDidChange:(BOOL)arg1;
-(void)setStatusViewDisabled:(BOOL)arg1;
-(void)serviceWillPresentViewControllerWithStatusBarStyle:(long long)arg1;
-(void)serviceDidPresentViewControllerWithStatusBarStyle:(long long)arg1;
-(void)serviceWillDismissViewControllerWithStatusBarStyle:(long long)arg1;
-(void)serviceDidDismissViewControllerWithStatusBarStyle:(long long)arg1;
-(void)setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)serviceOpenURL:(id)arg1 delaySessionEndForTTS:(BOOL)arg2 replyHandler:(/*^block*/id)arg3;
-(void)serviceOpenURL:(id)arg1 appBundleID:(id)arg2 allowSiriDismissal:(BOOL)arg3;
-(void)getScreenshotWithReplyHandler:(/*^block*/id)arg1;
-(void)serviceDidPresentUserInterface;
-(void)serviceDidPresentConversationFromBreadcrumb;
-(void)serviceDidDetectMicButtonTap;
-(void)serviceDidDetectMicButtonLongPressBegan;
-(void)serviceDidDetectMicButtonLongPressEnded;
-(void)servicePresentationDidChangePeekMode:(unsigned long long)arg1;
-(void)serviceWillStartTest:(id)arg1;
-(void)serviceDidFinishTest:(id)arg1;
-(void)serviceFailTest:(id)arg1 withReason:(id)arg2;
-(void)serviceDidEnterUITrackingMode;
-(void)serviceDidExitUITrackingMode;
-(void)serviceDidDetectAudioRoutePickerTap;
-(void)serviceViewControllerRequestKeyboardForTapToEditWithCompletion:(/*^block*/id)arg1;
-(void)serviceDidRequestKeyboard:(BOOL)arg1 minimized:(BOOL)arg2;
-(void)serviceDidRequestKeyboard:(BOOL)arg1;
-(void)serviceDidResetTextInput;
-(void)serviceWillBeginTapToEdit;
-(void)serviceDidEndTaptoEdit;
-(void)serviceDidRequestCurrentTextInput:(/*^block*/id)arg1;
-(void)serviceViewControllerRequestsPresentation:(/*^block*/id)arg1;
-(void)serviceViewControllerRequestsDismissalWithDismissalReason:(unsigned long long)arg1 completion:(/*^block*/id)arg2;

@end

