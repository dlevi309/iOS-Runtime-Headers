/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFNetworkAvailabilityObserver.h>

@protocol AFDictationDelegate, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;
@class NSXPCConnection, NSString, NSSet, AFCallSiteInfo, AFAudioPowerUpdater, NSObject, AFSpeechRequestOptions, NSMutableData, NSArray, AFAnalyticsEvent;

@interface AFDictationConnection : NSObject <AFNetworkAvailabilityObserver> {

	NSXPCConnection* _connection;
	NSString* _lastUsedLanguage;
	NSSet* _knownOfflineInstalledLanguages;
	BOOL _isWaitingForKnownOfflineInstalledLanguages;
	id<AFDictationDelegate> _delegate;
	AFCallSiteInfo* _initiationCallSiteInfo;
	AFAudioPowerUpdater* _inputAudioPowerUpdater;
	BOOL _isCapturingSpeech;
	BOOL _hasActiveRequest;
	BOOL _isWaitingForAudioFile;
	BOOL _recognizingIncrementally;
	NSObject*<OS_dispatch_group> _speechCallbackGroup;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSObject*<OS_dispatch_source> _bufferTimer;
	BOOL _forceOfflineRecognition;
	AFSpeechRequestOptions* _stopOptions;
	NSMutableData* _buffer;
	double _audioStartTime;
	double _amountDataSent;
	BOOL _narrowband;
	NSString* _requestIdString;
	NSArray* _previouslyRecognizedPhrases;
	NSString* _onDeviceDictationUIInteractionIdentifier;
	AFAnalyticsEvent* _preheatEvent;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (assign,nonatomic,__weak) id<AFDictationDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)dictationIsEnabled;
