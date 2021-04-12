/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
*/

#import <AXSpringBoardServerInstance/AXSpringBoardServerInstance-Structs.h>
#import <AXSpringBoardServerInstance/AXSBVoiceOverSwipeDetectorDelegate.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>
#import <AXSpringBoardServerInstance/AXUIClientDelegate.h>

@class UIWindow, AXAccessQueueTimer, AXDispatchTimer, AXUIClient, AXAssetsService, NSString;

@interface AXSpringBoardSettingsLoader : NSObject <AXSBVoiceOverSwipeDetectorDelegate, AVSpeechSynthesizerDelegate, AXUIClientDelegate> {

	UIWindow* _voiceOverVibrateWindow;
	AXAccessQueueTimer* _voiceOverActivationCanceler;
	AXDispatchTimer* _managedConfigurationNotificationCoalesceTimer;
	AXUIClient* _soundDetectionClient;
	AXAssetsService* _assetsService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)_registerForNotifications;
+(BOOL)_alreadyRebootedGracefullyOnce;
+(void)_checkForHomeButtonBreakage:(BOOL)arg1 ;
+(void)_registerForHomeButtonBreakageNotification;
+(void)_checkForDataResetFile;
+(void)_setRebootedGracefullyOnce;
+(void)_checkMonoAudioSetByiTunes;
+(void)bootstrapGuidedAccessIfNeeded;
+(void)_registerForHomeButtonBreakage;
+(void)_checkSpeakAutofillSetByiTunes;
+(void)_updateSpringBoardHelper;
+(void)_checkVoiceOverTouchSetByiTunes;
+(void)_updateAXSettings;
+(void)_startAssistiveTouchForBrokenHomeButton;
+(void)_checkAccessibilityOptionsSetByiTunes;
+(void)_checkContrastSetting;
+(void)_checkAssistiveTouchSetByiTunes;
+(void)_initializeDelayedSpringBoardSettings;
+(void)_performValidations;
+(void)_setVoiceOverTouchSettings:(unsigned char)arg1 ;
+(void)_gracefulRebootForBrokenHomeButton;
+(void)checkAccessibilityOptions;
+(void)_checkZoomTouchSetByiTunes;
+(void)_checkClosedCaptioningSetByiTunes;
+(void)_checkInvertColorsSetByiTunes;
+(void)checkScreenContrast;
+(void)_findNoteFromLoginSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)_ensureUltronAppVisibility:(BOOL)arg1 ;
-(void)_showSwipeDetectionEnablerView;
-(id)init;
-(void)_showVibrationVoiceOverEnablerView;
-(void)swipeDetectorCanceled;
-(void)_remoteAccessibilitySettingsChanged:(id)arg1 ;
-(void)_hideVoiceOverEnabler;
-(void)_playVOActivationSoundStarted;
-(void)_updateAXSettings;
-(void)swipeDetectorDetectedSwipe;
-(void)_handleGuidedAccessManagedConfigurationDidChange:(id)arg1 ;
-(BOOL)_isDeviceAffectedByVOActivationWorkaround;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)_updateRemoteAccessibilitySettings;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(void)_voiceOverEnabled:(id)arg1 ;
-(void)_playVOActivationSoundEnded;
-(BOOL)_shouldArmSoundDetection;
-(void)_bootstrapSoundDetection;
-(void)_startupSoundDetectionUIServer;
-(void)_makeVoiceOverVibrateWindow;
-(void)_initializeRemoteSettingsListener;
-(void)_turnOnHearingControlCenterModule;
-(void)_registerReachability;
-(void)dealloc;
@end

