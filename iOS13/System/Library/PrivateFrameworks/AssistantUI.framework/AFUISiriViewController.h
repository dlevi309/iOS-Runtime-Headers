/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AFUISiriRemoteSceneViewControllerDataSource.h>
#import <libobjc.A.dylib/AFUISiriRemoteSceneViewControllerDelegate.h>
#import <libobjc.A.dylib/AFUISiriViewDelegate.h>
#import <libobjc.A.dylib/SiriUIAudioRoutePickerControllerDelegate.h>
#import <libobjc.A.dylib/AFUISiriSessionLocalDataSource.h>
#import <libobjc.A.dylib/AFUISiriSessionLocalDelegate.h>
#import <libobjc.A.dylib/AFUISiriViewDataSource.h>
#import <libobjc.A.dylib/SiriUIKeyboardViewDelegate.h>
#import <libobjc.A.dylib/SiriUIPresentationRemoteControlling.h>

@protocol OS_dispatch_queue, AFUISiriViewControllerDataSource, AFUISiriViewControllerDelegate;
@class AFUIDelayedActionCommandCache, SiriUIConfiguration, NSString, NSObject, SiriUIKeyboardView, NSDictionary, AFUISiriSession, AFUISiriRemoteSceneViewController, SiriUIAudioRoutePickerController, UIStatusBar, SASRequestOptions, NSNumber, UIView;

@interface AFUISiriViewController : UIViewController <AFUISiriRemoteSceneViewControllerDataSource, AFUISiriRemoteSceneViewControllerDelegate, AFUISiriViewDelegate, SiriUIAudioRoutePickerControllerDelegate, AFUISiriSessionLocalDataSource, AFUISiriSessionLocalDelegate, AFUISiriViewDataSource, SiriUIKeyboardViewDelegate, SiriUIPresentationRemoteControlling> {

	BOOL _active;
	BOOL _remoteViewControllerDispatchQueueSuspended;
	long long _vtEnabledCount;
	long long _currentRequestSource;
	/*^block*/id _triggerUpdater;
	AFUIDelayedActionCommandCache* _delayedActionCommandCache;
	BOOL _siriSessionWantsToEnd;
	SiriUIConfiguration* _configuration;
	NSString* _uiAppearanceUUIDString;
	NSObject*<OS_dispatch_queue> _uiAppearanceCoreDuetQueue;
	BOOL _presentedConversationFromBreadcrumb;
	SiriUIKeyboardView* _inputAccessoryView;
	SCD_Struct_AF6 _keyboardInfo;
	BOOL _unlockScreenVisible;
	BOOL _remoteViewControllerIsPresenting;
	long long _hostingConnectionState;
	NSDictionary* _dismissalUserInfo;
	BOOL _recordingStartedOnRoute;
	long long _requestCancellationReason;
	BOOL _visible;
	BOOL _eyesFree;
	BOOL _deviceIsInStarkMode;
	BOOL _carDNDActive;
	BOOL _receivedIncomingPhoneCall;
	BOOL _turnsOnScreenOnAppearance;
	BOOL _showsStatusBar;
	BOOL _statusBarEnabled;
	BOOL _hasCalledBeginAppearanceTransition;
	BOOL _hasCalledEndAppearanceTransition;
	BOOL _inHoldToTalkMode;
	BOOL _viewDisappearing;
	BOOL _userUtteranceTapToEditInProgress;
	BOOL _punchingOut;
	id<AFUISiriViewControllerDataSource> _dataSource;
	id<AFUISiriViewControllerDelegate> _delegate;
	AFUISiriSession* _session;
	AFUISiriRemoteSceneViewController* _remoteViewController;
	NSObject*<OS_dispatch_queue> _remoteViewControllerDispatchQueue;
	SiriUIAudioRoutePickerController* _routePickerController;
	UIStatusBar* _statusBar;
	SASRequestOptions* _currentRequestOptions;
	NSNumber* _recordingStartedTimeValue;
	double _viewDidAppearTime;
	CGRect _hostedPresentationFrame;

}