+(BOOL)languageDetectorIsEnabled;
+(BOOL)dictationIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2 ;
+(void)getForcedOfflineDictationSupportedLanguagesWithCompletion:(/*^block*/id)arg1 ;
+(void)fetchSupportedLanguageCodes:(/*^block*/id)arg1 ;
-(void)preheat;
-(void)_tellSpeechDelegateRecordingDidEnd;
-(void)_willCompleteDictation;
-(void)_willFailDictationWithError:(id)arg1 ;
-(void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 ;
-(void)_setActivationTimeOnOptionsIfNecessary:(id)arg1 ;
-(void)preheatTestWithLanguage:(id)arg1 options:(id)arg2 ;
-(void)_cancelTimerClearBuffer;
-(void)_tellSpeechDelegateDidProcessAudioDuration:(double)arg1 ;
-(void)_sendDataIfNeeded;
-(id)init;
-(void)_tellSpeechDelegateLanguageDetected:(id)arg1 confidenceScores:(id)arg2 isConfident:(BOOL)arg3 ;
-(void)_scheduleRequestTimeout;
-(void)_checkAndSetIsCapturingSpeech:(BOOL)arg1 ;
-(void)_startInputAudioPowerUpdatesWithXPCWrapper:(id)arg1 ;
-(id)_dictationService;
-(id<AFDictationDelegate>)delegate;
-(void)sendSpeechCorrection:(id)arg1 interactionIdentifier:(id)arg2 ;
-(void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2 narrowband:(BOOL)arg3 forceSampling:(BOOL)arg4 ;
-(void)_tellSpeechDelegateAvailabilityChanged;
-(void)_tellSpeechDelegateRecordingDidCancel;
-(void)_sendPendingAnalyticsEvents;
-(void)_cancelRequestTimeout;
-(void)reportIssueForError:(id)arg1 eventType:(long long)arg2 subtype:(id)arg3 context:(id)arg4 ;
-(void)_dispatchCallbackGroupBlock:(/*^block*/id)arg1 ;
-(BOOL)dictationIsAvailableForLanguage:(id)arg1 synchronous:(BOOL)arg2 ;
-(void)_registerInvalidationHandlerForXPCConnection:(id)arg1 ;
-(void)_delayedStopSpeechWithOptions:(id)arg1 ;
-(BOOL)dictationIsAvailableForLanguage:(id)arg1 ;
-(void)startDictationWithSpeechFileAtURL:(id)arg1 isNarrowBand:(BOOL)arg2 options:(id)arg3 forLanguage:(id)arg4 ;
-(void)_delegateDidRecognizeSpeechTokens:(id)arg1 languageModel:(id)arg2 delegate:(id)arg3 ;
-(id)_dictationServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)updateSpeechOptions:(id)arg1 ;
-(void)_addPreheatAnalyticsEvent;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_updateBufferFlushTimerWithDelay:(double)arg1 ;
-(void)_logRequestCompetionStatusWithEventType:(long long)arg1 error:(id)arg2 ;
-(void)_tellSpeechDelegateDidRecognizeTranscriptionObjects:(id)arg1 languageModel:(id)arg2 ;
-(void)setDelegate:(id<AFDictationDelegate>)arg1 ;
-(void)cancelAvailabilityMonitoring;
-(/*^block*/id)startRecordingForPendingDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 ;
-(void)reportIssueForError:(id)arg1 eventType:(long long)arg2 context:(id)arg3 ;
-(void)networkAvailability:(id)arg1 isAvailable:(BOOL)arg2 ;
-(void)_invokeRequestTimeout;
-(void)_tellSpeechDelegateMultilingualSpeechRecognized:(id)arg1 ;
-(void)_extendRequestTimeout;
-(void)sendUserSelectedAlternativeDictationLanguageCode:(id)arg1 ;
-(void)_tellSpeechDelegateSpeechRecognitionDidSucceed;
-(void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 ;
-(void)_tellSpeechDelegateRecordingDidBeginWithOptions:(id)arg1 ;
-(void)_tellSpeechDelegateSearchResultsReceived:(id)arg1 recognitionText:(id)arg2 stable:(BOOL)arg3 final:(BOOL)arg4 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)requestOfflineDictationSupportForLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dispatchAsync:(/*^block*/id)arg1 ;
-(void)beginAvailabilityMonitoring;
-(void)_stopInputAudioPowerUpdates;
-(void)_tellSpeechDelegateRecordingDidFail:(id)arg1 ;
-(void)_cancelBufferFlushTimer;
-(void)_tellSpeechDelegateDidRecognizeSpeechTokens:(id)arg1 languageModel:(id)arg2 ;
-(void)_connectionClearedForInterruption:(BOOL)arg1 ;
-(void)preheatWithRecordDeviceIdentifier:(id)arg1 ;
-(BOOL)forcedOfflineDictationIsAvailableForLanguage:(id)arg1 synchronous:(BOOL)arg2 ;
-(id)_dequeueAudioWithLength:(unsigned long long)arg1 ;
-(void)_tellSpeechDelegateRecordingWillBegin;
-(void)_availabilityChanged;
-(void)_clearConnection;
-(void)_tellSpeechDelegateDidRecognizeSpeechPhrases:(id)arg1 utterances:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 audioAnalytics:(id)arg5 ;
-(void)_tellSpeechDelegateDidBeginLocalRecognitionWithModelInfo:(id)arg1 ;
-(void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2 narrowband:(BOOL)arg3 ;
-(BOOL)forcedOfflineDictationIsAvailableForLanguage:(id)arg1 ;
-(float)peakPower;
-(void)_willCancelDictation;
-(void)sendEngagementFeedback:(long long)arg1 voiceQueryIdentifier:(id)arg2 ;
-(void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2 ;
-(id)_connection;
-(void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2 ;
-(float)averagePower;
-(void)endSession;
-(void)cancelSpeech;
-(void)_tellSpeechDelegateLanguageDetectorDidFail:(id)arg1 ;
-(void)startDictationWithSpeechFileAtURL:(id)arg1 options:(id)arg2 forLanguage:(id)arg3 ;
-(void)_tellSpeechDelegateDidRecognizePartialResult:(id)arg1 ;
-(void)stopSpeechWithOptions:(id)arg1 ;
-(void)addRecordedSpeechSampleData:(id)arg1 ;
-(void)_tellSpeechDelegateRecognitionDidFail:(id)arg1 ;
-(void)stopSpeech;
-(void)_tellSpeechDelegateAudioFileFinished:(id)arg1 error:(id)arg2 ;
-(void)_tellSpeechDelegateDidRecognizePackage:(id)arg1 ;
-(void)dealloc;
-(void)_willStartDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 machAbsoluteTime:(unsigned long long)arg4 ;
@end

