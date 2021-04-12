/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VTUIEnrollTrainingViewDelegate.h>
#import <libobjc.A.dylib/CSVTUITrainingManagerDelegate.h>
#import <libobjc.A.dylib/SUICFlamesViewDelegate.h>
#import <libobjc.A.dylib/VTUIEnrollmentSetupIntroViewDelegate.h>
#import <libobjc.A.dylib/AFUIDebugControllerDelegate.h>
#import <libobjc.A.dylib/AFUISiriLanguageDelegate.h>
#import <libobjc.A.dylib/VTUISiriDataSharingOptInPresentationDelegate.h>
#import <libobjc.A.dylib/AFMyriadDelegate.h>

@protocol AFUIDebugControlling, OS_dispatch_queue, VTUIEnrollTrainingViewControllerDelegate;
@class NSArray, CSVTUITrainingManager, AFUISiriLanguage, NSObject, UIView, VTUISiriDataSharingOptInPresenter, VTUIEnrollTrainingView, VTUIEnrollmentSuccessView, VTUIEnrollmentSetupIntroView, NSString, VTUIEnrollmentLanguageOptionsView, AFMyriadCoordinator, VTUIAudioHintPlayer;

@interface VTUIEnrollTrainingViewController : UIViewController <VTUIEnrollTrainingViewDelegate, CSVTUITrainingManagerDelegate, SUICFlamesViewDelegate, VTUIEnrollmentSetupIntroViewDelegate, AFUIDebugControllerDelegate, AFUISiriLanguageDelegate, VTUISiriDataSharingOptInPresentationDelegate, AFMyriadDelegate> {

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
	long long _enrollmentMode;
	UIView* _siriDataSharingOptInView;
	VTUISiriDataSharingOptInPresenter* _siriDataSharingOptInPresenter;
	BOOL _hasSkippedTraining;
	BOOL _skipToEndForTesting;
	BOOL _skipToSiriDataSharingOptInForTesting;
	BOOL _disambiguateLanguageOptionsForTesting;
	BOOL _shouldTurnOnMyriad;
	id<VTUIEnrollTrainingViewControllerDelegate> _delegate;
	VTUIEnrollTrainingView* _enrollTrainingView;
	VTUIEnrollmentSuccessView* _successView;
	VTUIEnrollmentSetupIntroView* _introView;
	unsigned long long _badMicRetryCount;
	unsigned long long _AVVCRetryCount;
	NSString* _spokenLanguageCode;
	VTUIEnrollmentLanguageOptionsView* _languageOptionsView;
	UIView* _aboutTappedSender;
	AFMyriadCoordinator* _myriadCoordinator;
	VTUIAudioHintPlayer* _audioHintPlayer;

}

