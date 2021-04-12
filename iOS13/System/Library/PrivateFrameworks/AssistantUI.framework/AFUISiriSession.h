/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <libobjc.A.dylib/AFAssistantUIService.h>
#import <libobjc.A.dylib/AFSpeechDelegate.h>
#import <libobjc.A.dylib/AFUIStateMachineDelegate.h>
#import <libobjc.A.dylib/AFUISpeechSynthesisLocalDelegate.h>
#import <libobjc.A.dylib/AFUISiriSession.h>

@protocol AFUISiriSession <NSObject>
@required
-(void)end;
-(void)setLockState:(unsigned long long)arg1;
-(void)preheat;
-(void)resumeInterruptedAudioPlaybackIfNeeded;
-(void)rollbackClearContext;
-(void)clearContext;
-(void)telephonyRequestCompleted;
-(void)forceAudioSessionActive;
-(void)forceAudioSessionInactive;
-(void)setCarDNDActive:(BOOL)arg1;
-(void)recordUIMetrics:(id)arg1;
-(void)sendReplyCommand:(id)arg1;
-(void)setAlertContext;
-(void)setApplicationContext;
-(void)setDeviceInStarkMode:(BOOL)arg1;
-(void)startRequestWithOptions:(id)arg1;
-(void)stopRequestWithOptions:(id)arg1;
-(void)resetContextTypes:(long long)arg1;
-(void)forceAudioSessionActiveForReason:(long long)arg1;
-(void)startRequestWithOptions:(id)arg1 completion:(/*^block*/id)arg2;
-(void)updateRequestOptions:(id)arg1;
-(void)endForReason:(long long)arg1;
-(void)stopRecordingSpeech;
-(void)cancelSpeechRequest;
-(void)startCorrectedRequestWithText:(id)arg1 correctionIdentifier:(id)arg2 userSelectionResults:(id)arg3;
-(void)performAceCommand:(id)arg1 conflictHandler:(/*^block*/id)arg2;
-(void)performAceCommand:(id)arg1;
-(void)siriUIDidPresentDynamicSnippetWithInfo:(id)arg1;
-(void)resultDidChangeForAceCommand:(id)arg1;
-(void)resultDidChangeForAceCommand:(id)arg1 completion:(/*^block*/id)arg2;
-(void)requestDidPresentViewForUICommand:(id)arg1;
-(void)requestDidPresentViewForErrorCommand:(id)arg1;
-(void)recordRequestMetricEvent:(id)arg1 withTimestamp:(double)arg2;
-(void)recordMetricsContext:(id)arg1 forDisambiguatedAppWIthBundleIdentifier:(id)arg2;
-(void)audioRoutePickerWillShow;
-(void)audioRoutePickerWillDismiss;

@end


@protocol OS_dispatch_queue, AFUISiriSessionDelegate, AFUISiriSessionLocalDataSource, AFUISiriSessionLocalDelegate, OS_dispatch_group;
@class NSObject, AFUIStateMachine, AFUISpeechSynthesis, AFSpeechSynthesisRecord, NSMutableSet, AFConnection, AFSettingsConnection, SCTAgentConnection, AFUISiriSessionInfo, NSArray, AFAnalyticsTurnBasedInstrumentationContext, NSString;

@interface AFUISiriSession : NSObject <AFAssistantUIService, AFSpeechDelegate, AFUIStateMachineDelegate, AFUISpeechSynthesisLocalDelegate, AFUISiriSession> {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	BOOL _currentRequestDidPresent;
	AFUIStateMachine* _stateMachine;
	AFUISpeechSynthesis* _speechSynthesis;
	AFSpeechSynthesisRecord* _lastSpeechSynthesisRecord;
	NSMutableSet* _speechRequestGroupGraveyard;
	AFConnection* _connection;
	/*^block*/id _continuePendingRequest;
	BOOL _sendContextBeforeContinuingSpeechRequest;
	AFSettingsConnection* _settingsConnection;
	BOOL _isDeviceInStarkMode;
	SCTAgentConnection* _testingConnection;
	BOOL _eyesFree;
	BOOL _isProcessingAcousticIdRequest;
	id<AFUISiriSessionDelegate> _delegate;
	id<AFUISiriSessionLocalDataSource> _localDataSource;
	id<AFUISiriSessionLocalDelegate> _localDelegate;
	AFUISiriSessionInfo* _siriSessionInfo;
	NSArray* _sessionDelegateContext;
	NSArray* _directActionContext;
	NSObject*<OS_dispatch_group> _currentSpeechRequestGroup;
	AFAnalyticsTurnBasedInstrumentationContext* _instrumentationTurnContext;

}

