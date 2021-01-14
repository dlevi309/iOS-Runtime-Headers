/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDictationConnectionDelegate.h>
#import <UIKit/UIDictationConnectionTokenFilterProtocol.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <UIKitCore/_UIDictationPrivacySheetControllerDelegate.h>
#import <libobjc.A.dylib/VTUIDictationDataSharingOptInPresentationDelegate.h>
#import <UIKitCore/_UITouchPhaseChangeDelegate.h>

@class UIDictationConnection, UIDictationConnectionPreferences, NSTimer, UIAlertController, UIDictationStreamingOperations, NSString, CADisplayLink, _UIDictationTelephonyMonitor, NSDictionary, UITapGestureRecognizer, NSMutableArray, UIWindow, UIKeyboardInputMode, _UIDictationPrivacySheetController, NSArray, AFAnalyticsTurnBasedInstrumentationContext, NSNumber;

@interface UIDictationController : NSObject <UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol, UIAdaptivePresentationControllerDelegate, _UIDictationPrivacySheetControllerDelegate, VTUIDictationDataSharingOptInPresentationDelegate, _UITouchPhaseChangeDelegate> {

	UIDictationConnection* _dictationConnection;
	UIDictationConnectionPreferences* _preferences;
	NSTimer* _recordingLimitTimer;
	UIAlertController* _dictationAvailableSoonAlertController;
	BOOL _connectionWasAlreadyAliveForStatisticsLogging;
	UIDictationStreamingOperations* _streamingOperations;
	NSString* _language;
	BOOL _recievingResults;
	BOOL _streamingAnimationActive;
	double _lastAnimationUpdateTimeStamp;
	/*^block*/id _finalResultsOperation;
	CADisplayLink* _streamingAnimationDisplayLink;
	BOOL cancelledByWaitingForLocalResults;
	long long _updatingDocument;
	BOOL _deferredCancellationRequested;
	BOOL _isOfflineMetricsSessionActive;
	BOOL _didUseOfflineDictation;
	long long _lastOfflineDictationMetricEvent;
	_UIDictationTelephonyMonitor* _monitor;
	NSString* _prefixTextForStart;
	NSString* _selectionTextForStart;
	NSString* _postfixTextForStart;
	BOOL _hasDictated;
	NSDictionary* _selectedAttributesForDictation;
	/*^block*/id _privacySheetDismissalHandler;
	int _dictationInputModeNotifierToken;
	long long _currentShortcutType;
	UITapGestureRecognizer* _hardwareShortcutRecognizer;
	BOOL _prevForceDisplayOverridePlaceholder;
	BOOL _performingStreamingEditingOperation;
	BOOL _discardNextHypothesis;
	BOOL _hasPreheated;
	BOOL _logAppEnterBackground;
	BOOL _hasPostedInstrumentationDictationContext;
	BOOL _didToggleSoftwareKeyboardVisibleForDictation;
	BOOL _wantsAvailabilityMonitoringWhenAppActive;
	BOOL _selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate;
	BOOL _selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate;
	BOOL _localSpeechRecognitionForced;
	BOOL _secureOfflineOnlySpeechRecognition;
	BOOL _ignoreFinalizePhrases;
	BOOL _detectingUtterances;
	BOOL _finalizingRecognizedUtterance;
	BOOL _hasCheckedForLeadingSpaceOnce;
	BOOL _neededLeadingSpace;
	unsigned short _initialPreviousCharacterForAsyncDelegate;
	unsigned short _initialCharacterAfterSelectionForAsyncDelegate;
	NSString* _activationIdentifier;
	NSString* _smartLanguageSelectionOverrideLanguage;
	NSMutableArray* _pendingEdits;
	NSString* _previousHypothesis;
	NSString* _lastHypothesis;
	NSString* _targetHypothesis;
	UIWindow* _dictationPresenterWindow;
	unsigned long long _reasonType;
	NSString* _lastRecognitionText;
	id _lastCorrectionIdentifier;
	NSString* _interactionIdentifier;
	NSString* _lastMessageKeyboardLanguage;
	UIKeyboardInputMode* _currentInputModeForDictation;
	UIKeyboardInputMode* _keyboardInputModeToReturn;
	_UIDictationPrivacySheetController* _dictationPrivacySheetController;
	NSString* _detectedLanguage;
	NSArray* _dictationLanguages;
	NSString* _initialDictationLanguage;
	NSString* _fallbackDictationLanguage;
	unsigned long long _dictationSourceType;
	NSString* _currentKeyboardPrimaryLanguage;
	unsigned long long _stateHandler;
	NSString* _modelInfo;
	AFAnalyticsTurnBasedInstrumentationContext* _currentInstrumentationContext;
	NSRange _insertionRange;

}