@property (getter=_session,nonatomic,readonly) AFUISiriSession * session;                                                                                                    //@synthesize session=_session - In the implementation block
@property (getter=_remoteViewController,nonatomic,readonly) AFUISiriRemoteSceneViewController * remoteViewController;                                                        //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (getter=_remoteViewControllerDispatchQueue,nonatomic,readonly) NSObject*<OS_dispatch_queue> remoteViewControllerDispatchQueue;                                     //@synthesize remoteViewControllerDispatchQueue=_remoteViewControllerDispatchQueue - In the implementation block
@property (assign,setter=_setHasCalledBeginAppearanceTransition:,getter=_hasCalledBeginAppearanceTransition,nonatomic) BOOL hasCalledBeginAppearanceTransition;              //@synthesize hasCalledBeginAppearanceTransition=_hasCalledBeginAppearanceTransition - In the implementation block
@property (assign,setter=_setHasCalledEndAppearanceTransition:,getter=_hasCalledEndAppearanceTransition,nonatomic) BOOL hasCalledEndAppearanceTransition;                    //@synthesize hasCalledEndAppearanceTransition=_hasCalledEndAppearanceTransition - In the implementation block
@property (nonatomic,retain) SiriUIAudioRoutePickerController * routePickerController;                                                                                       //@synthesize routePickerController=_routePickerController - In the implementation block
@property (setter=_setStatusBar:,getter=_statusBar,nonatomic,retain) UIStatusBar * statusBar;                                                                                //@synthesize statusBar=_statusBar - In the implementation block
@property (assign,setter=_setInHoldToTalkMode:,getter=_isInHoldToTalkMode,nonatomic) BOOL inHoldToTalkMode;                                                                  //@synthesize inHoldToTalkMode=_inHoldToTalkMode - In the implementation block
@property (setter=_setCurrentRequestOptions:,getter=_currentRequestOptions,nonatomic,copy) SASRequestOptions * currentRequestOptions;                                        //@synthesize currentRequestOptions=_currentRequestOptions - In the implementation block
@property (setter=_setRecordingStartedTimeValue:,getter=_recordingStartedTimeValue,nonatomic,retain) NSNumber * recordingStartedTimeValue;                                   //@synthesize recordingStartedTimeValue=_recordingStartedTimeValue - In the implementation block
@property (assign,setter=_setViewDidAppearTime:,getter=_viewDidAppearTime,nonatomic) double viewDidAppearTime;                                                               //@synthesize viewDidAppearTime=_viewDidAppearTime - In the implementation block
@property (assign,getter=isViewDisappearing,nonatomic) BOOL viewDisappearing;                                                                                                //@synthesize viewDisappearing=_viewDisappearing - In the implementation block
@property (assign,setter=_setUserUtteranceTapToEditInProgress:,getter=_isUserUtteranceTapToEditInProgress,nonatomic) BOOL userUtteranceTapToEditInProgress;                  //@synthesize userUtteranceTapToEditInProgress=_userUtteranceTapToEditInProgress - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView; 
@property (assign,setter=_setPunchingOut:,getter=_isPunchingOut,nonatomic) BOOL punchingOut;                                                                                 //@synthesize punchingOut=_punchingOut - In the implementation block
@property (assign,nonatomic) CGRect hostedPresentationFrame;                                                                                                                 //@synthesize hostedPresentationFrame=_hostedPresentationFrame - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriViewControllerDataSource> dataSource;                                                                                         //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriViewControllerDelegate> delegate;                                                                                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                                                                                                  //@synthesize visible=_visible - In the implementation block
@property (assign,getter=isEyesFree,nonatomic) BOOL eyesFree;                                                                                                                //@synthesize eyesFree=_eyesFree - In the implementation block
@property (assign,setter=setDeviceInStarkMode:,getter=isDeviceInStarkMode,nonatomic) BOOL deviceIsInStarkMode;                                                               //@synthesize deviceIsInStarkMode=_deviceIsInStarkMode - In the implementation block
@property (assign,nonatomic) BOOL carDNDActive;                                                                                                                              //@synthesize carDNDActive=_carDNDActive - In the implementation block
@property (assign,nonatomic) BOOL receivedIncomingPhoneCall;                                                                                                                 //@synthesize receivedIncomingPhoneCall=_receivedIncomingPhoneCall - In the implementation block
@property (assign,nonatomic) BOOL turnsOnScreenOnAppearance;                                                                                                                 //@synthesize turnsOnScreenOnAppearance=_turnsOnScreenOnAppearance - In the implementation block
@property (assign,nonatomic) BOOL showsStatusBar;                                                                                                                            //@synthesize showsStatusBar=_showsStatusBar - In the implementation block
@property (assign,nonatomic) BOOL statusBarEnabled;                                                                                                                          //@synthesize statusBarEnabled=_statusBarEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isProcessingAcousticIdRequest; 
@property (nonatomic,retain) UIView*<AFUISiriRemoteViewHosting> view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id<AFUISiriViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AFUISiriViewControllerDelegate>)arg1 ;
-(id)_session;
-(void)endSession;
-(id<AFUISiriViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<AFUISiriViewControllerDataSource>)arg1 ;
-(void)setLockState:(unsigned long long)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)loadView;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(UIView *)inputAccessoryView;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)canBecomeFirstResponder;
-(long long)keyboardAppearance;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewSafeAreaInsetsDidChange;
-(id)_remoteViewController;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(long long)viewMode;
-(void)preheat;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(id)_statusBar;
-(BOOL)isListening;
-(void)_statusBarFrameDidChange:(id)arg1 ;
-(BOOL)isDeviceInStarkMode;
-(void)telephonyRequestCompleted;
-(void)defrost;
-(void)setCarDNDActive:(BOOL)arg1 ;
-(BOOL)isEyesFree;
-(BOOL)isInitialBringUp;
-(long long)currentSource;
-(void)_keyboardDidHideNotification:(id)arg1 ;
-(void)_keyboardDidShowNotification:(id)arg1 ;
-(void)setEyesFree:(BOOL)arg1 ;
-(void)setAlertContext;
-(void)_setVoiceTriggerEnabled:(BOOL)arg1 ;
-(CGRect)_statusBarFrame;
-(void)handlePasscodeUnlockWithCompletion:(/*^block*/id)arg1 ;
-(void)setShowsStatusBar:(BOOL)arg1 ;
-(void)setFluidDismissalState:(id)arg1 ;
-(void)setHostedPresentationFrame:(CGRect)arg1 ;
-(void)animatedAppearanceWithFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)animatedDisappearanceWithFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CGRect)hostedPresentationFrame;
-(void)showPasscodeUnlockScreenForRequest:(id)arg1 unlockCompletion:(/*^block*/id)arg2 ;
-(void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2 lockState:(unsigned long long)arg3 ;
-(void)setDeviceInStarkMode:(BOOL)arg1 ;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)setStatusBarEnabled:(BOOL)arg1 ;
-(void)siriDidActivateFromSource:(long long)arg1 ;
-(void)presentRemoteViewControllerIfNecessary;
-(id)_uiPresentationIdentifier;
-(void)startRequestWithActivationTrigger:(id)arg1 ;
-(void)startRequestWithOptions:(id)arg1 ;
-(void)setSiriRequestCancellationReason:(long long)arg1 ;
-(void)cancelTTS;
-(void)stopRequestWithOptions:(id)arg1 ;
-(void)updateSettingsOnRemoteSceneForInterfaceOrientationChange:(long long)arg1 willAnimationWithDuration:(double)arg2 ;
-(id)initWithConnection:(id)arg1 configuration:(id)arg2 requestSource:(long long)arg3 ;
-(void)siriDidDeactivate;
-(id)underlyingConnection;
-(void)resetContextTypes:(long long)arg1 ;
-(id)_siriView;
-(void)emitUIStateTransitionForSiriDismissal:(int)arg1 withDismissalReason:(int)arg2 ;
-(void)hasQueuedTTS:(/*^block*/id)arg1 ;
-(BOOL)carDNDActive;
-(void)setWaitingForTelephonyToStart:(BOOL)arg1 ;
-(void)setReceivedIncomingPhoneCall:(BOOL)arg1 ;
-(void)siriSessionShouldExtendAudioSessionForImminentPhoneCall;
-(void)siriSessionShouldEndExtendAudioSessionForImminentPhoneCall;
-(void)extendCurrentTTSRequested;
-(void)keyboardViewDidReceiveHelpButtonAction:(id)arg1 ;
-(void)keyboardViewDidReceiveAudioRouteAction:(id)arg1 ;
-(void)keyboardViewDidReceiveReportBugAction:(id)arg1 ;
-(void)keyboardViewDidReceiveBugButtonLongPress:(id)arg1 ;
-(void)keyboardView:(id)arg1 didReceiveText:(id)arg2 ;
-(void)preloadPluginBundles;
-(void)routePickerControllerWillShow:(id)arg1 ;
-(void)routePickerControllerWillDismiss:(id)arg1 ;
-(void)routePickerController:(id)arg1 hasRoutesToPick:(BOOL)arg2 ;
-(void)routePickerControllerPickedNewRoute:(id)arg1 isBluetooth:(BOOL)arg2 ;
-(BOOL)_isTextInputEnabled;
-(long long)userAccountCountForSiriView:(id)arg1 ;
-(id)assistantVersionForSiriView:(id)arg1 ;
-(id)activeAccountForSiriView:(id)arg1 ;
-(void)siriViewDidReceiveAudioRouteAction:(id)arg1 ;
-(void)siriViewDidReceiveReportBugAction:(id)arg1 ;
-(void)siriViewDidReceiveBugButtonLongPress:(id)arg1 ;
-(void)siriViewDidReceiveHelpAction:(id)arg1 ;
-(BOOL)siriView:(id)arg1 attemptUnlockWithPassword:(id)arg2 ;
-(float)audioRecordingPowerLevelForSiriView:(id)arg1 ;
-(void)siriViewDidRecieveStatusViewTappedAction:(id)arg1 ;
-(void)siriViewDidRecieveStatusViewHoldDidBeginAction:(id)arg1 ;
-(void)siriViewDidRecieveStatusViewHoldDidEndAction:(id)arg1 ;
-(BOOL)siriViewShouldSupportTextInput:(id)arg1 ;
-(void)siriView:(id)arg1 didReceiveSiriActivationMessageWithSource:(long long)arg2 ;
-(void)siriRemoteViewControllerDidFinishDismissing:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg1 invalidatedForReason:(unsigned long long)arg2 explanation:(id)arg3 ;
-(void)siriRemoteViewController:(id)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg2 ;
-(long long)siriRemoteViewControllerRequestsActivationSource:(id)arg1 ;
-(void)dismissSiriRemoteViewController:(id)arg1 delayForTTS:(BOOL)arg2 userInfo:(id)arg3 withDismissalReason:(unsigned long long)arg4 ;
-(void)startGuidedAccessForRemoteViewController:(id)arg1 ;
-(id)siriRemoteViewController:(id)arg1 bulletinWithIdentifier:(id)arg2 ;
-(void)siriRemoteViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2 ;
-(void)siriRemoteViewController:(id)arg1 startRequestWithOptions:(id)arg2 ;
-(void)userRelevantEventDidOccurInSiriRemoteViewController:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg1 didRequestCurrentTextInputWithReplyHandler:(/*^block*/id)arg2 ;
-(void)siriRemoteViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3 launchOptions:(long long)arg4 replyHandler:(/*^block*/id)arg5 ;
-(void)siriRemoteViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setStatusViewHidden:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setTypeToSiriViewHidden:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setCarDisplaySnippetMode:(long long)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setStatusViewDisabled:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setStatusViewUserInteractionEnabled:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 willPresentViewControllerWithStatusBarStyle:(long long)arg2 ;
-(void)siriRemoteViewController:(id)arg1 didPresentViewControllerWithStatusBarStyle:(long long)arg2 ;
-(void)siriRemoteViewController:(id)arg1 willDismissViewControllerWithStatusBarStyle:(long long)arg2 ;
-(void)siriRemoteViewController:(id)arg1 didDismissViewControllerWithStatusBarStyle:(long long)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)siriRemoteViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)siriRemoteViewController:(id)arg1 setHelpButtonEmphasized:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setBugReportingAvailable:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 handlePasscodeUnlockWithCompletion:(/*^block*/id)arg2 ;
-(void)siriRemoteViewControllerPulseHelpButton:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg1 didRequestKeyboard:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 didRequestKeyboard:(BOOL)arg2 minimized:(BOOL)arg3 ;
-(void)siriRemoteViewControllerDidResetTextInput:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg1 requestKeyboardForTapToEditWithCompletion:(/*^block*/id)arg2 ;
-(void)siriRemoteViewControllerWillBeginTapToEdit:(id)arg1 ;
-(void)siriRemoteViewControllerDidEndTapToEdit:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg1 willStartTest:(id)arg2 ;
-(void)siriRemoteViewController:(id)arg1 didFinishTest:(id)arg2 ;
-(void)siriRemoteViewController:(id)arg1 failTest:(id)arg2 withReason:(id)arg3 ;
-(void)siriRemoteViewControllerDidEnterUITrackingMode:(id)arg1 ;
-(void)siriRemoteViewControllerDidExitUITrackingMode:(id)arg1 ;
-(void)siriRemoteViewControllerDidPresentUserInterface:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)siriRemoteViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(BOOL)arg4 ;
-(void)siriRemoteViewControllerDidDetectMicButtonTap:(id)arg1 ;
-(void)siriRemoteViewControllerDidDetectMicButtonLongPressBegan:(id)arg1 ;
-(void)siriRemoteViewControllerDidDetectMicButtonLongPressEnded:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2 ;
-(void)siriRemoteViewControllerDidPresentConversationFromBreadcrumb:(id)arg1 ;
-(void)siriRemoteViewControllerDidDetectAudioRoutePickerTap:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg1 requestsPresentation:(/*^block*/id)arg2 ;
-(void)siriRemoteViewController:(id)arg1 requestsDismissalWithReason:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)siriRemoteViewController:(id)arg1 presentedIntentWithBundleId:(id)arg2 ;
-(void)updateToPresentationWithIdentifier:(id)arg1 presentationProperties:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)preloadPresentationBundleWithIdentifier:(id)arg1 ;
-(id)viewServiceApplicationInfo;
-(void)siriSessionDidUpdateSessionInfo:(id)arg1 ;
-(void)siriSessionDidFinishRequestWithError:(id)arg1 ;
-(void)startRequestWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateRequestOptions:(id)arg1 ;
-(void)siriSession:(id)arg1 didChangeToState:(long long)arg2 ;
-(void)siriSessionDidReceiveDelayedActionCancelCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)siriSessionDidReceiveDelayedActionCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldNonLocalDelegateHandlePunchouts;
-(void)handlePunchoutCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)siriSessionRecordingPreparationHasFinished:(id)arg1 ;
-(void)siriSession:(id)arg1 speechRecordingDidBeginOnAVRecordRoute:(id)arg2 ;
-(id)bulletinsForSiriSession:(id)arg1 ;
-(id)contextAppInfosForSiriSession:(id)arg1 ;
-(id)starkAppBundleIdentifierContextForSiriSession:(id)arg1 ;
-(id)currentCarPlaySupportedOEMAppIDListForSiriSession:(id)arg1 ;
-(unsigned long long)lockStateForSiriSession:(id)arg1 ;
-(void)siriSessionDidResetContext:(id)arg1 ;
-(void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)siriSessionWillEnd:(id)arg1 ;
-(void)siriSessionDidEnd:(id)arg1 ;
-(BOOL)isPreventingActivationGesture;
-(BOOL)isProcessingAcousticIdRequest;
-(void)_willEnterFullScreenScreenshotMode:(id)arg1 ;
-(void)_suspendRemoteViewControllerDispatchQueue;
-(void)_resumeRemoteViewControllerDispatchQueue;
-(BOOL)statusBarEnabled;
-(void)_showStatusBarAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hideStatusBarAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShowsStatusBar:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isUserUtteranceTapToEditInProgress;
-(void)_enqueueRemoteViewControllerMessageBlock:(/*^block*/id)arg1 ;
-(void)_setStatusBar:(id)arg1 ;
-(void)_recordUIAppearance;
-(void)_sendBeginAppearanceTransitionIfReadyAnimated:(BOOL)arg1 ;
-(SCD_Struct_AF1)_keyboardInfoFromNotification:(id)arg1 ;
-(void)_sendEndAppearanceTransitionIfReady;
-(void)_updateAudioRoutePicker;
-(void)_setViewDidAppearTime:(double)arg1 ;
-(void)_setShowKeyboardIfTextInputEnabled:(BOOL)arg1 ;
-(void)_setHasCalledBeginAppearanceTransition:(BOOL)arg1 ;
-(void)_setHasCalledEndAppearanceTransition:(BOOL)arg1 ;
-(void)_removeStatusBar;
-(void)_recordUIDismissal;
-(void)_informRemoteViewControllerOfParentIfNecessary;
-(void)_presentRemoteViewController;
-(BOOL)_hasCalledBeginAppearanceTransition;
-(BOOL)_hasCalledEndAppearanceTransition;
-(void)_setPunchingOut:(BOOL)arg1 ;
-(void)_setStatusViewHidden:(BOOL)arg1 ;
-(void)_setTypeToSiriViewHidden:(BOOL)arg1 ;
-(unsigned long long)lockStateForSiriRemoteViewController:(id)arg1 ;
-(void)enterUITrackingMode;
-(void)exitUITrackingMode;
-(BOOL)_isInitialSpeechRequest;
-(SASRequestOptions *)currentRequestOptions;
-(void)_setShowKeyboardIfTextInputEnabled:(BOOL)arg1 minimized:(BOOL)arg2 ;
-(void)_handleMicButtonTapFromSource:(long long)arg1 ;
-(void)_handleMicButtonLongPressBeganFromSource:(long long)arg1 ;
-(void)_handleMicButtonLongPressEndedFromSource:(long long)arg1 ;
-(void)_didDetectAudioRoutePickerTap;
-(void)_setUserUtteranceTapToEditInProgress:(BOOL)arg1 ;
-(void)_handleReportBugAction;
-(void)_handleHelpAction;
-(void)_handleReportBugLongPressAction;
-(void)handlePasscodeUnlockAndCancelRequest:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_handleSiriDidActivateFromSource:(long long)arg1 ;
-(double)_viewDidAppearTime;
-(void)_setRecordingStartedTimeValue:(id)arg1 ;
-(void)_setCurrentRequestOptions:(id)arg1 ;
-(void)_updateRemoteViewControllerStateForAppearance;
-(BOOL)_isInHoldToTalkMode;
-(id)_currentRequestOptions;
-(BOOL)_canIgnoreHoldToTalkThreshold;
-(BOOL)_holdToTalkThresholdHasElapsed;
-(void)_stopRequestWithOptions:(id)arg1 afterDelay:(double)arg2 ;
-(void)_transitionToAutomaticEndpointMode;
-(id)_recordingStartedTimeValue;
-(double)_manualEndpointingThreshold;
-(void)_setInHoldToTalkMode:(BOOL)arg1 ;
-(void)_exitHoldToTalkMode;
-(void)_holdToTalkTriggerDidReleaseFromSource:(long long)arg1 ;
-(void)startRequestWithActivationTrigger:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_activationTriggerDidRelease:(id)arg1 ;
-(void)_enterHoldToTalkMode;
-(id)_routePickerController;
-(void)_setShowAudioRoutePicker:(BOOL)arg1 ;
-(void)_setAudioRoutePickerBluetoothOn:(BOOL)arg1 ;
-(void)_presentDeferredFlamesViewIfNecessary;
-(void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestWithCompletion:(/*^block*/id)arg2 ;
-(id)initWithConnection:(id)arg1 configuration:(id)arg2 ;
-(void)proximityStatusChanged:(BOOL)arg1 ;
-(void)updateContexts:(long long)arg1 ;
-(void)updateViewForPercentageRevealed:(double)arg1 ;
-(void)handleViewFullyRevealed;
-(void)shortTapAction;
-(BOOL)_recordingStartedOnRoute;
-(void)_setRecordingStartedOnRoute:(BOOL)arg1 ;
-(BOOL)receivedIncomingPhoneCall;
-(BOOL)turnsOnScreenOnAppearance;
-(void)setTurnsOnScreenOnAppearance:(BOOL)arg1 ;
-(BOOL)showsStatusBar;
-(id)_remoteViewControllerDispatchQueue;
-(SiriUIAudioRoutePickerController *)routePickerController;
-(void)setRoutePickerController:(SiriUIAudioRoutePickerController *)arg1 ;
-(BOOL)isViewDisappearing;
-(void)setViewDisappearing:(BOOL)arg1 ;
-(BOOL)_isPunchingOut;
@end

