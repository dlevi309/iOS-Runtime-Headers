/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/AFDictationDelegate.h>

@protocol UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol, OS_dispatch_queue;
@class AFDictationOptions, AFDictationConnection, NSObject, NSString, NSMutableArray, NSMutableDictionary;

@interface UIDictationConnection : NSObject <AFDictationDelegate> {

	BOOL _receivedMultilingualResultsCommand;
	BOOL _offlineOnly;
	BOOL _lowConfidenceAboutLanguageDetection;
	unsigned _charBeforeInsertionPointOnDictationStart;
	unsigned _charAfterInsertionPointOnDictationStart;
	id<UIDictationConnectionDelegate> _delegate;
	id<UIDictationConnectionTokenFilterProtocol> _tokenFilter;
	AFDictationOptions* _dictationOptions;
	AFDictationConnection* _connection;
	NSObject*<OS_dispatch_queue> _analyticsQueue;
	NSString* _lastUsedPrimaryLanguage;
	NSString* _lastUsedDetectedLanguage;
	NSMutableArray* _lastUsedTopLanguages;
	NSMutableDictionary* _lastReceivedPartials;

}

@property (nonatomic,retain) AFDictationOptions * dictationOptions;                                        //@synthesize dictationOptions=_dictationOptions - In the implementation block
@property (nonatomic,retain) AFDictationConnection * connection;                                           //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL offlineOnly;                                                             //@synthesize offlineOnly=_offlineOnly - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> analyticsQueue;                                  //@synthesize analyticsQueue=_analyticsQueue - In the implementation block
@property (nonatomic,copy) NSString * lastUsedPrimaryLanguage;                                             //@synthesize lastUsedPrimaryLanguage=_lastUsedPrimaryLanguage - In the implementation block
@property (nonatomic,copy) NSString * lastUsedDetectedLanguage;                                            //@synthesize lastUsedDetectedLanguage=_lastUsedDetectedLanguage - In the implementation block
@property (nonatomic,retain) NSMutableArray * lastUsedTopLanguages;                                        //@synthesize lastUsedTopLanguages=_lastUsedTopLanguages - In the implementation block
@property (assign,nonatomic) BOOL lowConfidenceAboutLanguageDetection;                                     //@synthesize lowConfidenceAboutLanguageDetection=_lowConfidenceAboutLanguageDetection - In the implementation block
@property (assign,nonatomic) unsigned charBeforeInsertionPointOnDictationStart;                            //@synthesize charBeforeInsertionPointOnDictationStart=_charBeforeInsertionPointOnDictationStart - In the implementation block
@property (assign,nonatomic) unsigned charAfterInsertionPointOnDictationStart;                             //@synthesize charAfterInsertionPointOnDictationStart=_charAfterInsertionPointOnDictationStart - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lastReceivedPartials;                                   //@synthesize lastReceivedPartials=_lastReceivedPartials - In the implementation block
@property (assign,nonatomic,__weak) id<UIDictationConnectionDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<UIDictationConnectionTokenFilterProtocol> tokenFilter;              //@synthesize tokenFilter=_tokenFilter - In the implementation block
@property (assign,nonatomic) BOOL receivedMultilingualResultsCommand;                                      //@synthesize receivedMultilingualResultsCommand=_receivedMultilingualResultsCommand - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)analytics;
+(void)afDelegate:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5 ;
+(void)_updateFromGlobalOptions:(id)arg1 ;
+(id)interpretationFromSpeechTokens:(id)arg1 startIndex:(unsigned long long)arg2 filterBlock:(/*^block*/id)arg3 ;
+(BOOL)dictationRestricted;
+(BOOL)isDictationAvailable;
+(void)cacheSupportedDictationLanguages;
+(BOOL)dictationIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2 ;
-(void)setTokenFilter:(id<UIDictationConnectionTokenFilterProtocol>)arg1 ;
-(void)preheat;
-(void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1 ;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)arg1 ;
-(void)dictationConnection:(id)arg1 didRecognizePartialResult:(id)arg2 ;
-(id<UIDictationConnectionDelegate>)delegate;
-(void)sendSpeechCorrection:(id)arg1 interactionIdentifier:(id)arg2 ;
-(void)logDidSelectAlternative:(id)arg1 correctionIdentifier:(id)arg2 interactionIdentifier:(id)arg3 ;
-(void)setLastReceivedPartials:(NSMutableDictionary *)arg1 ;
-(void)start;
-(NSString *)lastUsedDetectedLanguage;
-(void)setReceivedMultilingualResultsCommand:(BOOL)arg1 ;
-(id)_createConnectionOptions;
-(void)setLowConfidenceAboutLanguageDetection:(BOOL)arg1 ;
-(void)setLastUsedDetectedLanguage:(NSString *)arg1 ;
-(void)startForFileAtURL:(id)arg1 forLanguage:(id)arg2 ;
-(void)setCharBeforeInsertionPointOnDictationStart:(unsigned)arg1 ;
-(NSString *)lastUsedPrimaryLanguage;
-(void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 ;
-(NSMutableDictionary *)lastReceivedPartials;
-(void)logDidAcceptDictationResult:(id)arg1 reason:(id)arg2 result:(id)arg3 correctionIdentifier:(id)arg4 ;
-(void)dictationConnection:(id)arg1 didDetectLanguage:(id)arg2 confidenceScores:(id)arg3 isConfident:(BOOL)arg4 ;
-(void)dictationConnection:(id)arg1 languageDetectorFailedWithError:(id)arg2 ;
-(BOOL)dictationIsAvailableForLanguage:(id)arg1 ;
-(void)dictationConnection:(id)arg1 speechRecordingDidBeginWithOptions:(id)arg2 ;
-(unsigned)charAfterInsertionPointOnDictationStart;
-(void)setAnalyticsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<UIDictationConnectionDelegate>)arg1 ;
-(void)setLastUsedPrimaryLanguage:(NSString *)arg1 ;
-(void)cancelAvailabilityMonitoring;
-(void)dictationConnectionSpeechRecordingDidBegin:(id)arg1 ;
-(BOOL)receivedMultilingualResultsCommand;
-(void)setOfflineOnly:(BOOL)arg1 ;
-(void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5 ;
-(id)_speechOptions:(id)arg1 ;
-(AFDictationConnection *)connection;
-(void)setDictationOptions:(AFDictationOptions *)arg1 ;
-(void)logDidShowAlternatives:(id)arg1 correctionIdentifier:(id)arg2 interactionIdentifier:(id)arg3 ;
-(BOOL)lowConfidenceAboutLanguageDetection;
-(void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3 ;
-(void)beginAvailabilityMonitoring;
-(unsigned)charBeforeInsertionPointOnDictationStart;
-(id)_initializeWithOptions:(id)arg1 ;
-(void)stopSpeech:(id)arg1 activationType:(unsigned long long)arg2 result:(id)arg3 suppressAlert:(BOOL)arg4 ;
-(id)_dictationOptions:(id)arg1 ;
-(id)languageDetectionUserContext;
-(void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2 ;
-(AFDictationOptions *)dictationOptions;
-(void)dictationConnection:(id)arg1 didRecognizeMultilingualSpeech:(id)arg2 ;
-(long long)speechEventTypeForDictationActivationType:(unsigned long long)arg1 ;
-(void)setLastUsedTopLanguages:(NSMutableArray *)arg1 ;
-(void)setCharAfterInsertionPointOnDictationStart:(unsigned)arg1 ;
-(void)_startWithOptions:(id)arg1 ;
-(void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2 ;
-(void)restartDictation;
-(NSObject*<OS_dispatch_queue>)analyticsQueue;
-(void)logDidAcceptReplacement:(id)arg1 replacementLanguageCode:(id)arg2 originalText:(id)arg3 correctionIdentifier:(id)arg4 interactionIdentifier:(id)arg5 ;
-(void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2 ;
-(float)averagePower;
-(void)setConnection:(AFDictationConnection *)arg1 ;
-(void)endSession;
-(void)cancelSpeech;
-(void)dictationConnnectionDidChangeAvailability:(id)arg1 ;
-(void)dictationConnectionSpeechRecordingDidEnd:(id)arg1 ;
-(BOOL)offlineOnly;
-(NSMutableArray *)lastUsedTopLanguages;
-(void)dictationConnectionSpeechRecordingWillBegin:(id)arg1 ;
-(void)dictationConnection:(id)arg1 didBeginLocalRecognitionWithModelInfo:(id)arg2 ;
-(id<UIDictationConnectionTokenFilterProtocol>)tokenFilter;
@end

