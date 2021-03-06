/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/AFAudioPowerUpdaterDelegate.h>
#import <libobjc.A.dylib/AFAccessibilityListening.h>
#import <libobjc.A.dylib/AFDeviceRingerSwitchListening.h>
#import <libobjc.A.dylib/AFInterstitialProviderDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group, AFAssistantUIService, AFSpeechDelegate;
@class NSXPCConnection, NSObject, NSString, AFCallSiteInfo, NSArray, AFClockAlarmSnapshot, AFClockTimerSnapshot, NSUUID, AFWatchdogTimer, AFOneArgumentSafetyBlock, NSMutableDictionary, AFAudioPowerUpdater, AFClientConfiguration, AFInterstitialProvider, AFQueue, NSError, USTAgentConnection;

@interface AFConnection : NSObject <NSXPCListenerDelegate, AFAudioPowerUpdaterDelegate, AFAccessibilityListening, AFDeviceRingerSwitchListening, AFInterstitialProviderDelegate> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _targetQueue;
	NSString* _outstandingRequestClass;
	void* _clientID;
	AFCallSiteInfo* _initiationCallSiteInfo;
	NSArray* _cachedBulletins;
	AFClockAlarmSnapshot* _cachedClockAlarmSnapshot;
	AFClockTimerSnapshot* _cachedClockTimerSnapshot;
	NSUUID* _activeRequestUUID;
	long long _activeRequestType;
	long long _activeRequestUsefulUserResultType;
	AFWatchdogTimer* _requestTimeoutTimer;
	AFOneArgumentSafetyBlock* _requestCompletion;
	long long _activeRequestActivationEvent;
	long long _activeRequestSpeechEvent;
	BOOL _activeRequestHasSpeechRecognition;
	BOOL _activeRequestIsDucking;
	BOOL _activeRequestIsTwoShot;
	double _activeRequestBeginTime;
	unsigned long long _activeRequestSpeechEndHostTime;
	unsigned long long _activeRequestNumberOfPresentedInterstitials;
	double _activeRequestStartSpeechTimeRequested;
	double _activeRequestStartSpeechTimeAPICalled;
	double _activeRequestStopSpeechTimeRequested;
	double _activeRequestStopSpeechTimeAPICalled;
	double _activeRequestSpeechRecordingEndTimeInterval;
	double _activeRequestSpeechRecognitionTimeInterval;
	double _activeRequestInitialInterstitialBeginTimeInterval;
	NSMutableDictionary* _replyHandlerForAceId;
	unsigned _stateInSync : 1;
	unsigned _shouldSpeak : 1;
	unsigned _isCapturingSpeech : 1;
	unsigned _hasOutstandingRequest : 1;
	unsigned _audioSessionID;
	NSString* _recordRoute;
	NSString* _playbackRoute;
	AFAudioPowerUpdater* _inputAudioPowerUpdater;
	AFClientConfiguration* _clientConfiguration;
	AFInterstitialProvider* _interstitialProvider;
	AFQueue* _interstitialCommandQueue;
	unsigned _clientConfigurationIsInSync : 1;
	unsigned _voiceOverIsActive : 1;
	NSError* _lastRetryError;
	unsigned long long _pendingSpeechRequestCounter;
	NSObject*<OS_dispatch_group> _speechCallbackGroup;
	USTAgentConnection* _testAgentConnection;
	id<AFAssistantUIService> _delegate;
	id<AFSpeechDelegate> _speechDelegate;

}

