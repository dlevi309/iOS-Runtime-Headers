/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CSVTUITrainingManagerDelegate.h>
#import <libobjc.A.dylib/VTUIEnrollmentSetupIntroViewDelegate.h>
#import <libobjc.A.dylib/SUICFlamesViewDelegate.h>
#import <libobjc.A.dylib/AFUIDebugControllerDelegate.h>
#import <libobjc.A.dylib/AFUISiriLanguageDelegate.h>
#import <libobjc.A.dylib/AFMyriadDelegate.h>
#import <libobjc.A.dylib/VTUISiriDataSharingOptInPresentationDelegate.h>

@protocol AFUIDebugControlling, OS_dispatch_queue, VTUIEnrollTrainingViewControllerDelegate;
@class NSArray, CSVTUITrainingManager, AFUISiriLanguage, NSObject, UIView, VTUISiriDataSharingOptInPresenter, VTUIProximityEnrollTrainingView, VTUIProximityEnrollmentSuccessView, VTUIProximityEnrollmentSetupIntroView, VTUIProximityTryAgainView, NSString, VTUIProximityEnrollmentLanguageOptionsView, AFMyriadCoordinator, VTUIAudioHintPlayer;

@interface VTUIProximityEnrollTrainingViewController : UIViewController <CSVTUITrainingManagerDelegate, VTUIEnrollmentSetupIntroViewDelegate, SUICFlamesViewDelegate, AFUIDebugControllerDelegate, AFUISiriLanguageDelegate, AFMyriadDelegate, VTUISiriDataSharingOptInPresentationDelegate> {

	NSArray* _trainingPageInstructions;
	long long _currentTrainingState;
	BOOL _hasRetriedTraining;
	id<AFUIDebugControlling> _debugController;
	CSVTUITrainingManager* _trainingManager;
	float _audioRms;
	unsigned long long _sessionId;
	long long _consecutiveTimeoutCount;
	AFUISiriLanguage* _siriLanguage;
	NSArray* _siriLanguageOptions;
	BOOL _hasPHSInCloud;
	NSObject*<OS_dispatch_queue> _hasPHSInCloudFetchQueue;
	/*^block*/id _hasPHSInCloudFetchBlock;
	BOOL _isResignedActive;
	UIView* _siriDataSharingProximityView;
	VTUISiriDataSharingOptInPresenter* _siriDataSharingOptInPresenter;
	BOOL _hasSkippedTraining;
	BOOL _skipToEndForTesting;
	BOOL _skipToDataSharingForTesting;
	BOOL _disambiguateLanguageOptionsForTesting;
	BOOL _shouldTurnOnMyriad;
	id<VTUIEnrollTrainingViewControllerDelegate> _delegate;
	VTUIProximityEnrollTrainingView* _enrollTrainingView;
	VTUIProximityEnrollmentSuccessView* _successView;
	VTUIProximityEnrollmentSetupIntroView* _introView;
	VTUIProximityTryAgainView* _tryAgainView;
	unsigned long long _badMicRetryCount;
	unsigned long long _AVVCRetryCount;
	NSString* _spokenLanguageCode;
	VTUIProximityEnrollmentLanguageOptionsView* _languageOptionsView;
	UIView* _aboutTappedSender;
	AFMyriadCoordinator* _myriadCoordinator;
	VTUIAudioHintPlayer* _audioHintPlayer;
	long long _orientation;

}

