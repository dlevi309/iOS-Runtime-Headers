/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <libobjc.A.dylib/CACAXNotificationObserverDelegate.h>
#import <libobjc.A.dylib/CACTouchEventObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSArray, AXElement, NSString, NSObject, NSMutableArray, NSMutableDictionary, CACSpokenCommand, NSDictionary, CACLabeledElementsCollection, CACDisambiguationHandler, CACTextInsertionSpecifier, CACAXNotificationObserver, CACTouchEventObserver;

@interface CACSpokenCommandManager : NSObject <CACAXNotificationObserverDelegate, CACTouchEventObserverDelegate> {

	NSArray* _activeApplications;
	NSArray* _topLevelElements;
	AXElement* _focusedElement;
	NSArray* _presentationElements;
	BOOL _userIsTouching;
	unsigned _lastSyncdInteractionLevel;
	int _dictationRecognizerMode;
	NSString* _previousLeadingTextString;
	NSObject*<OS_dispatch_queue> _recognizerSynchronizationDispatchQueue;
	NSMutableArray* _recognizers;
	NSMutableArray* _recognizedCommandsReadyForDispatch;
	NSMutableDictionary* _recognizerInteractionLevels;
	NSMutableDictionary* _identifierBasedLanguageModelCache;
	NSMutableDictionary* _oldRXLangaugeObjects;
	double _recognizerSyncTransactionID;
	int _currentRecognitionResetMode;
	double _startedListeningTimeStamp;
	NSObject*<OS_dispatch_queue> _commandExecutionDispatchQueue;
	CACSpokenCommand* _currentNextPreviousResolverSpokenCommand;
	CACSpokenCommand* _currentRepeatingSpokenCommand;
	long long _repeatingSpokenCommandRemainingCount;
	NSDictionary* _nextResolverRelationships;
	NSDictionary* _previousResolverRelationships;
	NSDictionary* _builtInLocalizedCommandStrings;
	NSString* _commandRecognitionLogPath;
	/*^block*/id _synchronousRemoteRequestCompletionBlock;
	double _lastDictationInsertionTimeStamp;
	CACLabeledElementsCollection* _labeledScreenElementsCollection;
	CACDisambiguationHandler* _disambiguationHandler;
	NSString* _transientOverlayType;
	BOOL _isListening;
	BOOL _suspendCommandDispatching;
	BOOL _displayIsOff;
	BOOL _initialListenRequestWasSuccessful;
	long long _attentionAwareStatus;
	NSString* _currentAttentionAwarenessAction;
	double _nextFetchDelayFactor;
	double _fetchingTransactionID;
	NSObject*<OS_dispatch_queue> _elementFetchingQueue;
	BOOL _isAttentionAwareClientRunning;
	BOOL _shouldPreserveDisambiguationHandler;
	CACTextInsertionSpecifier* _previousTextInsertionSpecifier;
	CACTextInsertionSpecifier* _stagedTextInsertionSpecifier;
	CACAXNotificationObserver* _axNotificationObserver;
	CACTouchEventObserver* _touchEventObserver;

}