@property (assign,nonatomic,__weak) id<AFAssistantUIService> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<AFSpeechDelegate> speechDelegate;              //@synthesize speechDelegate=_speechDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isRecording; 
@property (nonatomic,readonly) BOOL hasActiveRequest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)isAvailable;
+(BOOL)userDataSyncNeeded;
+(void)defrost;
+(id)outputVoice;
+(void)beginMonitoringAvailability;
+(BOOL)siriIsSupportedForLanguageCode:(id)arg1 productName:(id)arg2 productVersion:(id)arg3 error:(id*)arg4 ;
+(id)currentLanguageCode;
+(BOOL)assistantIsSupported;
+(BOOL)assistantIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2 ;
+(BOOL)siriIsSupportedForLanguageCode:(id)arg1 deviceProductVersion:(id)arg2 error:(id*)arg3 ;
+(void)stopMonitoringAvailability;
-(BOOL)isRecording;
-(void)_tellSpeechDelegateRecordingDidEnd;
-(unsigned)audioSessionID;
-(void)clearContext;
-(void)cancelRequest;
-(id)_cachedBulletins;
-(id)_cachedClockAlarmSnapshot;
-(id)_cachedClockTimerSnapshot;
-(id)_activeRequestUUID;
-(id)init;
-(void)_checkAndSetIsCapturingSpeech:(BOOL)arg1 ;
-(BOOL)_startInputAudioPowerUpdatesWithXPCWrapper:(id)arg1 ;
-(id<AFAssistantUIService>)delegate;
-(void)requestBarrier:(/*^block*/id)arg1 ;
-(void)_tellSpeechDelegateRecordingDidCancel;
-(void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 isNarrowBand:(BOOL)arg2 ;
-(void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 ;
-(void)sendFeedbackToAppPreferencesPredictorForMetricsContext:(id)arg1 selectedBundleId:(id)arg2 ;
-(void)broadcastCommandDictionary:(id)arg1 ;
-(void)_barrier;
-(void)_clearAssistantInfoForAccountWithIdentifier:(id)arg1 ;
-(void)startUIRequest;
-(id)initWithTargetQueue:(id)arg1 ;
-(void)_dispatchCallbackGroupBlock:(/*^block*/id)arg1 ;
-(void)updateSpeechOptions:(id)arg1 ;
-(void)_updateState;
-(id)_testAgent;
-(void)setDelegate:(id<AFAssistantUIService>)arg1 ;
-(void)setApplicationContext:(id)arg1 ;
-(void)_destroyTestAgent;
-(void)_connectionFailedWithError:(id)arg1 ;
-(void)_scheduleRequestTimeoutForReason:(id)arg1 ;
-(void)_endInterstitialsForReason:(id)arg1 ;
-(void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2 speechRequestOptions:(id)arg3 requestInfo:(id)arg4 isBackgroundRequest:(BOOL)arg5 analyticsEventProvider:(/*^block*/id)arg6 ;
-(BOOL)shouldSpeak;
-(void)_willStartRequestWithSpeech:(BOOL)arg1 speechRequestOptions:(id)arg2 requestInfo:(id)arg3 analyticsEventProvider:(/*^block*/id)arg4 ;
-(void)_tellDelegateRequestWillStart;
-(void)_beginInterstitialsForReason:(id)arg1 ;
-(void)_cancelRequestTimeoutForReason:(id)arg1 ;
-(void)_enqueueInterstitialCommand:(id)arg1 ;
-(void)_dispatchCommand:(id)arg1 isInterstitial:(BOOL)arg2 interstitialPhase:(long long)arg3 interstitialDelay:(double)arg4 reply:(/*^block*/id)arg5 ;
-(void)_pauseRequestTimeoutForReason:(id)arg1 ;
-(void)reportIssueForType:(id)arg1 subtype:(id)arg2 context:(id)arg3 ;
-(void)_resumeRequestTimeoutForReason:(id)arg1 ;
-(void)_tellDelegateShouldSpeakChanged:(BOOL)arg1 ;
-(void)_willCompleteRequest;
-(void)_tellDelegateAudioSessionIDChanged:(unsigned)arg1 ;
-(void)_willFailRequestWithError:(id)arg1 ;
-(void)_requestDidEnd;
-(void)setAccessibilityState:(id)arg1 ;
-(void)_updateClientConfiguration;
-(void)_invokeRequestTimeoutForReason:(id)arg1 ;
-(void)_extendRequestTimeoutForReason:(id)arg1 ;
-(id)_clientService;
-(void)setDeviceRingerSwitchState:(long long)arg1 ;
-(void)_setAudioSessionID:(unsigned)arg1 ;
-(void)_setShouldSpeak:(BOOL)arg1 ;
-(void)_completeRequestWithUUID:(id)arg1 forReason:(long long)arg2 error:(id)arg3 ;
-(void)cancelRequestForReason:(long long)arg1 ;
-(void)_handleInterstitialPhase:(long long)arg1 fromProvider:(id)arg2 displayText:(id)arg3 speakableText:(id)arg4 expectedDelay:(double)arg5 context:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)_clientConfiguration;
-(void)_willCancelRequest;
-(id)_startRequestMetricSettings;
-(void)_stopInputAudioPowerUpdates;
-(void)_tellSpeechDelegateRecordingDidFail:(id)arg1 ;
-(void)_updateStateIfNotInSync;
-(void)reportIssueForError:(id)arg1 type:(long long)arg2 subtype:(id)arg3 context:(id)arg4 ;
-(void)_willEndSession;
-(void)preheatWithStyle:(long long)arg1 forOptions:(id)arg2 ;
-(id)_clientServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)boostedPreheatWithStyle:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)forceAudioSessionActiveWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)forceAudioSessionActiveWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)resumeInterruptedAudioPlaybackIfNeeded;
-(void)forceAudioSessionActiveWithOptions:(unsigned long long)arg1 reason:(long long)arg2 speechRequestOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)forceAudioSessionInactiveWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidate;
-(void)_setRecordRoute:(id)arg1 ;
-(void)didDismissUI;
-(void)setIsDeviceInStarkMode:(BOOL)arg1 ;
-(void)_startRequestWithInfo:(id)arg1 ;
-(void)_clearConnection;
-(void)_startRequestWithAceCommand:(id)arg1 turnIdentifier:(id)arg2 suppressAlert:(BOOL)arg3 ;
-(void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2 userSelectionResults:(id)arg3 turnIdentifier:(id)arg4 ;
-(void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2 speechRequestOptions:(id)arg3 requestInfo:(id)arg4 analyticsEventProvider:(/*^block*/id)arg5 ;
-(id)_metricContextValueForUseDeviceSpeakerForTTS:(long long)arg1 ;
-(/*^block*/id)startRecordingAndGetContinueBlockForPendingSpeechRequestWithOptions:(id)arg1 ;
-(void)willPresentUI;
-(void)reportIssueForError:(id)arg1 type:(long long)arg2 context:(id)arg3 ;
-(void)rollbackClearContext;
-(void)rollbackRequest;
-(void)sendGenericAceCommand:(id)arg1 turnIdentifier:(id)arg2 conflictHandler:(/*^block*/id)arg3 ;
-(void)getDeferredObjectsWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getRemoteClockTimerSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)willSetApplicationContextWithRefId:(id)arg1 ;
-(void)fetchAppicationContextForApplicationInfo:(id)arg1 supplementalContext:(id)arg2 refID:(id)arg3 ;
-(void)prepareForPhoneCall;
-(float)peakPower;
-(void)setOverriddenApplicationContext:(id)arg1 withContext:(id)arg2 ;
-(void)telephonyRequestCompleted;
-(void)willPresentUsefulUserResultWithType:(long long)arg1 forCommand:(id)arg2 ;
-(void)endUpdateOutputAudioPower;
-(void)_willPresentUsefulUserResultWithType:(long long)arg1 ;
-(void)stopAudioPlaybackRequest:(id)arg1 immediately:(BOOL)arg2 ;
-(void)stopAllAudioPlaybackRequests:(BOOL)arg1 ;
-(id)_connection;
-(void)updateSpeechSynthesisRecord:(id)arg1 ;
-(void)adviseSessionArbiterToContinueWithPreviousWinner:(BOOL)arg1 ;
-(void)_markIsTwoShot;
-(float)averagePower;
-(void)audioPowerUpdaterDidUpdate:(id)arg1 averagePower:(float)arg2 peakPower:(float)arg3 ;
-(void)accessibilityObserver:(id)arg1 stateDidChangeFrom:(id)arg2 to:(id)arg3 ;
-(void)deviceRingerObserver:(id)arg1 didChangeState:(long long)arg2 ;
-(void)_markIsDucking;
-(void)endSession;
-(void)interstitialProvider:(id)arg1 handlePhase:(long long)arg2 displayText:(id)arg3 speakableText:(id)arg4 expectedDelay:(double)arg5 context:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_startUIRequestWithText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)preheatWithStyle:(long long)arg1 ;
-(void)_startUIRequestWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleCommand:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_aceConnectionWillRetryOnError:(id)arg1 ;
-(void)_markSpeechRecognized;
-(void)_updateSpeechEndHostTime:(unsigned long long)arg1 ;
-(void)_tellDelegateWillStartAcousticIDRequest;
-(void)_tellDelegateDidDetectMusic;
-(void)_tellDelegateDidFinishAcousticIDRequestWithSuccess:(BOOL)arg1 ;
-(void)_tellDelegateCacheImage:(id)arg1 ;
-(void)_tellDelegateSetUserActivityInfo:(id)arg1 webpageURL:(id)arg2 ;
-(void)_tellDelegateInvalidateCurrentUserActivity;
-(void)_tellDelegateExtensionRequestWillStartForApplication:(id)arg1 ;
-(void)cancelSpeech;
-(void)_tellDelegateExtensionRequestFinishedForApplication:(id)arg1 error:(id)arg2 ;
-(void)_tellDelegateAudioSessionDidBeginInterruption;
-(void)_tellDelegateAudioPlaybackRequestDidStart:(id)arg1 ;
-(void)_tellDelegateAudioSessionDidEndInterruption:(BOOL)arg1 ;
-(void)_tellDelegateAudioPlaybackRequestWillStart:(id)arg1 ;
-(void)_tellDelegateAudioPlaybackRequestDidStop:(id)arg1 error:(id)arg2 ;
-(void)_tellDelegateWillProcessStartPlayback:(long long)arg1 intent:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_tellDelegateStartPlaybackDidFail:(long long)arg1 ;
-(void)_tellDelegateAudioSessionWillBecomeActive:(BOOL)arg1 ;
-(void)_tellDelegateAudioSessionDidBecomeActive:(BOOL)arg1 ;
-(void)_tellDelegateWillProcessAppLaunchWithBundleIdentifier:(id)arg1 ;
-(void)_tellSpeechDelegateRecordingDidDetectStartpoint;
-(void)_tellDelegateFailedToLaunchAppWithBundleIdentifier:(id)arg1 ;
-(void)_tellSpeechDelegateRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1 ;
-(void)forceAudioSessionActive;
-(void)_tellSpeechDelegateRecordingDidBeginOnAVRecordRoute:(id)arg1 audioSessionID:(unsigned)arg2 ;
-(void)_tellSpeechDelegateRecordingDidChangeAVRecordRoute:(id)arg1 ;
-(void)forceAudioSessionInactive;
-(void)_tellSpeechDelegateToPerformTwoShotPromptWithType:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)_tellSpeechDelegateSpeechRecognized:(id)arg1 ;
-(void)_tellSpeechDelegateRecognitionUpdateWillBeginForTask:(id)arg1 ;
-(void)stopSpeechWithOptions:(id)arg1 ;
-(void)_tellSpeechDelegateRecognizedAdditionalSpeechInterpretation:(id)arg1 refId:(id)arg2 ;
-(void)_tellSpeechDelegateRecordingDidUpdateRecognitionPhrases:(id)arg1 utterances:(id)arg2 refId:(id)arg3 ;
-(void)_tellSpeechDelegateSpeechRecognizedPartialResult:(id)arg1 ;
-(void)_extendExistingRequestTimeoutForReason:(id)arg1 ;
-(void)setLockState:(BOOL)arg1 screenLocked:(BOOL)arg2 ;
-(void)setCarDNDActive:(BOOL)arg1 ;
-(void)setShouldWaitForMyriad:(BOOL)arg1 ;
-(void)setMyriadDecisionResult:(BOOL)arg1 ;
-(void)setVoiceOverIsActive:(BOOL)arg1 ;
-(void)startRequestWithText:(id)arg1 ;
-(void)startDirectActionRequestWithString:(id)arg1 ;
-(void)recordUIMetrics:(id)arg1 ;
-(void)startContinuationRequestWithUserInfo:(id)arg1 ;
-(void)startRequestWithAceCommand:(id)arg1 ;
-(void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2 userSelectionResults:(id)arg3 ;
-(void)startRequestWithInfo:(id)arg1 ;
-(void)startRequestWithInfo:(id)arg1 activationEvent:(long long)arg2 ;
-(void)startSpeechRequestWithOptions:(id)arg1 ;
-(void)startAcousticIDRequestWithOptions:(id)arg1 ;
-(void)failRequestWithError:(id)arg1 ;
-(void)startRecordingForPendingSpeechRequestWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startSpeechPronunciationRequestWithOptions:(id)arg1 pronunciationContext:(id)arg2 ;
-(BOOL)hasActiveRequest;
-(void)recordRequestMetric:(id)arg1 withTimestamp:(double)arg2 ;
-(void)sendGenericAceCommand:(id)arg1 ;
-(void)sendGenericAceCommand:(id)arg1 conflictHandler:(/*^block*/id)arg2 ;
-(void)sendReplyCommand:(id)arg1 ;
-(void)setAlertContextWithBulletins:(id)arg1 ;
-(void)_tellSpeechDelegateRecognitionDidFail:(id)arg1 ;
-(void)stopSpeech;
-(void)getCachedObjectsWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setApplicationContextForApplicationInfos:(id)arg1 withRefId:(id)arg2 ;
-(void)setApplicationContextForApplicationInfos:(id)arg1 ;
-(void)setAlertContextWithClockAlarmSnapshot:(id)arg1 ;
-(void)setAlertContextWithClockTimerSnapshot:(id)arg1 ;
-(void)usefulUserResultWillPresent;
-(void)willPresentUsefulUserResultWithType:(long long)arg1 ;
-(void)dealloc;
-(void)setConfiguration:(id)arg1 ;
-(void)checkLanguageReady:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startAudioPlaybackRequest:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginUpdateOutputAudioPowerWithCompletion:(/*^block*/id)arg1 ;
-(id<AFSpeechDelegate>)speechDelegate;
-(void)_speechRecordingDidFailWithError:(id)arg1 ;
-(id)acquireUserInteractionAssertion;
-(void)setSpeechDelegate:(id<AFSpeechDelegate>)arg1 ;
@end

