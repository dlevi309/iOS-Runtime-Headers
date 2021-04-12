/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <TVRemoteUI/TVRCDeviceDelegate.h>
#import <TVRemoteUI/TVRCKeyboardControllerDelegate.h>
#import <TVRemoteUI/TVRUIDevice.h>

@protocol TVRUIDeviceDelegate;
@class TVRCDevice, TVRCDeviceAuthenticationChallenge, NSMutableDictionary, NSString;

@interface TVRUICoreDevice : NSObject <TVRCDeviceDelegate, TVRCKeyboardControllerDelegate, TVRUIDevice> {

	BOOL _supportsVolumeControl;
	BOOL _supportsLaunchingApplications;
	BOOL _supportsCaptionsToggle;
	BOOL _supportsSiri;
	BOOL _captionsEnabled;
	BOOL _connecting;
	TVRCDevice* _device;
	id<TVRUIDeviceDelegate> _delegate;
	TVRCDeviceAuthenticationChallenge* _currentChallenge;
	NSMutableDictionary* _coreButtons;

}

@property (nonatomic,retain) TVRCDevice * device;                                               //@synthesize device=_device - In the implementation block
@property (assign,nonatomic,__weak) id<TVRUIDeviceDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TVRCDeviceAuthenticationChallenge * currentChallenge;              //@synthesize currentChallenge=_currentChallenge - In the implementation block
@property (nonatomic,readonly) BOOL supportsVolumeControl;                                      //@synthesize supportsVolumeControl=_supportsVolumeControl - In the implementation block
@property (nonatomic,readonly) BOOL supportsLaunchingApplications;                              //@synthesize supportsLaunchingApplications=_supportsLaunchingApplications - In the implementation block
@property (nonatomic,readonly) BOOL supportsCaptionsToggle;                                     //@synthesize supportsCaptionsToggle=_supportsCaptionsToggle - In the implementation block
@property (nonatomic,readonly) BOOL supportsSiri;                                               //@synthesize supportsSiri=_supportsSiri - In the implementation block
@property (nonatomic,readonly) BOOL captionsEnabled;                                            //@synthesize captionsEnabled=_captionsEnabled - In the implementation block
@property (assign,getter=isConnecting,nonatomic) BOOL connecting;                               //@synthesize connecting=_connecting - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * coreButtons;                                 //@synthesize coreButtons=_coreButtons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_coreButtonEventTypeForEventType:(long long)arg1 ;
+(long long)_coreButtonTypeForButton:(long long)arg1 ;
+(long long)_uiButtonTypeFromCore:(long long)arg1 ;
-(id)name;
-(id<TVRUIDeviceDelegate>)delegate;
-(void)setDelegate:(id<TVRUIDeviceDelegate>)arg1 ;
-(id)identifier;
-(id)model;
-(TVRCDevice *)device;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(void)connect;
-(id)currentText;
-(BOOL)isConnected;
-(void)setDevice:(TVRCDevice *)arg1 ;
-(BOOL)isConnecting;
-(BOOL)isPaired;
-(BOOL)supportsSiri;
-(BOOL)supportsVolumeControl;
-(void)sendButtonEvent:(id)arg1 ;
-(void)sendText:(id)arg1 ;
-(BOOL)captionsEnabled;
-(id)keyboardAttributes;
-(void)disconnectUserInitiated;
-(void)cancelAuthenitcationChallenge;
-(void)disconnectSystemInitiated;
-(BOOL)supportsTouchEvents;
-(BOOL)supportsLaunchingApplications;
-(BOOL)supportsDonatingIntents;
-(BOOL)supportsCaptionsToggle;
-(BOOL)hasIdentifier:(id)arg1 ;
-(BOOL)isLegacyAppleTV;
-(void)sendAuthenticationCode:(id)arg1 ;
-(void)sendTextInputPayload:(id)arg1 ;
-(void)sendReturnKey;
-(id)deviceContextInformation;
-(void)disconnectWithTimeOut;
-(void)sendTouchEvent:(id)arg1 ;
-(void)startVoiceRecorder;
-(void)stopVoiceRecorder;
-(void)deviceBeganConnecting:(id)arg1 ;
-(NSMutableDictionary *)coreButtons;
-(long long)_tvrcTouchPhaseFromUITouchPhase:(long long)arg1 ;
-(TVRCDeviceAuthenticationChallenge *)currentChallenge;
-(void)setCurrentChallenge:(TVRCDeviceAuthenticationChallenge *)arg1 ;
-(void)setConnecting:(BOOL)arg1 ;
-(void)_disconnectWithType:(unsigned long long)arg1 ;
-(void)setCoreButtons:(NSMutableDictionary *)arg1 ;
-(void)_processButtonsForFeatureAdditions:(id)arg1 ;
-(long long)_disconnectReasonFromCoreReason:(long long)arg1 ;
-(void)_processButtonsForFeatureRemovals:(id)arg1 ;
-(BOOL)_isMediaButton:(id)arg1 ;
-(BOOL)_isVolumeButton:(id)arg1 ;
-(BOOL)_isLaunchApplicationButton:(id)arg1 ;
-(BOOL)_isCaptionsToggleButton:(id)arg1 ;
-(void)device:(id)arg1 encounteredAuthenticationChallenge:(id)arg2 ;
-(void)deviceConnected:(id)arg1 ;
-(void)device:(id)arg1 disconnectedForReason:(long long)arg2 error:(id)arg3 ;
-(void)device:(id)arg1 removedSupportedButtons:(id)arg2 added:(id)arg3 ;
-(void)keyboardController:(id)arg1 beganTextEditingWithAttributes:(id)arg2 ;
-(void)keyboardControllerEndedTextEditing:(id)arg1 ;
-(void)keyboardController:(id)arg1 didUpdateText:(id)arg2 ;
-(void)keyboardController:(id)arg1 didUpdateAttributes:(id)arg2 ;
-(id)_initWithDeviceIdentifier:(id)arg1 ;
-(id)_initWithCoreDevice:(id)arg1 ;
@end