@property (assign,nonatomic) BOOL hasPostedInstrumentationDictationContext;                                           //@synthesize hasPostedInstrumentationDictationContext=_hasPostedInstrumentationDictationContext - In the implementation block
@property (nonatomic,retain) _UIDictationPrivacySheetController * dictationPrivacySheetController;                    //@synthesize dictationPrivacySheetController=_dictationPrivacySheetController - In the implementation block
@property (assign,nonatomic) BOOL didToggleSoftwareKeyboardVisibleForDictation;                                       //@synthesize didToggleSoftwareKeyboardVisibleForDictation=_didToggleSoftwareKeyboardVisibleForDictation - In the implementation block
@property (assign,nonatomic) BOOL wantsAvailabilityMonitoringWhenAppActive;                                           //@synthesize wantsAvailabilityMonitoringWhenAppActive=_wantsAvailabilityMonitoringWhenAppActive - In the implementation block
@property (copy) NSString * smartLanguageSelectionOverrideLanguage;                                                   //@synthesize smartLanguageSelectionOverrideLanguage=_smartLanguageSelectionOverrideLanguage - In the implementation block
@property (nonatomic,copy) NSString * detectedLanguage;                                                               //@synthesize detectedLanguage=_detectedLanguage - In the implementation block
@property (nonatomic,retain) NSArray * dictationLanguages;                                                            //@synthesize dictationLanguages=_dictationLanguages - In the implementation block
@property (nonatomic,copy) NSString * initialDictationLanguage;                                                       //@synthesize initialDictationLanguage=_initialDictationLanguage - In the implementation block
@property (nonatomic,copy) NSString * fallbackDictationLanguage;                                                      //@synthesize fallbackDictationLanguage=_fallbackDictationLanguage - In the implementation block
@property (assign,nonatomic) unsigned long long dictationSourceType;                                                  //@synthesize dictationSourceType=_dictationSourceType - In the implementation block
@property (nonatomic,copy) NSString * currentKeyboardPrimaryLanguage;                                                 //@synthesize currentKeyboardPrimaryLanguage=_currentKeyboardPrimaryLanguage - In the implementation block
@property (assign,nonatomic) BOOL selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate;                        //@synthesize selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate=_selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate - In the implementation block
@property (assign,nonatomic) BOOL selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate;                      //@synthesize selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate=_selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate - In the implementation block
@property (assign,nonatomic) unsigned short initialPreviousCharacterForAsyncDelegate;                                 //@synthesize initialPreviousCharacterForAsyncDelegate=_initialPreviousCharacterForAsyncDelegate - In the implementation block
@property (assign,nonatomic) unsigned short initialCharacterAfterSelectionForAsyncDelegate;                           //@synthesize initialCharacterAfterSelectionForAsyncDelegate=_initialCharacterAfterSelectionForAsyncDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long stateHandler;                                                         //@synthesize stateHandler=_stateHandler - In the implementation block
@property (assign,nonatomic) BOOL localSpeechRecognitionForced;                                                       //@synthesize localSpeechRecognitionForced=_localSpeechRecognitionForced - In the implementation block
@property (assign,nonatomic) BOOL secureOfflineOnlySpeechRecognition;                                                 //@synthesize secureOfflineOnlySpeechRecognition=_secureOfflineOnlySpeechRecognition - In the implementation block
@property (nonatomic,copy) NSString * modelInfo;                                                                      //@synthesize modelInfo=_modelInfo - In the implementation block
@property (assign,nonatomic) BOOL ignoreFinalizePhrases;                                                              //@synthesize ignoreFinalizePhrases=_ignoreFinalizePhrases - In the implementation block
@property (assign,getter=isDetectingUtterances,nonatomic) BOOL detectingUtterances;                                   //@synthesize detectingUtterances=_detectingUtterances - In the implementation block
@property (assign,getter=isFinalizingRecognizedUtterance,nonatomic) BOOL finalizingRecognizedUtterance;               //@synthesize finalizingRecognizedUtterance=_finalizingRecognizedUtterance - In the implementation block
@property (assign,nonatomic) BOOL hasCheckedForLeadingSpaceOnce;                                                      //@synthesize hasCheckedForLeadingSpaceOnce=_hasCheckedForLeadingSpaceOnce - In the implementation block
@property (assign,nonatomic) BOOL neededLeadingSpace;                                                                 //@synthesize neededLeadingSpace=_neededLeadingSpace - In the implementation block
@property (nonatomic,retain) AFAnalyticsTurnBasedInstrumentationContext * currentInstrumentationContext;              //@synthesize currentInstrumentationContext=_currentInstrumentationContext - In the implementation block
@property (nonatomic,copy) NSString * activationIdentifier;                                                           //@synthesize activationIdentifier=_activationIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingEdits;                                                           //@synthesize pendingEdits=_pendingEdits - In the implementation block
@property (assign,nonatomic) BOOL performingStreamingEditingOperation;                                                //@synthesize performingStreamingEditingOperation=_performingStreamingEditingOperation - In the implementation block
@property (nonatomic,copy) NSString * previousHypothesis;                                                             //@synthesize previousHypothesis=_previousHypothesis - In the implementation block
@property (nonatomic,copy) NSString * lastHypothesis;                                                                 //@synthesize lastHypothesis=_lastHypothesis - In the implementation block
@property (nonatomic,copy) NSString * targetHypothesis;                                                               //@synthesize targetHypothesis=_targetHypothesis - In the implementation block
@property (assign,nonatomic) BOOL discardNextHypothesis;                                                              //@synthesize discardNextHypothesis=_discardNextHypothesis - In the implementation block
@property (assign,nonatomic) NSRange insertionRange;                                                                  //@synthesize insertionRange=_insertionRange - In the implementation block
@property (assign,nonatomic) BOOL hasPreheated;                                                                       //@synthesize hasPreheated=_hasPreheated - In the implementation block
@property (nonatomic,retain) UIWindow * dictationPresenterWindow;                                                     //@synthesize dictationPresenterWindow=_dictationPresenterWindow - In the implementation block
@property (assign,nonatomic) unsigned long long reasonType;                                                           //@synthesize reasonType=_reasonType - In the implementation block
@property (nonatomic,copy) NSString * lastRecognitionText;                                                            //@synthesize lastRecognitionText=_lastRecognitionText - In the implementation block
@property (nonatomic,copy) id lastCorrectionIdentifier;                                                               //@synthesize lastCorrectionIdentifier=_lastCorrectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * interactionIdentifier;                                                          //@synthesize interactionIdentifier=_interactionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * lastMessageKeyboardLanguage;                                                    //@synthesize lastMessageKeyboardLanguage=_lastMessageKeyboardLanguage - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * dictationRequestOrigin; 
@property (assign,nonatomic) BOOL logAppEnterBackground;                                                              //@synthesize logAppEnterBackground=_logAppEnterBackground - In the implementation block
@property (nonatomic,retain) UIKeyboardInputMode * currentInputModeForDictation;                                      //@synthesize currentInputModeForDictation=_currentInputModeForDictation - In the implementation block
@property (nonatomic,retain) UIKeyboardInputMode * keyboardInputModeToReturn;                                         //@synthesize keyboardInputModeToReturn=_keyboardInputModeToReturn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)siriPreferencesChanged;
+(id)activeInstance;
+(void)logCorrectionStatisticsForDelegate:(id)arg1 reason:(unsigned long long)arg2 ;
+(BOOL)shouldHideSelectionUIForTextView:(id)arg1 ;
+(void)performOperations:(/*^block*/id)arg1 keyboardShifted:(BOOL)arg2 ;
+(id)whitelistedDictationDictionaryFromMetadata:(id)arg1 ;
+(id)sharedInstance;
+(BOOL)canShareDictationData;
+(id)activeConnection;
+(void)viewServiceDidBecomeActive;
+(BOOL)_applicationIsActive;
+(id)whitelistedDictationDictionariesFromMetadataDictionaries:(id)arg1 ;
+(BOOL)shouldHideCursorForTextView:(id)arg1 ;
+(id)slsDictationLanguages;
+(id)UIDictationStartStopReasonTypeDescription:(unsigned long long)arg1 ;
+(void)keyboardDidUpdateOnScreenStatus;
+(BOOL)takesPressesBegan:(id)arg1 forTextView:(id)arg2 ;
+(void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2 ;
+(id)UIDictationLanguageSourceType:(unsigned long long)arg1 ;
+(void)applicationWillResignActive;
+(id)whitelistedDictationMetadataKeys;
+(id)removeTextIfNeeded:(id)arg1 ;
+(BOOL)usingTypeAndTalk;
+(int)UIDictationStartStopReasonToInstrumentationInvocationSourceType:(unsigned long long)arg1 ;
+(void)applicationDidBecomeActive;
+(void)instrumentationDictationAlternativesViewedWithInstrumentationContext:(id)arg1 alternatives:(id)arg2 dictationLanguage:(id)arg3 ;
+(void)onDidBecomeActive;
+(BOOL)usingServerManualEndpointingThreshold;
+(id)arrayWithTextEntriesRemoved:(id)arg1 ;
+(id)textRelatedMetadataKeys;
+(BOOL)shouldRemoveTextEntries;
+(id)stringForState:(int)arg1 ;
+(BOOL)shouldRemoveTextEntries:(id)arg1 ;
+(BOOL)takesPressesChanged:(id)arg1 forTextView:(id)arg2 ;
+(int)viewMode;
+(void)logDictationString:(id)arg1 ;
+(void)updateLandingView;
+(id)activeSLSDictationLanguages;
+(BOOL)takesPressesEnded:(id)arg1 forTextView:(id)arg2 ;
+(id)UIDictationInstrumentaionLocalIdentifierWithLocalString:(id)arg1 ;
+(void)instrumentationDictationAlternativeSelectedWithInstrumentationContext:(id)arg1 originalText:(id)arg2 replacementText:(id)arg3 replacementIndex:(unsigned long long)arg4 alternativesAvailableCount:(unsigned long long)arg5 dictationLanguage:(id)arg6 ;
+(BOOL)shouldPreferOnlineRecognition;
+(BOOL)dictationInfoIsOnScreen;
+(void)didBeginEditingInTextView:(id)arg1 ;
+(BOOL)isRunning;
+(id)dictionaryWithTextEntriesRemoved:(id)arg1 ;
+(id)serializedDictationPhrases:(id)arg1 ;
+(id)serializedInterpretationFromTokens:(id)arg1 transform:(CFStringRef)arg2 autocapitalization:(long long)arg3 capitalization:(unsigned long long)arg4 ;
+(BOOL)dictationIsFunctional;
+(id)removeTextIfNeeded:(id)arg1 metadata:(id)arg2 ;
+(BOOL)shouldDeleteBackwardInInputDelegate:(id)arg1 ;
+(BOOL)checkTraitsSupportDictation:(id)arg1 ;
+(int)UIDictationStartStopReasonToInstrumentationDictationEndPointType:(unsigned long long)arg1 ;
+(BOOL)starkScreenExists;
+(id)serializedInterpretationFromTokens:(id)arg1 transform:(CFStringRef)arg2 ;
+(void)viewServiceWillResignActive;
+(BOOL)shouldInsertText:(id)arg1 inInputDelegate:(id)arg2 ;
+(id)interpretation:(id)arg1 forPhraseIndex:(unsigned long long)arg2 isShiftLocked:(BOOL)arg3 autocapitalizationType:(long long)arg4 useServerCapitalization:(BOOL)arg5 ;
+(BOOL)fetchCurrentInputModeSupportsDictation;
+(double)serverManualEndpointingThreshold;
+(void)poppedLastStreamingOperation;
+(id)streamingHypothesisForPhrases:(id)arg1 ;
+(id)_dictationLog;
+(id)serializedInterpretationFromTokens:(id)arg1 transform:(CFStringRef)arg2 capitalization:(unsigned long long)arg3 ;
+(id)bestInterpretationForDictationResult:(id)arg1 ;
+(id)stringForViewMode:(int)arg1 ;
+(BOOL)isTextViewOnStarkScreen:(id)arg1 ;
+(void)applicationDidEnterBackgroundNotification;
+(BOOL)remoteCanDictateCurrentInputMode;
+(void)onWillResignActive;
+(BOOL)isDictationSearchBarButtonVisible;
-(void)setIgnoreFinalizePhrases:(BOOL)arg1 ;
-(void)setNeededLeadingSpace:(BOOL)arg1 ;
-(id)prefixTextForInputDelegate:(id)arg1 ;
-(BOOL)_shouldInsertText:(id)arg1 inInputDelegate:(id)arg2 ;
-(void)setCurrentInstrumentationContext:(AFAnalyticsTurnBasedInstrumentationContext *)arg1 ;
-(id)dictationConnection;
-(BOOL)_allowsMicsInSearchFieldForLanguageIdentifiers:(id)arg1 ;
-(void)setActivationIdentifier:(NSString *)arg1 ;
-(BOOL)isDetectingUtterances;
-(void)keyboardDismissed:(id)arg1 ;
-(void)setHasPreheated:(BOOL)arg1 ;
-(void)_endOfflineMetricsSession;
-(id)_currentLanguageForOfflineDictationMetrics;
-(void)setSelectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate:(BOOL)arg1 ;
-(void)markKeyboardInputMetricEvent;
-(unsigned long long)dictationSourceType;
-(void)dictationConnection:(id)arg1 didStartRecordingWithOptions:(id)arg2 ;
-(void)errorAnimationDidFinish;
-(id)connectionForStatisticsLogging;
-(BOOL)performingStreamingEditingOperation;
-(void)setSecureOfflineOnlySpeechRecognition:(BOOL)arg1 ;
-(id)fieldIdentifierInputDelegate:(id)arg1 ;
-(BOOL)dictationConnection:(id)arg1 filterState:(id)arg2 shouldCheckpointAtToken:(id)arg3 ;
-(void)setReasonType:(unsigned long long)arg1 ;
-(void)cancelDictationForTextStoreChangesInResponder:(id)arg1 ;
-(NSMutableArray *)pendingEdits;
-(BOOL)dataSharingDecided;
-(void)_startStreamingAnimations;
-(void)setDictationLanguages:(NSArray *)arg1 ;
-(void)releaseConnection;
-(BOOL)currentViewModeSupportsDictationMics;
-(id)init;
-(void)_markOfflineDictationInputMetricEvent;
-(BOOL)localSpeechRecognitionForced;
-(void)doubleTappedKey:(id)arg1 ;
-(id)_hypothesisRangeFromSelectionRange:(id)arg1 inputDelegate:(id)arg2 ;
-(unsigned long long)reasonType;
-(void)_createDictationPresenterWindowIfNecessary;
-(void)_clearExistingText;
-(void)prepareDoubleTapShortcutGestureForDelegate:(id)arg1 ;
-(void)setStateHandler:(unsigned long long)arg1 ;
-(void)showSoftwareKeyboardIfNeeded;
-(id)_getBestHypothesisRangeGivenHintRange:(id)arg1 inputDelegate:(id)arg2 hypothesisRange:(NSRange*)arg3 documentTextInRange:(id*)arg4 ;
-(BOOL)dictationSearchFieldUISupportsTraitCollection:(id)arg1 ;
-(void)_restartDictation;
-(void)startDictationForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2 ;
-(NSArray *)dictationLanguages;
-(void)stopHelpMessageDisplay;
-(void)releaseConnectionAfterStatisticsLogging;
-(void)setInitialDictationLanguage:(NSString *)arg1 ;
-(void)dictationConnectionWillStartRecording:(id)arg1 ;
-(void)dictationConnectionDidEndRecording:(id)arg1 ;
-(void)completeStartConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2 ;
-(void)setDetectedLanguage:(NSString *)arg1 ;
-(void)_updateFromSelectedTextRange:(id)arg1 withNewHypothesis:(id)arg2 ;
-(void)setLanguage:(id)arg1 ;
-(void)dismissSoftwareKeyboardIfNeeded;
-(void)releaseConnectionAfterDictationRequest;
-(BOOL)shouldPresentOptInAlert;
-(BOOL)isFinalizingRecognizedUtterance;
-(void)stopDictationIgnoreFinalizePhrases;
-(void)_presentDataSharingOptInAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)switchToDictationInputMode;
-(CFStringRef)resultTransformForLanguageModel:(id)arg1 ;
-(void)restartDictationForTypeAndTalk;
-(BOOL)neededLeadingSpace;
-(void)setupForDictationStart;
-(id)_rangeByExtendingRange:(id)arg1 backward:(long long)arg2 forward:(long long)arg3 inputDelegate:(id)arg4 ;
-(void)setDictationPresenterWindow:(UIWindow *)arg1 ;
-(void)setupForStreamingDictationStart;
-(NSString *)lastHypothesis;
-(void)_startDictation;
-(void)dictationConnection:(id)arg1 didFailRecognitionWithError:(id)arg2 ;
-(void)_endEnableDictationPromptAnimated:(BOOL)arg1 ;
-(BOOL)supportsInputMode:(id)arg1 error:(id*)arg2 ;
-(void)_beginOfflineMetricsSession;
-(BOOL)dictationIsModifyingText;
-(NSString *)activationIdentifier;
-(NSString *)smartLanguageSelectionOverrideLanguage;
-(void)setDetectingUtterances:(BOOL)arg1 ;
-(NSRange)insertionRange;
-(void)dictationConnectionDidCancelIncompatibleLocalRecognizer:(id)arg1 ;
-(void)dismissDictationView:(id)arg1 ;
-(BOOL)hasPostedInstrumentationDictationContext;
-(void)dictationConnectionDidCancel:(id)arg1 ;
-(void)setLogAppEnterBackground:(BOOL)arg1 ;
-(void)presentAlertOfType:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(UIKeyboardInputMode *)currentInputModeForDictation;
-(void)_setFinalResultHandler:(/*^block*/id)arg1 ;
-(BOOL)isIgnoringDocumentChanges;
-(void)_displayLinkFired:(id)arg1 ;
-(void)switchToDictationLanguage:(id)arg1 ;
-(void)_handlePrivacySheetDismissal;
-(BOOL)selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate;
-(id)languageCodeForAssistantLanguageCode:(id)arg1 ;
-(void)logAlternativeSelected:(id)arg1 correctionIdentifier:(id)arg2 interactionIdentifier:(id)arg3 ;
-(void)optOutButtonPressedForPresenter:(id)arg1 ;
-(void)dictationConnection:(id)arg1 didFailRecordingWithError:(id)arg2 ;
-(void)setDidToggleSoftwareKeyboardVisibleForDictation:(BOOL)arg1 ;
-(BOOL)discardNextHypothesis;
-(UIKeyboardInputMode *)keyboardInputModeToReturn;
-(BOOL)secureOfflineOnlySpeechRecognition;
-(void)dictationConnection:(id)arg1 finalizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 secureInput:(BOOL)arg5 ;
-(void)setDictationInfoOnScreenNotifyKey:(BOOL)arg1 ;
-(void)clearTextFieldPlaceholder;
-(void)_runFinalizeOperation;
-(void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5 ;
-(BOOL)supportsDictationLanguage:(id)arg1 error:(id*)arg2 ;
-(void)_presentAlertForDictationInputModeOfType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)initialDictationLanguage;
-(BOOL)hasPreheated;
-(void)setHasPostedInstrumentationDictationContext:(BOOL)arg1 ;
-(unsigned short)initialCharacterAfterSelectionForAsyncDelegate;
-(void)setCurrentInputModeForDictation:(UIKeyboardInputMode *)arg1 ;
-(BOOL)wantsAvailabilityMonitoringWhenAppActive;
-(void)dictationConnection:(id)arg1 receivedInterpretation:(id)arg2 languageModel:(id)arg3 secureInput:(BOOL)arg4 ;
-(id)selectedTextForInputDelegate:(id)arg1 ;
-(void)completeStartConnection;
-(void)stopAndCancelDictationIfNeededWithReasonType:(unsigned long long)arg1 ;
-(id)streamingOperations;
-(BOOL)isFallingBackToMonolingualDictation;
-(void)_handleDataSharingSheetDecision;
-(void)setLastCorrectionIdentifier:(id)arg1 ;
-(void)setInitialCharacterAfterSelectionForAsyncDelegate:(unsigned short)arg1 ;
-(BOOL)smartLanguageSelectionOverridden;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)startConnection;
-(void)_stopStreamingAnimation;
-(void)setDictationInputMode:(id)arg1 ;
-(NSString *)currentKeyboardPrimaryLanguage;
-(void)logDidAcceptDictationResult:(id)arg1 reasonType:(unsigned long long)arg2 ;
-(void)switchToDictationInputModeWithTouch:(id)arg1 ;
-(void)cancelRecordingLimitTimer;
-(void)setDictationPrivacySheetController:(_UIDictationPrivacySheetController *)arg1 ;
-(void)setHasCheckedForLeadingSpaceOnce:(BOOL)arg1 ;
-(void)setModelInfo:(NSString *)arg1 ;
-(void)setPreviousHypothesis:(NSString *)arg1 ;
-(void)setTargetHypothesis:(NSString *)arg1 ;
-(void)overrideSmartLanguageSelection:(id)arg1 ;
-(id)lastCorrectionIdentifier;
-(void)setState:(int)arg1 ;
-(NSString *)lastMessageKeyboardLanguage;
-(BOOL)_systemLanguageSupportsDictation;
-(void)_runFinalizeOperation:(BOOL)arg1 ;
-(void)markKeyboardDidReset;
-(id)postfixTextForInputDelegate:(id)arg1 ;
-(void)finishDictationRecognitionWithPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3 secureInput:(BOOL)arg4 ;
-(void)setFinalizingRecognizedUtterance:(BOOL)arg1 ;
-(void)startDictation;
-(NSString *)interactionIdentifier;
-(void)dictationPrivacySheetControllerDidFinish:(id)arg1 ;
-(void)removeDoubleTapShortcutGesture;
-(id)resultWithTrailingSpace:(id)arg1 ;
-(void)dictationConnectionDidCancelRecording:(id)arg1 ;
-(void)setLastRecognitionText:(NSString *)arg1 ;
-(int)state;
-(void)stopAndCancelDictationWithReasonType:(unsigned long long)arg1 ;
-(void)stopDictation;
-(void)setSelectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate:(BOOL)arg1 ;
-(void)setLocalSpeechRecognitionForced:(BOOL)arg1 ;
-(BOOL)_shouldDeleteBackwardInInputDelegate:(id)arg1 ;
-(void)preferencesChanged:(id)arg1 ;
-(_UIDictationPrivacySheetController *)dictationPrivacySheetController;
-(void)stopDictationByTimer;
-(void)cancelDictation;
-(void)dictationConnection:(id)arg1 filterState:(id)arg2 processFilteredToken:(id)arg3 forFinalize:(BOOL)arg4 ;
-(void)_presentOptInAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)setDictationSourceType:(unsigned long long)arg1 ;
-(void)setSmartLanguageSelectionOverrideLanguage:(NSString *)arg1 ;
-(BOOL)dictationDisabledDueToTelephonyActivity;
-(id)_assistantCompatibleLanguageCodeForInputMode:(id)arg1 ;
-(void)optInButtonPressedForPresenter:(id)arg1 ;
-(void)_presentPrivacySheetForType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)finalizeDictationRecognitionWithPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3 secureInput:(BOOL)arg4 finalResult:(BOOL)arg5 ;
-(void)setPendingEdits:(NSMutableArray *)arg1 ;
-(float)audioLevel;
-(void)setFallbackDictationLanguage:(NSString *)arg1 ;
-(void)endSmartLanguageSelectionOverride;
-(void)dictationConnection:(id)arg1 didFilterTokensWithFilterState:(id)arg2 forFinalize:(BOOL)arg3 ;
-(void)dictationConnection:(id)arg1 updateOptions:(id)arg2 ;
-(void)_deleteBackwardIntoText;
-(void)setDiscardNextHypothesis:(BOOL)arg1 ;
-(void)dictationConnection:(id)arg1 didDetectLanguage:(id)arg2 ;
-(void)logDidAcceptReplacement:(id)arg1 replacementLanguageCode:(id)arg2 originalText:(id)arg3 correctionIdentifier:(id)arg4 interactionIdentifier:(id)arg5 ;
-(id)_containingSearchBarForView:(id)arg1 ;
-(void)_setupHypothesisAsFinalResults;
-(void)dictationConnectionDidFinish:(id)arg1 ;
-(void)startHelpMessageDisplay;
-(NSString *)detectedLanguage;
-(void)performIgnoringDocumentChanges:(/*^block*/id)arg1 ;
-(NSString *)modelInfo;
-(void)_beginEnableDictationPrompt;
-(BOOL)selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate;
-(BOOL)shouldOverrideManualEndpointing;
-(void)switchToDictationInputModeWithTouch:(id)arg1 withKeyboardInputMode:(id)arg2 ;
-(void)didShowAlternatives:(id)arg1 correctionIdentifier:(id)arg2 interactionIdentifier:(id)arg3 instrumentationContext:(id)arg4 dictationLanguage:(id)arg5 ;
-(BOOL)hasCheckedForLeadingSpaceOnce;
-(BOOL)dictationSearchFieldUIEnabled;
-(NSRange)_getRangeOfString:(id)arg1 inDocumentText:(id)arg2 ;
-(void)setInsertionRange:(NSRange)arg1 ;
-(void)endSessionIfNecessaryForTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(BOOL)didToggleSoftwareKeyboardVisibleForDictation;
-(UIWindow *)dictationPresenterWindow;
-(AFAnalyticsTurnBasedInstrumentationContext *)currentInstrumentationContext;
-(void)setLastHypothesis:(NSString *)arg1 ;
-(id)dictationConnection:(id)arg1 willFilterTokensWithLanguageModel:(id)arg2 forFinalize:(BOOL)arg3 ;
-(BOOL)isRecievingResults;
-(/*^block*/id)dictationBlockForToken:(id)arg1 ;
-(void)preheatIfNecessary;
-(void)dictationConnectionDidStartRecording:(id)arg1 ;
-(BOOL)dictationEnabled;
-(void)setWantsAvailabilityMonitoringWhenAppActive:(BOOL)arg1 ;
-(id)language;
-(void)dictationConnnectionDidChangeAvailability:(id)arg1 ;
-(void)updateDoubleTapShortcutWithPreference:(long long)arg1 ;
-(NSString *)fallbackDictationLanguage;
-(void)setInitialPreviousCharacterForAsyncDelegate:(unsigned short)arg1 ;
-(void)setPerformingStreamingEditingOperation:(BOOL)arg1 ;
-(void)setLastMessageKeyboardLanguage:(NSString *)arg1 ;
-(NSString *)targetHypothesis;
-(void)prepareDoubleTapShortcutGesture;
-(void)insertSerializedDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(void)_completeStartDictationWithContinuation:(/*^block*/id)arg1 ;
-(void)restoreTextFieldPlaceholder;
-(void)setCurrentKeyboardPrimaryLanguage:(NSString *)arg1 ;
-(void)setKeyboardInputModeToReturn:(UIKeyboardInputMode *)arg1 ;
-(unsigned short)initialPreviousCharacterForAsyncDelegate;
-(void)keyboardInputModeChanged:(id)arg1 ;
-(NSString *)previousHypothesis;
-(BOOL)shouldUseDictationSearchFieldBehavior;
-(BOOL)ignoreFinalizePhrases;
-(void)instrumentationDictationContextEmitInstrumentation;
-(void)dictationConnection:(id)arg1 didBeginLocalRecognitionWithModelInfo:(id)arg2 ;
-(void)_touchPhaseChangedForTouch:(id)arg1 ;
-(id)dictationUIState;
-(NSString *)lastRecognitionText;
-(void)setupToInsertResultForNewHypothesis:(id)arg1 ;
-(void)markKeyboardDeleteMetricEvent;
-(void)dealloc;
-(void)_displaySecureContentsAsPlainText:(BOOL)arg1 afterDelay:(double)arg2 ;
-(void)startRecordingLimitTimer;
-(void)stopDictation:(BOOL)arg1 ;
-(void)setInteractionIdentifier:(NSString *)arg1 ;
-(void)instrumentationDictationTranscriptionMetadataEmitInstrumentationWithDictationResult:(id)arg1 ;
-(unsigned long long)stateHandler;
-(BOOL)logAppEnterBackground;
-(NSNumber *)dictationRequestOrigin;
@end

