/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <TVRemoteUI/TVRUIDeviceDelegate.h>
#import <TVRemoteUI/TVRUIDeviceSearchDelegate.h>
#import <TVRemoteUI/_TVRUIDevicePickerDelegate.h>
#import <TVRemoteUI/_TVRAlertControllerDelegate.h>
#import <TVRemoteUI/_TVRUINetworkObserverDelegate.h>
#import <TVRemoteUI/_TVRUIEventDelegate.h>

@protocol TVRUIDevice, TVRUIDeviceQuery, TVRUIStyleProvider;
@class NSString, TVRUITouchpadViewController, TVRUIControlPanelViewController, UIView, TVRUIDevicePickerViewController, TVRUIMediaControlsViewController, _TVRAlertController, _TVRMessageView, _TVRUINetworkObserver, _TVRSiriHaptic, _TVRKeyboardHaptic, SFClient, UIButton, CUSystemMonitor, CCUICAPackageView, UILabel, _TVRUICubicSpringAnimator, TVRCSessionData;

@interface TVRUIRemoteViewController : UIViewController <TVRUIDeviceDelegate, TVRUIDeviceSearchDelegate, _TVRUIDevicePickerDelegate, _TVRAlertControllerDelegate, _TVRUINetworkObserverDelegate, _TVRUIEventDelegate> {

	BOOL _editingSessionActive;
	BOOL _registeredForVolumeEvents;
	id<TVRUIDevice> _activeDevice;
	NSString* _activeDeviceIdentifier;
	id<TVRUIDevice> _authenticatingDevice;
	id<TVRUIDeviceQuery> _deviceQuery;
	NSString* _preferredDeviceIdentifier;
	long long _deviceIdentifierType;
	long long _deviceType;
	long long _launchContext;
	id<TVRUIStyleProvider> _styleProvider;
	TVRUITouchpadViewController* _touchpadViewController;
	TVRUIControlPanelViewController* _controlPanelViewController;
	UIView* _blackGradientView;
	TVRUIDevicePickerViewController* _devicePickerViewController;
	TVRUIMediaControlsViewController* _mediaControlsViewController;
	_TVRAlertController* _keyboardController;
	_TVRAlertController* _authenticationAlertController;
	_TVRMessageView* _messageView;
	_TVRUINetworkObserver* _networkObserver;
	_TVRSiriHaptic* _siriHaptic;
	_TVRKeyboardHaptic* _keyboardHaptic;
	UIView* _backgroundView;
	SFClient* _sharingClient;
	UIButton* _tapToRadarButton;
	CUSystemMonitor* _systemMonitor;
	UIView* _introAnimationView;
	CCUICAPackageView* _introAnimationPackageView;
	UILabel* _introAnimationHintLabel;
	_TVRUICubicSpringAnimator* _introAnimationShowLabelAnimator;
	_TVRUICubicSpringAnimator* _introAnimationHideLabelAnimator;
	NSString* _launchContextDesc;
	TVRCSessionData* _sessionData;

}