@property (nonatomic,retain) NSArray * sessionDelegateContext;                                                                                                                               //@synthesize sessionDelegateContext=_sessionDelegateContext - In the implementation block
@property (nonatomic,retain) NSArray * directActionContext;                                                                                                                                  //@synthesize directActionContext=_directActionContext - In the implementation block
@property (getter=_connection,nonatomic,readonly) AFConnection * connection; 
@property (setter=_setCurrentSpeechRequestGroup:,getter=_currentSpeechRequestGroup,nonatomic,retain) NSObject*<OS_dispatch_group> currentSpeechRequestGroup;                                 //@synthesize currentSpeechRequestGroup=_currentSpeechRequestGroup - In the implementation block
@property (setter=_setInstrumentationTurnContext:,getter=_instrumentationTurnContext,nonatomic,retain) AFAnalyticsTurnBasedInstrumentationContext * instrumentationTurnContext;              //@synthesize instrumentationTurnContext=_instrumentationTurnContext - In the implementation block
@property (nonatomic,retain) id<AFUISiriSessionDelegate> delegate;                                                                                                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriSessionLocalDataSource> localDataSource;                                                                                                      //@synthesize localDataSource=_localDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriSessionLocalDelegate> localDelegate;                                                                                                          //@synthesize localDelegate=_localDelegate - In the implementation block
@property (assign,getter=isEyesFree,nonatomic) BOOL eyesFree;                                                                                                                                //@synthesize eyesFree=_eyesFree - In the implementation block
@property (nonatomic,readonly) BOOL isProcessingAcousticIdRequest;                                                                                                                           //@synthesize isProcessingAcousticIdRequest=_isProcessingAcousticIdRequest - In the implementation block
@property (nonatomic,retain) AFUISiriSessionInfo * siriSessionInfo;                                                                                                                          //@synthesize siriSessionInfo=_siriSessionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)availabilityState;
+(void)beginMonitoringSiriAvailability;
+(id)effectiveCoreLocationBundle;
-(void)dealloc;
-(id)_connection;
-(id<AFUISiriSessionDelegate>)delegate;
-(void)setDelegate:(id<AFUISiriSessionDelegate>)arg1 ;
-(long long)_state;
-(void)end;
-(void)setLockState:(unsigned long long)arg1 ;
-(id)_stateMachine;
-(void)preheat;
-(void)_localAuthenticationUIPresented;
-(BOOL)isListening;
-(void)assistantConnection:(id)arg1 startUIRequestWithText:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)assistantConnection:(id)arg1 receivedCommand:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)assistantConnectionDidChangeAudioRecordingPower:(id)arg1 ;
-(void)assistantConnectionRequestWillStart:(id)arg1 ;
-(void)assistantConnection:(id)arg1 requestFailedWithError:(id)arg2 requestClass:(id)arg3 ;
-(void)assistantConnectionRequestFinished:(id)arg1 ;
-(void)assistantConnection:(id)arg1 shouldSpeak:(BOOL)arg2 ;
-(void)assistantConnection:(id)arg1 didChangeAudioSessionID:(unsigned)arg2 ;
-(void)assistantConnectionWillStartAcousticIDRequest:(id)arg1 ;
-(void)assistantConnectionDidDetectMusic:(id)arg1 ;
-(void)assistantConnection:(id)arg1 didFinishAcousticIDRequestWithSuccess:(BOOL)arg2 ;
-(void)assistantConnection:(id)arg1 wantsToCacheImage:(id)arg2 ;
-(void)assistantConnection:(id)arg1 extensionRequestWillStartForApplication:(id)arg2 ;
-(void)assistantConnection:(id)arg1 extensionRequestFinishedForApplication:(id)arg2 error:(id)arg3 ;
-(void)assistantConnectionAudioSessionDidBeginInterruption:(id)arg1 ;
-(void)assistantConnection:(id)arg1 willProcessStartPlayback:(long long)arg2 intent:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)assistantConnection:(id)arg1 startPlaybackDidFail:(long long)arg2 ;
-(void)assistantConnectionSpeechRecordingWillBegin:(id)arg1 ;
-(void)assistantConnection:(id)arg1 speechRecordingDidBeginOnAVRecordRoute:(id)arg2 audioSessionID:(unsigned)arg3 ;
-(void)assistantConnection:(id)arg1 speechRecordingDidChangeAVRecordRoute:(id)arg2 ;
-(void)assistantConnectionSpeechRecordingDidDetectStartpoint:(id)arg1 ;
-(void)assistantConnection:(id)arg1 speechRecordingPerformTwoShotPromptWithType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)assistantConnectionSpeechRecordingDidEnd:(id)arg1 ;
-(void)assistantConnectionSpeechRecordingDidCancel:(id)arg1 ;
-(void)assistantConnection:(id)arg1 speechRecordingDidFail:(id)arg2 ;
-(void)assistantConnection:(id)arg1 speechRecognized:(id)arg2 ;
-(void)assistantConnection:(id)arg1 recognizedAdditionalSpeechInterpretation:(id)arg2 refId:(id)arg3 ;
-(void)assistantConnection:(id)arg1 recognitionUpdateWithPhrases:(id)arg2 utterances:(id)arg3 refId:(id)arg4 ;
-(void)assistantConnection:(id)arg1 speechRecognizedPartialResult:(id)arg2 ;
-(void)resumeInterruptedAudioPlaybackIfNeeded;
-(void)rollbackClearContext;
-(void)clearContext;
-(void)telephonyRequestCompleted;
-(void)forceAudioSessionActive;
-(void)forceAudioSessionInactive;
-(void)setCarDNDActive:(BOOL)arg1 ;
-(void)recordUIMetrics:(id)arg1 ;
-(void)sendReplyCommand:(id)arg1 ;
-(void)assistantConnection:(id)arg1 openURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)assistantConnectionDismissAssistant:(id)arg1 ;
-(BOOL)_hasActiveRequest;
-(BOOL)isEyesFree;
-(void)setEyesFree:(BOOL)arg1 ;
-(void)setAlertContext;
-(void)setApplicationContext;
-(void)setDeviceInStarkMode:(BOOL)arg1 ;
-(void)startRequestWithOptions:(id)arg1 ;
-(void)stopRequestWithOptions:(id)arg1 ;
-(id)underlyingConnection;
-(void)resetContextTypes:(long long)arg1 ;
-(void)_requestWillStart;
-(void)forceAudioSessionActiveForReason:(long long)arg1 ;
-(void)startRequestWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateRequestOptions:(id)arg1 ;
-(void)endForReason:(long long)arg1 ;
-(void)stopRecordingSpeech;
-(void)cancelSpeechRequest;
-(void)startCorrectedRequestWithText:(id)arg1 correctionIdentifier:(id)arg2 userSelectionResults:(id)arg3 ;
-(void)performAceCommand:(id)arg1 conflictHandler:(/*^block*/id)arg2 ;
-(void)performAceCommand:(id)arg1 ;
-(void)siriUIDidPresentDynamicSnippetWithInfo:(id)arg1 ;
-(void)resultDidChangeForAceCommand:(id)arg1 ;
-(void)resultDidChangeForAceCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestDidPresentViewForUICommand:(id)arg1 ;
-(void)requestDidPresentViewForErrorCommand:(id)arg1 ;
-(void)recordRequestMetricEvent:(id)arg1 withTimestamp:(double)arg2 ;
-(void)recordMetricsContext:(id)arg1 forDisambiguatedAppWIthBundleIdentifier:(id)arg2 ;
-(void)audioRoutePickerWillShow;
-(void)audioRoutePickerWillDismiss;
-(void)_outputVoiceDidChange:(id)arg1 ;
-(void)_siriNetworkAvailabilityDidChange:(id)arg1 ;
-(void)_discardConnectionForReason:(long long)arg1 ;
-(void)_performBlockWithDelegate:(/*^block*/id)arg1 ;
-(void)_setInstrumentationTurnContext:(id)arg1 ;
-(int)_mapInvocationSource:(long long)arg1 ;
-(id)_instrumentationTurnContext;
-(void)_updateActiveAccount:(id)arg1 withNumberOfActiveAccounts:(unsigned long long)arg2 ;
-(void)_startDirectActionRequestWithString:(id)arg1 appID:(id)arg2 withContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_startSpeechRequestWithSpeechRequestOptions:(id)arg1 isInitialBringUp:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_startRequestWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startSpeechRequestWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startContinuityRequestWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startSpeechPronunciationRequestWithContext:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_startRequestWithText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startSpeechRequestWithSpeechFileAtURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_discardCurrentSpeechGroup;
-(void)_setCurrentSpeechRequestGroup:(id)arg1 ;
-(id)_currentSpeechRequestGroup;
-(void)_startRequestWithFinalOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_preparedSpeechRequestWithRequestOptions:(id)arg1 ;
-(void)setLocalDelegate:(id<AFUISiriSessionLocalDelegate>)arg1 ;
-(/*^block*/id)safeWrapResponseCompletion:(/*^block*/id)arg1 ;
-(id)_setRefIdForAllViewsInAddViews:(id)arg1 ;
-(void)_handleUnlockDeviceCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleRequestUpdateViewsCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performPunchoutCommand:(id)arg1 delegate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performTransitionForEvent:(long long)arg1 ;
-(void)_requestDidFinishWithError:(id)arg1 ;
-(void)_updateAssistantVersion:(id)arg1 ;
-(id)speechSynthesis;
-(void)_continuePendingSpeechRequest;
-(void)_requestContextWithCompletion:(/*^block*/id)arg1 ;
-(float)recordingPowerLevel;
-(void)setDirectActionContext:(NSArray *)arg1 ;
-(void)setApplicationContextForDirectAction:(BOOL)arg1 ;
-(void)_startRequestWithBlock:(/*^block*/id)arg1 ;
-(id<AFUISiriSessionLocalDataSource>)localDataSource;
-(NSArray *)directActionContext;
-(NSArray *)sessionDelegateContext;
-(id<AFUISiriSessionLocalDelegate>)localDelegate;
-(void)performAceCommands:(id)arg1 ;
-(void)_performAceCommand:(id)arg1 forRequestUpdateViewsCommand:(id)arg2 afterDelay:(double)arg3 ;
-(void)_updateActiveAccount:(id)arg1 ;
-(void)stateMachine:(id)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3 ;
-(id)stateMachine:(id)arg1 descriptionForEvent:(long long)arg2 ;
-(void)stopCurrentRecordingForSpeechSynthesis:(id)arg1 ;
-(void)speechSynthesis:(id)arg1 prepareForSpeakingWithOptions:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)speechSynthesisConnectionIsRecording:(id)arg1 ;
-(void)speechSynthesisDidFinish:(id)arg1 ;
-(id)initWithConnection:(id)arg1 delegateQueue:(id)arg2 ;
-(void)setLocalDataSource:(id<AFUISiriSessionLocalDataSource>)arg1 ;
-(void)assistantConnection:(id)arg1 didLoadAssistant:(id)arg2 ;
-(BOOL)isPreventingActivationGesture;
-(void)_applePaySheetPresented;
-(void)settingsConnectionDidChangeActiveAccount:(id)arg1 ;
-(BOOL)isProcessingAcousticIdRequest;
-(AFUISiriSessionInfo *)siriSessionInfo;
-(void)setSiriSessionInfo:(AFUISiriSessionInfo *)arg1 ;
-(void)setSessionDelegateContext:(NSArray *)arg1 ;
@end
