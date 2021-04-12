/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <libobjc.A.dylib/SASRequestOptionsBuilderDataSource.h>
#import <libobjc.A.dylib/SASHeaterDelegate.h>
#import <libobjc.A.dylib/AFMyriadDelegate.h>
#import <libobjc.A.dylib/SASLockStateMonitorDelegate.h>
#import <libobjc.A.dylib/SASBulletinManagerDelegate.h>
#import <libobjc.A.dylib/SASStateChangeListener.h>
#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>

@protocol OS_dispatch_queue;
@class NSString, AFMyriadCoordinator, NSObject, NSTimer, SASMyriadController, SASSystemState, AFPreferences, SASLockStateMonitor, NSMutableDictionary, NSMutableSet, SASHeater, AFSiriTether, SASBulletinManager, SASRemoteRequestManager, SASTestingInputController, AFWatchdogTimer;

@interface SiriActivationService : NSObject <SASRequestOptionsBuilderDataSource, SASHeaterDelegate, AFMyriadDelegate, SASLockStateMonitorDelegate, SASBulletinManagerDelegate, SASStateChangeListener, SBUIActiveOrientationObserver> {

	/*^block*/id _buttonTrigger;
	NSString* _preheatedPresentation;
	int _voiceTriggerNotifyToken;
	AFMyriadCoordinator* _myriad;
	NSObject*<OS_dispatch_queue> _voiceTriggerDispatchQueue;
	NSObject*<OS_dispatch_queue> _watchdogQueue;
	NSTimer* _B188ActivationTimer;
	SASMyriadController* _myriadController;
	BOOL _xcTestingActive;
	BOOL _siriTetherIsAttached;
	BOOL _voiceTriggerNotifyTokenIsValid;
	BOOL _buttonDownHasOccurredSinceActivation;
	BOOL _canActivateFromDirectActionSource;
	BOOL _pocketStateFetchingInProgressForHeadsetActivation;
	SASSystemState* _systemState;
	AFPreferences* _afPreferences;
	SASLockStateMonitor* _lockStateMonitor;
	NSMutableDictionary* _presentations;
	NSMutableSet* _activePresentations;
	NSMutableDictionary* _preparingPresentations;
	long long _requestState;
	NSMutableDictionary* _sources;
	SASHeater* _heater;
	AFSiriTether* _siriTether;
	double _preparationTimestamp;
	double _activationTimestamp;
	SASBulletinManager* _bulletinManager;
	SASRemoteRequestManager* _remoteRequestManager;
	SASTestingInputController* _testingInputController;
	AFWatchdogTimer* _activationTimer;
	AFWatchdogTimer* _dismissalTimer;
	NSMutableDictionary* _avExternalButtonEvents;

}

