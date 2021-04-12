/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBIdleTimerGlobalStateMonitor, SBPrototypeController, SBIdleTimerSettings, SBLockScreenManager, SBMainWorkspace, SBUIBiometricResource, SBTelephonyManager, SBConferenceManager, SBBacklightController, SpringBoard, SBAlertItemsController;

@interface SBIdleTimerDescriptorFactory : NSObject {

	SBIdleTimerGlobalStateMonitor* _stateMonitor;
	SBPrototypeController* _override_prototypeController;
	SBIdleTimerSettings* _override_idleTimerPrototypeSettings;
	SBLockScreenManager* _override_lockScreenManager;
	SBMainWorkspace* _override_mainWorkspace;
	SBUIBiometricResource* _override_biometricResource;
	SBTelephonyManager* _override_telephonyManager;
	SBConferenceManager* _override_conferenceManager;
	SBBacklightController* _override_backlightController;
	SpringBoard* _springBoard;
	SBAlertItemsController* _alertItemsController;

}

@property (setter=_setSpringBoard:,getter=_springBoard,nonatomic,retain) SpringBoard * springBoard;                                                                   //@synthesize springBoard=_springBoard - In the implementation block
@property (setter=_setAlertItemsController:,getter=_alertItemsController,nonatomic,retain) SBAlertItemsController * alertItemsController;                             //@synthesize alertItemsController=_alertItemsController - In the implementation block
@property (setter=_setBacklightController:,getter=_backlightController,nonatomic,retain) SBBacklightController * backlightController;                                 //@synthesize override_backlightController=_override_backlightController - In the implementation block
@property (setter=_setPrototypeController:,getter=_prototypeController,nonatomic,retain) SBPrototypeController * prototypeController;                                 //@synthesize override_prototypeController=_override_prototypeController - In the implementation block
@property (setter=_setIdleTimerPrototypeSettings:,getter=_idleTimerPrototypeSettings,nonatomic,retain) SBIdleTimerSettings * idleTimerPrototypeSettings;              //@synthesize override_idleTimerPrototypeSettings=_override_idleTimerPrototypeSettings - In the implementation block
@property (setter=_setLockScreenManager:,getter=_lockScreenManager,nonatomic,retain) SBLockScreenManager * lockScreenManager;                                         //@synthesize override_lockScreenManager=_override_lockScreenManager - In the implementation block
@property (setter=_setMainWorkspace:,getter=_mainWorkspace,nonatomic,retain) SBMainWorkspace * mainWorkspace;                                                         //@synthesize override_mainWorkspace=_override_mainWorkspace - In the implementation block
@property (setter=_setBiometricResource:,getter=_biometricResource,nonatomic,retain) SBUIBiometricResource * biometricResource;                                       //@synthesize override_biometricResource=_override_biometricResource - In the implementation block
@property (setter=_setTelephonyManager:,getter=_telephonyManager,nonatomic,retain) SBTelephonyManager * telephonyManager;                                             //@synthesize override_telephonyManager=_override_telephonyManager - In the implementation block
@property (setter=_setConferenceManager:,getter=_conferenceManager,nonatomic,retain) SBConferenceManager * conferenceManager;                                         //@synthesize override_conferenceManager=_override_conferenceManager - In the implementation block
+(id)disabledIdleTimerDescriptor;
-(id)_biometricResource;
-(id)_alertItemsController;
-(id)_lockScreenManager;
-(id)_backlightController;
-(id)_mainWorkspace;
-(BOOL)updateIdleTimerSettingsForSecurityDefaults:(id)arg1 ;
-(BOOL)updateIdleTimerSettingsForAutoLockTimeout:(id)arg1 ;
-(BOOL)updateIdleTimerSettingsForTelephony:(id)arg1 ;
-(BOOL)updateIdleTimerSettingsForPrototypeSettings:(id)arg1 ;
-(BOOL)sanitizeSettingsAfterInitialSetup:(id)arg1 ;
-(BOOL)updateIdleTimerSettingsForPowerDefaults:(id)arg1 ;
-(BOOL)updateIdleTimerSettingsForDefaultWarnInterval:(id)arg1 ;
-(BOOL)updateIdleTimerSettingsWithCustomTimeouts:(id)arg1 fromBehavior:(id)arg2 ;
-(BOOL)updateIdleTimerSettingsForUnlockedWithMesa:(id)arg1 ;
-(BOOL)updateIdleTimerSettingsForBatterySaverMode:(id)arg1 ;
-(BOOL)updateIdleTimerSettingsForFaceDown:(id)arg1 ;
-(BOOL)updateIdleTimerSettingsForWarnInterval:(id)arg1 ;
-(BOOL)updateIdleTimerSettingsForDuration:(long long)arg1 descriptor:(id)arg2 ;
-(BOOL)sanitizeDescriptorForLockscreenDefaults:(id)arg1 ;
-(BOOL)updateIdleTimerSettingsForThermalBlockedMode:(id)arg1 ;
-(BOOL)updateIdleTimerSettingsForActiveClientConfiguration:(id)arg1 ;
-(BOOL)sanitizeSettingsAfterSetup:(id)arg1 duration:(long long)arg2 ;
-(BOOL)_shouldUseAttentionSensor;
-(id)_prototypeController;
-(void)_updateIdleTimerSettingsWarnInterval:(id)arg1 totalInterval:(double)arg2 ;
-(id)_idleTimerPrototypeSettings;
-(id)_telephonyManager;
-(id)_conferenceManager;
-(BOOL)_isIdleDurationForever:(double)arg1 ;
-(id)initWithGlobalStateMonitor:(id)arg1 ;
-(id)idleTimerDescriptorForBehavior:(id)arg1 ;
-(BOOL)sanitizeTotalDuration:(id)arg1 ;
-(BOOL)sanitizeWarnInterval:(id)arg1 ;
-(void)_setBacklightController:(id)arg1 ;
-(void)_setPrototypeController:(id)arg1 ;
-(void)_setIdleTimerPrototypeSettings:(id)arg1 ;
-(void)_setLockScreenManager:(id)arg1 ;
-(void)_setMainWorkspace:(id)arg1 ;
-(void)_setBiometricResource:(id)arg1 ;
-(void)_setTelephonyManager:(id)arg1 ;
-(void)_setConferenceManager:(id)arg1 ;
-(id)_springBoard;
-(void)_setSpringBoard:(id)arg1 ;
-(void)_setAlertItemsController:(id)arg1 ;
@end

