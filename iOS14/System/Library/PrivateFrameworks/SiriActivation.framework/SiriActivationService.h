/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <libobjc.A.dylib/SASRequestOptionsBuilderDataSource.h>
#import <libobjc.A.dylib/SASHeaterDelegate.h>
#import <libobjc.A.dylib/SASMyriadControllerDelegate.h>
#import <libobjc.A.dylib/SASLockStateMonitorDelegate.h>
#import <libobjc.A.dylib/SASBulletinManagerDelegate.h>
#import <libobjc.A.dylib/SASStateChangeListener.h>
#import <libobjc.A.dylib/SASPresentationManagerDelegate.h>
#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSTimer, SASMyriadController, SASSystemState, AFPreferences, SASLockStateMonitor, NSMutableDictionary, SASHeater, AFSiriTether, SASBulletinManager, SASRemoteRequestManager, SASTestingInputController, SASPresentationManager;

@interface SiriActivationService : NSObject <SASRequestOptionsBuilderDataSource, SASHeaterDelegate, SASMyriadControllerDelegate, SASLockStateMonitorDelegate, SASBulletinManagerDelegate, SASStateChangeListener, SASPresentationManagerDelegate, SBUIActiveOrientationObserver> {

	/*^block*/id _buttonTrigger;
	NSString* _preheatedPresentation;
	int _voiceTriggerNotifyToken;
	NSObject*<OS_dispatch_queue> _voiceTriggerDispatchQueue;
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
	NSMutableDictionary* _sources;
	SASHeater* _heater;
	AFSiriTether* _siriTether;
	double _activationTimestamp;
	SASBulletinManager* _bulletinManager;
	SASRemoteRequestManager* _remoteRequestManager;
	SASTestingInputController* _testingInputController;
	NSMutableDictionary* _avExternalButtonEvents;
	SASPresentationManager* _presentationManager;

}

