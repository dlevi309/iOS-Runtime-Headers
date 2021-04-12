/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,retain) id<BSInvalidatable> dispatchingRuleAssertion;                                     //@synthesize dispatchingRuleAssertion=_dispatchingRuleAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> deferringRuleAssertion;                                       //@synthesize deferringRuleAssertion=_deferringRuleAssertion - In the implementation block
@property (assign,nonatomic) int lastCameraApplicationPID;                                                     //@synthesize lastCameraApplicationPID=_lastCameraApplicationPID - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * allCameraShutterButtonPIDs;                                   //@synthesize allCameraShutterButtonPIDs=_allCameraShutterButtonPIDs - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * foregroundCameraShutterButtonPIDs;                            //@synthesize foregroundCameraShutterButtonPIDs=_foregroundCameraShutterButtonPIDs - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * foregroundPendingRemovalCameraShutterButtonPIDs;              //@synthesize foregroundPendingRemovalCameraShutterButtonPIDs=_foregroundPendingRemovalCameraShutterButtonPIDs - In the implementation block
@property (nonatomic,retain) BSMutableIntegerMap * deferringTokensPerPID;                                      //@synthesize deferringTokensPerPID=_deferringTokensPerPID - In the implementation block
@property (nonatomic,retain) SBHIDButtonStateArbiter * buttonArbiter;                                          //@synthesize buttonArbiter=_buttonArbiter - In the implementation block
@property (nonatomic,retain) RBSProcessMonitor * processMonitor;                                               //@synthesize processMonitor=_processMonitor - In the implementation block
@property (nonatomic,retain) CMPocketStateManager * pocketStateManager;                                        //@synthesize pocketStateManager=_pocketStateManager - In the implementation block
@property (nonatomic,retain) _SBCameraLaunchCondition * shouldLaunchCameraCondition;                           //@synthesize shouldLaunchCameraCondition=_shouldLaunchCameraCondition - In the implementation block
@property (nonatomic,retain) _SBCameraLaunchCondition * longPressCondition;                                    //@synthesize longPressCondition=_longPressCondition - In the implementation block
@property (nonatomic,retain) _SBCameraLaunchCondition * outOfPocketCondition;                                  //@synthesize outOfPocketCondition=_outOfPocketCondition - In the implementation block
@property (nonatomic,retain) BSTimer * longPressCancellationTimer;                                             //@synthesize longPressCancellationTimer=_longPressCancellationTimer - In the implementation block
@property (assign,nonatomic) double longPressCancellationTimeout;                                              //@synthesize longPressCancellationTimeout=_longPressCancellationTimeout - In the implementation block
@property (assign,nonatomic) BOOL shouldUsePocketStateDetection;                                               //@synthesize shouldUsePocketStateDetection=_shouldUsePocketStateDetection - In the implementation block
@property (nonatomic,retain) BKSHIDEventDeliveryManager * deliveryManager;                                     //@synthesize deliveryManager=_deliveryManager - In the implementation block
@property (nonatomic,retain) SBApplicationController * applicationController;                                  //@synthesize applicationController=_applicationController - In the implementation block
@property (nonatomic,retain) SBLockScreenManager * lockScreenManager;                                          //@synthesize lockScreenManager=_lockScreenManager - In the implementation block
@property (nonatomic,retain) SBCoverSheetPresentationManager * coverSheetPresentationManager;                  //@synthesize coverSheetPresentationManager=_coverSheetPresentationManager - In the implementation block
@property (nonatomic,retain) SBBacklightController * backlightController;                                      //@synthesize backlightController=_backlightController - In the implementation block
@property (nonatomic,retain) SBProximitySensorManager * proximitySensorManager;                                //@synthesize proximitySensorManager=_proximitySensorManager - In the implementation block
@property (nonatomic,retain) SBSceneManager * mainDisplaySceneManager;                                         //@synthesize mainDisplaySceneManager=_mainDisplaySceneManager - In the implementation block
@property (nonatomic,retain) SBCameraHardwareButtonSettings * settings;                                        //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) SBCameraHardwareButtonDefaults * defaults;                                        //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) SBBacklightStudyLogger * backlightStudyLogger;                                    //@synthesize backlightStudyLogger=_backlightStudyLogger - In the implementation block
@property (nonatomic,retain) SBCameraHardwareButtonStudyLogger * studyLogger;                                  //@synthesize studyLogger=_studyLogger - In the implementation block
@property (nonatomic,retain) SBLiftToWakeStudyLogger * liftToWakeStudyLogger;                                  //@synthesize liftToWakeStudyLogger=_liftToWakeStudyLogger - In the implementation block
@property (assign,nonatomic) BOOL disableDeferringToApplications;                                              //@synthesize disableDeferringToApplications=_disableDeferringToApplications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(SBCameraHardwareButtonDefaults *)defaults;
-(void)setDefaults:(SBCameraHardwareButtonDefaults *)arg1 ;
-(SBCameraHardwareButtonSettings *)settings;
-(void)setSettings:(SBCameraHardwareButtonSettings *)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(SBApplicationController *)applicationController;
-(SBSceneManager *)mainDisplaySceneManager;
-(RBSProcessMonitor *)processMonitor;
-(void)setPocketStateManager:(CMPocketStateManager *)arg1 ;
-(CMPocketStateManager *)pocketStateManager;
-(void)setApplicationController:(SBApplicationController *)arg1 ;
-(SBBacklightController *)backlightController;
-(void)handleButtonEvent:(IOHIDEventRef)arg1 ;
-(SBProximitySensorManager *)proximitySensorManager;
-(void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2 ;
-(void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2 ;
-(void)_updateSettingsForReason:(id)arg1 ;
-(void)_reconfigureProcessMonitor;
-(void)_updateCameraDeferringRule;
-(void)_reconfigureProcessMonitorForPredicates:(id)arg1 ;
-(void)_process:(id)arg1 stateDidUpdate:(id)arg2 ;
-(void)_deferCameraPressesToPID:(int)arg1 ;
-(void)_deferCameraPressesToApplication:(id)arg1 ;
-(BOOL)_isCoverSheetCameraVisible;
-(BOOL)_shouldDeferToNonSpringBoardProcess;
-(BOOL)_shouldDeferToCoverSheetCamera;
-(void)_deferCameraPressesToCameraApplication;
-(void)_deferCameraPressesToSpringBoard;
-(void)_launchToCoverSheetCamera;
-(void)_launchToUnlockedCamera;
-(void)_longPressDidCancel;
-(void)_stopWaitingForLongPressCancellation;
-(void)_startWaitingForLongPressCancellation;
-(void)_launchCameraIfReady;
-(void)performActionsForButtonLongPress:(id)arg1 ;
-(void)performActionsForButtonDown:(id)arg1 ;
-(void)performActionsForButtonUp:(id)arg1 ;
-(void)setDisableDeferringToApplications:(BOOL)arg1 ;
-(void)addProcessRequestingCameraButton:(int)arg1 token:(id)arg2 ;
-(void)removeProcessRequestingCameraButton:(int)arg1 ;
-(BOOL)disableDeferringToApplications;
-(id<BSInvalidatable>)dispatchingRuleAssertion;
-(void)setDispatchingRuleAssertion:(id<BSInvalidatable>)arg1 ;
-(id<BSInvalidatable>)deferringRuleAssertion;
-(void)setDeferringRuleAssertion:(id<BSInvalidatable>)arg1 ;
-(int)lastCameraApplicationPID;
-(void)setLastCameraApplicationPID:(int)arg1 ;
-(NSMutableIndexSet *)allCameraShutterButtonPIDs;
-(void)setAllCameraShutterButtonPIDs:(NSMutableIndexSet *)arg1 ;
-(NSMutableIndexSet *)foregroundCameraShutterButtonPIDs;
-(void)setForegroundCameraShutterButtonPIDs:(NSMutableIndexSet *)arg1 ;
-(NSMutableIndexSet *)foregroundPendingRemovalCameraShutterButtonPIDs;
-(void)setForegroundPendingRemovalCameraShutterButtonPIDs:(NSMutableIndexSet *)arg1 ;
-(BSMutableIntegerMap *)deferringTokensPerPID;
-(void)setDeferringTokensPerPID:(BSMutableIntegerMap *)arg1 ;
-(SBHIDButtonStateArbiter *)buttonArbiter;
-(void)setButtonArbiter:(SBHIDButtonStateArbiter *)arg1 ;
-(void)setProcessMonitor:(RBSProcessMonitor *)arg1 ;
-(_SBCameraLaunchCondition *)shouldLaunchCameraCondition;
-(void)setShouldLaunchCameraCondition:(_SBCameraLaunchCondition *)arg1 ;
-(_SBCameraLaunchCondition *)longPressCondition;
-(void)setLongPressCondition:(_SBCameraLaunchCondition *)arg1 ;
-(_SBCameraLaunchCondition *)outOfPocketCondition;
-(void)setOutOfPocketCondition:(_SBCameraLaunchCondition *)arg1 ;
-(BSTimer *)longPressCancellationTimer;
-(void)setLongPressCancellationTimer:(BSTimer *)arg1 ;
-(double)longPressCancellationTimeout;
-(void)setLongPressCancellationTimeout:(double)arg1 ;
-(BOOL)shouldUsePocketStateDetection;
-(void)setShouldUsePocketStateDetection:(BOOL)arg1 ;
-(BKSHIDEventDeliveryManager *)deliveryManager;
-(void)setDeliveryManager:(BKSHIDEventDeliveryManager *)arg1 ;
-(SBLockScreenManager *)lockScreenManager;
-(void)setLockScreenManager:(SBLockScreenManager *)arg1 ;
-(SBCoverSheetPresentationManager *)coverSheetPresentationManager;
-(void)setCoverSheetPresentationManager:(SBCoverSheetPresentationManager *)arg1 ;
-(void)setBacklightController:(SBBacklightController *)arg1 ;
-(void)setProximitySensorManager:(SBProximitySensorManager *)arg1 ;
-(void)setMainDisplaySceneManager:(SBSceneManager *)arg1 ;
-(SBBacklightStudyLogger *)backlightStudyLogger;
-(void)setBacklightStudyLogger:(SBBacklightStudyLogger *)arg1 ;
-(SBCameraHardwareButtonStudyLogger *)studyLogger;
-(void)setStudyLogger:(SBCameraHardwareButtonStudyLogger *)arg1 ;
-(SBLiftToWakeStudyLogger *)liftToWakeStudyLogger;
-(void)setLiftToWakeStudyLogger:(SBLiftToWakeStudyLogger *)arg1 ;
@end