@property (nonatomic,retain) VTUIEnrollTrainingView * enrollTrainingView;                               //@synthesize enrollTrainingView=_enrollTrainingView - In the implementation block
@property (nonatomic,retain) CSVTUITrainingManager * trainingManager;                                   //@synthesize trainingManager=_trainingManager - In the implementation block
@property (nonatomic,readonly) unsigned long long sessionId;                                            //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) long long currentTrainingState;                                            //@synthesize currentTrainingState=_currentTrainingState - In the implementation block
@property (assign,nonatomic) BOOL hasRetriedTraining;                                                   //@synthesize hasRetriedTraining=_hasRetriedTraining - In the implementation block
@property (assign,nonatomic) float audioRms;                                                            //@synthesize audioRms=_audioRms - In the implementation block
@property (assign,nonatomic) BOOL skipToEndForTesting;                                                  //@synthesize skipToEndForTesting=_skipToEndForTesting - In the implementation block
@property (assign,nonatomic) BOOL skipToSiriDataSharingOptInForTesting;                                 //@synthesize skipToSiriDataSharingOptInForTesting=_skipToSiriDataSharingOptInForTesting - In the implementation block
@property (assign,nonatomic) BOOL disambiguateLanguageOptionsForTesting;                                //@synthesize disambiguateLanguageOptionsForTesting=_disambiguateLanguageOptionsForTesting - In the implementation block
@property (nonatomic,retain) VTUIEnrollmentSuccessView * successView;                                   //@synthesize successView=_successView - In the implementation block
@property (nonatomic,retain) VTUIEnrollmentSetupIntroView * introView;                                  //@synthesize introView=_introView - In the implementation block
@property (assign,nonatomic) unsigned long long badMicRetryCount;                                       //@synthesize badMicRetryCount=_badMicRetryCount - In the implementation block
@property (assign,nonatomic) unsigned long long AVVCRetryCount;                                         //@synthesize AVVCRetryCount=_AVVCRetryCount - In the implementation block
@property (nonatomic,retain) NSString * spokenLanguageCode;                                             //@synthesize spokenLanguageCode=_spokenLanguageCode - In the implementation block
@property (nonatomic,retain) VTUIEnrollmentLanguageOptionsView * languageOptionsView;                   //@synthesize languageOptionsView=_languageOptionsView - In the implementation block
@property (nonatomic,retain) UIView * aboutTappedSender;                                                //@synthesize aboutTappedSender=_aboutTappedSender - In the implementation block
@property (assign,nonatomic) BOOL shouldTurnOnMyriad;                                                   //@synthesize shouldTurnOnMyriad=_shouldTurnOnMyriad - In the implementation block
@property (nonatomic,retain) AFMyriadCoordinator * myriadCoordinator;                                   //@synthesize myriadCoordinator=_myriadCoordinator - In the implementation block
@property (nonatomic,retain) NSArray * trainingPageInstructions;                                        //@synthesize trainingPageInstructions=_trainingPageInstructions - In the implementation block
@property (nonatomic,retain) VTUIAudioHintPlayer * audioHintPlayer;                                     //@synthesize audioHintPlayer=_audioHintPlayer - In the implementation block
@property (assign,nonatomic,__weak) id<VTUIEnrollTrainingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<VTUIEnrollTrainingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VTUIEnrollTrainingViewControllerDelegate>)arg1 ;
-(void)finish:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(float)audioLevelForFlamesView:(id)arg1 ;
-(unsigned long long)sessionId;
-(void)siriDataSharingOptInRequestsDismissalFromPresenter:(id)arg1 ;
-(void)_resignActive;
-(void)shouldContinue:(id)arg1 ;
-(void)shouldAbortAnotherDeviceBetter:(id)arg1 ;
-(void)_becomeActive;
-(void)_willEnterForeground;
-(void)_didEnterBackground;
-(id)init:(long long)arg1 ;
-(void)_resetIdleTimer;
-(void)_initialSetup;
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
-(void)_showSiriDataSharingOptIn;
-(void)_stopGLDrawing;
-(void)_resumeGLDrawing;
-(void)_startEnrollment;
-(void)_showTrainingInstruction:(long long)arg1 afterDelay:(double)arg2 isRetry:(BOOL)arg3 animate:(BOOL)arg4 ;
-(void)_resetTrainingManager;
-(VTUIAudioHintPlayer *)audioHintPlayer;
-(void)_resetEnrollment;
-(void)_showBadMicAlertCompletion:(/*^block*/id)arg1 ;
-(void)_resumeTraining:(BOOL)arg1 ;
-(void)skipTraining:(id)arg1 ;
-(void)_showUnsupportedLocaleAlertCompletion:(/*^block*/id)arg1 ;
-(void)_finishSiriSetup:(id)arg1 ;
-(void)skipAssistant:(id)arg1 ;
-(void)_logAggdCount:(long long)arg1 forKey:(id)arg2 ;
-(BOOL)_siriLanguageIsIncompatibleWithPairedWatch;
-(BOOL)_shouldSpeakAudioHint;
-(BOOL)_isLocaleSupported:(id)arg1 ;
-(void)_showUnsupportedLocaleAlert;
-(void)_tearDownDataSharingViews;
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
-(void)_finishFromLanguageOptions:(id)arg1 ;
-(void)_continueFromLanguageOptions:(id)arg1 ;
-(void)_warnForLanguageCompatibilityIfNecessary:(/*^block*/id)arg1 ;
-(BOOL)_hasPHSCloudDataForSpokenLanguage;
-(void)_startTraining;
-(void)_showRadarExitButton;
-(void)_presentRadarView;
-(void)enrollTrainingViewRadarButtonPressed:(id)arg1 ;
-(void)enrollTrainingViewEndpointButtonPressed:(id)arg1 ;
-(void)enrollTrainingViewSkipTrainingButtonPressed:(id)arg1 ;
-(void)VTUITrainingManagerAudioSessionTerminatedInStatus:(int)arg1 ;
-(void)aboutTapped:(id)arg1 ;
-(void)debugController:(id)arg1 stateDidChangeWithAddViews:(id)arg2 ;
-(id)presentedViewControllerForDebugController;
-(void)debugController:(id)arg1 wantsPresentViewController:(id)arg2 ;
-(void)debugController:(id)arg1 wantsDismissViewController:(id)arg2 ;
-(void)getScreenshotImageForDebugController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)debugController:(id)arg1 openURL:(id)arg2 ;
-(void)_showBadMicAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)restartFromIntroView;
-(void)_clearAggdScalar:(id)arg1 ;
-(void)cancelTraining;
-(VTUIEnrollTrainingView *)enrollTrainingView;
-(void)setEnrollTrainingView:(VTUIEnrollTrainingView *)arg1 ;
-(void)setTrainingManager:(CSVTUITrainingManager *)arg1 ;
-(void)setCurrentTrainingState:(long long)arg1 ;
-(BOOL)hasRetriedTraining;
-(float)audioRms;
-(BOOL)skipToEndForTesting;
-(void)setSkipToEndForTesting:(BOOL)arg1 ;
-(BOOL)skipToSiriDataSharingOptInForTesting;
-(void)setSkipToSiriDataSharingOptInForTesting:(BOOL)arg1 ;
-(BOOL)disambiguateLanguageOptionsForTesting;
-(void)setDisambiguateLanguageOptionsForTesting:(BOOL)arg1 ;
-(VTUIEnrollmentSuccessView *)successView;
-(void)setSuccessView:(VTUIEnrollmentSuccessView *)arg1 ;
-(VTUIEnrollmentSetupIntroView *)introView;
-(void)setIntroView:(VTUIEnrollmentSetupIntroView *)arg1 ;
-(void)setBadMicRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)AVVCRetryCount;
-(void)setAVVCRetryCount:(unsigned long long)arg1 ;
-(void)setSpokenLanguageCode:(NSString *)arg1 ;
-(VTUIEnrollmentLanguageOptionsView *)languageOptionsView;
-(void)setLanguageOptionsView:(VTUIEnrollmentLanguageOptionsView *)arg1 ;
-(UIView *)aboutTappedSender;
-(void)setAboutTappedSender:(UIView *)arg1 ;
-(BOOL)shouldTurnOnMyriad;
-(void)setShouldTurnOnMyriad:(BOOL)arg1 ;
-(AFMyriadCoordinator *)myriadCoordinator;
-(void)setMyriadCoordinator:(AFMyriadCoordinator *)arg1 ;
-(void)setTrainingPageInstructions:(NSArray *)arg1 ;
-(void)setAudioHintPlayer:(VTUIAudioHintPlayer *)arg1 ;
@end