@property (nonatomic,retain) SASSystemState * systemState;                                                                                                                                                                //@synthesize systemState=_systemState - In the implementation block
@property (nonatomic,retain) AFPreferences * afPreferences;                                                                                                                                                               //@synthesize afPreferences=_afPreferences - In the implementation block
@property (nonatomic,retain) SASLockStateMonitor * lockStateMonitor;                                                                                                                                                      //@synthesize lockStateMonitor=_lockStateMonitor - In the implementation block
@property (assign,nonatomic) BOOL xcTestingActive;                                                                                                                                                                        //@synthesize xcTestingActive=_xcTestingActive - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * presentations;                                                                                                                                                         //@synthesize presentations=_presentations - In the implementation block
@property (nonatomic,retain) NSMutableSet * activePresentations;                                                                                                                                                          //@synthesize activePresentations=_activePresentations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * preparingPresentations;                                                                                                                                                //@synthesize preparingPresentations=_preparingPresentations - In the implementation block
@property (assign,nonatomic) long long requestState;                                                                                                                                                                      //@synthesize requestState=_requestState - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sources;                                                                                                                                                               //@synthesize sources=_sources - In the implementation block
@property (nonatomic,retain) SASHeater * heater;                                                                                                                                                                          //@synthesize heater=_heater - In the implementation block
@property (nonatomic,retain) AFSiriTether * siriTether;                                                                                                                                                                   //@synthesize siriTether=_siriTether - In the implementation block
@property (assign,nonatomic) BOOL siriTetherIsAttached;                                                                                                                                                                   //@synthesize siriTetherIsAttached=_siriTetherIsAttached - In the implementation block
@property (assign,nonatomic) double preparationTimestamp;                                                                                                                                                                 //@synthesize preparationTimestamp=_preparationTimestamp - In the implementation block
@property (assign,nonatomic) double activationTimestamp;                                                                                                                                                                  //@synthesize activationTimestamp=_activationTimestamp - In the implementation block
@property (assign,nonatomic) BOOL voiceTriggerNotifyTokenIsValid;                                                                                                                                                         //@synthesize voiceTriggerNotifyTokenIsValid=_voiceTriggerNotifyTokenIsValid - In the implementation block
@property (nonatomic,retain) SASBulletinManager * bulletinManager;                                                                                                                                                        //@synthesize bulletinManager=_bulletinManager - In the implementation block
@property (nonatomic,retain) SASRemoteRequestManager * remoteRequestManager;                                                                                                                                              //@synthesize remoteRequestManager=_remoteRequestManager - In the implementation block
@property (nonatomic,retain) SASTestingInputController * testingInputController;                                                                                                                                          //@synthesize testingInputController=_testingInputController - In the implementation block
@property (nonatomic,retain) AFWatchdogTimer * activationTimer;                                                                                                                                                           //@synthesize activationTimer=_activationTimer - In the implementation block
@property (nonatomic,retain) AFWatchdogTimer * dismissalTimer;                                                                                                                                                            //@synthesize dismissalTimer=_dismissalTimer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * avExternalButtonEvents;                                                                                                                                                //@synthesize avExternalButtonEvents=_avExternalButtonEvents - In the implementation block
@property (assign,nonatomic) BOOL buttonDownHasOccurredSinceActivation;                                                                                                                                                   //@synthesize buttonDownHasOccurredSinceActivation=_buttonDownHasOccurredSinceActivation - In the implementation block
@property (assign,nonatomic) BOOL canActivateFromDirectActionSource;                                                                                                                                                      //@synthesize canActivateFromDirectActionSource=_canActivateFromDirectActionSource - In the implementation block
@property (assign,setter=_setPocketStateFetchingInProgressForHeadsetActivation:,getter=_pocketStateFetchingInProgressForHeadsetActivation,nonatomic) BOOL pocketStateFetchingInProgressForHeadsetActivation;              //@synthesize pocketStateFetchingInProgressForHeadsetActivation=_pocketStateFetchingInProgressForHeadsetActivation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)service;
-(id)init;
-(void)dealloc;
-(id)_init;
-(NSMutableDictionary *)sources;
-(void)setSources:(NSMutableDictionary *)arg1 ;
-(AFPreferences *)afPreferences;
-(void)setAfPreferences:(AFPreferences *)arg1 ;
-(long long)requestState;
-(void)setRequestState:(long long)arg1 ;
-(void)shouldContinue:(id)arg1 ;
-(void)shouldAbortAnotherDeviceBetter:(id)arg1 ;
-(SASSystemState *)systemState;
-(void)setSystemState:(SASSystemState *)arg1 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(SASLockStateMonitor *)lockStateMonitor;
-(id)bulletinsOnLockScreen;
-(id)allBulletins;
-(id)bulletinForIdentifier:(id)arg1 ;
-(AFWatchdogTimer *)activationTimer;
-(void)setActivationTimer:(AFWatchdogTimer *)arg1 ;
-(void)callStateChangedToIsActive:(BOOL)arg1 isOutgoing:(BOOL)arg2 ;
-(void)_dismissSiri:(id)arg1 ;
-(BOOL)_siriIsEnabled;
-(id)requestOptionsBuilder:(id)arg1 uiPresentationIdentifierWithActivation:(id)arg2 activationPresentation:(long long)arg3 ;
-(BOOL)requestOptionsBuilder:(id)arg1 isPredictedRecordRouteIsZLLWithActiviation:(id)arg2 ;
-(BOOL)requestOptionsBuilder:(id)arg1 isRequestInitialWithActiviation:(id)arg2 ;
-(BOOL)requestOptionsBuilder:(id)arg1 shouldRequestUseAutomaticEndpointingWithActiviation:(id)arg2 ;
-(BOOL)requestOptionsBuilder:(id)arg1 isAcousticIdAllowedWithActiviation:(id)arg2 ;
-(id)requestOptionsBuilder:(id)arg1 optionsForOverriding:(id)arg2 withActiviation:(id)arg3 ;
-(unsigned long long)requestOptionsBuilder:(id)arg1 currentLockStateForActivation:(id)arg2 ;
-(void)setLockStateMonitor:(SASLockStateMonitor *)arg1 ;
-(void)heaterSuggestsDefrosting:(id)arg1 ;
-(void)heaterSuggestsPreheating:(id)arg1 ;
-(BOOL)xcTestingActive;
-(void)didChangeLockState:(unsigned long long)arg1 ;
-(void)unregisterSiriPresentationIdentifier:(long long)arg1 ;
-(void)registerSiriPresentation:(id)arg1 withIdentifier:(long long)arg2 ;
-(void)siriPresentationWillDismissWithIdentifier:(long long)arg1 ;
-(void)siriPresentationDismissedWithIdentifier:(long long)arg1 ;
-(void)siriPresentationDisplayedWithIdentifier:(long long)arg1 ;
-(void)siriPresentationFailureWithIdentifier:(long long)arg1 error:(id)arg2 ;
-(void)speechRequestStateDidChange:(long long)arg1 ;
-(void)markBulletinWithIdentifier:(id)arg1 asRead:(BOOL)arg2 ;
-(void)setPreparingPresentations:(NSMutableDictionary *)arg1 ;
-(void)setXcTestingActive:(BOOL)arg1 ;
-(void)setPresentations:(NSMutableDictionary *)arg1 ;
-(void)setActivePresentations:(NSMutableSet *)arg1 ;
-(void)setHeater:(SASHeater *)arg1 ;
-(SASHeater *)heater;
-(void)setSiriTetherIsAttached:(BOOL)arg1 ;
-(void)setSiriTether:(AFSiriTether *)arg1 ;
-(AFSiriTether *)siriTether;
-(void)setRemoteRequestManager:(SASRemoteRequestManager *)arg1 ;
-(void)setBulletinManager:(SASBulletinManager *)arg1 ;
-(SASBulletinManager *)bulletinManager;
-(void)_registerForVoiceTrigger;
-(void)setAvExternalButtonEvents:(NSMutableDictionary *)arg1 ;
-(void)setButtonDownHasOccurredSinceActivation:(BOOL)arg1 ;
-(BOOL)_shouldRejectNewActivations:(long long)arg1 ;
-(void)_notifySourcesOfActiveChange:(BOOL)arg1 ;
-(void)_updateCanActivateFromDirectActionSource;
-(void)setCanActivateFromDirectActionSource:(BOOL)arg1 ;
-(void)_notifySourcesOfCanActivateFromDirectActionSourceChange:(BOOL)arg1 ;
-(NSMutableDictionary *)presentations;
-(NSMutableSet *)activePresentations;
-(NSMutableDictionary *)preparingPresentations;
-(void)stopActivationWatchdogTimerIfNeeded;
-(void)stopDismissalWatchdogTimerIfNeeded;
-(BOOL)presentationsAreIdleAndQuiet;
-(BOOL)handleActivationRequest:(id)arg1 ;
-(void)dismissSiriWithOptions:(id)arg1 ;
-(BOOL)isConnectedTo188;
-(void)_B188ActivationEvent:(long long)arg1 context:(id)arg2 options:(id)arg3 ;
-(void)buttonLongPressFromButtonIdentifier:(long long)arg1 context:(id)arg2 ;
-(void)setPreparationTimestamp:(double)arg1 ;
-(void)_cancelTTS;
-(void)_performOrEnqueueButtonAction:(/*^block*/id)arg1 ;
-(void)_recordTimeIfNeededForButtonIdentifier:(long long)arg1 buttonDownTimestamp:(double)arg2 ;
-(void)_handleTapSynthesisIfNeededForButtonIdentifier:(long long)arg1 buttonUpTimestamp:(double)arg2 ;
-(void)_cancelPendingActivationEventWithReason:(unsigned long long)arg1 ;
-(void)activationRequestFromButtonIdentifier:(long long)arg1 context:(id)arg2 ;
-(BOOL)_buttonIsAVExternalButton:(long long)arg1 ;
-(BOOL)buttonDownHasOccurredSinceActivation;
-(NSMutableDictionary *)avExternalButtonEvents;
-(double)activationTimestamp;
-(void)buttonTapFromButtonIdentifier:(long long)arg1 ;
-(void)_handleDesignModeRequest;
-(BOOL)handleActivationRequest:(id)arg1 systemState:(id)arg2 ;
-(void)_cancelActivationPreparationIfNecessary;
-(void)_cancelActivationPreparationForSetup;
-(SASTestingInputController *)testingInputController;
-(void)_activatePresentation:(id)arg1 requestOptions:(id)arg2 analyticsContext:(id)arg3 ;
-(void)_handlePocketStateFetchForScreenWakeForPresentationServer:(id)arg1 requestOptions:(id)arg2 presentationOptions:(id)arg3 ;
-(void)setActivationTimestamp:(double)arg1 ;
-(void)startActivationWatchdogTimerForPresentationServer:(id)arg1 ;
-(BOOL)_pocketStateFetchingInProgressForHeadsetActivation;
-(void)_setPocketStateFetchingInProgressForHeadsetActivation:(BOOL)arg1 ;
-(void)startDismissalWatchdogTimer;
-(BOOL)_isInitialRequest;
-(void)_attachToTether;
-(void)_preheatPresentation;
-(void)activationRequestFromVoiceTrigger;
-(void)_watchdogQueue_startActivationWatchdogTimerForPresentationServer:(id)arg1 ;
-(void)_watchdogQueue_stopActivationWatchdogTimerIfNeeded;
-(void)_watchdogQueue_startDismissalWatchdogTimer;
-(AFWatchdogTimer *)dismissalTimer;
-(void)setDismissalTimer:(AFWatchdogTimer *)arg1 ;
-(void)_watchdogQueue_stopDismissalWatchdogTimerIfNeeded;
-(void)bulletinManagerDidChangeBulletins:(id)arg1 ;
-(void)registerActivationSource:(id)arg1 withIdentifier:(id)arg2 ;
-(void)unregisterActivationSourceIdentifier:(id)arg1 ;
-(void)deactivationRequestFromButtonIdentifier:(long long)arg1 context:(id)arg2 options:(id)arg3 ;
-(void)prewarmFromButtonIdentifier:(long long)arg1 longPressInterval:(double)arg2 ;
-(void)cancelPrewarmFromButtonIdentifier:(long long)arg1 ;
-(void)buttonDownFromButtonIdentifier:(long long)arg1 timestamp:(double)arg2 ;
-(void)buttonUpFromButtonIdentifier:(long long)arg1 timestamp:(double)arg2 ;
-(void)activationRequestFromDirectActionEvent:(long long)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)activationRequestFromContinuityWithContext:(id)arg1 ;
-(void)activationRequestFromVoiceTriggerWithContext:(id)arg1 ;
-(void)activationRequestFromBreadcrumb;
-(void)activationRequestFromSimpleActivation:(long long)arg1 ;
-(void)activationRequestFromSpotlightWithContext:(id)arg1 ;
-(void)activationRequestFromTestingWithContext:(id)arg1 ;
-(oneway void)activationRequestFromTestRunnerWithContext:(id)arg1 ;
-(void)_unregisterForVoiceTrigger;
-(BOOL)siriTetherIsAttached;
-(double)preparationTimestamp;
-(BOOL)voiceTriggerNotifyTokenIsValid;
-(void)setVoiceTriggerNotifyTokenIsValid:(BOOL)arg1 ;
-(SASRemoteRequestManager *)remoteRequestManager;
-(void)setTestingInputController:(SASTestingInputController *)arg1 ;
-(BOOL)canActivateFromDirectActionSource;
@end