@property (nonatomic,retain) CACAXNotificationObserver * axNotificationObserver;                     //@synthesize axNotificationObserver=_axNotificationObserver - In the implementation block
@property (nonatomic,retain) CACTouchEventObserver * touchEventObserver;                             //@synthesize touchEventObserver=_touchEventObserver - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> recognizerSynchronizationDispatchQueue;              //@synthesize recognizerSynchronizationDispatchQueue=_recognizerSynchronizationDispatchQueue - In the implementation block
@property (readonly) BOOL userIsTouching;                                                            //@synthesize userIsTouching=_userIsTouching - In the implementation block
@property (assign) int dictationRecognizerMode; 
@property (nonatomic,readonly) BOOL isFetchingElements; 
@property (nonatomic,readonly) double lastDictationInsertionTimeStamp;                               //@synthesize lastDictationInsertionTimeStamp=_lastDictationInsertionTimeStamp - In the implementation block
@property (nonatomic,readonly) BOOL isAttentionAwareClientRunning;                                   //@synthesize isAttentionAwareClientRunning=_isAttentionAwareClientRunning - In the implementation block
@property (readonly) CACLabeledElementsCollection * labeledScreenElementsCollection;                 //@synthesize labeledScreenElementsCollection=_labeledScreenElementsCollection - In the implementation block
@property (retain) CACDisambiguationHandler * disambiguationHandler;                                 //@synthesize disambiguationHandler=_disambiguationHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldPreserveDisambiguationHandler;                               //@synthesize shouldPreserveDisambiguationHandler=_shouldPreserveDisambiguationHandler - In the implementation block
@property (retain) NSString * transientOverlayType;                                                  //@synthesize transientOverlayType=_transientOverlayType - In the implementation block
@property (retain) CACTextInsertionSpecifier * previousTextInsertionSpecifier;                       //@synthesize previousTextInsertionSpecifier=_previousTextInsertionSpecifier - In the implementation block
@property (retain) CACTextInsertionSpecifier * stagedTextInsertionSpecifier;                         //@synthesize stagedTextInsertionSpecifier=_stagedTextInsertionSpecifier - In the implementation block
+(id)sharedCACSpokenCommandManager;
+(id)capitalizedStringFromString:(id)arg1 ;
+(BOOL)doesEvaluatorKey:(id)arg1 matchValue:(id)arg2 ;
-(void)dealloc;
-(void)run;
-(void)_startListening;
-(void)startListening;
-(void)stopListening;
-(void)_stopListening;
-(BOOL)isListening;
-(BOOL)isFetchingElements;
-(void)willTerminate;
-(id)contextSummary;
-(id)focusedElement;
-(void)setDictationRecognizerMode:(int)arg1 ;
-(void)synchronizeRecognizersWithReason:(id)arg1 ;
-(id)languageModelForBuiltInLMIdentifier:(id)arg1 ;
-(void)didFinishExecutingSpokenCommand:(id)arg1 ;
-(CACDisambiguationHandler *)disambiguationHandler;
-(void)cancelAnyTransientOverlay;
-(BOOL)isActiveOverlayType:(id)arg1 ;
-(void)setNextFetchDelayFactor:(double)arg1 ;
-(void)setShouldPreserveDisambiguationHandler:(BOOL)arg1 ;
-(id)labeledElementsFromScreenWithTitle:(id)arg1 ;
-(void)setDisambiguationHandler:(CACDisambiguationHandler *)arg1 ;
-(id)primaryStringForCommandIdentifier:(id)arg1 ;
-(id)activeCommandIdentifiers;
-(NSString *)transientOverlayType;
-(void)setTransientOverlayType:(NSString *)arg1 ;
-(id)activeOverlayType;
-(void)enterSleepInteractionLevel;
-(void)exitSleepInteractionLevel;
-(int)dictationRecognizerMode;
-(id)labeledElementsFromScreenWithTrait:(unsigned long long)arg1 ;
-(id)labeledElementsFromScreen;
-(void)beginExecutingRepeatingSpokenCommandNumberOfTimes:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)startRecordingGesture;
-(id)stopRecordingGesture;
-(void)updateStatusIndicatorView;
-(void)enterDictatedString:(id)arg1 ;
-(id)screenElements;
-(unsigned)currentInteractionLevel;
-(id)activeApplications;
-(void)setStagedTextInsertionSpecifier:(CACTextInsertionSpecifier *)arg1 ;
-(void)setRecognizerSynchronizationDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_attentionAwareSettingChanged;
-(void)_fetchElements;
-(void)setAxNotificationObserver:(CACAXNotificationObserver *)arg1 ;
-(void)setTouchEventObserver:(CACTouchEventObserver *)arg1 ;
-(void)_markAsDirtyForBuiltInLMIdentifier:(id)arg1 ;
-(void)setPreviousTextInsertionSpecifier:(CACTextInsertionSpecifier *)arg1 ;
-(id)leadingTextForCurrentSelection;
-(BOOL)shouldPreserveDisambiguationHandler;
-(CACTouchEventObserver *)touchEventObserver;
-(void)_notifyStatusChanged:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)recognizerSynchronizationDispatchQueue;
-(void)_closeAllRecognizers;
-(void)_createCommandRecognizersIfNecessary;
-(void)_updateLanguageModelForBuiltInLMIdentifier:(id)arg1 ;
-(CACLabeledElementsCollection *)labeledScreenElementsCollection;
-(void)_waitUntilElementsAreNumbered;
-(unsigned)currentInteractionLevelPassingBackTopReferencingObject:(id*)arg1 ;
-(void)forceElementFetchWithReason:(id)arg1 ;
-(BOOL)_pushInteractionLevel:(unsigned)arg1 referencingObject:(id)arg2 ;
-(BOOL)_popInteractionLevel:(unsigned)arg1 referencingObject:(id)arg2 ;
-(BOOL)_attentionIsLostWithListeningOffAction;
-(void)attentionAwareGained;
-(void)_pushLeadingContextToSpeechRecognitionSystem;
-(void)dispatchPendingCommand;
-(void)_appendSpokenCommand:(id)arg1 toLogAtPath:(id)arg2 ;
-(void)registerSignPostEndProcessingForSpeechRecognizer:(id)arg1 message:(id)arg2 ;
-(CACTextInsertionSpecifier *)stagedTextInsertionSpecifier;
-(void)setNextPreviousResolverSpokenCommand:(id)arg1 ;
-(void)setRepeatingSpokenCommand:(id)arg1 ;
-(void)_clearPreviousTextInsertionSpecifierBasedOnExecutedCommand:(id)arg1 ;
-(id)_templateSpokenCommandWithIdentifier:(id)arg1 ;
-(id)_nextResolverRelationships;
-(id)_previousResolverRelationships;
-(void)_executeNextRepeatWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)handleRecognizedCommand:(id)arg1 ;
-(void)_scheduleFetchElementsWithDelay:(double)arg1 andReason:(id)arg2 ;
-(id)_fetchPresentationElements;
-(void)setScreenElements:(id)arg1 presentationElements:(id)arg2 activeApplications:(id)arg3 focusedTextAreaElement:(id)arg4 ;
-(void)_microphoneTurnedOffAfterInteruption;
-(void)_microphoneTurnedOnAfterInteruption;
-(void)willUpdateElementsSignificantly;
-(id)nameOfAXNotification:(int)arg1 ;
-(void)didBeginTouches;
-(void)didEndTouches;
-(void)insertDictatedString:(id)arg1 ;
-(void)_flushBuiltInLMIdentifierTable;
-(void)_intializeBuiltInLMIdentifierTableIfNecessary;
-(void)_resetInteractionLevel;
-(void)_startSynchronousRemoteRecognitionWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_cancelSynchronousRemoteRecognition;
-(id)copySupportedCommandWithIdentifier:(id)arg1 ;
-(id)allCommandsForLocaleIdentifier:(id)arg1 ;
-(void)observer:(id)arg1 didObserveNotification:(int)arg2 notificationData:(void*)arg3 ;
-(void)didObserveFirstTouchDownForObserver:(id)arg1 ;
-(void)didObserveLastTouchUpForObserver:(id)arg1 ;
-(BOOL)doesFocusedElementRequireSecureInput;
-(CGRect)bestDictationRecognizerModeImageRect;
-(void)_rebuildCommandRecognizers;
-(void)_rebuildCustomCommandRecognizers;
-(RXLanguageObjectRef)rxLanguageObjectForBuiltInLMIdentifier:(id)arg1 ;
-(void)_microphoneTurnedOff;
-(void)_microphoneTurnedOn;
-(void)attentionAwareLost;
-(void)attentionAwareInterrupted;
-(void)attentionAwareInterruptionEnded;
-(BOOL)isSynchronizingRecognizers;
-(void)suspendCommandDispatching:(BOOL)arg1 ;
-(void)didFindCloseSpokenCommandIdentifiers:(id)arg1 ;
-(void)notifyUserOfCommandFailureUsingSound;
-(void)notifyUserOfCommandFailureWithTitle:(id)arg1 description:(id)arg2 ;
-(BOOL)isNextPreviousResolverSpokenCommandEmojiBased;
-(id)resolvedNextSpokenCommand;
-(id)resolvedPreviousSpokenCommand;
-(void)stopAnyRepeatingSpokenCommand;
-(void)forceElementFetch;
-(void)_scheduleFetchElementsWithDelay:(double)arg1 ;
-(void)insertDictatedAttributedString:(id)arg1 ;
-(void)handleSRSystemServerError;
-(void)handleSRSystemBeginUtteranceWithID:(unsigned long long)arg1 ;
-(BOOL)showUIAsListening;
-(BOOL)_shouldBeListening;
-(id)synchronousRecognitionOfString:(id)arg1 timeoutInterval:(double)arg2 ;
-(id)synchronousRecognitionUsingCommandIdentifier:(id)arg1 parameters:(id)arg2 timeoutInterval:(double)arg3 ;
-(id)allCustomCommandsDetail;
-(id)groupedCommandsForLocaleIdentifier:(id)arg1 ;
-(id)activeCommandsForLocaleIdentifier:(id)arg1 ;
-(void)registerSignPostBeginProcessingForSpeechRecognizer:(id)arg1 message:(id)arg2 ;
-(BOOL)userIsTouching;
-(double)lastDictationInsertionTimeStamp;
-(BOOL)isAttentionAwareClientRunning;
-(CACTextInsertionSpecifier *)previousTextInsertionSpecifier;
-(CACAXNotificationObserver *)axNotificationObserver;
@end