@property (nonatomic,retain) CSVTUITrainingManager * trainingManager;                                       //@synthesize trainingManager=_trainingManager - In the implementation block
@property (nonatomic,readonly) unsigned long long sessionId;                                                //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) long long currentTrainingState;                                                //@synthesize currentTrainingState=_currentTrainingState - In the implementation block
@property (assign,nonatomic) BOOL hasRetriedTraining;                                                       //@synthesize hasRetriedTraining=_hasRetriedTraining - In the implementation block
@property (assign,nonatomic) float audioRms;                                                                //@synthesize audioRms=_audioRms - In the implementation block
@property (assign,nonatomic) BOOL skipToEndForTesting;                                                      //@synthesize skipToEndForTesting=_skipToEndForTesting - In the implementation block
@property (assign,nonatomic) BOOL skipToDataSharingForTesting;                                              //@synthesize skipToDataSharingForTesting=_skipToDataSharingForTesting - In the implementation block
@property (assign,nonatomic) BOOL disambiguateLanguageOptionsForTesting;                                    //@synthesize disambiguateLanguageOptionsForTesting=_disambiguateLanguageOptionsForTesting - In the implementation block
@property (nonatomic,retain) VTUIProximityEnrollTrainingView * enrollTrainingView;                          //@synthesize enrollTrainingView=_enrollTrainingView - In the implementation block
@property (nonatomic,retain) VTUIProximityEnrollmentSuccessView * successView;                              //@synthesize successView=_successView - In the implementation block
@property (nonatomic,retain) VTUIProximityEnrollmentSetupIntroView * introView;                             //@synthesize introView=_introView - In the implementation block
@property (nonatomic,retain) VTUIProximityTryAgainView * tryAgainView;                                      //@synthesize tryAgainView=_tryAgainView - In the implementation block
@property (assign,nonatomic) unsigned long long badMicRetryCount;                                           //@synthesize badMicRetryCount=_badMicRetryCount - In the implementation block
@property (assign,nonatomic) unsigned long long AVVCRetryCount;                                             //@synthesize AVVCRetryCount=_AVVCRetryCount - In the implementation block
@property (nonatomic,retain) NSString * spokenLanguageCode;                                                 //@synthesize spokenLanguageCode=_spokenLanguageCode - In the implementation block
@property (nonatomic,retain) VTUIProximityEnrollmentLanguageOptionsView * languageOptionsView;              //@synthesize languageOptionsView=_languageOptionsView - In the implementation block
@property (nonatomic,retain) UIView * aboutTappedSender;                                                    //@synthesize aboutTappedSender=_aboutTappedSender - In the implementation block
@property (assign,nonatomic) BOOL shouldTurnOnMyriad;                                                       //@synthesize shouldTurnOnMyriad=_shouldTurnOnMyriad - In the implementation block
@property (nonatomic,retain) AFMyriadCoordinator * myriadCoordinator;                                       //@synthesize myriadCoordinator=_myriadCoordinator - In the implementation block
@property (nonatomic,retain) NSArray * trainingPageInstructions;                                            //@synthesize trainingPageInstructions=_trainingPageInstructions - In the implementation block
@property (nonatomic,retain) VTUIAudioHintPlayer * audioHintPlayer;                                         //@synthesize audioHintPlayer=_audioHintPlayer - In the implementation block
@property (assign,nonatomic) long long orientation;                                                         //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic,__weak) id<VTUIEnrollTrainingViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<VTUIEnrollTrainingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VTUIEnrollTrainingViewControllerDelegate>)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(void)finish:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(float)audioLevelForFlamesView:(id)arg1 ;
-(unsigned long long)sessionId;
-(void)siriDataSharingOptInRequestsDismissalFromPresenter:(id)arg1 ;
-(void)siriDataSharingOptInViewDismissButtonTappedFromPresenter:(id)arg1 ;
-(void)_resignActive;
-(void)shouldContinue:(id)arg1 ;
-(void)shouldAbortAnotherDeviceBetter:(id)arg1 ;
-(void)_becomeActive;
-(void)_didEnterBackground;
-(void)_dismiss:(id)arg1 ;
-(void)_resetIdleTimer;
-(void)siriLanguageSpokenLanguageCodeDidChange:(id)arg1 ;
-(NSString *)spokenLanguageCode;
-(void)VTUITrainingManagerFeedLevel:(float)arg1 ;
-(void)VTUITrainingManagerStopListening;
-(CSVTUITrainingManager *)trainingManager;
-(void)_setLanguageOptionsAndContinue:(id)arg1 ;
-(void)_continueFromIntro:(id)arg1 ;
-(void)_setupMode;
-(BOOL)_isTrainingInProgress;
-(void)_cleanupTrainingManagerWithCompletion:(/*^block*/id)arg1 ;
-(void)_checkForPHSCloudDataIfNecessary:(id)arg1 ;
-(void)_setupTrainingStates;
-(void)_setupEnrollTrainingView;
-(void)_showEnrollmentSuccessView;
-(BOOL)_shouldShowSiriDataSharingOptInView;
-(void)_stopGLDrawing;
-(void)_resumeGLDrawing;
-(void)_startEnrollment;
-(void)_showTrainingInstruction:(long long)arg1 afterDelay:(double)arg2 isRetry:(BOOL)arg3 animate:(BOOL)arg4 ;
-(void)_resetTrainingManager;
-(VTUIAudioHintPlayer *)audioHintPlayer;
-(void)_resetEnrollment;
-(void)_showBadMicAlertCompletion:(/*^block*/id)arg1 ;
-(void)skipTraining:(id)arg1 ;
-(void)_showUnsupportedLocaleAlertCompletion:(/*^block*/id)arg1 ;
-(void)_finishSiriSetup:(id)arg1 ;
-(void)skipAssistant:(id)arg1 ;
-(void)_logAggdCount:(long long)arg1 forKey:(id)arg2 ;
-(BOOL)_siriLanguageIsIncompatibleWithPairedWatch;
-(BOOL)_shouldSpeakAudioHint;
-(BOOL)_isLocaleSupported:(id)arg1 ;
-(void)_showUnsupportedLocaleAlert;
-(void)_showIntroView;
-(void)_setPHSEnrollmentPrefEnabled:(BOOL)arg1 ;
-(void)_hideInstruction;
-(void)_createTrainingManagerIfNeeded;
-(void)_showInstruction:(long long)arg1 isRetry:(BOOL)arg2 ;
-(void)_logAggdScalar:(long long)arg1 forKey:(id)arg2 ;
-(void)_updatePageNumberForInstruction:(long long)arg1 ;
-(long long)currentTrainingState;
-(void)_showStatusMessage:(id)arg1 afterDelay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAudioRms:(float)arg1 ;
-(void)_handleTrainingResultForNonRetryablePhraseWithStatus:(int)arg1 ;
-(void)setHasRetriedTraining:(BOOL)arg1 ;
-(void)_handleTrainingResultForRetryablePhraseWithStatus:(int)arg1 shouldShowCheckMark:(BOOL)arg2 ;
-(long long)interpretSessionManagerStatus:(int)arg1 forInstruction:(long long)arg2 ;
-(void)_cleanupTrainingManagerWithCompletion:(/*^block*/id)arg1 status:(long long)arg2 ;
-(unsigned long long)badMicRetryCount;
-(void)_retryAfterBadMicAlert;
-(void)_advanceState;
-(void)_showResultMark:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_retryInstruction:(BOOL)arg1 ;
-(id)interpretAudioSource:(unsigned long long)arg1 ;
-(NSArray *)trainingPageInstructions;
-(id)_getSetupModeString;
-(void)_updateFlamesForStatus:(long long)arg1 ;
-(void)_cleanupHelper;
-(void)_setAssistantEnabled:(BOOL)arg1 ;
-(void)_continueFromLanguageOptions:(id)arg1 ;
-(void)_warnForLanguageCompatibilityIfNecessary:(/*^block*/id)arg1 ;
-(BOOL)_hasPHSCloudDataForSpokenLanguage;
-(void)_startTraining;
-(void)_presentRadarView;
-(void)VTUITrainingManagerAudioSessionTerminatedInStatus:(int)arg1 ;
-(void)aboutTapped:(id)arg1 ;
-(void)debugController:(id)arg1 stateDidChangeWithAddViews:(id)arg2 ;
-(id)presentedViewControllerForDebugController;
-(void)debugController:(id)arg1 wantsPresentViewController:(id)arg2 ;
-(void)debugController:(id)arg1 wantsDismissViewController:(id)arg2 ;
-(void)getScreenshotImageForDebugController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)debugController:(id)arg1 openURL:(id)arg2 ;
-(void)_showBadMicAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)_clearAggdScalar:(id)arg1 ;
-(void)cancelTraining;
-(VTUIProximityEnrollTrainingView *)enrollTrainingView;
-(void)setEnrollTrainingView:(VTUIProximityEnrollTrainingView *)arg1 ;
-(void)setTrainingManager:(CSVTUITrainingManager *)arg1 ;
-(void)setCurrentTrainingState:(long long)arg1 ;
-(BOOL)hasRetriedTraining;
-(float)audioRms;
-(BOOL)skipToEndForTesting;
-(void)setSkipToEndForTesting:(BOOL)arg1 ;
-(BOOL)disambiguateLanguageOptionsForTesting;
-(void)setDisambiguateLanguageOptionsForTesting:(BOOL)arg1 ;
-(VTUIProximityEnrollmentSuccessView *)successView;
-(void)setSuccessView:(VTUIProximityEnrollmentSuccessView *)arg1 ;
-(VTUIProximityEnrollmentSetupIntroView *)introView;
-(void)setIntroView:(VTUIProximityEnrollmentSetupIntroView *)arg1 ;
-(void)setBadMicRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)AVVCRetryCount;
-(void)setAVVCRetryCount:(unsigned long long)arg1 ;
-(void)setSpokenLanguageCode:(NSString *)arg1 ;
-(VTUIProximityEnrollmentLanguageOptionsView *)languageOptionsView;
-(void)setLanguageOptionsView:(VTUIProximityEnrollmentLanguageOptionsView *)arg1 ;
-(UIView *)aboutTappedSender;
-(void)setAboutTappedSender:(UIView *)arg1 ;
-(BOOL)shouldTurnOnMyriad;
-(void)setShouldTurnOnMyriad:(BOOL)arg1 ;
-(AFMyriadCoordinator *)myriadCoordinator;
-(void)setMyriadCoordinator:(AFMyriadCoordinator *)arg1 ;
-(void)setTrainingPageInstructions:(NSArray *)arg1 ;
-(void)setAudioHintPlayer:(VTUIAudioHintPlayer *)arg1 ;
-(void)_triggerEndpoint:(id)arg1 ;
-(void)_showSiriDataSharingOptInView;
-(void)_updateCurrentConstraintsToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_resumeTraining;
-(void)_continueFromRetry:(id)arg1 ;
-(VTUIProximityTryAgainView *)tryAgainView;
-(void)setTryAgainView:(VTUIProximityTryAgainView *)arg1 ;
-(void)setupNavigationBarStyleForAppearing:(BOOL)arg1 ;
-(BOOL)skipToDataSharingForTesting;
-(void)setSkipToDataSharingForTesting:(BOOL)arg1 ;
@end

