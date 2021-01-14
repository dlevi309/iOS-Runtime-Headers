/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@protocol VSRecognitionSessionDelegate;
#import <VoiceServices/VoiceServices-Structs.h>
@class NSString, VSKeepAlive, VSRecognitionAction, NSArray, VSSpeechSynthesizer;

@interface VSRecognitionSession : NSObject {

	NSString* _modelIdentifier;
	VSKeepAlive* _keepAlive;
	id<VSRecognitionSessionDelegate> _delegate;
	VSRecognitionAction* _currentAction;
	NSArray* _topLevelKeywords;
	id _handlingThread;
	VSSpeechSynthesizer* _synthesizer;
	NSString* _languageID;
	NSString* _debugDumpPath;
	NSString* _audioInputPath;
	double _levelInterval;
	unsigned long long _keywordPhase;
	struct {
		unsigned delegateWillBegin : 1;
		unsigned delegateBegin : 1;
		unsigned delegateOpenURL : 1;
		unsigned delegateFinishedSpeaking : 1;
		unsigned delegateComplete : 1;
		unsigned debugDumpEnabled : 1;
		unsigned preferredEngine : 2;
		unsigned performHandlerActions : 1;
		unsigned allowSensitiveActions : 1;
		unsigned bluetoothAllowed : 1;
		unsigned resetNextAction : 1;
		unsigned isSpeaking : 1;
		unsigned actionBegan : 1;
		unsigned actionBeginning : 1;
		unsigned actionBeginDeferred : 1;
		unsigned invalid : 1;
		unsigned observeKeywordChange : 1;
	}  _sessionFlags;

}
-(BOOL)isBusy;
-(id)init;
-(BOOL)isFinished;
-(void)setDelegate:(id)arg1 ;
-(BOOL)isValid;
-(id)reset;
-(void)_notifyDelegateActionStarted;
-(id)_currentRecognizeAction;
-(id)initWithModelIdentifier:(id)arg1 ;
-(id)cancelMaintainingKeepAlive:(BOOL)arg1 ;
-(void)_setAction:(id)arg1 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2 withError:(id)arg3 ;
-(id)spokenFeedbackString;
-(id)spokenFeedbackAttributedString;
-(CFDictionaryRef)_createKeywordIndex;
-(id)_createPhaseSortedKeywordsFromArray:(id)arg1 ;
-(id)_topLevelKeywords;
-(void)_keywordIndexChanged;
-(id)_beginSpeakingAttributedString:(id)arg1 ;
-(id)beginSpeakingString:(id)arg1 ;
-(id)_beginSpeakingString:(id)arg1 attributedString:(id)arg2 ;
-(void)_notifyDelegateFinishedSpeakingWithError:(id)arg1 ;
-(id)beginNextAction;
-(BOOL)isRecognizing;
-(BOOL)isActivelyRecognizing;
-(BOOL)hasDeferredAction;
-(BOOL)nextActionWillTerminateSession;
-(BOOL)nextActionWillRecognize;
-(void)setSensitiveActionsEnabled:(BOOL)arg1 ;
-(BOOL)sensitiveActionsEnabled;
-(BOOL)setBluetoothInputAllowed:(BOOL)arg1 ;
-(void)_actionCompleted:(id)arg1 nextAction:(id)arg2 error:(id)arg3 ;
-(BOOL)_actionStarted:(id)arg1 ;
-(id)_notifyDelegateOpenURL:(id)arg1 ;
-(id)_recognitionResultHandlingThread;
-(id)displayResultString;
-(void)_init;
-(void)recognitionResultHandlingThread:(id)arg1 didHandleResults:(id)arg2 nextAction:(id)arg3 ;
-(id)displayStatusString;
-(void)setInputLevelUpdateInterval:(double)arg1 ;
-(float)inputLevel;
-(float)inputLevelDB;
-(void)setKeywordPhase:(unsigned long long)arg1 ;
-(id)keywordAtIndex:(long long)arg1 ;
-(long long)keywordCount;
-(id)_keywordsForModelIdentifier:(id)arg1 ;
-(id)beginSpeakingFeedbackString;
-(BOOL)setDebugDumpEnabled:(BOOL)arg1 ;
-(id)debugDumpPath;
-(BOOL)setNextRecognitionAudioInputPath:(id)arg1 ;
-(BOOL)setPreferredEngine:(int)arg1 ;
-(BOOL)setNextRecognitionRequiresReset:(BOOL)arg1 ;
-(void)setPerformRecognitionHandlerActions:(BOOL)arg1 ;
-(id)cancel;
-(void)dealloc;
@end

