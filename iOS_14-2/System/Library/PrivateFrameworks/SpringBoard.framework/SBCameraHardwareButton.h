/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBHIDButtonStateDelegate.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBSceneManagerObserver.h>

@protocol BSInvalidatable;
@class NSMutableIndexSet, BSMutableIntegerMap, SBHIDButtonStateArbiter, RBSProcessMonitor, CMPocketStateManager, _SBCameraLaunchCondition, BSTimer, BKSHIDEventDeliveryManager, SBApplicationController, SBLockScreenManager, SBCoverSheetPresentationManager, SBBacklightController, SBProximitySensorManager, SBSceneManager, SBCameraHardwareButtonSettings, SBCameraHardwareButtonDefaults, SBBacklightStudyLogger, SBCameraHardwareButtonStudyLogger, SBLiftToWakeStudyLogger, NSString;

@interface SBCameraHardwareButton : NSObject <SBHIDButtonStateDelegate, PTSettingsKeyObserver, SBSceneManagerObserver> {

	BOOL _disableDeferringToApplications;
	BOOL _shouldUsePocketStateDetection;
	int _lastCameraApplicationPID;
	id<BSInvalidatable> _dispatchingRuleAssertion;
	id<BSInvalidatable> _deferringRuleAssertion;
	NSMutableIndexSet* _allCameraShutterButtonPIDs;
	NSMutableIndexSet* _foregroundCameraShutterButtonPIDs;
	NSMutableIndexSet* _foregroundPendingRemovalCameraShutterButtonPIDs;
	BSMutableIntegerMap* _deferringTokensPerPID;
	SBHIDButtonStateArbiter* _buttonArbiter;
	RBSProcessMonitor* _processMonitor;
	CMPocketStateManager* _pocketStateManager;
	_SBCameraLaunchCondition* _shouldLaunchCameraCondition;
	_SBCameraLaunchCondition* _longPressCondition;
	_SBCameraLaunchCondition* _outOfPocketCondition;
	BSTimer* _longPressCancellationTimer;
	double _longPressCancellationTimeout;
	BKSHIDEventDeliveryManager* _deliveryManager;
	SBApplicationController* _applicationController;
	SBLockScreenManager* _lockScreenManager;
	SBCoverSheetPresentationManager* _coverSheetPresentationManager;
	SBBacklightController* _backlightController;
	SBProximitySensorManager* _proximitySensorManager;
	SBSceneManager* _mainDisplaySceneManager;
	SBCameraHardwareButtonSettings* _settings;
	SBCameraHardwareButtonDefaults* _defaults;
	SBBacklightStudyLogger* _backlightStudyLogger;
	SBCameraHardwareButtonStudyLogger* _studyLogger;
	SBLiftToWakeStudyLogger* _liftToWakeStudyLogger;

}

@property (assign,nonatomic) BOOL disableDeferringToApplications;              //@synthesize disableDeferringToApplications=_disableDeferringToApplications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_reconfigureProcessMonitorForPredicates:(id)arg1 ;
-(id)init;
-(void)_stopWaitingForLongPressCancellation;
-(void)_notifyCoreAnalyticsCameraDidLaunchToLockScreen:(BOOL)arg1 screenWasOff:(BOOL)arg2 ;
-(void)performActionsForButtonUp:(id)arg1 ;
-(void)setDisableDeferringToApplications:(BOOL)arg1 ;
-(BOOL)_isCoverSheetCameraVisible;
-(void)_launchToUnlockedCameraAfterWakingScreen:(BOOL)arg1 ;
-(void)removeProcessRequestingCameraButton:(int)arg1 ;
-(void)_deferCameraPressesToCameraApplication;
-(void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2 ;
-(void)_deferCameraPressesToApplication:(id)arg1 ;
-(void)_deferCameraPressesToSpringBoard;
-(void)addProcessRequestingCameraButton:(int)arg1 token:(id)arg2 ;
-(BOOL)_shouldDeferToNonSpringBoardProcess;
-(void)performActionsForButtonDown:(id)arg1 ;
-(void)_longPressDidCancel;
-(BOOL)_shouldDeferToCoverSheetCamera;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_updateCameraDeferringRule;
-(void)_launchToCoverSheetCameraAfterWakingScreen:(BOOL)arg1 ;
-(void)_launchCameraIfReady;
-(void)_reconfigureProcessMonitor;
-(void)_process:(id)arg1 stateDidUpdate:(id)arg2 ;
-(void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2 ;
-(void)_updateSettingsForReason:(id)arg1 ;
-(BOOL)disableDeferringToApplications;
-(void)_deferCameraPressesToPID:(int)arg1 ;
-(void)_startWaitingForLongPressCancellation;
-(void)performActionsForButtonLongPress:(id)arg1 ;
-(void)dealloc;
-(void)handleButtonEvent:(IOHIDEventRef)arg1 ;
@end