@property (nonatomic,retain) id<TVRUIDevice> activeDevice;                                                //@synthesize activeDevice=_activeDevice - In the implementation block
@property (nonatomic,copy) NSString * activeDeviceIdentifier;                                             //@synthesize activeDeviceIdentifier=_activeDeviceIdentifier - In the implementation block
@property (nonatomic,retain) id<TVRUIDevice> authenticatingDevice;                                        //@synthesize authenticatingDevice=_authenticatingDevice - In the implementation block
@property (nonatomic,retain) id<TVRUIDeviceQuery> deviceQuery;                                            //@synthesize deviceQuery=_deviceQuery - In the implementation block
@property (nonatomic,retain) NSString * preferredDeviceIdentifier;                                        //@synthesize preferredDeviceIdentifier=_preferredDeviceIdentifier - In the implementation block
@property (assign,nonatomic) long long deviceIdentifierType;                                              //@synthesize deviceIdentifierType=_deviceIdentifierType - In the implementation block
@property (assign,nonatomic) long long deviceType;                                                        //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) long long launchContext;                                                     //@synthesize launchContext=_launchContext - In the implementation block
@property (nonatomic,retain) id<TVRUIStyleProvider> styleProvider;                                        //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) TVRUITouchpadViewController * touchpadViewController;                        //@synthesize touchpadViewController=_touchpadViewController - In the implementation block
@property (nonatomic,retain) TVRUIControlPanelViewController * controlPanelViewController;                //@synthesize controlPanelViewController=_controlPanelViewController - In the implementation block
@property (nonatomic,retain) UIView * blackGradientView;                                                  //@synthesize blackGradientView=_blackGradientView - In the implementation block
@property (nonatomic,retain) TVRUIDevicePickerViewController * devicePickerViewController;                //@synthesize devicePickerViewController=_devicePickerViewController - In the implementation block
@property (nonatomic,retain) TVRUIMediaControlsViewController * mediaControlsViewController;              //@synthesize mediaControlsViewController=_mediaControlsViewController - In the implementation block
@property (nonatomic,retain) _TVRAlertController * keyboardController;                                    //@synthesize keyboardController=_keyboardController - In the implementation block
@property (nonatomic,retain) _TVRAlertController * authenticationAlertController;                         //@synthesize authenticationAlertController=_authenticationAlertController - In the implementation block
@property (assign,getter=isEditingSessionActive,nonatomic) BOOL editingSessionActive;                     //@synthesize editingSessionActive=_editingSessionActive - In the implementation block
@property (nonatomic,retain) _TVRMessageView * messageView;                                               //@synthesize messageView=_messageView - In the implementation block
@property (nonatomic,retain) _TVRUINetworkObserver * networkObserver;                                     //@synthesize networkObserver=_networkObserver - In the implementation block
@property (nonatomic,retain) _TVRSiriHaptic * siriHaptic;                                                 //@synthesize siriHaptic=_siriHaptic - In the implementation block
@property (nonatomic,retain) _TVRKeyboardHaptic * keyboardHaptic;                                         //@synthesize keyboardHaptic=_keyboardHaptic - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                                     //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) SFClient * sharingClient;                                                    //@synthesize sharingClient=_sharingClient - In the implementation block
@property (nonatomic,retain) UIButton * tapToRadarButton;                                                 //@synthesize tapToRadarButton=_tapToRadarButton - In the implementation block
@property (nonatomic,retain) CUSystemMonitor * systemMonitor;                                             //@synthesize systemMonitor=_systemMonitor - In the implementation block
@property (nonatomic,retain) UIView * introAnimationView;                                                 //@synthesize introAnimationView=_introAnimationView - In the implementation block
@property (nonatomic,retain) CCUICAPackageView * introAnimationPackageView;                               //@synthesize introAnimationPackageView=_introAnimationPackageView - In the implementation block
@property (nonatomic,retain) UILabel * introAnimationHintLabel;                                           //@synthesize introAnimationHintLabel=_introAnimationHintLabel - In the implementation block
@property (nonatomic,retain) _TVRUICubicSpringAnimator * introAnimationShowLabelAnimator;                 //@synthesize introAnimationShowLabelAnimator=_introAnimationShowLabelAnimator - In the implementation block
@property (nonatomic,retain) _TVRUICubicSpringAnimator * introAnimationHideLabelAnimator;                 //@synthesize introAnimationHideLabelAnimator=_introAnimationHideLabelAnimator - In the implementation block
@property (assign,nonatomic) BOOL registeredForVolumeEvents;                                              //@synthesize registeredForVolumeEvents=_registeredForVolumeEvents - In the implementation block
@property (nonatomic,copy) NSString * launchContextDesc;                                                  //@synthesize launchContextDesc=_launchContextDesc - In the implementation block
@property (nonatomic,retain) TVRCSessionData * sessionData;                                               //@synthesize sessionData=_sessionData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(long long)deviceType;
-(UIView *)backgroundView;
-(CGSize)preferredContentSize;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(_TVRAlertController *)keyboardController;
-(void)setDeviceType:(long long)arg1 ;
-(TVRCSessionData *)sessionData;
-(void)setSessionData:(TVRCSessionData *)arg1 ;
-(CUSystemMonitor *)systemMonitor;
-(void)setSystemMonitor:(CUSystemMonitor *)arg1 ;
-(void)setStyleProvider:(id<TVRUIStyleProvider>)arg1 ;
-(id<TVRUIStyleProvider>)styleProvider;
-(void)_volumeUpButtonTouchDown:(id)arg1 ;
-(void)_volumeUpButtonTouchUp:(id)arg1 ;
-(void)_volumeDownButtonTouchDown:(id)arg1 ;
-(void)_volumeDownButtonTouchUp:(id)arg1 ;
-(void)_tapToRadar;
-(id<TVRUIDevice>)activeDevice;
-(_TVRMessageView *)messageView;
-(void)setMessageView:(_TVRMessageView *)arg1 ;
-(UIButton *)tapToRadarButton;
-(void)setTapToRadarButton:(UIButton *)arg1 ;
-(void)setActiveDevice:(id<TVRUIDevice>)arg1 ;
-(_TVRUINetworkObserver *)networkObserver;
-(void)setNetworkObserver:(_TVRUINetworkObserver *)arg1 ;
-(long long)deviceIdentifierType;
-(long long)launchContext;
-(void)devicePicked:(id)arg1 ;
-(void)devicePickerWillChangeState:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)generatedButtonEvent:(id)arg1 ;
-(void)alertController:(id)arg1 enteredText:(id)arg2 ;
-(void)alertControllerPressedDictationButton:(id)arg1 ;
-(void)alertControllerReleasedDictationButton:(id)arg1 ;
-(void)alertControllerCancelled:(id)arg1 ;
-(void)alertControllerHitKeyboardReturnKey:(id)arg1 ;
-(void)alertController:(id)arg1 generatedTextInputPayload:(id)arg2 ;
-(void)generatedTouchEvent:(id)arg1 ;
-(void)configureWithDeviceIdentifier:(id)arg1 identifierType:(long long)arg2 deviceType:(long long)arg3 launchContext:(long long)arg4 ;
-(void)setActiveDeviceIdentifier:(NSString *)arg1 ;
-(id)stringForDeviceDeviceIdentifierType:(long long)arg1 ;
-(void)setDeviceIdentifierType:(long long)arg1 ;
-(void)setLaunchContext:(long long)arg1 ;
-(TVRUITouchpadViewController *)touchpadViewController;
-(TVRUIControlPanelViewController *)controlPanelViewController;
-(void)_setupDevicePickerController;
-(id<TVRUIDeviceQuery>)deviceQuery;
-(void)setDeviceQuery:(id<TVRUIDeviceQuery>)arg1 ;
-(id)_stringForLaunchContextType:(long long)arg1 ;
-(void)setLaunchContextDesc:(NSString *)arg1 ;
-(NSString *)launchContextDesc;
-(void)_setupChildViewControllers;
-(void)_createBlackGradientView;
-(void)startConnections;
-(void)_installTapToRadarButton;
-(void)connectionServiceDidInvalidate:(id)arg1 ;
-(TVRUIDevicePickerViewController *)devicePickerViewController;
-(void)_layoutTouchpad:(BOOL)arg1 ;
-(TVRUIMediaControlsViewController *)mediaControlsViewController;
-(UIView *)blackGradientView;
-(void)setBlackGradientView:(UIView *)arg1 ;
-(void)_disconnectUserInitiated;
-(void)_disconnectSystemInitiated;
-(void)_dismissAnyPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopConnections;
-(void)_cancelHideConnectingAndShowDevicePicker;
-(id<TVRUIDevice>)authenticatingDevice;
-(void)setDevicePickerViewController:(TVRUIDevicePickerViewController *)arg1 ;
-(void)fetchPreferredDeviceIdentifier;
-(void)_showSearchingSpinnerIfNeeded;
-(void)_deviceQueryThresholdReached;
-(SFClient *)sharingClient;
-(void)setSharingClient:(SFClient *)arg1 ;
-(void)_connectToDevice:(id)arg1 ;
-(void)showNoWIFIConnectionMessage;
-(void)_initSessionStatistics;
-(void)_disableVolumeControl;
-(void)_cleanupIntroAnimation;
-(void)_logSessionStatistics;
-(void)_enableSkipControls:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSString *)preferredDeviceIdentifier;
-(void)setPreferredDeviceIdentifier:(NSString *)arg1 ;
-(void)_cancelShowConnectingSpinner;
-(void)_showConnectingSpinner;
-(void)setAuthenticatingDevice:(id<TVRUIDevice>)arg1 ;
-(void)_toggleControlAvailability;
-(void)_hideMessageContent;
-(void)_startIntroAnimation;
-(void)_enableVolumeControl;
-(void)_disableSearch;
-(void)showMessageWithTitle:(id)arg1 message:(id)arg2 ;
-(void)showMessageWithError:(id)arg1 andDevice:(id)arg2 ;
-(void)setEditingSessionActive:(BOOL)arg1 ;
-(void)_presentKeyboardWithAttributes:(id)arg1 initialText:(id)arg2 ;
-(void)_presentPairingAlert;
-(void)_presentTextPasswordAlert;
-(void)_presentLegacyPairingAlertWithCode:(id)arg1 ;
-(void)showThrottleConnectMessage;
-(NSString *)activeDeviceIdentifier;
-(UIView *)introAnimationView;
-(void)setKeyboardController:(_TVRAlertController *)arg1 ;
-(void)setAuthenticationAlertController:(_TVRAlertController *)arg1 ;
-(void)showPairingMessageWithCode:(id)arg1 ;
-(_TVRAlertController *)authenticationAlertController;
-(void)_cancelPairing;
-(void)_performSiriEffectsWithButtonEvent:(id)arg1 ;
-(void)clearMessageContent;
-(void)showMessageWithTitle:(id)arg1 message:(id)arg2 titleFont:(id)arg3 ;
-(void)showNoAssociatedNetworkMessage;
-(void)showLoadingSpinner;
-(void)showSearchingSpinner;
-(void)_hideConnectingAndShowDevicePicker;
-(void)showGenericUnableToConnectMessage;
-(void)keyboardRequested;
-(void)_switchToDismissalState;
-(BOOL)registeredForVolumeEvents;
-(void)setRegisteredForVolumeEvents:(BOOL)arg1 ;
-(void)setIntroAnimationPackageView:(CCUICAPackageView *)arg1 ;
-(void)setIntroAnimationHintLabel:(UILabel *)arg1 ;
-(void)setIntroAnimationView:(UIView *)arg1 ;
-(void)_switchToPresentationState;
-(CCUICAPackageView *)introAnimationPackageView;
-(void)setIntroAnimationShowLabelAnimator:(_TVRUICubicSpringAnimator *)arg1 ;
-(_TVRUICubicSpringAnimator *)introAnimationShowLabelAnimator;
-(void)setIntroAnimationHideLabelAnimator:(_TVRUICubicSpringAnimator *)arg1 ;
-(_TVRUICubicSpringAnimator *)introAnimationHideLabelAnimator;
-(void)deviceBeganConnecting:(id)arg1 ;
-(void)deviceDidConnect:(id)arg1 ;
-(void)deviceDidDisconnect:(id)arg1 reason:(long long)arg2 error:(id)arg3 ;
-(void)deviceDidEncounterAuthenticationChallenge:(id)arg1 passwordType:(unsigned long long)arg2 passcode:(id)arg3 ;
-(void)device:(id)arg1 didEncounterAuthenticationThrottle:(long long)arg2 ;
-(void)device:(id)arg1 beganTextEditingWithAttributes:(id)arg2 initialText:(id)arg3 ;
-(void)device:(id)arg1 endedTextEditingWithAttributes:(id)arg2 endingText:(id)arg3 ;
-(void)device:(id)arg1 didUpdateText:(id)arg2 ;
-(void)device:(id)arg1 didUpdateAttributes:(id)arg2 ;
-(void)device:(id)arg1 needsMediaControls:(id)arg2 ;
-(void)device:(id)arg1 hidesMediaControls:(id)arg2 ;
-(void)device:(id)arg1 hasCaptionsEnabled:(BOOL)arg2 ;
-(void)device:(id)arg1 supportsVolumeControl:(BOOL)arg2 ;
-(void)deviceListUpdated:(id)arg1 ;
-(void)networkObserverDidUpdateState:(id)arg1 ;
-(void)willShowDirectionalControls;
-(void)configureWithDeviceIdentifier:(id)arg1 type:(long long)arg2 showPicker:(BOOL)arg3 ;
-(id)animatorForPresentationAsAlert;
-(id)animatorForDismissalAsAlert;
-(void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(BOOL)_hasPresentedContent;
-(void)_enableSearch;
-(void)volumeUpEventGenerated;
-(void)volumeDownEventGenerated;
-(void)setTouchpadViewController:(TVRUITouchpadViewController *)arg1 ;
-(void)setControlPanelViewController:(TVRUIControlPanelViewController *)arg1 ;
-(void)setMediaControlsViewController:(TVRUIMediaControlsViewController *)arg1 ;
-(BOOL)isEditingSessionActive;
-(_TVRSiriHaptic *)siriHaptic;
-(void)setSiriHaptic:(_TVRSiriHaptic *)arg1 ;
-(_TVRKeyboardHaptic *)keyboardHaptic;
-(void)setKeyboardHaptic:(_TVRKeyboardHaptic *)arg1 ;
-(UILabel *)introAnimationHintLabel;
@end