@property (nonatomic,retain) SASSystemState * systemState;                                                                                                                                                                //@synthesize systemState=_systemState - In the implementation block
@property (nonatomic,retain) AFPreferences * afPreferences;                                                                                                                                                               //@synthesize afPreferences=_afPreferences - In the implementation block
@property (nonatomic,retain) SASLockStateMonitor * lockStateMonitor;                                                                                                                                                      //@synthesize lockStateMonitor=_lockStateMonitor - In the implementation block
@property (assign,nonatomic) BOOL xcTestingActive;                                                                                                                                                                        //@synthesize xcTestingActive=_xcTestingActive - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sources;                                                                                                                                                               //@synthesize sources=_sources - In the implementation block
@property (nonatomic,retain) SASHeater * heater;                                                                                                                                                                          //@synthesize heater=_heater - In the implementation block
@property (nonatomic,retain) AFSiriTether * siriTether;                                                                                                                                                                   //@synthesize siriTether=_siriTether - In the implementation block
@property (assign,nonatomic) BOOL siriTetherIsAttached;                                                                                                                                                                   //@synthesize siriTetherIsAttached=_siriTetherIsAttached - In the implementation block
@property (assign,nonatomic) double activationTimestamp;                                                                                                                                                                  //@synthesize activationTimestamp=_activationTimestamp - In the implementation block
@property (assign,nonatomic) BOOL voiceTriggerNotifyTokenIsValid;                                                                                                                                                         //@synthesize voiceTriggerNotifyTokenIsValid=_voiceTriggerNotifyTokenIsValid - In the implementation block
@property (nonatomic,retain) SASBulletinManager * bulletinManager;                                                                                                                                                        //@synthesize bulletinManager=_bulletinManager - In the implementation block
@property (nonatomic,retain) SASRemoteRequestManager * remoteRequestManager;                                                                                                                                              //@synthesize remoteRequestManager=_remoteRequestManager - In the implementation block
@property (nonatomic,retain) SASTestingInputController * testingInputController;                                                                                                                                          //@synthesize testingInputController=_testingInputController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * avExternalButtonEvents;                                                                                                                                                //@synthesize avExternalButtonEvents=_avExternalButtonEvents - In the implementation block
@property (assign,nonatomic) BOOL buttonDownHasOccurredSinceActivation;                                                                                                                                                   //@synthesize buttonDownHasOccurredSinceActivation=_buttonDownHasOccurredSinceActivation - In the implementation block
@property (assign,nonatomic) BOOL canActivateFromDirectActionSource;                                                                                                                                                      //@synthesize canActivateFromDirectActionSource=_canActivateFromDirectActionSource - In the implementation block
@property (assign,setter=_setPocketStateFetchingInProgressForHeadsetActivation:,getter=_pocketStateFetchingInProgressForHeadsetActivation,nonatomic) BOOL pocketStateFetchingInProgressForHeadsetActivation;              //@synthesize pocketStateFetchingInProgressForHeadsetActivation=_pocketStateFetchingInProgressForHeadsetActivation - In the implementation block
@property (nonatomic,retain) SASPresentationManager * presentationManager;                                                                                                                                                //@synthesize presentationManager=_presentationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)service;
-(SASSystemState *)systemState;
-(id)bulletinForIdentifier:(id)arg1 ;
-(void)_dismissSiri:(id)arg1 ;
-(BOOL)_siriIsEnabled;
-(void)setSources:(NSMutableDictionary *)arg1 ;
-(void)_cancelTTS;
-(long long)_requestState;
-(void)activationRequestFromDirectActionEvent:(long long)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)didChangeLockState:(unsigned long long)arg1 ;
-(BOOL)xcTestingActive;
-(void)unregisterActivationSourceIdentifier:(id)arg1 ;
-(void)siriPresentationFailureWithIdentifier:(long long)arg1 error:(id)arg2 ;
-(void)_defrost;
-(void)_handleTapSynthesisIfNeededForButtonIdentifier:(long long)arg1 buttonUpTimestamp:(double)arg2 ;
-(BOOL)siriTetherIsAttached;
-(void)setAvExternalButtonEvents:(NSMutableDictionary *)arg1 ;
-(void)activationRequestFromTestingWithContext:(id)arg1 ;
-(void)bulletinManagerDidChangeBulletins:(id)arg1 ;
-(void)setAfPreferences:(AFPreferences *)arg1 ;
-(id)init;
-(void)_unregisterForVoiceTrigger;
-(SASBulletinManager *)bulletinManager;
-(void)activationRequestFromVoiceTrigger;
-(void)heaterSuggestsPreheating:(id)arg1 ;
-(void)_recordTimeIfNeededForButtonIdentifier:(long long)arg1 buttonDownTimestamp:(double)arg2 ;
-(id)bulletinsOnLockScreen;
-(BOOL)_shouldRejectNewActivations:(long long)arg1 ;
-(void)_cancelPendingActivationEventWithReason:(unsigned long long)arg1 ;
-(id)allBulletins;
-(id)requestOptionsBuilder:(id)arg1 optionsForOverriding:(id)arg2 withActiviation:(id)arg3 ;
-(void)cancelPrewarmFromButtonIdentifier:(long long)arg1 ;
-(void)_handleDesignModeRequest;
-(void)activationRequestFromSimpleActivation:(long long)arg1 ;
-(void)_notifySourcesOfActiveChange:(BOOL)arg1 ;
-(void)setRemoteRequestManager:(SASRemoteRequestManager *)arg1 ;
-(BOOL)_pocketStateFetchingInProgressForHeadsetActivation;
-(BOOL)requestOptionsBuilder:(id)arg1 isAcousticIdAllowedWithActiviation:(id)arg2 ;
-(void)buttonDownFromButtonIdentifier:(long long)arg1 timestamp:(double)arg2 ;
-(NSMutableDictionary *)sources;
-(BOOL)handleActivationRequest:(id)arg1 systemState:(id)arg2 ;
-(void)siriPresentationDismissedWithIdentifier:(long long)arg1 ;
-(void)setPresentationManager:(SASPresentationManager *)arg1 ;
-(void)_handlePocketStateFetchForScreenWakeForPresentationIdentifier:(long long)arg1 requestOptions:(id)arg2 presentationOptions:(id)arg3 ;
-(void)pongWithPresentationIdentifier:(long long)arg1 ;
-(void)setHeater:(SASHeater *)arg1 ;
-(void)_activatePresentationWithIdentifier:(long long)arg1 requestOptions:(id)arg2 analyticsContext:(id)arg3 ;
-(SASPresentationManager *)presentationManager;
-(BOOL)_isInitialRequest;
-(id)requestOptionsBuilder:(id)arg1 uiPresentationIdentifierWithActivation:(id)arg2 activationPresentation:(long long)arg3 ;
-(BOOL)voiceTriggerNotifyTokenIsValid;
-(void)_preheatPresentation;
-(void)dismissSiriWithOptions:(id)arg1 ;
-(void)siriPresentationDisplayedWithIdentifier:(long long)arg1 ;
-(void)setSystemState:(SASSystemState *)arg1 ;
-(void)deactivationRequestFromButtonIdentifier:(long long)arg1 context:(id)arg2 options:(id)arg3 ;
-(void)buttonUpFromButtonIdentifier:(long long)arg1 deviceIdentifier:(id)arg2 timestamp:(double)arg3 ;
-(void)updatePredicatedRecordRoute;
-(NSMutableDictionary *)avExternalButtonEvents;
-(void)siriPresentationWillDismissWithIdentifier:(long long)arg1 ;
-(BOOL)requestOptionsBuilder:(id)arg1 isRequestInitialWithActiviation:(id)arg2 ;
-(void)setButtonDownHasOccurredSinceActivation:(BOOL)arg1 ;
-(void)activationRequestFromContinuityWithContext:(id)arg1 ;
-(void)presentationManager:(id)arg1 didChangeShouldRejectNewActivationsTo:(BOOL)arg2 ;
-(void)setSiriTetherIsAttached:(BOOL)arg1 ;
-(BOOL)handleActivationRequest:(id)arg1 ;
-(void)activationRequestFromBreadcrumb;
-(void)_setPocketStateFetchingInProgressForHeadsetActivation:(BOOL)arg1 ;
-(void)shouldContinue:(id)arg1 ;
-(void)callStateChangedToIsActive:(BOOL)arg1 isOutgoing:(BOOL)arg2 ;
-(void)shouldAbort:(id)arg1 ;
-(BOOL)canActivateFromDirectActionSource;
-(BOOL)requestOptionsBuilder:(id)arg1 shouldRequestUseAutomaticEndpointingWithActiviation:(id)arg2 ;
-(void)buttonLongPressFromButtonIdentifier:(long long)arg1 context:(id)arg2 ;
-(void)setTestingInputController:(SASTestingInputController *)arg1 ;
-(SASLockStateMonitor *)lockStateMonitor;
-(void)activationRequestFromButtonIdentifier:(long long)arg1 context:(id)arg2 ;
-(BOOL)_isVoiceActivationMaskNecessaryWithRequestOptions:(id)arg1 ;
-(double)activationTimestamp;
-(SASHeater *)heater;
-(void)registerActivationSource:(id)arg1 withIdentifier:(id)arg2 ;
-(BOOL)presentationsAreIdleAndQuiet;
-(void)buttonTapFromButtonIdentifier:(long long)arg1 ;
-(void)speechRequestStateDidChange:(long long)arg1 ;
-(BOOL)_buttonIsTVMicrophoneButton:(long long)arg1 ;
-(void)setCanActivateFromDirectActionSource:(BOOL)arg1 ;
-(id)_init;
-(void)_notifySourcesOfCanActivateFromDirectActionSourceChange:(BOOL)arg1 ;
-(void)setLockStateMonitor:(SASLockStateMonitor *)arg1 ;
-(void)_cancelActivationPreparationForSetup;
-(void)setVoiceTriggerNotifyTokenIsValid:(BOOL)arg1 ;
-(void)presentationManager:(id)arg1 didEncounterError:(long long)arg2 ;
-(void)setActivationTimestamp:(double)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(void)setSiriTether:(AFSiriTether *)arg1 ;
-(void)prewarmFromButtonIdentifier:(long long)arg1 longPressInterval:(double)arg2 ;
-(BOOL)isConnectedTo188;
-(AFPreferences *)afPreferences;
-(void)activationRequestFromSpotlightWithContext:(id)arg1 ;
-(void)setXcTestingActive:(BOOL)arg1 ;
-(BOOL)buttonDownHasOccurredSinceActivation;
-(SASTestingInputController *)testingInputController;
-(void)unregisterSiriPresentationIdentifier:(long long)arg1 ;
-(void)_updateCanActivateFromDirectActionSource;
-(BOOL)requestOptionsBuilder:(id)arg1 isPredictedRecordRouteIsZLLWithActiviation:(id)arg2 ;
-(void)_B188ActivationEvent:(long long)arg1 context:(id)arg2 options:(id)arg3 ;
-(void)activationRequestFromVoiceTriggerWithContext:(id)arg1 ;
-(SASRemoteRequestManager *)remoteRequestManager;
-(AFSiriTether *)siriTether;
-(oneway void)activationRequestFromTestRunnerWithContext:(id)arg1 ;
-(BOOL)_buttonIsAVExternalButton:(long long)arg1 ;
-(id)_updateRequestOptionsWithTestingContextFromActivationRequest:(id)arg1 requestOptions:(id)arg2 ;
-(void)_registerForVoiceTrigger;
-(void)_attachToTether;
-(void)dealloc;
-(void)registerSiriPresentation:(id)arg1 withIdentifier:(long long)arg2 ;
-(void)markBulletinWithIdentifier:(id)arg1 asRead:(BOOL)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(void)setBulletinManager:(SASBulletinManager *)arg1 ;
-(unsigned long long)requestOptionsBuilder:(id)arg1 currentLockStateForActivation:(id)arg2 ;
@end

